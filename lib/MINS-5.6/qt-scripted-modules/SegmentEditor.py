import slicer
from slicer.ScriptedLoadableModule import *
from slicer.util import VTKObservationMixin
import qt
import vtk
import ctk
from pathlib import Path
import pyvista as pv
import math
import numpy as np
import trimesh
import os
import matplotlib.pyplot as plt
from scipy.signal import find_peaks
from stl import mesh
import itk

mainWindow = slicer.util.mainWindow()
if mainWindow:
    editMenu = mainWindow.findChild(qt.QMenu, 'EditMenu')
    if editMenu:
        for action in editMenu.actions():
            if action.text == "Specific Action":
                action.setEnabled(False)
                action.setVisible(False)

class SegmentEditor(ScriptedLoadableModule):
    def __init__(self, parent):
        ScriptedLoadableModule.__init__(self, parent)
        self.parent.title = "Segment Editor"
        self.parent.categories = ["", "Segmentation"]
        self.parent.dependencies = ["Segmentations", "SubjectHierarchy"]
        self.parent.contributors = ["Csaba Pinter (Queen's University), Andras Lasso (Queen's University)"]
        self.parent.helpText = """
        This module allows editing segmentation objects by directly drawing and using segmentation tools on the contained segments.
        Representations other than the labelmap one (which is used for editing) are automatically updated real-time,
        so for example the closed surface can be visualized as edited in the 3D view.
        """
        self.parent.helpText += parent.defaultDocumentationLink
        self.parent.acknowledgementText = """
        This work is part of SparKit project, funded by Cancer Care Ontario (CCO)'s ACRU program
        and Ontario Consortium for Adaptive Interventions in Radiation Oncology (OCAIRO).
        """

    def setup(self):
        # Register subject hierarchy plugin
        import SubjectHierarchyPlugins

        scriptedPlugin = slicer.qSlicerSubjectHierarchyScriptedPlugin(None)
        scriptedPlugin.setPythonSource(SubjectHierarchyPlugins.SegmentEditorSubjectHierarchyPlugin.filePath)

class SegmentEditorWidget(ScriptedLoadableModuleWidget, VTKObservationMixin):
    def __init__(self, parent):
        ScriptedLoadableModuleWidget.__init__(self, parent)
        VTKObservationMixin.__init__(self)
        self.parameterSetNode = None
        self.editor = None
        self.loaderDialog = None
        self.logMessages = []

    def setup(self):
        ScriptedLoadableModuleWidget.setup(self)
        self.layout.setContentsMargins(4, 0, 4, 0)

        import qSlicerSegmentationsModuleWidgetsPythonQt
        self.editor = qSlicerSegmentationsModuleWidgetsPythonQt.qMRMLSegmentEditorWidget()
        self.editor.setMaximumNumberOfUndoStates(10)
        self.selectParameterNode()
        self.editor.setMRMLScene(slicer.mrmlScene)
        self.layout.addWidget(self.editor)

        layoutManager = slicer.app.layoutManager()
        layoutManager.setLayout(slicer.vtkMRMLLayoutNode.SlicerLayoutFourUpView)

        self.addCustomGUI()

        self.effectFactorySingleton = slicer.qSlicerSegmentEditorEffectFactory.instance()
        self.effectFactorySingleton.connect("effectRegistered(QString)", self.editorEffectRegistered)

        self.addObserver(slicer.mrmlScene, slicer.mrmlScene.StartCloseEvent, self.onSceneStartClose)
        self.addObserver(slicer.mrmlScene, slicer.mrmlScene.EndCloseEvent, self.onSceneEndClose)
        self.addObserver(slicer.mrmlScene, slicer.mrmlScene.EndImportEvent, self.onSceneEndImport)

    def addCustomGUI(self):
        self.customLayout = qt.QVBoxLayout()
        self.tabs = qt.QTabWidget()
        self.customLayout.addWidget(self.tabs)
        self.addInputDataTab()
        self.addSegmentationParametersTab()
        self.addCylinderROITab()
        self.addProcessingCleaningTab()
        self.addOutputExportTab()
        self.layout.addLayout(self.customLayout)

    def addInputDataTab(self):
        self.inputDataTab = qt.QWidget()
        self.tabs.addTab(self.inputDataTab, "Input Data")
        layout = qt.QFormLayout(self.inputDataTab)
        self.microCTFolderInput = ctk.ctkPathLineEdit()
        self.microCTFolderInput.filters = ctk.ctkPathLineEdit.Dirs
        layout.addRow("MicroCT Folder:", self.microCTFolderInput)

        self.manualSpacingCheckbox = qt.QCheckBox("Manual Spacing")
        layout.addRow(self.manualSpacingCheckbox)
        self.spacingXInput = qt.QLineEdit()
        self.spacingYInput = qt.QLineEdit()
        self.spacingZInput = qt.QLineEdit()
        self.spacingXInput.setDisabled(True)
        self.spacingYInput.setDisabled(True)
        self.spacingZInput.setDisabled(True)
        self.manualSpacingCheckbox.stateChanged.connect(self.toggleSpacingInputs)
        layout.addRow("Spacing (X, Y, Z):", self.spacingXInput)
        layout.addRow("", self.spacingYInput)
        layout.addRow("", self.spacingZInput)

        self.loadImageButton = qt.QPushButton("Load Images")
        self.loadImageButton.clicked.connect(self.showLoaderDialog)
        layout.addRow(self.loadImageButton)

    def toggleSpacingInputs(self, state):
        if state == qt.Qt.Checked:
            self.spacingXInput.setDisabled(False)
            self.spacingYInput.setDisabled(False)
            self.spacingZInput.setDisabled(False)
        else:
            self.spacingXInput.setDisabled(True)
            self.spacingYInput.setDisabled(True)
            self.spacingZInput.setDisabled(True)

    def showLoaderDialog(self):
        self.loaderDialog = qt.QProgressDialog("Loading images...", "Cancel", 0, 100, self.parent)
        self.loaderDialog.setWindowModality(qt.Qt.WindowModal)
        self.loaderDialog.setWindowTitle("Loading Images")
        self.loaderDialog.setMinimumDuration(0)
        self.loaderDialog.setValue(0)
        self.loaderDialog.setAutoClose(False)
        self.loaderDialog.setAutoReset(False)
        self.loaderDialog.show()

        self.loaderLabel = qt.QLabel()
        self.loaderDialog.setLabel(self.loaderLabel)

        self.logMessages = []

        qt.QTimer.singleShot(100, self.loadImages)

    def updateLoaderDialog(self, message, progress):
        self.logMessages.append(message)
        self.loaderLabel.setText("\n".join(self.logMessages[-10:]))
        self.loaderDialog.setValue(progress)
        slicer.app.processEvents()

    def loadImages(self):
        try:
            microCT_folder = self.microCTFolderInput.currentPath
            self.updateLoaderDialog(f"Loading images from {microCT_folder}", 0)

            image_files = sorted(
                [str(f) for f in Path(microCT_folder).glob('*.jpg')] +
                [str(f) for f in Path(microCT_folder).glob('*.jpeg')] +
                [str(f) for f in Path(microCT_folder).glob('*.png')]
            )
            if not image_files:
                raise FileNotFoundError("No image files found in the specified directory.")

            self.updateLoaderDialog(f"Found {len(image_files)} image files.", 10)

            reader_factory = vtk.vtkImageReader2Factory()
            first_reader = reader_factory.CreateImageReader2(image_files[0])
            first_reader.SetFileName(image_files[0])
            first_reader.Update()
            width, height, _ = first_reader.GetOutput().GetDimensions()

            stacked_image = vtk.vtkImageData()
            stacked_image.SetDimensions(width, height, len(image_files))
            stacked_image.AllocateScalars(vtk.VTK_UNSIGNED_CHAR, 1)

            for i, file in enumerate(image_files):
                reader = reader_factory.CreateImageReader2(file)
                reader.SetFileName(file)
                reader.Update()
                image_data = reader.GetOutput()

                for y in range(height):
                    for x in range(width):
                        stacked_image.SetScalarComponentFromFloat(x, y, i, 0, image_data.GetScalarComponentAsFloat(x, y, 0, 0))

                self.updateLoaderDialog(f"Slice {i+1}/{len(image_files)} loaded.", int((i + 1) / len(image_files) * 80) + 10)

            volume_node = slicer.mrmlScene.AddNewNodeByClass("vtkMRMLScalarVolumeNode", "MicroCT Volume")
            volume_node.SetAndObserveImageData(stacked_image)

            if self.manualSpacingCheckbox.isChecked():
                spacing_x = float(self.spacingXInput.text())
                spacing_y = float(self.spacingYInput.text())
                spacing_z = float(self.spacingZInput.text())
                volume_node.SetSpacing(spacing_x, spacing_y, spacing_z)

            volume_node.CreateDefaultDisplayNodes()
            slicer.util.setSliceViewerLayers(background=volume_node)

            self.updateLoaderDialog("Volume loaded into Slicer.", 100)
            self.loaderDialog.close()

        except Exception as e:
            slicer.util.errorDisplay(f"Failed to load images: {str(e)}")
            if self.loaderDialog:
                self.loaderDialog.close()

    def addSegmentationParametersTab(self):
        self.segmentationParametersTab = qt.QWidget()
        self.tabs.addTab(self.segmentationParametersTab, "Segmentation Parameters")
        layout = qt.QFormLayout(self.segmentationParametersTab)

        self.thresholdingMethodComboBox = qt.QComboBox()
        self.thresholdingMethodComboBox.addItems(["Manual", "Automatic"])
        layout.addRow("Thresholding Method:", self.thresholdingMethodComboBox)

        self.voidMinInput = qt.QLineEdit()
        self.voidMaxInput = qt.QLineEdit()
        self.hexaMinInput = qt.QLineEdit()
        self.hexaMaxInput = qt.QLineEdit()
        layout.addRow("Void Min:", self.voidMinInput)
        layout.addRow("Void Max:", self.voidMaxInput)
        layout.addRow("Hexa Min:", self.hexaMinInput)
        layout.addRow("Hexa Max:", self.hexaMaxInput)

        self.applyThresholdingButton = qt.QPushButton("Apply Thresholding")
        self.applyThresholdingButton.clicked.connect(self.applyThresholding)
        layout.addRow(self.applyThresholdingButton)

    def addCylinderROITab(self):
        self.cylinderROITab = qt.QWidget()
        self.tabs.addTab(self.cylinderROITab, "Cylinder ROI")
        layout = qt.QFormLayout(self.cylinderROITab)

        self.cylinderHeightInput = qt.QLineEdit()
        self.cylinderRadiusInput = qt.QLineEdit()
        layout.addRow("Height:", self.cylinderHeightInput)
        layout.addRow("Radius:", self.cylinderRadiusInput)

        self.generateCylinderButton = qt.QPushButton("Generate Cylinder")
        self.generateCylinderButton.clicked.connect(self.generateCylinder)
        layout.addRow(self.generateCylinderButton)

    def addProcessingCleaningTab(self):
        self.processingCleaningTab = qt.QWidget()
        self.tabs.addTab(self.processingCleaningTab, "Processing and Cleaning")
        layout = qt.QFormLayout(self.processingCleaningTab)

        self.marginValueInput = qt.QLineEdit()
        layout.addRow("Margin Value:", self.marginValueInput)

        self.applyCleaningButton = qt.QPushButton("Apply Cleaning")
        self.applyCleaningButton.clicked.connect(self.applyCleaning)
        layout.addRow(self.applyCleaningButton)

    def addOutputExportTab(self):
        self.outputExportTab = qt.QWidget()
        self.tabs.addTab(self.outputExportTab, "Output and Export")
        layout = qt.QFormLayout(self.outputExportTab)

        self.segmentedVolumePathInput = ctk.ctkPathLineEdit()
        self.segmentedVolumePathInput.filters = ctk.ctkPathLineEdit.Dirs
        layout.addRow("Segmented Volume Path:", self.segmentedVolumePathInput)

        self.modelPathInput = ctk.ctkPathLineEdit()
        self.modelPathInput.filters = ctk.ctkPathLineEdit.Dirs
        layout.addRow("Model Path:", self.modelPathInput)

        self.saveOutputsButton = qt.QPushButton("Save Outputs")
        self.saveOutputsButton.clicked.connect(self.saveOutputs)
        layout.addRow(self.saveOutputsButton)

    def applyThresholding(self):
        if self.thresholdingMethodComboBox.currentText == "Automatic":
            self.applyAutomaticThresholding()
        else:
            self.applyManualThresholding()

    def applyAutomaticThresholding(self):
        volume_node = slicer.util.getNode("MicroCT Volume")
        image_data = slicer.util.arrayFromVolume(volume_node)

        flat_data = image_data.flatten()

        histogram, bin_edges = np.histogram(flat_data, bins=256, range=(0, 255))

        peaks, _ = find_peaks(histogram)

        if len(peaks) < 2:
            slicer.util.errorDisplay("Automatic thresholding failed: less than two peaks found in the histogram.")
            return

        first_peak = peaks[0]
        second_peak = peaks[1]
        first_valley = np.argmin(histogram[first_peak:second_peak]) + first_peak
        subsequent_valley = np.argmin(histogram[second_peak:]) + second_peak

        void_min = 0
        void_max = first_valley
        hexa_min = subsequent_valley
        hexa_max = 255

        self.applyThresholdingInSegmentEditor(void_min, void_max, "Void")
        self.applyThresholdingInSegmentEditor(hexa_min, hexa_max, "Hexa")

    def applyManualThresholding(self):
        void_min = int(self.voidMinInput.text())
        void_max = int(self.voidMaxInput.text())
        hexa_min = int(self.hexaMinInput.text())
        hexa_max = int(self.hexaMaxInput.text())

        self.applyThresholdingInSegmentEditor(void_min, void_max, "Void")
        self.applyThresholdingInSegmentEditor(hexa_min, hexa_max, "Hexa")

    def applyThresholdingInSegmentEditor(self, thresh_min, thresh_max, segment_name):
        segmentEditorWidget = slicer.qMRMLSegmentEditorWidget()
        segmentEditorWidget.setMRMLScene(slicer.mrmlScene)

        segmentationNode = slicer.util.getNode("vtkMRMLSegmentationNode1")
        segmentEditorWidget.setSegmentationNode(segmentationNode)

        segmentEditorWidget.setActiveEffectByName("Threshold")
        effect = segmentEditorWidget.activeEffect()
        effect.setParameter("MinimumThreshold", thresh_min)
        effect.setParameter("MaximumThreshold", thresh_max)

        if not segmentationNode.GetSegmentation().GetSegment(segment_name):
            segmentationNode.GetSegmentation().AddEmptySegment(segment_name)

        segmentEditorWidget.setCurrentSegmentID(segment_name)
        effect.self().onApply()

        segmentEditorWidget = None

    def generateCylinder(self):
        print("Generating cylinder ROI")
        # Code to generate cylinder ROI

    def applyCleaning(self):
        print("Applying cleaning and processing")
        # Code to apply cleaning and processing steps

    def saveOutputs(self):
        segmented_volume_path = self.segmentedVolumePathInput.currentPath
        model_path = self.modelPathInput.currentPath
        print(f"Saving outputs to {segmented_volume_path} and {model_path}")
        # Code to save outputs

    def editorEffectRegistered(self):
        self.editor.updateEffectList()

    def selectParameterNode(self):
        segmentEditorSingletonTag = "SegmentEditor"
        segmentEditorNode = slicer.mrmlScene.GetSingletonNode(segmentEditorSingletonTag, "vtkMRMLSegmentEditorNode")
        if segmentEditorNode is None:
            segmentEditorNode = slicer.mrmlScene.CreateNodeByClass("vtkMRMLSegmentEditorNode")
            segmentEditorNode.UnRegister(None)
            segmentEditorNode.SetSingletonTag(segmentEditorSingletonTag)
            segmentEditorNode = slicer.mrmlScene.AddNode(segmentEditorNode)
        if self.parameterSetNode == segmentEditorNode:
            return
        self.parameterSetNode = segmentEditorNode
        self.editor.setMRMLSegmentEditorNode(self.parameterSetNode)

    def getDefaultSourceVolumeNodeID(self):
        layoutManager = slicer.app.layoutManager()
        firstForegroundVolumeID = None
        for sliceViewName in layoutManager.sliceViewNames():
            sliceWidget = layoutManager.sliceWidget(sliceViewName)
            if not sliceWidget:
                continue
            compositeNode = sliceWidget.mrmlSliceCompositeNode()
            if compositeNode.GetBackgroundVolumeID():
                return compositeNode.GetBackgroundVolumeID()
            if compositeNode.GetForegroundVolumeID() and not firstForegroundVolumeID:
                firstForegroundVolumeID = compositeNode.GetForegroundVolumeID()
        return firstForegroundVolumeID

    def enter(self):
        if self.editor.turnOffLightboxes():
            slicer.util.warningDisplay(_("Segment Editor is not compatible with slice viewers in light box mode."
                                         "Views are being reset."), windowTitle=_("Segment Editor"))

        self.editor.installKeyboardShortcuts()

        self.selectParameterNode()
        self.editor.updateWidgetFromMRML()

        layoutManager = slicer.app.layoutManager()
        layoutManager.setLayout(slicer.vtkMRMLLayoutNode.SlicerLayoutOneUpGreenSliceView)

        if not self.editor.segmentationNodeID():
            segmentationNode = slicer.mrmlScene.GetFirstNode(None, "vtkMRMLSegmentationNode")
            if not segmentationNode:
                segmentationNode = slicer.mrmlScene.AddNewNodeByClass("vtkMRMLSegmentationNode")
            self.editor.setSegmentationNode(segmentationNode)
            if not self.editor.sourceVolumeNodeID():
                sourceVolumeNodeID = self.getDefaultSourceVolumeNodeID()
                self.editor.setSourceVolumeNodeID(sourceVolumeNodeID)

    def exit(self):
        self.editor.setActiveEffect(None)
        self.editor.uninstallKeyboardShortcuts()
        self.editor.removeViewObservations()

    def onSceneStartClose(self, caller, event):
        self.parameterSetNode = None
        self.editor.setSegmentationNode(None)
        self.editor.removeViewObservations()

    def onSceneEndClose(self, caller, event):
        if self.parent.isEntered:
            self.selectParameterNode()
            self.editor.updateWidgetFromMRML()

    def onSceneEndImport(self, caller, event):
        if self.parent.isEntered:
            self.selectParameterNode()
            self.editor.updateWidgetFromMRML()

    def cleanup(self):
        self.removeObservers()
        self.effectFactorySingleton.disconnect("effectRegistered(QString)", self.editorEffectRegistered)

class SegmentEditorTest(ScriptedLoadableModuleTest):
    def setUp(self):
        slicer.mrmlScene.Clear(0)

    def runTest(self):
        self.setUp()
        self.test_SegmentEditor1()

    def test_SegmentEditor1(self):
        self.delayDisplay("Starting the test")
        self.delayDisplay("Test passed!")
