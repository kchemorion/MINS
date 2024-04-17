/********************************************************************************
** Form generated from reading UI file 'qSlicerMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMAINWINDOW_H
#define UI_QSLICERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "qMRMLCaptureToolBar.h"
#include "qSlicerModulePanel.h"
#include "qSlicerMouseModeToolBar.h"
#include "qSlicerViewersToolBar.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerMainWindow
{
public:
    QAction *FileLoadSceneAction;
    QAction *FileLoadDataAction;
    QAction *LoadDICOMAction;
    QAction *FileImportSceneAction;
    QAction *FileAddDataAction;
    QAction *FileAddVolumeAction;
    QAction *FileAddTransformAction;
    QAction *FileSaveSceneAction;
    QAction *SDBSaveToDirectoryAction;
    QAction *SDBSaveToMRBAction;
    QAction *FileCloseSceneAction;
    QAction *FileExitAction;
    QAction *EditUndoAction;
    QAction *EditRedoAction;
    QAction *ViewExtensionsManagerAction;
    QAction *ViewCacheRemoteIOManagerAction;
    QAction *FileFavoriteModulesAction;
    QAction *EditApplicationSettingsAction;
    QAction *CutAction;
    QAction *CopyAction;
    QAction *PasteAction;
    QAction *WindowMaximizeViewAction;
    QAction *FeedbackReportUsabilityIssueAction;
    QAction *FeedbackMakeFeatureRequestAction;
    QAction *DebugLoadModuleAction;
    QAction *ViewLayoutConventionalAction;
    QAction *ViewLayoutFourUpAction;
    QAction *ViewLayoutDual3DAction;
    QAction *ViewLayoutOneUp3DAction;
    QAction *ViewLayout3DTableAction;
    QAction *ViewLayoutOneUpRedSliceAction;
    QAction *ViewLayoutOneUpYellowSliceAction;
    QAction *ViewLayoutOneUpGreenSliceAction;
    QAction *ViewLayoutTabbed3DAction;
    QAction *ViewLayoutTabbedSliceAction;
    QAction *ViewLayoutCompareAction;
    QAction *ViewLayoutCompareWidescreenAction;
    QAction *ViewLayoutTwoOverTwoAction;
    QAction *ModuleHomeAction;
    QAction *ViewLayoutConventionalWidescreenAction;
    QAction *ViewLayoutTriple3DAction;
    QAction *ViewLayoutThreeOverThreeAction;
    QAction *ViewLayoutFourOverFourAction;
    QAction *ViewLayoutCompare_2_viewersAction;
    QAction *ViewLayoutCompare_3_viewersAction;
    QAction *ViewLayoutCompare_4_viewersAction;
    QAction *ViewLayoutCompare_5_viewersAction;
    QAction *ViewLayoutCompare_6_viewersAction;
    QAction *ViewLayoutCompare_7_viewersAction;
    QAction *ViewLayoutCompare_8_viewersAction;
    QAction *ViewLayoutCompareWidescreen_2_viewersAction;
    QAction *ViewLayoutCompareWidescreen_3_viewersAction;
    QAction *ViewLayoutCompareWidescreen_4_viewersAction;
    QAction *ViewLayoutCompareWidescreen_5_viewersAction;
    QAction *ViewLayoutCompareWidescreen_6_viewersAction;
    QAction *ViewLayoutCompareWidescreen_7_viewersAction;
    QAction *ViewLayoutCompareWidescreen_8_viewersAction;
    QAction *ViewLayoutCompareGridAction;
    QAction *ViewLayoutCompareGrid_2x2_viewersAction;
    QAction *ViewLayoutCompareGrid_3x3_viewersAction;
    QAction *ViewLayoutCompareGrid_4x4_viewersAction;
    QAction *EditRecordMacroAction;
    QAction *EditPlayMacroAction;
    QAction *ViewLayoutSideBySideAction;
    QAction *ViewLayoutFourByThreeSliceAction;
    QAction *ViewLayoutFourByTwoSliceAction;
    QAction *ViewLayoutFiveByTwoSliceAction;
    QAction *ViewLayoutThreeByThreeSliceAction;
    QAction *ViewLayoutDualMonitorFourUpViewAction;
    QAction *ViewLayoutOneUpPlotAction;
    QAction *ViewLayoutFourUpPlotAction;
    QAction *ViewLayoutConventionalPlotAction;
    QAction *ViewLayoutThreeOverThreePlotAction;
    QAction *ViewLayoutFourUpTableAction;
    QAction *ViewLayoutFourUpPlotTableAction;
    QAction *WindowToolbarsResetToDefaultAction;
    QAction *ShowStatusBarAction;
    QWidget *CentralWidget;
    QStatusBar *StatusBar;
    QDockWidget *PanelDockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    qSlicerModulePanel *ModulePanel;
    ctkCollapsibleButton *DataProbeCollapsibleWidget;
    QHBoxLayout *horizontalLayout;
    QToolBar *MainToolBar;
    QToolBar *ModuleToolBar;
    QToolBar *UndoRedoToolBar;
    QToolBar *ViewToolBar;
    qSlicerMouseModeToolBar *MouseModeToolBar;
    qMRMLCaptureToolBar *CaptureToolBar;
    qSlicerViewersToolBar *ViewersToolBar;
    QToolBar *DialogToolBar;
    QToolBar *LayoutToolBar;
    QMenuBar *menubar;
    QMenu *FileMenu;
    QMenu *RecentlyLoadedMenu;
    QMenu *EditMenu;
    QMenu *ViewMenu;
    QMenu *LayoutMenu;
    QMenu *WindowToolBarsMenu;
    QMenu *AppearanceMenu;
    QMenu *HelpMenu;

    void setupUi(QMainWindow *qSlicerMainWindow)
    {
        if (qSlicerMainWindow->objectName().isEmpty())
            qSlicerMainWindow->setObjectName(QString::fromUtf8("qSlicerMainWindow"));
        qSlicerMainWindow->resize(835, 570);
        FileLoadSceneAction = new QAction(qSlicerMainWindow);
        FileLoadSceneAction->setObjectName(QString::fromUtf8("FileLoadSceneAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Small/SlicerLoadScene.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileLoadSceneAction->setIcon(icon);
        FileLoadDataAction = new QAction(qSlicerMainWindow);
        FileLoadDataAction->setObjectName(QString::fromUtf8("FileLoadDataAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Small/SlicerLoadData.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileLoadDataAction->setIcon(icon1);
        LoadDICOMAction = new QAction(qSlicerMainWindow);
        LoadDICOMAction->setObjectName(QString::fromUtf8("LoadDICOMAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Small/SlicerLoadDICOM.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoadDICOMAction->setIcon(icon2);
        LoadDICOMAction->setVisible(false);
        FileImportSceneAction = new QAction(qSlicerMainWindow);
        FileImportSceneAction->setObjectName(QString::fromUtf8("FileImportSceneAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Medium/SlicerAddScene.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileImportSceneAction->setIcon(icon3);
        FileAddDataAction = new QAction(qSlicerMainWindow);
        FileAddDataAction->setObjectName(QString::fromUtf8("FileAddDataAction"));
        FileAddDataAction->setIcon(icon1);
        FileAddVolumeAction = new QAction(qSlicerMainWindow);
        FileAddVolumeAction->setObjectName(QString::fromUtf8("FileAddVolumeAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Medium/SlicerAddVolume.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileAddVolumeAction->setIcon(icon4);
        FileAddTransformAction = new QAction(qSlicerMainWindow);
        FileAddTransformAction->setObjectName(QString::fromUtf8("FileAddTransformAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Medium/SlicerAddTransform.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileAddTransformAction->setIcon(icon5);
        FileSaveSceneAction = new QAction(qSlicerMainWindow);
        FileSaveSceneAction->setObjectName(QString::fromUtf8("FileSaveSceneAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/Small/SlicerSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileSaveSceneAction->setIcon(icon6);
        SDBSaveToDirectoryAction = new QAction(qSlicerMainWindow);
        SDBSaveToDirectoryAction->setObjectName(QString::fromUtf8("SDBSaveToDirectoryAction"));
        SDBSaveToDirectoryAction->setIcon(icon6);
        SDBSaveToMRBAction = new QAction(qSlicerMainWindow);
        SDBSaveToMRBAction->setObjectName(QString::fromUtf8("SDBSaveToMRBAction"));
        SDBSaveToMRBAction->setIcon(icon6);
        FileCloseSceneAction = new QAction(qSlicerMainWindow);
        FileCloseSceneAction->setObjectName(QString::fromUtf8("FileCloseSceneAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/Small/SlicerCloseScene.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileCloseSceneAction->setIcon(icon7);
        FileExitAction = new QAction(qSlicerMainWindow);
        FileExitAction->setObjectName(QString::fromUtf8("FileExitAction"));
        EditUndoAction = new QAction(qSlicerMainWindow);
        EditUndoAction->setObjectName(QString::fromUtf8("EditUndoAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/Small/SlicerUndo.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditUndoAction->setIcon(icon8);
        EditRedoAction = new QAction(qSlicerMainWindow);
        EditRedoAction->setObjectName(QString::fromUtf8("EditRedoAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/Small/SlicerRedo.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditRedoAction->setIcon(icon9);
        ViewExtensionsManagerAction = new QAction(qSlicerMainWindow);
        ViewExtensionsManagerAction->setObjectName(QString::fromUtf8("ViewExtensionsManagerAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/ExtensionDefaultIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewExtensionsManagerAction->setIcon(icon10);
        ViewCacheRemoteIOManagerAction = new QAction(qSlicerMainWindow);
        ViewCacheRemoteIOManagerAction->setObjectName(QString::fromUtf8("ViewCacheRemoteIOManagerAction"));
        FileFavoriteModulesAction = new QAction(qSlicerMainWindow);
        FileFavoriteModulesAction->setObjectName(QString::fromUtf8("FileFavoriteModulesAction"));
        EditApplicationSettingsAction = new QAction(qSlicerMainWindow);
        EditApplicationSettingsAction->setObjectName(QString::fromUtf8("EditApplicationSettingsAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Images/SlicerAdvancedGear-Original.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditApplicationSettingsAction->setIcon(icon11);
        CutAction = new QAction(qSlicerMainWindow);
        CutAction->setObjectName(QString::fromUtf8("CutAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/Small/SlicerEditCut.png"), QSize(), QIcon::Normal, QIcon::Off);
        CutAction->setIcon(icon12);
        CopyAction = new QAction(qSlicerMainWindow);
        CopyAction->setObjectName(QString::fromUtf8("CopyAction"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/Small/SlicerEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CopyAction->setIcon(icon13);
        PasteAction = new QAction(qSlicerMainWindow);
        PasteAction->setObjectName(QString::fromUtf8("PasteAction"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/Small/SlicerEditPaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasteAction->setIcon(icon14);
        WindowMaximizeViewAction = new QAction(qSlicerMainWindow);
        WindowMaximizeViewAction->setObjectName(QString::fromUtf8("WindowMaximizeViewAction"));
        WindowMaximizeViewAction->setCheckable(true);
        WindowMaximizeViewAction->setChecked(true);
        FeedbackReportUsabilityIssueAction = new QAction(qSlicerMainWindow);
        FeedbackReportUsabilityIssueAction->setObjectName(QString::fromUtf8("FeedbackReportUsabilityIssueAction"));
        FeedbackMakeFeatureRequestAction = new QAction(qSlicerMainWindow);
        FeedbackMakeFeatureRequestAction->setObjectName(QString::fromUtf8("FeedbackMakeFeatureRequestAction"));
        DebugLoadModuleAction = new QAction(qSlicerMainWindow);
        DebugLoadModuleAction->setObjectName(QString::fromUtf8("DebugLoadModuleAction"));
        ViewLayoutConventionalAction = new QAction(qSlicerMainWindow);
        ViewLayoutConventionalAction->setObjectName(QString::fromUtf8("ViewLayoutConventionalAction"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/LayoutConventionalView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutConventionalAction->setIcon(icon15);
        ViewLayoutConventionalAction->setIconVisibleInMenu(true);
        ViewLayoutFourUpAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourUpAction->setObjectName(QString::fromUtf8("ViewLayoutFourUpAction"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icons/LayoutFourUpView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourUpAction->setIcon(icon16);
        ViewLayoutFourUpAction->setIconVisibleInMenu(true);
        ViewLayoutDual3DAction = new QAction(qSlicerMainWindow);
        ViewLayoutDual3DAction->setObjectName(QString::fromUtf8("ViewLayoutDual3DAction"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Icons/LayoutDual3DView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutDual3DAction->setIcon(icon17);
        ViewLayoutDual3DAction->setIconVisibleInMenu(true);
        ViewLayoutOneUp3DAction = new QAction(qSlicerMainWindow);
        ViewLayoutOneUp3DAction->setObjectName(QString::fromUtf8("ViewLayoutOneUp3DAction"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Icons/LayoutOneUp3DView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutOneUp3DAction->setIcon(icon18);
        ViewLayoutOneUp3DAction->setIconVisibleInMenu(true);
        ViewLayout3DTableAction = new QAction(qSlicerMainWindow);
        ViewLayout3DTableAction->setObjectName(QString::fromUtf8("ViewLayout3DTableAction"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Icons/Layout3DTableView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayout3DTableAction->setIcon(icon19);
        ViewLayout3DTableAction->setIconVisibleInMenu(true);
        ViewLayoutOneUpRedSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutOneUpRedSliceAction->setObjectName(QString::fromUtf8("ViewLayoutOneUpRedSliceAction"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Icons/LayoutOneUpRedSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutOneUpRedSliceAction->setIcon(icon20);
        ViewLayoutOneUpRedSliceAction->setIconVisibleInMenu(true);
        ViewLayoutOneUpYellowSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutOneUpYellowSliceAction->setObjectName(QString::fromUtf8("ViewLayoutOneUpYellowSliceAction"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Icons/LayoutOneUpYellowSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutOneUpYellowSliceAction->setIcon(icon21);
        ViewLayoutOneUpYellowSliceAction->setIconVisibleInMenu(true);
        ViewLayoutOneUpGreenSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutOneUpGreenSliceAction->setObjectName(QString::fromUtf8("ViewLayoutOneUpGreenSliceAction"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Icons/LayoutOneUpGreenSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutOneUpGreenSliceAction->setIcon(icon22);
        ViewLayoutOneUpGreenSliceAction->setIconVisibleInMenu(true);
        ViewLayoutTabbed3DAction = new QAction(qSlicerMainWindow);
        ViewLayoutTabbed3DAction->setObjectName(QString::fromUtf8("ViewLayoutTabbed3DAction"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Icons/LayoutTabbed3DView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutTabbed3DAction->setIcon(icon23);
        ViewLayoutTabbed3DAction->setIconVisibleInMenu(true);
        ViewLayoutTabbedSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutTabbedSliceAction->setObjectName(QString::fromUtf8("ViewLayoutTabbedSliceAction"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Icons/LayoutTabbedSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutTabbedSliceAction->setIcon(icon24);
        ViewLayoutTabbedSliceAction->setIconVisibleInMenu(true);
        ViewLayoutCompareAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareAction->setObjectName(QString::fromUtf8("ViewLayoutCompareAction"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Icons/LayoutCompareView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutCompareAction->setIcon(icon25);
        ViewLayoutCompareAction->setIconVisibleInMenu(true);
        ViewLayoutCompareWidescreenAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreenAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreenAction"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/Icons/LayoutSideBySideCompareView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutCompareWidescreenAction->setIcon(icon26);
        ViewLayoutCompareWidescreenAction->setIconVisibleInMenu(true);
        ViewLayoutTwoOverTwoAction = new QAction(qSlicerMainWindow);
        ViewLayoutTwoOverTwoAction->setObjectName(QString::fromUtf8("ViewLayoutTwoOverTwoAction"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/Icons/LayoutTwoOverTwoView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutTwoOverTwoAction->setIcon(icon27);
        ViewLayoutTwoOverTwoAction->setIconVisibleInMenu(true);
        ModuleHomeAction = new QAction(qSlicerMainWindow);
        ModuleHomeAction->setObjectName(QString::fromUtf8("ModuleHomeAction"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/Icons/Medium/SlicerHome.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModuleHomeAction->setIcon(icon28);
        ModuleHomeAction->setIconVisibleInMenu(true);
        ViewLayoutConventionalWidescreenAction = new QAction(qSlicerMainWindow);
        ViewLayoutConventionalWidescreenAction->setObjectName(QString::fromUtf8("ViewLayoutConventionalWidescreenAction"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/Icons/LayoutConventionalWidescreenView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutConventionalWidescreenAction->setIcon(icon29);
        ViewLayoutTriple3DAction = new QAction(qSlicerMainWindow);
        ViewLayoutTriple3DAction->setObjectName(QString::fromUtf8("ViewLayoutTriple3DAction"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/Icons/LayoutTriple3DView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutTriple3DAction->setIcon(icon30);
        ViewLayoutThreeOverThreeAction = new QAction(qSlicerMainWindow);
        ViewLayoutThreeOverThreeAction->setObjectName(QString::fromUtf8("ViewLayoutThreeOverThreeAction"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/Icons/LayoutThreeOverThreeView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutThreeOverThreeAction->setIcon(icon31);
        ViewLayoutFourOverFourAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourOverFourAction->setObjectName(QString::fromUtf8("ViewLayoutFourOverFourAction"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/Icons/LayoutFourOverFourView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourOverFourAction->setIcon(icon32);
        ViewLayoutCompare_2_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_2_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_2_viewersAction"));
        ViewLayoutCompare_2_viewersAction->setIcon(icon25);
        ViewLayoutCompare_3_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_3_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_3_viewersAction"));
        ViewLayoutCompare_3_viewersAction->setIcon(icon25);
        ViewLayoutCompare_4_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_4_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_4_viewersAction"));
        ViewLayoutCompare_4_viewersAction->setIcon(icon25);
        ViewLayoutCompare_5_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_5_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_5_viewersAction"));
        ViewLayoutCompare_5_viewersAction->setIcon(icon25);
        ViewLayoutCompare_6_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_6_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_6_viewersAction"));
        ViewLayoutCompare_6_viewersAction->setIcon(icon25);
        ViewLayoutCompare_7_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_7_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_7_viewersAction"));
        ViewLayoutCompare_7_viewersAction->setIcon(icon25);
        ViewLayoutCompare_8_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompare_8_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompare_8_viewersAction"));
        ViewLayoutCompare_8_viewersAction->setIcon(icon25);
        ViewLayoutCompareWidescreen_2_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_2_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_2_viewersAction"));
        ViewLayoutCompareWidescreen_2_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_3_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_3_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_3_viewersAction"));
        ViewLayoutCompareWidescreen_3_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_4_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_4_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_4_viewersAction"));
        ViewLayoutCompareWidescreen_4_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_5_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_5_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_5_viewersAction"));
        ViewLayoutCompareWidescreen_5_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_6_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_6_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_6_viewersAction"));
        ViewLayoutCompareWidescreen_6_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_7_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_7_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_7_viewersAction"));
        ViewLayoutCompareWidescreen_7_viewersAction->setIcon(icon26);
        ViewLayoutCompareWidescreen_8_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareWidescreen_8_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareWidescreen_8_viewersAction"));
        ViewLayoutCompareWidescreen_8_viewersAction->setIcon(icon26);
        ViewLayoutCompareGridAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareGridAction->setObjectName(QString::fromUtf8("ViewLayoutCompareGridAction"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/Icons/LayoutCompareViewGrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutCompareGridAction->setIcon(icon33);
        ViewLayoutCompareGrid_2x2_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareGrid_2x2_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareGrid_2x2_viewersAction"));
        ViewLayoutCompareGrid_2x2_viewersAction->setIcon(icon33);
        ViewLayoutCompareGrid_3x3_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareGrid_3x3_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareGrid_3x3_viewersAction"));
        ViewLayoutCompareGrid_3x3_viewersAction->setIcon(icon33);
        ViewLayoutCompareGrid_4x4_viewersAction = new QAction(qSlicerMainWindow);
        ViewLayoutCompareGrid_4x4_viewersAction->setObjectName(QString::fromUtf8("ViewLayoutCompareGrid_4x4_viewersAction"));
        ViewLayoutCompareGrid_4x4_viewersAction->setIcon(icon33);
        EditRecordMacroAction = new QAction(qSlicerMainWindow);
        EditRecordMacroAction->setObjectName(QString::fromUtf8("EditRecordMacroAction"));
        EditRecordMacroAction->setVisible(false);
        EditPlayMacroAction = new QAction(qSlicerMainWindow);
        EditPlayMacroAction->setObjectName(QString::fromUtf8("EditPlayMacroAction"));
        EditPlayMacroAction->setVisible(false);
        ViewLayoutSideBySideAction = new QAction(qSlicerMainWindow);
        ViewLayoutSideBySideAction->setObjectName(QString::fromUtf8("ViewLayoutSideBySideAction"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/Icons/LayoutSideBySideView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutSideBySideAction->setIcon(icon34);
        ViewLayoutFourByThreeSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourByThreeSliceAction->setObjectName(QString::fromUtf8("ViewLayoutFourByThreeSliceAction"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/Icons/LayoutFourByThreeSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourByThreeSliceAction->setIcon(icon35);
        ViewLayoutFourByTwoSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourByTwoSliceAction->setObjectName(QString::fromUtf8("ViewLayoutFourByTwoSliceAction"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/Icons/LayoutFourByTwoSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourByTwoSliceAction->setIcon(icon36);
        ViewLayoutFiveByTwoSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutFiveByTwoSliceAction->setObjectName(QString::fromUtf8("ViewLayoutFiveByTwoSliceAction"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/Icons/LayoutFiveByTwoSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFiveByTwoSliceAction->setIcon(icon37);
        ViewLayoutThreeByThreeSliceAction = new QAction(qSlicerMainWindow);
        ViewLayoutThreeByThreeSliceAction->setObjectName(QString::fromUtf8("ViewLayoutThreeByThreeSliceAction"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/Icons/LayoutThreeByThreeSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutThreeByThreeSliceAction->setIcon(icon38);
        ViewLayoutDualMonitorFourUpViewAction = new QAction(qSlicerMainWindow);
        ViewLayoutDualMonitorFourUpViewAction->setObjectName(QString::fromUtf8("ViewLayoutDualMonitorFourUpViewAction"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/Icons/LayoutDualMonitorFourUpView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutDualMonitorFourUpViewAction->setIcon(icon39);
        ViewLayoutOneUpPlotAction = new QAction(qSlicerMainWindow);
        ViewLayoutOneUpPlotAction->setObjectName(QString::fromUtf8("ViewLayoutOneUpPlotAction"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/Icons/LayoutOneUpQuantitativeView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutOneUpPlotAction->setIcon(icon40);
        ViewLayoutOneUpPlotAction->setIconVisibleInMenu(true);
        ViewLayoutFourUpPlotAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourUpPlotAction->setObjectName(QString::fromUtf8("ViewLayoutFourUpPlotAction"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/Icons/LayoutFourUpQuantitativeView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourUpPlotAction->setIcon(icon41);
        ViewLayoutFourUpPlotAction->setIconVisibleInMenu(true);
        ViewLayoutConventionalPlotAction = new QAction(qSlicerMainWindow);
        ViewLayoutConventionalPlotAction->setObjectName(QString::fromUtf8("ViewLayoutConventionalPlotAction"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/Icons/LayoutConvetionalQuantitativeView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutConventionalPlotAction->setIcon(icon42);
        ViewLayoutConventionalPlotAction->setIconVisibleInMenu(true);
        ViewLayoutThreeOverThreePlotAction = new QAction(qSlicerMainWindow);
        ViewLayoutThreeOverThreePlotAction->setObjectName(QString::fromUtf8("ViewLayoutThreeOverThreePlotAction"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/Icons/LayoutThreeOverThreeQuantitativeView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutThreeOverThreePlotAction->setIcon(icon43);
        ViewLayoutFourUpTableAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourUpTableAction->setObjectName(QString::fromUtf8("ViewLayoutFourUpTableAction"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/Icons/LayoutFourUpTableView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourUpTableAction->setIcon(icon44);
        ViewLayoutFourUpPlotTableAction = new QAction(qSlicerMainWindow);
        ViewLayoutFourUpPlotTableAction->setObjectName(QString::fromUtf8("ViewLayoutFourUpPlotTableAction"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/Icons/LayoutFourUpQuantitativeTableView.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewLayoutFourUpPlotTableAction->setIcon(icon45);
        WindowToolbarsResetToDefaultAction = new QAction(qSlicerMainWindow);
        WindowToolbarsResetToDefaultAction->setObjectName(QString::fromUtf8("WindowToolbarsResetToDefaultAction"));
        ShowStatusBarAction = new QAction(qSlicerMainWindow);
        ShowStatusBarAction->setObjectName(QString::fromUtf8("ShowStatusBarAction"));
        ShowStatusBarAction->setCheckable(true);
        ShowStatusBarAction->setChecked(true);
        CentralWidget = new QWidget(qSlicerMainWindow);
        CentralWidget->setObjectName(QString::fromUtf8("CentralWidget"));
        qSlicerMainWindow->setCentralWidget(CentralWidget);
        StatusBar = new QStatusBar(qSlicerMainWindow);
        StatusBar->setObjectName(QString::fromUtf8("StatusBar"));
        qSlicerMainWindow->setStatusBar(StatusBar);
        PanelDockWidget = new QDockWidget(qSlicerMainWindow);
        PanelDockWidget->setObjectName(QString::fromUtf8("PanelDockWidget"));
        PanelDockWidget->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        PanelDockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        ModulePanel = new qSlicerModulePanel(dockWidgetContents);
        ModulePanel->setObjectName(QString::fromUtf8("ModulePanel"));

        verticalLayout->addWidget(ModulePanel);

        DataProbeCollapsibleWidget = new ctkCollapsibleButton(dockWidgetContents);
        DataProbeCollapsibleWidget->setObjectName(QString::fromUtf8("DataProbeCollapsibleWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DataProbeCollapsibleWidget->sizePolicy().hasHeightForWidth());
        DataProbeCollapsibleWidget->setSizePolicy(sizePolicy1);
        DataProbeCollapsibleWidget->setCollapsedHeight(0);
        horizontalLayout = new QHBoxLayout(DataProbeCollapsibleWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addWidget(DataProbeCollapsibleWidget);

        PanelDockWidget->setWidget(dockWidgetContents);
        qSlicerMainWindow->addDockWidget(Qt::LeftDockWidgetArea, PanelDockWidget);
        MainToolBar = new QToolBar(qSlicerMainWindow);
        MainToolBar->setObjectName(QString::fromUtf8("MainToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, MainToolBar);
        ModuleToolBar = new QToolBar(qSlicerMainWindow);
        ModuleToolBar->setObjectName(QString::fromUtf8("ModuleToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, ModuleToolBar);
        UndoRedoToolBar = new QToolBar(qSlicerMainWindow);
        UndoRedoToolBar->setObjectName(QString::fromUtf8("UndoRedoToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, UndoRedoToolBar);
        ViewToolBar = new QToolBar(qSlicerMainWindow);
        ViewToolBar->setObjectName(QString::fromUtf8("ViewToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, ViewToolBar);
        MouseModeToolBar = new qSlicerMouseModeToolBar(qSlicerMainWindow);
        MouseModeToolBar->setObjectName(QString::fromUtf8("MouseModeToolBar"));
        MouseModeToolBar->setEnabled(false);
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, MouseModeToolBar);
        CaptureToolBar = new qMRMLCaptureToolBar(qSlicerMainWindow);
        CaptureToolBar->setObjectName(QString::fromUtf8("CaptureToolBar"));
        CaptureToolBar->setEnabled(false);
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, CaptureToolBar);
        ViewersToolBar = new qSlicerViewersToolBar(qSlicerMainWindow);
        ViewersToolBar->setObjectName(QString::fromUtf8("ViewersToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, ViewersToolBar);
        DialogToolBar = new QToolBar(qSlicerMainWindow);
        DialogToolBar->setObjectName(QString::fromUtf8("DialogToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, DialogToolBar);
        LayoutToolBar = new QToolBar(qSlicerMainWindow);
        LayoutToolBar->setObjectName(QString::fromUtf8("LayoutToolBar"));
        qSlicerMainWindow->addToolBar(Qt::TopToolBarArea, LayoutToolBar);
        menubar = new QMenuBar(qSlicerMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 835, 26));
        FileMenu = new QMenu(menubar);
        FileMenu->setObjectName(QString::fromUtf8("FileMenu"));
        RecentlyLoadedMenu = new QMenu(FileMenu);
        RecentlyLoadedMenu->setObjectName(QString::fromUtf8("RecentlyLoadedMenu"));
        EditMenu = new QMenu(menubar);
        EditMenu->setObjectName(QString::fromUtf8("EditMenu"));
        ViewMenu = new QMenu(menubar);
        ViewMenu->setObjectName(QString::fromUtf8("ViewMenu"));
        LayoutMenu = new QMenu(ViewMenu);
        LayoutMenu->setObjectName(QString::fromUtf8("LayoutMenu"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/Icons/LayoutChooseView.png"), QSize(), QIcon::Normal, QIcon::Off);
        LayoutMenu->setIcon(icon46);
        WindowToolBarsMenu = new QMenu(ViewMenu);
        WindowToolBarsMenu->setObjectName(QString::fromUtf8("WindowToolBarsMenu"));
        AppearanceMenu = new QMenu(ViewMenu);
        AppearanceMenu->setObjectName(QString::fromUtf8("AppearanceMenu"));
        HelpMenu = new QMenu(menubar);
        HelpMenu->setObjectName(QString::fromUtf8("HelpMenu"));
        qSlicerMainWindow->setMenuBar(menubar);

        MainToolBar->addAction(FileLoadDataAction);
        MainToolBar->addAction(LoadDICOMAction);
        MainToolBar->addAction(FileSaveSceneAction);
        DialogToolBar->addAction(ViewExtensionsManagerAction);
        LayoutToolBar->addAction(ViewLayoutConventionalAction);
        LayoutToolBar->addAction(ViewLayoutConventionalWidescreenAction);
        LayoutToolBar->addAction(ViewLayoutConventionalPlotAction);
        LayoutToolBar->addAction(ViewLayoutFourUpAction);
        LayoutToolBar->addAction(ViewLayoutFourUpPlotAction);
        LayoutToolBar->addAction(ViewLayoutDual3DAction);
        LayoutToolBar->addAction(ViewLayoutTriple3DAction);
        LayoutToolBar->addAction(ViewLayoutOneUp3DAction);
        LayoutToolBar->addAction(ViewLayout3DTableAction);
        LayoutToolBar->addAction(ViewLayoutOneUpPlotAction);
        LayoutToolBar->addAction(ViewLayoutOneUpRedSliceAction);
        LayoutToolBar->addAction(ViewLayoutOneUpYellowSliceAction);
        LayoutToolBar->addAction(ViewLayoutOneUpGreenSliceAction);
        LayoutToolBar->addAction(ViewLayoutTabbed3DAction);
        LayoutToolBar->addAction(ViewLayoutTabbedSliceAction);
        LayoutToolBar->addAction(ViewLayoutCompareAction);
        LayoutToolBar->addAction(ViewLayoutCompareWidescreenAction);
        LayoutToolBar->addAction(ViewLayoutCompareGridAction);
        LayoutToolBar->addAction(ViewLayoutThreeOverThreeAction);
        LayoutToolBar->addAction(ViewLayoutThreeOverThreePlotAction);
        LayoutToolBar->addAction(ViewLayoutFourOverFourAction);
        LayoutToolBar->addAction(ViewLayoutSideBySideAction);
        LayoutToolBar->addAction(ViewLayoutFourByThreeSliceAction);
        LayoutToolBar->addAction(ViewLayoutFourByTwoSliceAction);
        LayoutToolBar->addAction(ViewLayoutFiveByTwoSliceAction);
        LayoutToolBar->addAction(ViewLayoutThreeByThreeSliceAction);
        LayoutToolBar->addAction(ViewLayoutDualMonitorFourUpViewAction);
        menubar->addAction(FileMenu->menuAction());
        menubar->addAction(EditMenu->menuAction());
        menubar->addAction(ViewMenu->menuAction());
        menubar->addAction(HelpMenu->menuAction());
        FileMenu->addAction(FileAddDataAction);
        FileMenu->addAction(RecentlyLoadedMenu->menuAction());
        FileMenu->addSeparator();
        FileMenu->addAction(FileSaveSceneAction);
        FileMenu->addSeparator();
        FileMenu->addAction(FileCloseSceneAction);
        FileMenu->addSeparator();
        FileMenu->addAction(FileExitAction);
        EditMenu->addAction(CutAction);
        EditMenu->addAction(CopyAction);
        EditMenu->addAction(PasteAction);
        EditMenu->addSeparator();
        EditMenu->addAction(EditRecordMacroAction);
        EditMenu->addAction(EditPlayMacroAction);
        EditMenu->addSeparator();
        EditMenu->addAction(EditApplicationSettingsAction);
        ViewMenu->addAction(LayoutMenu->menuAction());
        ViewMenu->addAction(WindowToolBarsMenu->menuAction());
        ViewMenu->addAction(AppearanceMenu->menuAction());
        ViewMenu->addSeparator();
        ViewMenu->addAction(ViewExtensionsManagerAction);
        ViewMenu->addAction(ModuleHomeAction);
        ViewMenu->addSeparator();
        LayoutMenu->addAction(ViewLayoutConventionalAction);
        LayoutMenu->addAction(ViewLayoutConventionalWidescreenAction);
        LayoutMenu->addAction(ViewLayoutConventionalPlotAction);
        LayoutMenu->addAction(ViewLayoutFourUpAction);
        LayoutMenu->addAction(ViewLayoutFourUpTableAction);
        LayoutMenu->addAction(ViewLayoutFourUpPlotAction);
        LayoutMenu->addAction(ViewLayoutFourUpPlotTableAction);
        LayoutMenu->addAction(ViewLayoutDual3DAction);
        LayoutMenu->addAction(ViewLayoutTriple3DAction);
        LayoutMenu->addAction(ViewLayoutOneUp3DAction);
        LayoutMenu->addAction(ViewLayout3DTableAction);
        LayoutMenu->addAction(ViewLayoutOneUpPlotAction);
        LayoutMenu->addAction(ViewLayoutOneUpRedSliceAction);
        LayoutMenu->addAction(ViewLayoutOneUpYellowSliceAction);
        LayoutMenu->addAction(ViewLayoutOneUpGreenSliceAction);
        LayoutMenu->addAction(ViewLayoutTabbed3DAction);
        LayoutMenu->addAction(ViewLayoutTabbedSliceAction);
        LayoutMenu->addAction(ViewLayoutCompareAction);
        LayoutMenu->addAction(ViewLayoutCompareWidescreenAction);
        LayoutMenu->addAction(ViewLayoutCompareGridAction);
        LayoutMenu->addAction(ViewLayoutThreeOverThreeAction);
        LayoutMenu->addAction(ViewLayoutThreeOverThreePlotAction);
        LayoutMenu->addAction(ViewLayoutFourOverFourAction);
        LayoutMenu->addAction(ViewLayoutTwoOverTwoAction);
        LayoutMenu->addAction(ViewLayoutSideBySideAction);
        LayoutMenu->addAction(ViewLayoutFourByThreeSliceAction);
        LayoutMenu->addAction(ViewLayoutFourByTwoSliceAction);
        LayoutMenu->addAction(ViewLayoutThreeByThreeSliceAction);
        LayoutMenu->addAction(ViewLayoutDualMonitorFourUpViewAction);
        AppearanceMenu->addAction(ShowStatusBarAction);
        AppearanceMenu->addSeparator();
        AppearanceMenu->addAction(WindowToolbarsResetToDefaultAction);

        retranslateUi(qSlicerMainWindow);

        QMetaObject::connectSlotsByName(qSlicerMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *qSlicerMainWindow)
    {
        FileLoadSceneAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Load Scene", nullptr));
#if QT_CONFIG(tooltip)
        FileLoadSceneAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise a file browser to select a scene (mrml, xcat or xml) to load. It first clears any existing scene in Slicer and resets the application state.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileLoadDataAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Load Data", nullptr));
#if QT_CONFIG(tooltip)
        FileLoadDataAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise an \"Add Data\" widget that allows you to select individual datasets to add to the existing scene. This load option is most useful when you want to load many different data types at once (volumes, models, etc.) which may not yet be described by a scene file.", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadDICOMAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Load DICOM", nullptr));
#if QT_CONFIG(tooltip)
        LoadDICOMAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise the DICOM module for loading DICOM datasets.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileImportSceneAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Import Scene", nullptr));
#if QT_CONFIG(tooltip)
        FileImportSceneAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise a file browser to navigate and select a scene file to be added to the existing scene. The scene is not cleared.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileAddDataAction->setText(QCoreApplication::translate("qSlicerMainWindow", "&Add Data", nullptr));
#if QT_CONFIG(tooltip)
        FileAddDataAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise an \"Add Data\" widget that allows you to select individual datasets to add to the existing scene. This load option is most useful when you want to load many different data types at once (volumes, models, etc.) which may not yet be described by a scene file.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        FileAddDataAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        FileAddVolumeAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Add Volume", nullptr));
#if QT_CONFIG(tooltip)
        FileAddVolumeAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise an \"Add Volume\" widget that allows you to select a volumetric dataset to add to the existing scene. The \"Volume Options\" panel can be used to clarify how a selected dataset should be loaded and displayed.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileAddTransformAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Add Transform", nullptr));
#if QT_CONFIG(tooltip)
        FileAddTransformAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise a standard file browser that allows you to select a transform to the existing scene.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileSaveSceneAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Save Data", nullptr));
#if QT_CONFIG(tooltip)
        FileSaveSceneAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Display the \"Save Data\" widget, which offers many options for saving a scene and/or individual datasets.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        FileSaveSceneAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        SDBSaveToDirectoryAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Save Scene To Directory", nullptr));
#if QT_CONFIG(tooltip)
        SDBSaveToDirectoryAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "UNDER CONSTRUCTION: Save the current scene to a stand alone directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        SDBSaveToMRBAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Save Scene to MRB File", nullptr));
#if QT_CONFIG(tooltip)
        SDBSaveToMRBAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Create a Medical Reality Bundle containing the scene.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileCloseSceneAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Close Scene", nullptr));
#if QT_CONFIG(tooltip)
        FileCloseSceneAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Close the current scene and reset the application state. ", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        FileCloseSceneAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        FileExitAction->setText(QCoreApplication::translate("qSlicerMainWindow", "E&xit", nullptr));
#if QT_CONFIG(tooltip)
        FileExitAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Quit the application", nullptr));
#endif // QT_CONFIG(tooltip)
        EditUndoAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        EditUndoAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Undo the history of undoable commands, from last to first.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        EditUndoAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        EditRedoAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        EditRedoAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Redo the history of commands most recently undone, from last to first.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        EditRedoAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        ViewExtensionsManagerAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Extensions Manager", nullptr));
#if QT_CONFIG(tooltip)
        ViewExtensionsManagerAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Raise the \"Extensions Manager\" wizard that provides status and information about available extensions", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ViewExtensionsManagerAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        ViewCacheRemoteIOManagerAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Cache & Remote I/O Manager", nullptr));
#if QT_CONFIG(tooltip)
        ViewCacheRemoteIOManagerAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "The Cache and Remote Data Handling interface provides status and information about all remote data transfers, and allows some control over the local cache.", nullptr));
#endif // QT_CONFIG(tooltip)
        FileFavoriteModulesAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Favorite Modules", nullptr));
#if QT_CONFIG(tooltip)
        FileFavoriteModulesAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Open settings to the Modules panel where Favorite Modules can be defined.", nullptr));
#endif // QT_CONFIG(tooltip)
        EditApplicationSettingsAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Application Settings", nullptr));
#if QT_CONFIG(tooltip)
        EditApplicationSettingsAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "The Application Settings provides options for controlling the application's user interface preferences into the application registry, so they are preserved across sessions.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        EditApplicationSettingsAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        CutAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        CutAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Cut currently selected item and place in clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        CutAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        CopyAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        CopyAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Copy currently selected item to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        CopyAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        PasteAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        PasteAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Paste the current contents of the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        PasteAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        WindowMaximizeViewAction->setText(QCoreApplication::translate("qSlicerMainWindow", "&Maximize view", nullptr));
#if QT_CONFIG(tooltip)
        WindowMaximizeViewAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Maximize/Minimize the current view.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        WindowMaximizeViewAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        FeedbackReportUsabilityIssueAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Feedback: report usability issue (www)", nullptr));
#if QT_CONFIG(tooltip)
        FeedbackReportUsabilityIssueAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Create a topic at the Slicer forum (https://discourse.slicer.org) to report any usability issues and make suggestions how to address them.", nullptr));
#endif // QT_CONFIG(tooltip)
        FeedbackMakeFeatureRequestAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Feedback: make a feature request (www)", nullptr));
#if QT_CONFIG(tooltip)
        FeedbackMakeFeatureRequestAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Create a topic at the Slicer forum (https://discourse.slicer.org) to request a new feature.", nullptr));
#endif // QT_CONFIG(tooltip)
        DebugLoadModuleAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Load Module", nullptr));
        ViewLayoutConventionalAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Conventional", nullptr));
        ViewLayoutFourUpAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four-Up", nullptr));
        ViewLayoutDual3DAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Dual 3D", nullptr));
        ViewLayoutOneUp3DAction->setText(QCoreApplication::translate("qSlicerMainWindow", "3D only", nullptr));
        ViewLayout3DTableAction->setText(QCoreApplication::translate("qSlicerMainWindow", "3D Table", nullptr));
        ViewLayoutOneUpRedSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Red slice only", nullptr));
        ViewLayoutOneUpYellowSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Yellow slice only", nullptr));
        ViewLayoutOneUpGreenSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Green slice only", nullptr));
        ViewLayoutTabbed3DAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Tabbed 3D", nullptr));
        ViewLayoutTabbedSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Tabbed slice", nullptr));
        ViewLayoutCompareAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Compare", nullptr));
        ViewLayoutCompareWidescreenAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Compare Widescreen", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutCompareWidescreenAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Compare Widescreen", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutTwoOverTwoAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Two over two", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutTwoOverTwoAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Two over Two Layout", nullptr));
#endif // QT_CONFIG(tooltip)
        ModuleHomeAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Home", nullptr));
#if QT_CONFIG(tooltip)
        ModuleHomeAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Favorite module for easy access", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ModuleHomeAction->setShortcut(QCoreApplication::translate("qSlicerMainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        ViewLayoutConventionalWidescreenAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Conventional Widescreen", nullptr));
        ViewLayoutTriple3DAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Triple 3D", nullptr));
        ViewLayoutThreeOverThreeAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Three over three", nullptr));
        ViewLayoutFourOverFourAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four over four", nullptr));
        ViewLayoutCompare_2_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "2 viewers", nullptr));
        ViewLayoutCompare_3_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "3 viewers", nullptr));
        ViewLayoutCompare_4_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "4 viewers", nullptr));
        ViewLayoutCompare_5_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "5 viewers", nullptr));
        ViewLayoutCompare_6_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "6 viewers", nullptr));
        ViewLayoutCompare_7_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "7 viewers", nullptr));
        ViewLayoutCompare_8_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "8 viewers", nullptr));
        ViewLayoutCompareWidescreen_2_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "2 viewers", nullptr));
        ViewLayoutCompareWidescreen_3_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "3 viewers", nullptr));
        ViewLayoutCompareWidescreen_4_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "4 viewers", nullptr));
        ViewLayoutCompareWidescreen_5_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "5 viewers", nullptr));
        ViewLayoutCompareWidescreen_6_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "6 viewers", nullptr));
        ViewLayoutCompareWidescreen_7_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "7 viewers", nullptr));
        ViewLayoutCompareWidescreen_8_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "8 viewers", nullptr));
        ViewLayoutCompareGridAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Compare Grid", nullptr));
        ViewLayoutCompareGrid_2x2_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "2x2 viewers", nullptr));
        ViewLayoutCompareGrid_3x3_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "3x3 viewers", nullptr));
        ViewLayoutCompareGrid_4x4_viewersAction->setText(QCoreApplication::translate("qSlicerMainWindow", "4x4 viewers", nullptr));
        EditRecordMacroAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Record Macro", nullptr));
        EditPlayMacroAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Play Macro", nullptr));
        ViewLayoutSideBySideAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Side by side", nullptr));
        ViewLayoutFourByThreeSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four by three slice", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutFourByThreeSliceAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Four by three slice", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutFourByTwoSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four by two slice", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutFourByTwoSliceAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Four by two slice", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutFiveByTwoSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Five by two slice", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutFiveByTwoSliceAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Five by two slice", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutThreeByThreeSliceAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Three by three slice", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutThreeByThreeSliceAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Three by three slice", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutDualMonitorFourUpViewAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Dual-monitor Four-Up", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutDualMonitorFourUpViewAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Dual-monitor Four-Up", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutOneUpPlotAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Plot only", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutOneUpPlotAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Plot view", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutFourUpPlotAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four-Up Plot", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutFourUpPlotAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Three slices and a plot in four-Up layout", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutConventionalPlotAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Conventional Plot", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutConventionalPlotAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Conventional three slices and 3D view with an additional plot", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutThreeOverThreePlotAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Three over three Plot", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutThreeOverThreePlotAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Three plots over three slices", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLayoutFourUpTableAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four-Up Table", nullptr));
        ViewLayoutFourUpPlotTableAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Four-Up Quantitative", nullptr));
#if QT_CONFIG(tooltip)
        ViewLayoutFourUpPlotTableAction->setToolTip(QCoreApplication::translate("qSlicerMainWindow", "Four-up slice and 3D view with an additional table and plot", nullptr));
#endif // QT_CONFIG(tooltip)
        WindowToolbarsResetToDefaultAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Reset to default", nullptr));
        ShowStatusBarAction->setText(QCoreApplication::translate("qSlicerMainWindow", "Show Status Bar", nullptr));
        PanelDockWidget->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Module Panel", nullptr));
        DataProbeCollapsibleWidget->setText(QCoreApplication::translate("qSlicerMainWindow", "Data Probe", nullptr));
        MainToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Load/Save", nullptr));
        ModuleToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Favorite Modules", nullptr));
        UndoRedoToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Undo Redo ToolBar", nullptr));
        ViewToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Layout Selection", nullptr));
        MouseModeToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Mouse Interaction", nullptr));
        CaptureToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Capture/Restore", nullptr));
        ViewersToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Crosshair Selection", nullptr));
        DialogToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Extensions", nullptr));
        LayoutToolBar->setWindowTitle(QCoreApplication::translate("qSlicerMainWindow", "Layout ToolBar", nullptr));
        FileMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&File", nullptr));
        RecentlyLoadedMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "Recent", nullptr));
        EditMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&Edit", nullptr));
        ViewMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&View", nullptr));
        LayoutMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "Layout", nullptr));
        WindowToolBarsMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&Toolbars", nullptr));
        AppearanceMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&Appearance", nullptr));
        HelpMenu->setTitle(QCoreApplication::translate("qSlicerMainWindow", "&Help", nullptr));
        (void)qSlicerMainWindow;
    } // retranslateUi

};

namespace Ui {
    class qSlicerMainWindow: public Ui_qSlicerMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMAINWINDOW_H
