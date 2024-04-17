/********************************************************************************
** Form generated from reading UI file 'qSlicerCropVolumeModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERCROPVOLUMEMODULEWIDGET_H
#define UI_QSLICERCROPVOLUMEMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkCollapsibleButton.h"
#include "ctkCoordinatesWidget.h"
#include "ctkDoubleSpinBox.h"
#include "ctkFittedTextBrowser.h"
#include "qMRMLCoordinatesWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerCropVolumeModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *ParameterSetCollapsibleButton;
    QFormLayout *parametersFormLayout_3;
    QLabel *ParameterNodeLabel;
    qMRMLNodeComboBox *ParametersNodeComboBox;
    ctkCollapsibleButton *InputOutputCollapsibleButton;
    QFormLayout *parametersFormLayout;
    QLabel *InputVolumeLabel;
    qMRMLNodeComboBox *InputVolumeComboBox;
    QLabel *InputROILabel;
    qMRMLNodeComboBox *InputROIComboBox;
    QHBoxLayout *horizontalLayout_4;
    ctkCheckBox *VisibilityButton;
    QPushButton *ROIFitPushButton;
    QLabel *OutputVolumeLabel;
    qMRMLNodeComboBox *OutputVolumeComboBox;
    ctkCollapsibleButton *InterpolationOptionsCollapsibleButton;
    QFormLayout *parametersFormLayout_2;
    QLabel *IsotropicOutputVoxelLabel_2;
    QCheckBox *InterpolationEnabledCheckBox;
    QLabel *InputSpacingScalingConstantLabel;
    ctkDoubleSpinBox *SpacingScalingSpinBox;
    QLabel *IsotropicOutputVoxelLabel;
    QCheckBox *IsotropicCheckbox;
    QLabel *InterpolatorLabel;
    QGridLayout *gridLayout_3;
    QRadioButton *BSRadioButton;
    QRadioButton *NNRadioButton;
    QRadioButton *LinearRadioButton;
    QRadioButton *WSRadioButton;
    QLabel *FillValueLabel;
    ctkDoubleSpinBox *FillValueSpinBox;
    ctkCollapsibleButton *VolumeInformationCollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *InputVolumeInfoGroupBox;
    QGridLayout *gridLayout;
    qMRMLCoordinatesWidget *InputDimensionsWidget;
    qMRMLCoordinatesWidget *InputSpacingWidget;
    QLabel *InputDimensionsLabel;
    QLabel *InputSpacingLabel;
    QGroupBox *OutputVolumeInfoGroupBox;
    QGridLayout *gridLayout_2;
    qMRMLCoordinatesWidget *CroppedDimensionsWidget;
    qMRMLCoordinatesWidget *CroppedSpacingWidget;
    QLabel *CroppedSpacingLabel;
    QLabel *CroppedDimensionsLabel;
    QHBoxLayout *horizontalLayout;
    ctkFittedTextBrowser *InputErrorLabel;
    QPushButton *InputErrorFixButton;
    QPushButton *CropButton;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerCropVolumeModuleWidget)
    {
        if (qSlicerCropVolumeModuleWidget->objectName().isEmpty())
            qSlicerCropVolumeModuleWidget->setObjectName(QString::fromUtf8("qSlicerCropVolumeModuleWidget"));
        qSlicerCropVolumeModuleWidget->resize(583, 792);
        verticalLayout = new QVBoxLayout(qSlicerCropVolumeModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ParameterSetCollapsibleButton = new ctkCollapsibleButton(qSlicerCropVolumeModuleWidget);
        ParameterSetCollapsibleButton->setObjectName(QString::fromUtf8("ParameterSetCollapsibleButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ParameterSetCollapsibleButton->sizePolicy().hasHeightForWidth());
        ParameterSetCollapsibleButton->setSizePolicy(sizePolicy);
        ParameterSetCollapsibleButton->setCollapsedHeight(6);
        parametersFormLayout_3 = new QFormLayout(ParameterSetCollapsibleButton);
        parametersFormLayout_3->setObjectName(QString::fromUtf8("parametersFormLayout_3"));
        parametersFormLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        parametersFormLayout_3->setVerticalSpacing(6);
        parametersFormLayout_3->setContentsMargins(4, 4, 4, 4);
        ParameterNodeLabel = new QLabel(ParameterSetCollapsibleButton);
        ParameterNodeLabel->setObjectName(QString::fromUtf8("ParameterNodeLabel"));

        parametersFormLayout_3->setWidget(0, QFormLayout::LabelRole, ParameterNodeLabel);

        ParametersNodeComboBox = new qMRMLNodeComboBox(ParameterSetCollapsibleButton);
        ParametersNodeComboBox->setObjectName(QString::fromUtf8("ParametersNodeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ParametersNodeComboBox->sizePolicy().hasHeightForWidth());
        ParametersNodeComboBox->setSizePolicy(sizePolicy1);
        ParametersNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLCropVolumeParametersNode"));
        ParametersNodeComboBox->setShowHidden(true);
        ParametersNodeComboBox->setNoneEnabled(true);
        ParametersNodeComboBox->setAddEnabled(true);
        ParametersNodeComboBox->setRenameEnabled(true);

        parametersFormLayout_3->setWidget(0, QFormLayout::FieldRole, ParametersNodeComboBox);


        verticalLayout->addWidget(ParameterSetCollapsibleButton);

        InputOutputCollapsibleButton = new ctkCollapsibleButton(qSlicerCropVolumeModuleWidget);
        InputOutputCollapsibleButton->setObjectName(QString::fromUtf8("InputOutputCollapsibleButton"));
        sizePolicy.setHeightForWidth(InputOutputCollapsibleButton->sizePolicy().hasHeightForWidth());
        InputOutputCollapsibleButton->setSizePolicy(sizePolicy);
        InputOutputCollapsibleButton->setCollapsedHeight(6);
        parametersFormLayout = new QFormLayout(InputOutputCollapsibleButton);
        parametersFormLayout->setObjectName(QString::fromUtf8("parametersFormLayout"));
        parametersFormLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        parametersFormLayout->setVerticalSpacing(6);
        parametersFormLayout->setContentsMargins(4, 4, 4, 4);
        InputVolumeLabel = new QLabel(InputOutputCollapsibleButton);
        InputVolumeLabel->setObjectName(QString::fromUtf8("InputVolumeLabel"));

        parametersFormLayout->setWidget(0, QFormLayout::LabelRole, InputVolumeLabel);

        InputVolumeComboBox = new qMRMLNodeComboBox(InputOutputCollapsibleButton);
        InputVolumeComboBox->setObjectName(QString::fromUtf8("InputVolumeComboBox"));
        sizePolicy1.setHeightForWidth(InputVolumeComboBox->sizePolicy().hasHeightForWidth());
        InputVolumeComboBox->setSizePolicy(sizePolicy1);
        InputVolumeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode"));
        InputVolumeComboBox->setNoneEnabled(false);
        InputVolumeComboBox->setAddEnabled(false);
        InputVolumeComboBox->setRenameEnabled(true);

        parametersFormLayout->setWidget(0, QFormLayout::FieldRole, InputVolumeComboBox);

        InputROILabel = new QLabel(InputOutputCollapsibleButton);
        InputROILabel->setObjectName(QString::fromUtf8("InputROILabel"));

        parametersFormLayout->setWidget(1, QFormLayout::LabelRole, InputROILabel);

        InputROIComboBox = new qMRMLNodeComboBox(InputOutputCollapsibleButton);
        InputROIComboBox->setObjectName(QString::fromUtf8("InputROIComboBox"));
        sizePolicy1.setHeightForWidth(InputROIComboBox->sizePolicy().hasHeightForWidth());
        InputROIComboBox->setSizePolicy(sizePolicy1);
        InputROIComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLMarkupsROINode"));
        InputROIComboBox->setNoneEnabled(false);
        InputROIComboBox->setEditEnabled(true);
        InputROIComboBox->setRenameEnabled(true);

        parametersFormLayout->setWidget(1, QFormLayout::FieldRole, InputROIComboBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        VisibilityButton = new ctkCheckBox(InputOutputCollapsibleButton);
        VisibilityButton->setObjectName(QString::fromUtf8("VisibilityButton"));
        VisibilityButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::On);
        VisibilityButton->setIndicatorIcon(icon);
        VisibilityButton->setIndicatorIconSize(QSize(21, 21));

        horizontalLayout_4->addWidget(VisibilityButton);

        ROIFitPushButton = new QPushButton(InputOutputCollapsibleButton);
        ROIFitPushButton->setObjectName(QString::fromUtf8("ROIFitPushButton"));
        ROIFitPushButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ViewCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        ROIFitPushButton->setIcon(icon1);

        horizontalLayout_4->addWidget(ROIFitPushButton);


        parametersFormLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        OutputVolumeLabel = new QLabel(InputOutputCollapsibleButton);
        OutputVolumeLabel->setObjectName(QString::fromUtf8("OutputVolumeLabel"));

        parametersFormLayout->setWidget(3, QFormLayout::LabelRole, OutputVolumeLabel);

        OutputVolumeComboBox = new qMRMLNodeComboBox(InputOutputCollapsibleButton);
        OutputVolumeComboBox->setObjectName(QString::fromUtf8("OutputVolumeComboBox"));
        sizePolicy1.setHeightForWidth(OutputVolumeComboBox->sizePolicy().hasHeightForWidth());
        OutputVolumeComboBox->setSizePolicy(sizePolicy1);
        OutputVolumeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode") << QString::fromUtf8("vtkMRMLVectorVolumeNode"));
        OutputVolumeComboBox->setNoneEnabled(true);
        OutputVolumeComboBox->setAddEnabled(true);
        OutputVolumeComboBox->setRenameEnabled(true);

        parametersFormLayout->setWidget(3, QFormLayout::FieldRole, OutputVolumeComboBox);


        verticalLayout->addWidget(InputOutputCollapsibleButton);

        InterpolationOptionsCollapsibleButton = new ctkCollapsibleButton(qSlicerCropVolumeModuleWidget);
        InterpolationOptionsCollapsibleButton->setObjectName(QString::fromUtf8("InterpolationOptionsCollapsibleButton"));
        sizePolicy.setHeightForWidth(InterpolationOptionsCollapsibleButton->sizePolicy().hasHeightForWidth());
        InterpolationOptionsCollapsibleButton->setSizePolicy(sizePolicy);
        InterpolationOptionsCollapsibleButton->setCollapsed(false);
        InterpolationOptionsCollapsibleButton->setCollapsedHeight(6);
        parametersFormLayout_2 = new QFormLayout(InterpolationOptionsCollapsibleButton);
        parametersFormLayout_2->setObjectName(QString::fromUtf8("parametersFormLayout_2"));
        parametersFormLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        parametersFormLayout_2->setVerticalSpacing(6);
        parametersFormLayout_2->setContentsMargins(4, 4, 4, 4);
        IsotropicOutputVoxelLabel_2 = new QLabel(InterpolationOptionsCollapsibleButton);
        IsotropicOutputVoxelLabel_2->setObjectName(QString::fromUtf8("IsotropicOutputVoxelLabel_2"));

        parametersFormLayout_2->setWidget(1, QFormLayout::LabelRole, IsotropicOutputVoxelLabel_2);

        InterpolationEnabledCheckBox = new QCheckBox(InterpolationOptionsCollapsibleButton);
        InterpolationEnabledCheckBox->setObjectName(QString::fromUtf8("InterpolationEnabledCheckBox"));
        InterpolationEnabledCheckBox->setChecked(true);
        InterpolationEnabledCheckBox->setTristate(false);

        parametersFormLayout_2->setWidget(1, QFormLayout::FieldRole, InterpolationEnabledCheckBox);

        InputSpacingScalingConstantLabel = new QLabel(InterpolationOptionsCollapsibleButton);
        InputSpacingScalingConstantLabel->setObjectName(QString::fromUtf8("InputSpacingScalingConstantLabel"));

        parametersFormLayout_2->setWidget(2, QFormLayout::LabelRole, InputSpacingScalingConstantLabel);

        SpacingScalingSpinBox = new ctkDoubleSpinBox(InterpolationOptionsCollapsibleButton);
        SpacingScalingSpinBox->setObjectName(QString::fromUtf8("SpacingScalingSpinBox"));
        SpacingScalingSpinBox->setSingleStep(0.100000000000000);
        SpacingScalingSpinBox->setValue(1.000000000000000);

        parametersFormLayout_2->setWidget(2, QFormLayout::FieldRole, SpacingScalingSpinBox);

        IsotropicOutputVoxelLabel = new QLabel(InterpolationOptionsCollapsibleButton);
        IsotropicOutputVoxelLabel->setObjectName(QString::fromUtf8("IsotropicOutputVoxelLabel"));

        parametersFormLayout_2->setWidget(3, QFormLayout::LabelRole, IsotropicOutputVoxelLabel);

        IsotropicCheckbox = new QCheckBox(InterpolationOptionsCollapsibleButton);
        IsotropicCheckbox->setObjectName(QString::fromUtf8("IsotropicCheckbox"));
        IsotropicCheckbox->setChecked(false);
        IsotropicCheckbox->setTristate(false);

        parametersFormLayout_2->setWidget(3, QFormLayout::FieldRole, IsotropicCheckbox);

        InterpolatorLabel = new QLabel(InterpolationOptionsCollapsibleButton);
        InterpolatorLabel->setObjectName(QString::fromUtf8("InterpolatorLabel"));

        parametersFormLayout_2->setWidget(4, QFormLayout::LabelRole, InterpolatorLabel);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        BSRadioButton = new QRadioButton(InterpolationOptionsCollapsibleButton);
        BSRadioButton->setObjectName(QString::fromUtf8("BSRadioButton"));

        gridLayout_3->addWidget(BSRadioButton, 1, 1, 1, 1);

        NNRadioButton = new QRadioButton(InterpolationOptionsCollapsibleButton);
        NNRadioButton->setObjectName(QString::fromUtf8("NNRadioButton"));

        gridLayout_3->addWidget(NNRadioButton, 0, 0, 1, 1);

        LinearRadioButton = new QRadioButton(InterpolationOptionsCollapsibleButton);
        LinearRadioButton->setObjectName(QString::fromUtf8("LinearRadioButton"));

        gridLayout_3->addWidget(LinearRadioButton, 0, 1, 1, 1);

        WSRadioButton = new QRadioButton(InterpolationOptionsCollapsibleButton);
        WSRadioButton->setObjectName(QString::fromUtf8("WSRadioButton"));

        gridLayout_3->addWidget(WSRadioButton, 1, 0, 1, 1);


        parametersFormLayout_2->setLayout(4, QFormLayout::FieldRole, gridLayout_3);

        FillValueLabel = new QLabel(InterpolationOptionsCollapsibleButton);
        FillValueLabel->setObjectName(QString::fromUtf8("FillValueLabel"));

        parametersFormLayout_2->setWidget(0, QFormLayout::LabelRole, FillValueLabel);

        FillValueSpinBox = new ctkDoubleSpinBox(InterpolationOptionsCollapsibleButton);
        FillValueSpinBox->setObjectName(QString::fromUtf8("FillValueSpinBox"));
        FillValueSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue|ctkDoubleSpinBox::InsertDecimals);
        FillValueSpinBox->setMinimum(-65536.000000000000000);
        FillValueSpinBox->setMaximum(65535.000000000000000);
        FillValueSpinBox->setSingleStep(10.000000000000000);
        FillValueSpinBox->setSetMode(ctkDoubleSpinBox::SetAlways);

        parametersFormLayout_2->setWidget(0, QFormLayout::FieldRole, FillValueSpinBox);


        verticalLayout->addWidget(InterpolationOptionsCollapsibleButton);

        VolumeInformationCollapsibleButton = new ctkCollapsibleButton(qSlicerCropVolumeModuleWidget);
        VolumeInformationCollapsibleButton->setObjectName(QString::fromUtf8("VolumeInformationCollapsibleButton"));
        sizePolicy.setHeightForWidth(VolumeInformationCollapsibleButton->sizePolicy().hasHeightForWidth());
        VolumeInformationCollapsibleButton->setSizePolicy(sizePolicy);
        VolumeInformationCollapsibleButton->setCollapsed(true);
        VolumeInformationCollapsibleButton->setCollapsedHeight(6);
        verticalLayout_3 = new QVBoxLayout(VolumeInformationCollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        InputVolumeInfoGroupBox = new QGroupBox(VolumeInformationCollapsibleButton);
        InputVolumeInfoGroupBox->setObjectName(QString::fromUtf8("InputVolumeInfoGroupBox"));
        gridLayout = new QGridLayout(InputVolumeInfoGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        InputDimensionsWidget = new qMRMLCoordinatesWidget(InputVolumeInfoGroupBox);
        InputDimensionsWidget->setObjectName(QString::fromUtf8("InputDimensionsWidget"));
        InputDimensionsWidget->setEnabled(false);
        InputDimensionsWidget->setDecimals(0);
        InputDimensionsWidget->setMinimum(0.000000000000000);
        InputDimensionsWidget->setMaximum(1000000.000000000000000);
        InputDimensionsWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::All);

        gridLayout->addWidget(InputDimensionsWidget, 1, 1, 1, 1);

        InputSpacingWidget = new qMRMLCoordinatesWidget(InputVolumeInfoGroupBox);
        InputSpacingWidget->setObjectName(QString::fromUtf8("InputSpacingWidget"));
        InputSpacingWidget->setEnabled(false);
        InputSpacingWidget->setDecimals(4);
        InputSpacingWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue);
        InputSpacingWidget->setMinimum(0.000000000000000);
        InputSpacingWidget->setMaximum(1000000000.000000000000000);
        InputSpacingWidget->setQuantity(QString::fromUtf8("length"));
        InputSpacingWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::Precision|qMRMLCoordinatesWidget::Prefix|qMRMLCoordinatesWidget::Scaling|qMRMLCoordinatesWidget::Suffix);

        gridLayout->addWidget(InputSpacingWidget, 0, 1, 1, 1);

        InputDimensionsLabel = new QLabel(InputVolumeInfoGroupBox);
        InputDimensionsLabel->setObjectName(QString::fromUtf8("InputDimensionsLabel"));

        gridLayout->addWidget(InputDimensionsLabel, 1, 0, 1, 1);

        InputSpacingLabel = new QLabel(InputVolumeInfoGroupBox);
        InputSpacingLabel->setObjectName(QString::fromUtf8("InputSpacingLabel"));

        gridLayout->addWidget(InputSpacingLabel, 0, 0, 1, 1);


        verticalLayout_3->addWidget(InputVolumeInfoGroupBox);

        OutputVolumeInfoGroupBox = new QGroupBox(VolumeInformationCollapsibleButton);
        OutputVolumeInfoGroupBox->setObjectName(QString::fromUtf8("OutputVolumeInfoGroupBox"));
        gridLayout_2 = new QGridLayout(OutputVolumeInfoGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        CroppedDimensionsWidget = new qMRMLCoordinatesWidget(OutputVolumeInfoGroupBox);
        CroppedDimensionsWidget->setObjectName(QString::fromUtf8("CroppedDimensionsWidget"));
        CroppedDimensionsWidget->setEnabled(false);
        CroppedDimensionsWidget->setDecimals(0);
        CroppedDimensionsWidget->setMinimum(0.000000000000000);
        CroppedDimensionsWidget->setMaximum(1000000.000000000000000);
        CroppedDimensionsWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::All);

        gridLayout_2->addWidget(CroppedDimensionsWidget, 1, 1, 1, 1);

        CroppedSpacingWidget = new qMRMLCoordinatesWidget(OutputVolumeInfoGroupBox);
        CroppedSpacingWidget->setObjectName(QString::fromUtf8("CroppedSpacingWidget"));
        CroppedSpacingWidget->setEnabled(false);
        CroppedSpacingWidget->setDecimals(4);
        CroppedSpacingWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue);
        CroppedSpacingWidget->setMinimum(0.000000000000000);
        CroppedSpacingWidget->setMaximum(1000000000.000000000000000);
        CroppedSpacingWidget->setQuantity(QString::fromUtf8("length"));
        CroppedSpacingWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::Precision|qMRMLCoordinatesWidget::Prefix|qMRMLCoordinatesWidget::Scaling|qMRMLCoordinatesWidget::Suffix);

        gridLayout_2->addWidget(CroppedSpacingWidget, 0, 1, 1, 1);

        CroppedSpacingLabel = new QLabel(OutputVolumeInfoGroupBox);
        CroppedSpacingLabel->setObjectName(QString::fromUtf8("CroppedSpacingLabel"));

        gridLayout_2->addWidget(CroppedSpacingLabel, 0, 0, 1, 1);

        CroppedDimensionsLabel = new QLabel(OutputVolumeInfoGroupBox);
        CroppedDimensionsLabel->setObjectName(QString::fromUtf8("CroppedDimensionsLabel"));

        gridLayout_2->addWidget(CroppedDimensionsLabel, 1, 0, 1, 1);


        verticalLayout_3->addWidget(OutputVolumeInfoGroupBox);


        verticalLayout->addWidget(VolumeInformationCollapsibleButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, -1, 4, -1);
        InputErrorLabel = new ctkFittedTextBrowser(qSlicerCropVolumeModuleWidget);
        InputErrorLabel->setObjectName(QString::fromUtf8("InputErrorLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(InputErrorLabel->sizePolicy().hasHeightForWidth());
        InputErrorLabel->setSizePolicy(sizePolicy2);
        InputErrorLabel->setFrameShape(QFrame::NoFrame);
        InputErrorLabel->setLineWrapMode(QTextEdit::WidgetWidth);

        horizontalLayout->addWidget(InputErrorLabel);

        InputErrorFixButton = new QPushButton(qSlicerCropVolumeModuleWidget);
        InputErrorFixButton->setObjectName(QString::fromUtf8("InputErrorFixButton"));

        horizontalLayout->addWidget(InputErrorFixButton);


        verticalLayout->addLayout(horizontalLayout);

        CropButton = new QPushButton(qSlicerCropVolumeModuleWidget);
        CropButton->setObjectName(QString::fromUtf8("CropButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CropButton->sizePolicy().hasHeightForWidth());
        CropButton->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(CropButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(qSlicerCropVolumeModuleWidget);
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ParametersNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), InputVolumeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), InputROIComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), OutputVolumeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), InputSpacingWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), IsotropicCheckbox, SLOT(setEnabled(bool)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), SpacingScalingSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), NNRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), LinearRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), WSRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(InterpolationEnabledCheckBox, SIGNAL(toggled(bool)), BSRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(InputROIComboBox, SIGNAL(currentNodeChanged(bool)), VisibilityButton, SLOT(setEnabled(bool)));
        QObject::connect(InputROIComboBox, SIGNAL(currentNodeChanged(bool)), ROIFitPushButton, SLOT(setEnabled(bool)));
        QObject::connect(ParametersNodeComboBox, SIGNAL(currentNodeChanged(bool)), InputOutputCollapsibleButton, SLOT(setEnabled(bool)));
        QObject::connect(ParametersNodeComboBox, SIGNAL(currentNodeChanged(bool)), InterpolationOptionsCollapsibleButton, SLOT(setEnabled(bool)));
        QObject::connect(ParametersNodeComboBox, SIGNAL(currentNodeChanged(bool)), VolumeInformationCollapsibleButton, SLOT(setEnabled(bool)));
        QObject::connect(ParametersNodeComboBox, SIGNAL(currentNodeChanged(bool)), CropButton, SLOT(setEnabled(bool)));
        QObject::connect(qSlicerCropVolumeModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), CroppedSpacingWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerCropVolumeModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerCropVolumeModuleWidget)
    {
        qSlicerCropVolumeModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Crop Volume", nullptr));
        ParameterSetCollapsibleButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Crop Volume", nullptr));
        ParameterNodeLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Parameter set:", nullptr));
        InputOutputCollapsibleButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "IO", nullptr));
        InputVolumeLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Input volume:", nullptr));
        InputROILabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Input ROI:", nullptr));
        InputROIComboBox->setBaseName(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Crop Volume ROI", nullptr));
        InputROIComboBox->setNoneDisplay(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Select region of interest", nullptr));
        VisibilityButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Display ROI", nullptr));
        ROIFitPushButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Fit to Volume", nullptr));
        OutputVolumeLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Output volume:", nullptr));
        OutputVolumeComboBox->setBaseName(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Cropped volume", nullptr));
        OutputVolumeComboBox->setNoneDisplay(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Create new volume", nullptr));
        InterpolationOptionsCollapsibleButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Advanced", nullptr));
        IsotropicOutputVoxelLabel_2->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Interpolated cropping:", nullptr));
#if QT_CONFIG(tooltip)
        InterpolationEnabledCheckBox->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Interpolate and pad the input volume to make the output image exactly the size of the ROI, with the requested spacing.", nullptr));
#endif // QT_CONFIG(tooltip)
        InterpolationEnabledCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        InputSpacingScalingConstantLabel->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "The voxel spacing in the output volume will be scaled by this value. Values larger than 1.0 will make the cropped volume lower resolution than the input volume. Values smaller than 1.0 will make the cropped volume higher resolution than the input volume.", nullptr));
#endif // QT_CONFIG(tooltip)
        InputSpacingScalingConstantLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Spacing scale:", nullptr));
#if QT_CONFIG(tooltip)
        SpacingScalingSpinBox->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "The voxel spacing in the output volume will be scaled by this value. Values larger than 1.0 will make the cropped volume lower resolution than the input volume. Values smaller than 1.0 will make the cropped volume higher resolution than the input volume.", nullptr));
#endif // QT_CONFIG(tooltip)
        SpacingScalingSpinBox->setSuffix(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "x", nullptr));
        IsotropicOutputVoxelLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Isotropic spacing:", nullptr));
        IsotropicCheckbox->setText(QString());
        InterpolatorLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Interpolator:", nullptr));
#if QT_CONFIG(tooltip)
        BSRadioButton->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "High quality, slow", nullptr));
#endif // QT_CONFIG(tooltip)
        BSRadioButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "B-spline", nullptr));
#if QT_CONFIG(tooltip)
        NNRadioButton->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Low quality, fastest", nullptr));
#endif // QT_CONFIG(tooltip)
        NNRadioButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Nearest Neighbor", nullptr));
#if QT_CONFIG(tooltip)
        LinearRadioButton->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Medium quality, medium speed", nullptr));
#endif // QT_CONFIG(tooltip)
        LinearRadioButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Linear", nullptr));
#if QT_CONFIG(tooltip)
        WSRadioButton->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "High quality, slow", nullptr));
#endif // QT_CONFIG(tooltip)
        WSRadioButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Windowed Sinc", nullptr));
        FillValueLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Fill value:", nullptr));
#if QT_CONFIG(tooltip)
        FillValueSpinBox->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Voxel values outside the input volume will be filled with this value", nullptr));
#endif // QT_CONFIG(tooltip)
        VolumeInformationCollapsibleButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Volume information", nullptr));
        InputVolumeInfoGroupBox->setTitle(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Input volume", nullptr));
#if QT_CONFIG(tooltip)
        InputDimensionsWidget->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Output volume dimension after cropping", nullptr));
#endif // QT_CONFIG(tooltip)
        InputDimensionsWidget->setProperty("coordinates", QVariant(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "0,0,0", nullptr)));
#if QT_CONFIG(tooltip)
        InputSpacingWidget->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Output volume spacing after cropping", nullptr));
#endif // QT_CONFIG(tooltip)
        InputSpacingWidget->setProperty("coordinates", QVariant(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "0,0,0", nullptr)));
        InputDimensionsLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Dimensions:", nullptr));
        InputSpacingLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Spacing:", nullptr));
        OutputVolumeInfoGroupBox->setTitle(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Cropped volume", nullptr));
#if QT_CONFIG(tooltip)
        CroppedDimensionsWidget->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Output volume dimension after cropping", nullptr));
#endif // QT_CONFIG(tooltip)
        CroppedDimensionsWidget->setProperty("coordinates", QVariant(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "0,0,0", nullptr)));
#if QT_CONFIG(tooltip)
        CroppedSpacingWidget->setToolTip(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Output volume spacing after cropping", nullptr));
#endif // QT_CONFIG(tooltip)
        CroppedSpacingWidget->setProperty("coordinates", QVariant(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "0,0,0", nullptr)));
        CroppedSpacingLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Spacing:", nullptr));
        CroppedDimensionsLabel->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Dimensions:", nullptr));
        InputErrorFixButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Fix", nullptr));
        CropButton->setText(QCoreApplication::translate("qSlicerCropVolumeModuleWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerCropVolumeModuleWidget: public Ui_qSlicerCropVolumeModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERCROPVOLUMEMODULEWIDGET_H
