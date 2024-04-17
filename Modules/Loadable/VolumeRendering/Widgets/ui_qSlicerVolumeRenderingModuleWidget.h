/********************************************************************************
** Form generated from reading UI file 'qSlicerVolumeRenderingModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERVOLUMERENDERINGMODULEWIDGET_H
#define UI_QSLICERVOLUMERENDERINGMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCheckBox.h"
#include "ctkCheckablePushButton.h"
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkExpandButton.h"
#include "ctkPushButton.h"
#include "ctkSliderWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLMarkupsROIWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLVolumePropertyNodeWidget.h"
#include "qSlicerGPUMemoryComboBox.h"
#include "qSlicerVolumeRenderingPresetComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerVolumeRenderingModuleWidget
{
public:
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_2;
    ctkCheckBox *VisibilityCheckBox;
    qMRMLNodeComboBox *VolumeNodeComboBox;
    ctkCollapsibleButton *InputsCollapsibleButton;
    QFormLayout *formLayout;
    QLabel *ROINodeLabel;
    qMRMLNodeComboBox *ROINodeComboBox;
    QLabel *VolumePropertyNodeLabel;
    qMRMLNodeComboBox *VolumePropertyNodeComboBox;
    QLabel *ViewNodeLabel;
    qMRMLDisplayNodeViewComboBox *ViewCheckableNodeComboBox;
    ctkCollapsibleButton *DisplayCollapsibleButton;
    QFormLayout *formLayout_11;
    qSlicerVolumeRenderingPresetComboBox *PresetComboBox;
    QLabel *CropLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ROICropCheckBox;
    ctkCheckBox *ROICropDisplayCheckBox;
    QPushButton *ROIFitPushButton;
    QLabel *RenderingMethodLabel;
    QComboBox *RenderingMethodComboBox;
    ctkCollapsibleButton *AdvancedCollapsibleButton;
    QVBoxLayout *verticalLayout;
    QTabWidget *AdvancedTabWidget;
    QWidget *TechniquesTab;
    QFormLayout *formLayout_5;
    QLabel *MemorySizeLabel;
    qSlicerGPUMemoryComboBox *MemorySizeComboBox;
    QLabel *QualityControlLabel;
    QComboBox *QualityControlComboBox;
    QLabel *FramerateLabel;
    ctkSliderWidget *FramerateSliderWidget;
    ctkCollapsibleGroupBox *AdvancedGroupBox;
    QFormLayout *formLayout_7;
    QStackedWidget *RenderingMethodStackedWidget;
    QLabel *FramerateLabel_2;
    QCheckBox *AutoReleaseGraphicsResourcesCheckBox;
    QWidget *VolumePropertyTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    ctkCheckablePushButton *SynchronizeScalarDisplayNodeButton;
    QCheckBox *IgnoreVolumesThresholdCheckBox;
    ctkExpandButton *ExpandSynchronizeWithVolumesButton;
    qMRMLVolumePropertyNodeWidget *VolumePropertyNodeWidget;
    QWidget *ROITab;
    QFormLayout *formLayout_3;
    qMRMLMarkupsROIWidget *MarkupsROIWidget;

    void setupUi(qSlicerWidget *qSlicerVolumeRenderingModuleWidget)
    {
        if (qSlicerVolumeRenderingModuleWidget->objectName().isEmpty())
            qSlicerVolumeRenderingModuleWidget->setObjectName(QString::fromUtf8("qSlicerVolumeRenderingModuleWidget"));
        qSlicerVolumeRenderingModuleWidget->resize(456, 691);
        formLayout_2 = new QFormLayout(qSlicerVolumeRenderingModuleWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 0, -1, -1);
        VisibilityCheckBox = new ctkCheckBox(qSlicerVolumeRenderingModuleWidget);
        VisibilityCheckBox->setObjectName(QString::fromUtf8("VisibilityCheckBox"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::On);
        VisibilityCheckBox->setIndicatorIcon(icon);
        VisibilityCheckBox->setIndicatorIconSize(QSize(21, 21));

        horizontalLayout_2->addWidget(VisibilityCheckBox);


        formLayout_2->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        VolumeNodeComboBox = new qMRMLNodeComboBox(qSlicerVolumeRenderingModuleWidget);
        VolumeNodeComboBox->setObjectName(QString::fromUtf8("VolumeNodeComboBox"));
        VolumeNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode"));
        VolumeNodeComboBox->setHideChildNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLDiffusionWeightedVolumeNode") << QString::fromUtf8("vtkMRMLDiffusionTensorVolumeNode") << QString::fromUtf8("vtkMRMLMultiVolumeNode"));
        VolumeNodeComboBox->setAddEnabled(false);
        VolumeNodeComboBox->setRenameEnabled(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, VolumeNodeComboBox);

        InputsCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumeRenderingModuleWidget);
        InputsCollapsibleButton->setObjectName(QString::fromUtf8("InputsCollapsibleButton"));
        InputsCollapsibleButton->setEnabled(true);
        InputsCollapsibleButton->setChecked(false);
        InputsCollapsibleButton->setCollapsed(true);
        formLayout = new QFormLayout(InputsCollapsibleButton);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(4, 4, 4, 4);
        ROINodeLabel = new QLabel(InputsCollapsibleButton);
        ROINodeLabel->setObjectName(QString::fromUtf8("ROINodeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ROINodeLabel);

        ROINodeComboBox = new qMRMLNodeComboBox(InputsCollapsibleButton);
        ROINodeComboBox->setObjectName(QString::fromUtf8("ROINodeComboBox"));
        ROINodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLMarkupsROINode"));
        ROINodeComboBox->setNoneEnabled(true);
        ROINodeComboBox->setRenameEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, ROINodeComboBox);

        VolumePropertyNodeLabel = new QLabel(InputsCollapsibleButton);
        VolumePropertyNodeLabel->setObjectName(QString::fromUtf8("VolumePropertyNodeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, VolumePropertyNodeLabel);

        VolumePropertyNodeComboBox = new qMRMLNodeComboBox(InputsCollapsibleButton);
        VolumePropertyNodeComboBox->setObjectName(QString::fromUtf8("VolumePropertyNodeComboBox"));
        VolumePropertyNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumePropertyNode"));
        VolumePropertyNodeComboBox->setNoneEnabled(true);
        VolumePropertyNodeComboBox->setRenameEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, VolumePropertyNodeComboBox);

        ViewNodeLabel = new QLabel(InputsCollapsibleButton);
        ViewNodeLabel->setObjectName(QString::fromUtf8("ViewNodeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ViewNodeLabel);

        ViewCheckableNodeComboBox = new qMRMLDisplayNodeViewComboBox(InputsCollapsibleButton);
        ViewCheckableNodeComboBox->setObjectName(QString::fromUtf8("ViewCheckableNodeComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ViewCheckableNodeComboBox);


        formLayout_2->setWidget(2, QFormLayout::SpanningRole, InputsCollapsibleButton);

        DisplayCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumeRenderingModuleWidget);
        DisplayCollapsibleButton->setObjectName(QString::fromUtf8("DisplayCollapsibleButton"));
        DisplayCollapsibleButton->setCollapsed(false);
        formLayout_11 = new QFormLayout(DisplayCollapsibleButton);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_11->setContentsMargins(4, 4, 4, 4);
        PresetComboBox = new qSlicerVolumeRenderingPresetComboBox(DisplayCollapsibleButton);
        PresetComboBox->setObjectName(QString::fromUtf8("PresetComboBox"));

        formLayout_11->setWidget(0, QFormLayout::SpanningRole, PresetComboBox);

        CropLabel = new QLabel(DisplayCollapsibleButton);
        CropLabel->setObjectName(QString::fromUtf8("CropLabel"));

        formLayout_11->setWidget(2, QFormLayout::LabelRole, CropLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ROICropCheckBox = new QCheckBox(DisplayCollapsibleButton);
        ROICropCheckBox->setObjectName(QString::fromUtf8("ROICropCheckBox"));
        ROICropCheckBox->setEnabled(false);

        horizontalLayout->addWidget(ROICropCheckBox);

        ROICropDisplayCheckBox = new ctkCheckBox(DisplayCollapsibleButton);
        ROICropDisplayCheckBox->setObjectName(QString::fromUtf8("ROICropDisplayCheckBox"));
        ROICropDisplayCheckBox->setEnabled(false);
        ROICropDisplayCheckBox->setIndicatorIcon(icon);
        ROICropDisplayCheckBox->setIndicatorIconSize(QSize(21, 21));

        horizontalLayout->addWidget(ROICropDisplayCheckBox);

        ROIFitPushButton = new QPushButton(DisplayCollapsibleButton);
        ROIFitPushButton->setObjectName(QString::fromUtf8("ROIFitPushButton"));
        ROIFitPushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ViewCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        ROIFitPushButton->setIcon(icon1);

        horizontalLayout->addWidget(ROIFitPushButton);


        formLayout_11->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        RenderingMethodLabel = new QLabel(DisplayCollapsibleButton);
        RenderingMethodLabel->setObjectName(QString::fromUtf8("RenderingMethodLabel"));

        formLayout_11->setWidget(3, QFormLayout::LabelRole, RenderingMethodLabel);

        RenderingMethodComboBox = new QComboBox(DisplayCollapsibleButton);
        RenderingMethodComboBox->setObjectName(QString::fromUtf8("RenderingMethodComboBox"));
        RenderingMethodComboBox->setEnabled(false);

        formLayout_11->setWidget(3, QFormLayout::FieldRole, RenderingMethodComboBox);


        formLayout_2->setWidget(3, QFormLayout::SpanningRole, DisplayCollapsibleButton);

        AdvancedCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumeRenderingModuleWidget);
        AdvancedCollapsibleButton->setObjectName(QString::fromUtf8("AdvancedCollapsibleButton"));
        AdvancedCollapsibleButton->setEnabled(true);
        AdvancedCollapsibleButton->setChecked(true);
        AdvancedCollapsibleButton->setCollapsed(false);
        verticalLayout = new QVBoxLayout(AdvancedCollapsibleButton);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        AdvancedTabWidget = new QTabWidget(AdvancedCollapsibleButton);
        AdvancedTabWidget->setObjectName(QString::fromUtf8("AdvancedTabWidget"));
        TechniquesTab = new QWidget();
        TechniquesTab->setObjectName(QString::fromUtf8("TechniquesTab"));
        formLayout_5 = new QFormLayout(TechniquesTab);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        MemorySizeLabel = new QLabel(TechniquesTab);
        MemorySizeLabel->setObjectName(QString::fromUtf8("MemorySizeLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, MemorySizeLabel);

        MemorySizeComboBox = new qSlicerGPUMemoryComboBox(TechniquesTab);
        MemorySizeComboBox->setObjectName(QString::fromUtf8("MemorySizeComboBox"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, MemorySizeComboBox);

        QualityControlLabel = new QLabel(TechniquesTab);
        QualityControlLabel->setObjectName(QString::fromUtf8("QualityControlLabel"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, QualityControlLabel);

        QualityControlComboBox = new QComboBox(TechniquesTab);
        QualityControlComboBox->setObjectName(QString::fromUtf8("QualityControlComboBox"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, QualityControlComboBox);

        FramerateLabel = new QLabel(TechniquesTab);
        FramerateLabel->setObjectName(QString::fromUtf8("FramerateLabel"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, FramerateLabel);

        FramerateSliderWidget = new ctkSliderWidget(TechniquesTab);
        FramerateSliderWidget->setObjectName(QString::fromUtf8("FramerateSliderWidget"));
        FramerateSliderWidget->setDecimals(0);
        FramerateSliderWidget->setMinimum(1.000000000000000);
        FramerateSliderWidget->setMaximum(100.000000000000000);
        FramerateSliderWidget->setValue(8.000000000000000);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, FramerateSliderWidget);

        AdvancedGroupBox = new ctkCollapsibleGroupBox(TechniquesTab);
        AdvancedGroupBox->setObjectName(QString::fromUtf8("AdvancedGroupBox"));
        formLayout_7 = new QFormLayout(AdvancedGroupBox);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        RenderingMethodStackedWidget = new QStackedWidget(AdvancedGroupBox);
        RenderingMethodStackedWidget->setObjectName(QString::fromUtf8("RenderingMethodStackedWidget"));

        formLayout_7->setWidget(0, QFormLayout::SpanningRole, RenderingMethodStackedWidget);


        formLayout_5->setWidget(5, QFormLayout::SpanningRole, AdvancedGroupBox);

        FramerateLabel_2 = new QLabel(TechniquesTab);
        FramerateLabel_2->setObjectName(QString::fromUtf8("FramerateLabel_2"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, FramerateLabel_2);

        AutoReleaseGraphicsResourcesCheckBox = new QCheckBox(TechniquesTab);
        AutoReleaseGraphicsResourcesCheckBox->setObjectName(QString::fromUtf8("AutoReleaseGraphicsResourcesCheckBox"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, AutoReleaseGraphicsResourcesCheckBox);

        AdvancedTabWidget->addTab(TechniquesTab, QString());
        VolumePropertyTab = new QWidget();
        VolumePropertyTab->setObjectName(QString::fromUtf8("VolumePropertyTab"));
        verticalLayout_2 = new QVBoxLayout(VolumePropertyTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        SynchronizeScalarDisplayNodeButton = new ctkCheckablePushButton(VolumePropertyTab);
        SynchronizeScalarDisplayNodeButton->setObjectName(QString::fromUtf8("SynchronizeScalarDisplayNodeButton"));
        SynchronizeScalarDisplayNodeButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SynchronizeScalarDisplayNodeButton->sizePolicy().hasHeightForWidth());
        SynchronizeScalarDisplayNodeButton->setSizePolicy(sizePolicy);
        SynchronizeScalarDisplayNodeButton->setFlat(false);
        SynchronizeScalarDisplayNodeButton->setCheckBoxControlsButtonToggleState(true);

        horizontalLayout_3->addWidget(SynchronizeScalarDisplayNodeButton);

        IgnoreVolumesThresholdCheckBox = new QCheckBox(VolumePropertyTab);
        IgnoreVolumesThresholdCheckBox->setObjectName(QString::fromUtf8("IgnoreVolumesThresholdCheckBox"));

        horizontalLayout_3->addWidget(IgnoreVolumesThresholdCheckBox);

        ExpandSynchronizeWithVolumesButton = new ctkExpandButton(VolumePropertyTab);
        ExpandSynchronizeWithVolumesButton->setObjectName(QString::fromUtf8("ExpandSynchronizeWithVolumesButton"));
        ExpandSynchronizeWithVolumesButton->setChecked(true);
        ExpandSynchronizeWithVolumesButton->setMirrorOnExpand(true);

        horizontalLayout_3->addWidget(ExpandSynchronizeWithVolumesButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        VolumePropertyNodeWidget = new qMRMLVolumePropertyNodeWidget(VolumePropertyTab);
        VolumePropertyNodeWidget->setObjectName(QString::fromUtf8("VolumePropertyNodeWidget"));
        VolumePropertyNodeWidget->setEnabled(false);

        verticalLayout_2->addWidget(VolumePropertyNodeWidget);

        AdvancedTabWidget->addTab(VolumePropertyTab, QString());
        ROITab = new QWidget();
        ROITab->setObjectName(QString::fromUtf8("ROITab"));
        formLayout_3 = new QFormLayout(ROITab);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        MarkupsROIWidget = new qMRMLMarkupsROIWidget(ROITab);
        MarkupsROIWidget->setObjectName(QString::fromUtf8("MarkupsROIWidget"));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, MarkupsROIWidget);

        AdvancedTabWidget->addTab(ROITab, QString());

        verticalLayout->addWidget(AdvancedTabWidget);


        formLayout_2->setWidget(4, QFormLayout::SpanningRole, AdvancedCollapsibleButton);


        retranslateUi(qSlicerVolumeRenderingModuleWidget);
        QObject::connect(VolumePropertyNodeComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)), VolumePropertyNodeWidget, SLOT(setMRMLVolumePropertyNode(vtkMRMLNode*)));
        QObject::connect(ROINodeComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)), MarkupsROIWidget, SLOT(setMRMLMarkupsNode(vtkMRMLNode*)));
        QObject::connect(VolumeNodeComboBox, SIGNAL(currentNodeChanged(bool)), InputsCollapsibleButton, SLOT(setEnabled(bool)));
        QObject::connect(qSlicerVolumeRenderingModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ViewCheckableNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumeRenderingModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ROINodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumeRenderingModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), VolumePropertyNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumeRenderingModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), VolumeNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(VolumeNodeComboBox, SIGNAL(currentNodeChanged(bool)), AdvancedCollapsibleButton, SLOT(setEnabled(bool)));
        QObject::connect(VolumeNodeComboBox, SIGNAL(currentNodeChanged(bool)), ROICropCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(VolumePropertyNodeComboBox, SIGNAL(currentNodeChanged(bool)), VolumePropertyNodeWidget, SLOT(setEnabled(bool)));
        QObject::connect(VolumePropertyNodeComboBox, SIGNAL(currentNodeChanged(bool)), PresetComboBox, SLOT(setEnabled(bool)));
        QObject::connect(VolumeNodeComboBox, SIGNAL(currentNodeChanged(bool)), ROICropDisplayCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(ROINodeComboBox, SIGNAL(currentNodeChanged(bool)), ROIFitPushButton, SLOT(setEnabled(bool)));
        QObject::connect(VolumeNodeComboBox, SIGNAL(currentNodeChanged(bool)), VisibilityCheckBox, SLOT(setEnabled(bool)));
        QObject::connect(SynchronizeScalarDisplayNodeButton, SIGNAL(checkBoxToggled(bool)), SynchronizeScalarDisplayNodeButton, SLOT(setChecked(bool)));
        QObject::connect(ExpandSynchronizeWithVolumesButton, SIGNAL(toggled(bool)), IgnoreVolumesThresholdCheckBox, SLOT(setVisible(bool)));

        AdvancedTabWidget->setCurrentIndex(0);
        MemorySizeComboBox->setCurrentIndex(-1);
        QualityControlComboBox->setCurrentIndex(-1);
        RenderingMethodStackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(qSlicerVolumeRenderingModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerVolumeRenderingModuleWidget)
    {
        qSlicerVolumeRenderingModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Volume Rendering", nullptr));
        VisibilityCheckBox->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Volume:", nullptr));
        InputsCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Inputs", nullptr));
        ROINodeLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "ROI:", nullptr));
        VolumePropertyNodeLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Property:", nullptr));
        ViewNodeLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "View:", nullptr));
        DisplayCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Display", nullptr));
        CropLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Crop:", nullptr));
        ROICropCheckBox->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Enable", nullptr));
        ROICropDisplayCheckBox->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Display ROI", nullptr));
        ROIFitPushButton->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Fit to Volume", nullptr));
        RenderingMethodLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Rendering:", nullptr));
        AdvancedCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Advanced...", nullptr));
        MemorySizeLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "GPU memory size:", nullptr));
#if QT_CONFIG(tooltip)
        MemorySizeComboBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Amount of memory allocated for volume rendering on the graphic card. \"Default\" can be modified in the settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        QualityControlLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Quality:", nullptr));
        FramerateLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Interactive speed:", nullptr));
        FramerateSliderWidget->setSuffix(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", " fps", nullptr));
        AdvancedGroupBox->setTitle(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Advanced rendering properties", nullptr));
        FramerateLabel_2->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Auto-release resources:", nullptr));
#if QT_CONFIG(tooltip)
        AutoReleaseGraphicsResourcesCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Immediately unload volumes from graphics memory when not visible. Reduces memory usage but makes toggling volume visibility slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoReleaseGraphicsResourcesCheckBox->setText(QString());
        AdvancedTabWidget->setTabText(AdvancedTabWidget->indexOf(TechniquesTab), QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Techniques", nullptr));
        SynchronizeScalarDisplayNodeButton->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Synchronize with Volumes module", nullptr));
#if QT_CONFIG(tooltip)
        IgnoreVolumesThresholdCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Don't use threshold values. Set opacity ramp from the Window/Level range instead.", nullptr));
#endif // QT_CONFIG(tooltip)
        IgnoreVolumesThresholdCheckBox->setText(QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Ignore threshold", nullptr));
        AdvancedTabWidget->setTabText(AdvancedTabWidget->indexOf(VolumePropertyTab), QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "Volume properties", nullptr));
        AdvancedTabWidget->setTabText(AdvancedTabWidget->indexOf(ROITab), QCoreApplication::translate("qSlicerVolumeRenderingModuleWidget", "ROI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerVolumeRenderingModuleWidget: public Ui_qSlicerVolumeRenderingModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERVOLUMERENDERINGMODULEWIDGET_H
