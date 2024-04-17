/********************************************************************************
** Form generated from reading UI file 'qMRMLTransformDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTRANSFORMDISPLAYNODEWIDGET_H
#define UI_QMRMLTRANSFORMDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkComboBox.h"
#include "ctkRangeWidget.h"
#include "ctkSliderWidget.h"
#include "ctkVTKScalarsToColorsWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLRangeWidget.h"
#include "qMRMLSliderWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLTransformDisplayNodeWidget
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    ctkCollapsibleGroupBox *InteractionCollapsibleGroupBox;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *InteractionVisibleCheckBox;
    QPushButton *UpdateBoundsPushButton;
    QPushButton *ShowInteractionAdvancedOptionsButton;
    QLabel *InteractionVisibleLabel;
    QFrame *InteractiveAdvancedOptionsFrame;
    QFormLayout *formLayout;
    QLabel *InteractiveTranslationLabel;
    QCheckBox *InteractiveTranslationCheckBox;
    QLabel *InteractiveRotationLabel;
    QCheckBox *InteractiveRotationCheckBox;
    QLabel *InteractiveScalingLabel;
    QCheckBox *InteractiveScalingCheckBox;
    ctkCollapsibleGroupBox *VisualizationCollapsibleGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QCheckBox *Visible2dCheckBox;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *GlyphToggle;
    QPushButton *GridToggle;
    QPushButton *ContourToggle;
    QHBoxLayout *horizontalLayout;
    QCheckBox *Visible3dCheckBox;
    QLabel *RegionLabel;
    qMRMLNodeComboBox *RegionNodeComboBox;
    ctkCollapsibleGroupBox *ColorsSection;
    QVBoxLayout *verticalLayout;
    ctkVTKScalarsToColorsWidget *ColorMapWidget;
    ctkCollapsibleGroupBox *AdvancedParameters;
    QVBoxLayout *verticalLayout_3;
    QFrame *GlyphOptions;
    QGridLayout *gridLayout_4;
    QLabel *GlyphSpacingLabel;
    QLabel *label;
    QLabel *label_10;
    qMRMLSliderWidget *GlyphSpacingMm;
    qMRMLRangeWidget *GlyphDisplayRangeMm;
    QLabel *label_2;
    ctkComboBox *GlyphTypeComboBox;
    qMRMLSliderWidget *GlyphScalePercent;
    ctkCollapsibleGroupBox *GlyphSourceOptions;
    QGridLayout *gridLayout_5;
    QLabel *GlyphDiameterMmLabel;
    qMRMLSliderWidget *GlyphDiameterMm;
    QLabel *GlyphShaftDiameterLabel;
    ctkSliderWidget *GlyphShaftDiameterPercent;
    QLabel *GlyphTipLengthLabel;
    ctkSliderWidget *GlyphTipLengthPercent;
    QLabel *GlyphResolutionLabel;
    ctkSliderWidget *GlyphResolution;
    QLabel *GlyphPointsLabel;
    qMRMLNodeComboBox *GlyphPointsNodeComboBox;
    QFrame *GridOptions;
    QGridLayout *gridLayout_3;
    QLabel *GridSpacingLabel;
    qMRMLSliderWidget *GridSpacingMm;
    QLabel *GridScaleLabel;
    ctkSliderWidget *GridScalePercent;
    QLabel *GridLineDiameterLabel;
    qMRMLSliderWidget *GridLineDiameterMm;
    QLabel *label_7;
    qMRMLSliderWidget *GridResolutionMm;
    QLabel *label_8;
    ctkCheckBox *GridShowNonWarped;
    QFrame *ContourOptions;
    QGridLayout *gridLayout;
    QLabel *ContourLevelsLabel;
    QLineEdit *ContourLevelsMm;
    QLabel *ContourDecimationLabel;
    qMRMLSliderWidget *ContourResolutionMm;
    QLabel *label_5;
    ctkSliderWidget *ContourOpacityPercent;
    QCheckBox *VisibleCheckBox;

    void setupUi(qMRMLWidget *qMRMLTransformDisplayNodeWidget)
    {
        if (qMRMLTransformDisplayNodeWidget->objectName().isEmpty())
            qMRMLTransformDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLTransformDisplayNodeWidget"));
        qMRMLTransformDisplayNodeWidget->setEnabled(true);
        qMRMLTransformDisplayNodeWidget->resize(499, 798);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLTransformDisplayNodeWidget->sizePolicy().hasHeightForWidth());
        qMRMLTransformDisplayNodeWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(qMRMLTransformDisplayNodeWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 5, 1, 1, 1);

        InteractionCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLTransformDisplayNodeWidget);
        InteractionCollapsibleGroupBox->setObjectName(QString::fromUtf8("InteractionCollapsibleGroupBox"));
        InteractionCollapsibleGroupBox->setChecked(true);
        InteractionCollapsibleGroupBox->setCollapsed(false);
        gridLayout_7 = new QGridLayout(InteractionCollapsibleGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        InteractionVisibleCheckBox = new QCheckBox(InteractionCollapsibleGroupBox);
        InteractionVisibleCheckBox->setObjectName(QString::fromUtf8("InteractionVisibleCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(InteractionVisibleCheckBox->sizePolicy().hasHeightForWidth());
        InteractionVisibleCheckBox->setSizePolicy(sizePolicy1);
        InteractionVisibleCheckBox->setMinimumSize(QSize(0, 0));
        InteractionVisibleCheckBox->setChecked(false);

        horizontalLayout_3->addWidget(InteractionVisibleCheckBox);

        UpdateBoundsPushButton = new QPushButton(InteractionCollapsibleGroupBox);
        UpdateBoundsPushButton->setObjectName(QString::fromUtf8("UpdateBoundsPushButton"));

        horizontalLayout_3->addWidget(UpdateBoundsPushButton);

        ShowInteractionAdvancedOptionsButton = new QPushButton(InteractionCollapsibleGroupBox);
        ShowInteractionAdvancedOptionsButton->setObjectName(QString::fromUtf8("ShowInteractionAdvancedOptionsButton"));
        ShowInteractionAdvancedOptionsButton->setCheckable(true);

        horizontalLayout_3->addWidget(ShowInteractionAdvancedOptionsButton);


        gridLayout_7->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        InteractionVisibleLabel = new QLabel(InteractionCollapsibleGroupBox);
        InteractionVisibleLabel->setObjectName(QString::fromUtf8("InteractionVisibleLabel"));

        gridLayout_7->addWidget(InteractionVisibleLabel, 0, 0, 1, 1);

        InteractiveAdvancedOptionsFrame = new QFrame(InteractionCollapsibleGroupBox);
        InteractiveAdvancedOptionsFrame->setObjectName(QString::fromUtf8("InteractiveAdvancedOptionsFrame"));
        InteractiveAdvancedOptionsFrame->setFrameShape(QFrame::NoFrame);
        InteractiveAdvancedOptionsFrame->setFrameShadow(QFrame::Raised);
        InteractiveAdvancedOptionsFrame->setLineWidth(0);
        formLayout = new QFormLayout(InteractiveAdvancedOptionsFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(12, 0, 0, 0);
        InteractiveTranslationLabel = new QLabel(InteractiveAdvancedOptionsFrame);
        InteractiveTranslationLabel->setObjectName(QString::fromUtf8("InteractiveTranslationLabel"));
        InteractiveTranslationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, InteractiveTranslationLabel);

        InteractiveTranslationCheckBox = new QCheckBox(InteractiveAdvancedOptionsFrame);
        InteractiveTranslationCheckBox->setObjectName(QString::fromUtf8("InteractiveTranslationCheckBox"));
        InteractiveTranslationCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, InteractiveTranslationCheckBox);

        InteractiveRotationLabel = new QLabel(InteractiveAdvancedOptionsFrame);
        InteractiveRotationLabel->setObjectName(QString::fromUtf8("InteractiveRotationLabel"));
        InteractiveRotationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, InteractiveRotationLabel);

        InteractiveRotationCheckBox = new QCheckBox(InteractiveAdvancedOptionsFrame);
        InteractiveRotationCheckBox->setObjectName(QString::fromUtf8("InteractiveRotationCheckBox"));
        InteractiveRotationCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, InteractiveRotationCheckBox);

        InteractiveScalingLabel = new QLabel(InteractiveAdvancedOptionsFrame);
        InteractiveScalingLabel->setObjectName(QString::fromUtf8("InteractiveScalingLabel"));
        InteractiveScalingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, InteractiveScalingLabel);

        InteractiveScalingCheckBox = new QCheckBox(InteractiveAdvancedOptionsFrame);
        InteractiveScalingCheckBox->setObjectName(QString::fromUtf8("InteractiveScalingCheckBox"));
        InteractiveScalingCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, InteractiveScalingCheckBox);


        gridLayout_7->addWidget(InteractiveAdvancedOptionsFrame, 1, 0, 1, 2);


        gridLayout_6->addWidget(InteractionCollapsibleGroupBox, 0, 0, 1, 3);

        VisualizationCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLTransformDisplayNodeWidget);
        VisualizationCollapsibleGroupBox->setObjectName(QString::fromUtf8("VisualizationCollapsibleGroupBox"));
        gridLayout_2 = new QGridLayout(VisualizationCollapsibleGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(VisualizationCollapsibleGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        Visible2dCheckBox = new QCheckBox(VisualizationCollapsibleGroupBox);
        Visible2dCheckBox->setObjectName(QString::fromUtf8("Visible2dCheckBox"));
        Visible2dCheckBox->setChecked(true);

        gridLayout_2->addWidget(Visible2dCheckBox, 1, 1, 1, 1);

        label_3 = new QLabel(VisualizationCollapsibleGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(VisualizationCollapsibleGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        GlyphToggle = new QPushButton(VisualizationCollapsibleGroupBox);
        GlyphToggle->setObjectName(QString::fromUtf8("GlyphToggle"));
        GlyphToggle->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GlyphToggle->sizePolicy().hasHeightForWidth());
        GlyphToggle->setSizePolicy(sizePolicy2);
        GlyphToggle->setMinimumSize(QSize(0, 60));
        GlyphToggle->setMaximumSize(QSize(16777215, 16777215));
        GlyphToggle->setFocusPolicy(Qt::StrongFocus);
        GlyphToggle->setLayoutDirection(Qt::LeftToRight);
        GlyphToggle->setAutoFillBackground(false);
        GlyphToggle->setInputMethodHints(Qt::ImhNone);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/GlyphIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GlyphToggle->setIcon(icon);
        GlyphToggle->setIconSize(QSize(48, 48));
#if QT_CONFIG(shortcut)
        GlyphToggle->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        GlyphToggle->setCheckable(true);
        GlyphToggle->setChecked(true);
        GlyphToggle->setAutoExclusive(true);

        horizontalLayout_2->addWidget(GlyphToggle);

        GridToggle = new QPushButton(VisualizationCollapsibleGroupBox);
        GridToggle->setObjectName(QString::fromUtf8("GridToggle"));
        sizePolicy2.setHeightForWidth(GridToggle->sizePolicy().hasHeightForWidth());
        GridToggle->setSizePolicy(sizePolicy2);
        GridToggle->setMinimumSize(QSize(0, 60));
        GridToggle->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/GridIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GridToggle->setIcon(icon1);
        GridToggle->setIconSize(QSize(48, 48));
        GridToggle->setCheckable(true);
        GridToggle->setAutoExclusive(true);

        horizontalLayout_2->addWidget(GridToggle);

        ContourToggle = new QPushButton(VisualizationCollapsibleGroupBox);
        ContourToggle->setObjectName(QString::fromUtf8("ContourToggle"));
        ContourToggle->setEnabled(true);
        sizePolicy2.setHeightForWidth(ContourToggle->sizePolicy().hasHeightForWidth());
        ContourToggle->setSizePolicy(sizePolicy2);
        ContourToggle->setMinimumSize(QSize(0, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/ContourIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ContourToggle->setIcon(icon2);
        ContourToggle->setIconSize(QSize(48, 48));
        ContourToggle->setCheckable(true);
        ContourToggle->setAutoExclusive(true);

        horizontalLayout_2->addWidget(ContourToggle);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Visible3dCheckBox = new QCheckBox(VisualizationCollapsibleGroupBox);
        Visible3dCheckBox->setObjectName(QString::fromUtf8("Visible3dCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Visible3dCheckBox->sizePolicy().hasHeightForWidth());
        Visible3dCheckBox->setSizePolicy(sizePolicy3);
        Visible3dCheckBox->setChecked(true);

        horizontalLayout->addWidget(Visible3dCheckBox);

        RegionLabel = new QLabel(VisualizationCollapsibleGroupBox);
        RegionLabel->setObjectName(QString::fromUtf8("RegionLabel"));

        horizontalLayout->addWidget(RegionLabel);

        RegionNodeComboBox = new qMRMLNodeComboBox(VisualizationCollapsibleGroupBox);
        RegionNodeComboBox->setObjectName(QString::fromUtf8("RegionNodeComboBox"));
        RegionNodeComboBox->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(9);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(RegionNodeComboBox->sizePolicy().hasHeightForWidth());
        RegionNodeComboBox->setSizePolicy(sizePolicy4);
        RegionNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSliceNode") << QString::fromUtf8("vtkMRMLModelNode") << QString::fromUtf8("vtkMRMLVolumeNode") << QString::fromUtf8("vtkMRMLMarkupsROINode") << QString::fromUtf8("vtkMRMLMarkupsPlaneNode"));
        RegionNodeComboBox->setNoneEnabled(true);
        RegionNodeComboBox->setAddEnabled(false);
        RegionNodeComboBox->setRemoveEnabled(true);
        RegionNodeComboBox->setEditEnabled(true);
        RegionNodeComboBox->setRenameEnabled(true);

        horizontalLayout->addWidget(RegionNodeComboBox);


        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        ColorsSection = new ctkCollapsibleGroupBox(VisualizationCollapsibleGroupBox);
        ColorsSection->setObjectName(QString::fromUtf8("ColorsSection"));
        ColorsSection->setChecked(false);
        verticalLayout = new QVBoxLayout(ColorsSection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ColorMapWidget = new ctkVTKScalarsToColorsWidget(ColorsSection);
        ColorMapWidget->setObjectName(QString::fromUtf8("ColorMapWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ColorMapWidget->sizePolicy().hasHeightForWidth());
        ColorMapWidget->setSizePolicy(sizePolicy5);
        ColorMapWidget->setMinimumSize(QSize(0, 80));
        ColorMapWidget->setVerticalSliderVisible(false);

        verticalLayout->addWidget(ColorMapWidget);


        gridLayout_2->addWidget(ColorsSection, 4, 0, 1, 2);

        AdvancedParameters = new ctkCollapsibleGroupBox(VisualizationCollapsibleGroupBox);
        AdvancedParameters->setObjectName(QString::fromUtf8("AdvancedParameters"));
        verticalLayout_3 = new QVBoxLayout(AdvancedParameters);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        GlyphOptions = new QFrame(AdvancedParameters);
        GlyphOptions->setObjectName(QString::fromUtf8("GlyphOptions"));
        GlyphOptions->setFrameShape(QFrame::NoFrame);
        GlyphOptions->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(GlyphOptions);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        GlyphSpacingLabel = new QLabel(GlyphOptions);
        GlyphSpacingLabel->setObjectName(QString::fromUtf8("GlyphSpacingLabel"));

        gridLayout_4->addWidget(GlyphSpacingLabel, 1, 0, 1, 1);

        label = new QLabel(GlyphOptions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        label_10 = new QLabel(GlyphOptions);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 3, 0, 1, 1);

        GlyphSpacingMm = new qMRMLSliderWidget(GlyphOptions);
        GlyphSpacingMm->setObjectName(QString::fromUtf8("GlyphSpacingMm"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(GlyphSpacingMm->sizePolicy().hasHeightForWidth());
        GlyphSpacingMm->setSizePolicy(sizePolicy6);
        GlyphSpacingMm->setDecimals(0);
        GlyphSpacingMm->setSingleStep(1.000000000000000);
        GlyphSpacingMm->setPageStep(25.000000000000000);
        GlyphSpacingMm->setMinimum(1.000000000000000);
        GlyphSpacingMm->setMaximum(100.000000000000000);
        GlyphSpacingMm->setValue(10.000000000000000);
        GlyphSpacingMm->setQuantity(QString::fromUtf8("length"));
        GlyphSpacingMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout_4->addWidget(GlyphSpacingMm, 1, 1, 1, 2);

        GlyphDisplayRangeMm = new qMRMLRangeWidget(GlyphOptions);
        GlyphDisplayRangeMm->setObjectName(QString::fromUtf8("GlyphDisplayRangeMm"));
        GlyphDisplayRangeMm->setSingleStep(0.100000000000000);
        GlyphDisplayRangeMm->setMaximum(100.000000000000000);
        GlyphDisplayRangeMm->setMaximumValue(100.000000000000000);

        gridLayout_4->addWidget(GlyphDisplayRangeMm, 3, 1, 1, 2);

        label_2 = new QLabel(GlyphOptions);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        GlyphTypeComboBox = new ctkComboBox(GlyphOptions);
        GlyphTypeComboBox->addItem(QString());
        GlyphTypeComboBox->addItem(QString());
        GlyphTypeComboBox->addItem(QString());
        GlyphTypeComboBox->setObjectName(QString::fromUtf8("GlyphTypeComboBox"));
        sizePolicy6.setHeightForWidth(GlyphTypeComboBox->sizePolicy().hasHeightForWidth());
        GlyphTypeComboBox->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(GlyphTypeComboBox, 4, 1, 1, 2);

        GlyphScalePercent = new qMRMLSliderWidget(GlyphOptions);
        GlyphScalePercent->setObjectName(QString::fromUtf8("GlyphScalePercent"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(GlyphScalePercent->sizePolicy().hasHeightForWidth());
        GlyphScalePercent->setSizePolicy(sizePolicy7);
        GlyphScalePercent->setDecimals(0);
        GlyphScalePercent->setSingleStep(1.000000000000000);
        GlyphScalePercent->setPageStep(10.000000000000000);
        GlyphScalePercent->setMaximum(1000.000000000000000);
        GlyphScalePercent->setValue(100.000000000000000);

        gridLayout_4->addWidget(GlyphScalePercent, 2, 1, 1, 2);

        GlyphSourceOptions = new ctkCollapsibleGroupBox(GlyphOptions);
        GlyphSourceOptions->setObjectName(QString::fromUtf8("GlyphSourceOptions"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(GlyphSourceOptions->sizePolicy().hasHeightForWidth());
        GlyphSourceOptions->setSizePolicy(sizePolicy8);
        GlyphSourceOptions->setCheckable(true);
        GlyphSourceOptions->setChecked(false);
        GlyphSourceOptions->setCollapsed(true);
        gridLayout_5 = new QGridLayout(GlyphSourceOptions);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        GlyphDiameterMmLabel = new QLabel(GlyphSourceOptions);
        GlyphDiameterMmLabel->setObjectName(QString::fromUtf8("GlyphDiameterMmLabel"));

        gridLayout_5->addWidget(GlyphDiameterMmLabel, 0, 0, 1, 1);

        GlyphDiameterMm = new qMRMLSliderWidget(GlyphSourceOptions);
        GlyphDiameterMm->setObjectName(QString::fromUtf8("GlyphDiameterMm"));
        GlyphDiameterMm->setDecimals(0);
        GlyphDiameterMm->setSingleStep(1.000000000000000);
        GlyphDiameterMm->setPageStep(2.000000000000000);
        GlyphDiameterMm->setMaximum(15.000000000000000);
        GlyphDiameterMm->setValue(5.000000000000000);
        GlyphDiameterMm->setQuantity(QString::fromUtf8("length"));
        GlyphDiameterMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout_5->addWidget(GlyphDiameterMm, 0, 1, 1, 1);

        GlyphShaftDiameterLabel = new QLabel(GlyphSourceOptions);
        GlyphShaftDiameterLabel->setObjectName(QString::fromUtf8("GlyphShaftDiameterLabel"));

        gridLayout_5->addWidget(GlyphShaftDiameterLabel, 1, 0, 1, 1);

        GlyphShaftDiameterPercent = new ctkSliderWidget(GlyphSourceOptions);
        GlyphShaftDiameterPercent->setObjectName(QString::fromUtf8("GlyphShaftDiameterPercent"));
        GlyphShaftDiameterPercent->setSingleStep(1.000000000000000);
        GlyphShaftDiameterPercent->setPageStep(10.000000000000000);
        GlyphShaftDiameterPercent->setMaximum(100.000000000000000);
        GlyphShaftDiameterPercent->setValue(20.000000000000000);

        gridLayout_5->addWidget(GlyphShaftDiameterPercent, 1, 1, 1, 1);

        GlyphTipLengthLabel = new QLabel(GlyphSourceOptions);
        GlyphTipLengthLabel->setObjectName(QString::fromUtf8("GlyphTipLengthLabel"));

        gridLayout_5->addWidget(GlyphTipLengthLabel, 2, 0, 1, 1);

        GlyphTipLengthPercent = new ctkSliderWidget(GlyphSourceOptions);
        GlyphTipLengthPercent->setObjectName(QString::fromUtf8("GlyphTipLengthPercent"));
        GlyphTipLengthPercent->setDecimals(0);
        GlyphTipLengthPercent->setSingleStep(1.000000000000000);
        GlyphTipLengthPercent->setPageStep(10.000000000000000);
        GlyphTipLengthPercent->setMaximum(100.000000000000000);
        GlyphTipLengthPercent->setValue(30.000000000000000);

        gridLayout_5->addWidget(GlyphTipLengthPercent, 2, 1, 1, 1);

        GlyphResolutionLabel = new QLabel(GlyphSourceOptions);
        GlyphResolutionLabel->setObjectName(QString::fromUtf8("GlyphResolutionLabel"));

        gridLayout_5->addWidget(GlyphResolutionLabel, 3, 0, 1, 1);

        GlyphResolution = new ctkSliderWidget(GlyphSourceOptions);
        GlyphResolution->setObjectName(QString::fromUtf8("GlyphResolution"));
        GlyphResolution->setDecimals(0);
        GlyphResolution->setSingleStep(1.000000000000000);
        GlyphResolution->setPageStep(1.000000000000000);
        GlyphResolution->setMinimum(4.000000000000000);
        GlyphResolution->setMaximum(50.000000000000000);
        GlyphResolution->setValue(6.000000000000000);

        gridLayout_5->addWidget(GlyphResolution, 3, 1, 1, 1);


        gridLayout_4->addWidget(GlyphSourceOptions, 5, 0, 1, 3);

        GlyphPointsLabel = new QLabel(GlyphOptions);
        GlyphPointsLabel->setObjectName(QString::fromUtf8("GlyphPointsLabel"));

        gridLayout_4->addWidget(GlyphPointsLabel, 0, 0, 1, 1);

        GlyphPointsNodeComboBox = new qMRMLNodeComboBox(GlyphOptions);
        GlyphPointsNodeComboBox->setObjectName(QString::fromUtf8("GlyphPointsNodeComboBox"));
        GlyphPointsNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLMarkupsNode"));
        GlyphPointsNodeComboBox->setNoneEnabled(true);
        GlyphPointsNodeComboBox->setAddEnabled(false);
        GlyphPointsNodeComboBox->setRenameEnabled(true);

        gridLayout_4->addWidget(GlyphPointsNodeComboBox, 0, 1, 1, 2);


        verticalLayout_3->addWidget(GlyphOptions);

        GridOptions = new QFrame(AdvancedParameters);
        GridOptions->setObjectName(QString::fromUtf8("GridOptions"));
        GridOptions->setFrameShape(QFrame::NoFrame);
        GridOptions->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(GridOptions);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        GridSpacingLabel = new QLabel(GridOptions);
        GridSpacingLabel->setObjectName(QString::fromUtf8("GridSpacingLabel"));

        gridLayout_3->addWidget(GridSpacingLabel, 0, 0, 1, 1);

        GridSpacingMm = new qMRMLSliderWidget(GridOptions);
        GridSpacingMm->setObjectName(QString::fromUtf8("GridSpacingMm"));
        sizePolicy6.setHeightForWidth(GridSpacingMm->sizePolicy().hasHeightForWidth());
        GridSpacingMm->setSizePolicy(sizePolicy6);
        GridSpacingMm->setDecimals(1);
        GridSpacingMm->setSingleStep(0.500000000000000);
        GridSpacingMm->setPageStep(25.000000000000000);
        GridSpacingMm->setMinimum(1.000000000000000);
        GridSpacingMm->setMaximum(100.000000000000000);
        GridSpacingMm->setValue(10.000000000000000);
        GridSpacingMm->setQuantity(QString::fromUtf8("length"));
        GridSpacingMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout_3->addWidget(GridSpacingMm, 0, 1, 1, 1);

        GridScaleLabel = new QLabel(GridOptions);
        GridScaleLabel->setObjectName(QString::fromUtf8("GridScaleLabel"));

        gridLayout_3->addWidget(GridScaleLabel, 1, 0, 1, 1);

        GridScalePercent = new ctkSliderWidget(GridOptions);
        GridScalePercent->setObjectName(QString::fromUtf8("GridScalePercent"));
        sizePolicy6.setHeightForWidth(GridScalePercent->sizePolicy().hasHeightForWidth());
        GridScalePercent->setSizePolicy(sizePolicy6);
        GridScalePercent->setDecimals(1);
        GridScalePercent->setSingleStep(1.000000000000000);
        GridScalePercent->setPageStep(10.000000000000000);
        GridScalePercent->setMaximum(1000.000000000000000);
        GridScalePercent->setValue(100.000000000000000);

        gridLayout_3->addWidget(GridScalePercent, 1, 1, 1, 1);

        GridLineDiameterLabel = new QLabel(GridOptions);
        GridLineDiameterLabel->setObjectName(QString::fromUtf8("GridLineDiameterLabel"));

        gridLayout_3->addWidget(GridLineDiameterLabel, 3, 0, 1, 1);

        GridLineDiameterMm = new qMRMLSliderWidget(GridOptions);
        GridLineDiameterMm->setObjectName(QString::fromUtf8("GridLineDiameterMm"));
        GridLineDiameterMm->setDecimals(1);
        GridLineDiameterMm->setSingleStep(0.500000000000000);
        GridLineDiameterMm->setPageStep(1.000000000000000);
        GridLineDiameterMm->setMinimum(0.000000000000000);
        GridLineDiameterMm->setMaximum(10.000000000000000);
        GridLineDiameterMm->setValue(1.000000000000000);
        GridLineDiameterMm->setQuantity(QString::fromUtf8("length"));
        GridLineDiameterMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout_3->addWidget(GridLineDiameterMm, 3, 1, 1, 1);

        label_7 = new QLabel(GridOptions);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 4, 0, 1, 1);

        GridResolutionMm = new qMRMLSliderWidget(GridOptions);
        GridResolutionMm->setObjectName(QString::fromUtf8("GridResolutionMm"));
        GridResolutionMm->setDecimals(1);
        GridResolutionMm->setSingleStep(0.500000000000000);
        GridResolutionMm->setPageStep(1.000000000000000);
        GridResolutionMm->setMinimum(1.000000000000000);
        GridResolutionMm->setMaximum(20.000000000000000);
        GridResolutionMm->setValue(5.000000000000000);
        GridResolutionMm->setQuantity(QString::fromUtf8("length"));
        GridResolutionMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout_3->addWidget(GridResolutionMm, 4, 1, 1, 1);

        label_8 = new QLabel(GridOptions);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        GridShowNonWarped = new ctkCheckBox(GridOptions);
        GridShowNonWarped->setObjectName(QString::fromUtf8("GridShowNonWarped"));

        gridLayout_3->addWidget(GridShowNonWarped, 2, 1, 1, 1);


        verticalLayout_3->addWidget(GridOptions);

        ContourOptions = new QFrame(AdvancedParameters);
        ContourOptions->setObjectName(QString::fromUtf8("ContourOptions"));
        ContourOptions->setEnabled(true);
        ContourOptions->setFrameShape(QFrame::NoFrame);
        ContourOptions->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(ContourOptions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ContourLevelsLabel = new QLabel(ContourOptions);
        ContourLevelsLabel->setObjectName(QString::fromUtf8("ContourLevelsLabel"));

        gridLayout->addWidget(ContourLevelsLabel, 0, 0, 1, 1);

        ContourLevelsMm = new QLineEdit(ContourOptions);
        ContourLevelsMm->setObjectName(QString::fromUtf8("ContourLevelsMm"));
        ContourLevelsMm->setInputMethodHints(Qt::ImhNone);
        ContourLevelsMm->setMaxLength(100);

        gridLayout->addWidget(ContourLevelsMm, 0, 1, 1, 1);

        ContourDecimationLabel = new QLabel(ContourOptions);
        ContourDecimationLabel->setObjectName(QString::fromUtf8("ContourDecimationLabel"));

        gridLayout->addWidget(ContourDecimationLabel, 1, 0, 1, 1);

        ContourResolutionMm = new qMRMLSliderWidget(ContourOptions);
        ContourResolutionMm->setObjectName(QString::fromUtf8("ContourResolutionMm"));
        sizePolicy6.setHeightForWidth(ContourResolutionMm->sizePolicy().hasHeightForWidth());
        ContourResolutionMm->setSizePolicy(sizePolicy6);
        ContourResolutionMm->setDecimals(1);
        ContourResolutionMm->setSingleStep(0.500000000000000);
        ContourResolutionMm->setPageStep(1.000000000000000);
        ContourResolutionMm->setMinimum(0.100000000000000);
        ContourResolutionMm->setMaximum(20.000000000000000);
        ContourResolutionMm->setValue(5.000000000000000);
        ContourResolutionMm->setQuantity(QString::fromUtf8("length"));
        ContourResolutionMm->setUnitAwareProperties(qMRMLSliderWidget::Precision|qMRMLSliderWidget::Prefix|qMRMLSliderWidget::Scaling|qMRMLSliderWidget::Suffix);

        gridLayout->addWidget(ContourResolutionMm, 1, 1, 1, 1);

        label_5 = new QLabel(ContourOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        ContourOpacityPercent = new ctkSliderWidget(ContourOptions);
        ContourOpacityPercent->setObjectName(QString::fromUtf8("ContourOpacityPercent"));
        ContourOpacityPercent->setDecimals(0);
        ContourOpacityPercent->setMaximum(100.000000000000000);
        ContourOpacityPercent->setValue(100.000000000000000);

        gridLayout->addWidget(ContourOpacityPercent, 2, 1, 1, 1);


        verticalLayout_3->addWidget(ContourOptions);


        gridLayout_2->addWidget(AdvancedParameters, 5, 0, 1, 2);

        VisibleCheckBox = new QCheckBox(VisualizationCollapsibleGroupBox);
        VisibleCheckBox->setObjectName(QString::fromUtf8("VisibleCheckBox"));

        gridLayout_2->addWidget(VisibleCheckBox, 0, 1, 1, 1);


        gridLayout_6->addWidget(VisualizationCollapsibleGroupBox, 1, 0, 1, 3);


        retranslateUi(qMRMLTransformDisplayNodeWidget);
        QObject::connect(GlyphToggle, SIGNAL(toggled(bool)), GlyphOptions, SLOT(show()));
        QObject::connect(GlyphToggle, SIGNAL(toggled(bool)), GridOptions, SLOT(hide()));
        QObject::connect(GlyphToggle, SIGNAL(toggled(bool)), ContourOptions, SLOT(hide()));
        QObject::connect(GridToggle, SIGNAL(toggled(bool)), GlyphOptions, SLOT(hide()));
        QObject::connect(GridToggle, SIGNAL(toggled(bool)), GridOptions, SLOT(show()));
        QObject::connect(GridToggle, SIGNAL(toggled(bool)), ContourOptions, SLOT(hide()));
        QObject::connect(ContourToggle, SIGNAL(toggled(bool)), GlyphOptions, SLOT(hide()));
        QObject::connect(ContourToggle, SIGNAL(toggled(bool)), GridOptions, SLOT(hide()));
        QObject::connect(ContourToggle, SIGNAL(toggled(bool)), ContourOptions, SLOT(show()));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), RegionNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GlyphSpacingMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GridSpacingMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GridLineDiameterMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GridResolutionMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ContourResolutionMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GlyphDiameterMm, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(GlyphToggle, SIGNAL(toggled(bool)), GlyphPointsLabel, SLOT(show()));
        QObject::connect(GlyphToggle, SIGNAL(toggled(bool)), GlyphPointsNodeComboBox, SLOT(show()));
        QObject::connect(qMRMLTransformDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GlyphPointsNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(ShowInteractionAdvancedOptionsButton, SIGNAL(toggled(bool)), InteractiveAdvancedOptionsFrame, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qMRMLTransformDisplayNodeWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLTransformDisplayNodeWidget)
    {
        qMRMLTransformDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "qMRMLTransformDisplayNodeWidget", nullptr));
#if QT_CONFIG(tooltip)
        qMRMLTransformDisplayNodeWidget->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Whether the transform widget can be translated.", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractionCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Interaction", nullptr));
#if QT_CONFIG(tooltip)
        InteractionVisibleCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show/Hide the transform widget in the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractionVisibleCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        UpdateBoundsPushButton->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "<html><head/><body><p>Update the bounds of the transform widget.</p><p>The transform will update its bounds to match the bounding box of all the nodes under it (if any).</p><p>Otherwise, the widget will resize itself to the default interaction size.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        UpdateBoundsPushButton->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Update bounds", nullptr));
        ShowInteractionAdvancedOptionsButton->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "More options...", nullptr));
        InteractionVisibleLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visibility in 3D view: ", nullptr));
        InteractiveTranslationLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable translation: ", nullptr));
#if QT_CONFIG(tooltip)
        InteractiveTranslationCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable scaling by manpulating 3D widget (shift +left click and drag the handle at the center of widget face, or left click and drag the center handle)", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractiveTranslationCheckBox->setText(QString());
        InteractiveRotationLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable rotation: ", nullptr));
#if QT_CONFIG(tooltip)
        InteractiveRotationCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable translating by manpulating 3D widget (left click and drag anywhere on the widget face)", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractiveRotationCheckBox->setText(QString());
        InteractiveScalingLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable scaling: ", nullptr));
#if QT_CONFIG(tooltip)
        InteractiveScalingCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Enable scaling by manpulating 3D widget (left click and drag the handle at the center of widget face)", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractiveScalingCheckBox->setText(QString());
        VisualizationCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visualization", nullptr));
        label_6->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visibility:", nullptr));
#if QT_CONFIG(tooltip)
        Visible2dCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show transform in the slice views", nullptr));
#endif // QT_CONFIG(tooltip)
        Visible2dCheckBox->setText(QString());
        label_3->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visibility in slice view:", nullptr));
        label_4->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visibility in 3D view:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphToggle->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visualize transform using glyphs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        GlyphToggle->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        GlyphToggle->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Glyph", nullptr));
#if QT_CONFIG(tooltip)
        GridToggle->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visualize transform using a warped grid", nullptr));
#endif // QT_CONFIG(tooltip)
        GridToggle->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        ContourToggle->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visualize transform by isoline/isosurface contours of the displacement magnitude", nullptr));
#endif // QT_CONFIG(tooltip)
        ContourToggle->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Contour", nullptr));
#if QT_CONFIG(tooltip)
        Visible3dCheckBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show transform in the 3D views", nullptr));
#endif // QT_CONFIG(tooltip)
        Visible3dCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        RegionLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Reference image for visualizing transform nodes (will only use size, orientation and position)", nullptr));
#endif // QT_CONFIG(tooltip)
        RegionLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Region:", nullptr));
#if QT_CONFIG(tooltip)
        RegionNodeComboBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Region for visualizing transform nodes (will only use size, orientation and position)", nullptr));
#endif // QT_CONFIG(tooltip)
        RegionNodeComboBox->setBaseName(QString());
        RegionNodeComboBox->setNoneDisplay(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Select a node", nullptr));
        ColorsSection->setTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Colors", nullptr));
        AdvancedParameters->setTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        GlyphSpacingLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between the glyph points", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphSpacingLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Spacing:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Percentage of displacement usef for setting the glyph size. 100% means the glyph size equals the actual displacement.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Scale factor:", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Glyphs are shown if the displacement magnitude is within this range", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Visible range:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphSpacingMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between the glyph points", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GlyphDisplayRangeMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Only those glyphs are shown that have displacement magnitude within this range", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphDisplayRangeMm->setSuffix(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Choose a glyph type to use", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Glyph type:", nullptr));
        GlyphTypeComboBox->setItemText(0, QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Arrow", nullptr));
        GlyphTypeComboBox->setItemText(1, QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Cone", nullptr));
        GlyphTypeComboBox->setItemText(2, QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Sphere", nullptr));

#if QT_CONFIG(tooltip)
        GlyphTypeComboBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Choose a glyph type to use", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphTypeComboBox->setDefaultText(QString());
#if QT_CONFIG(tooltip)
        GlyphScalePercent->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Percentage of displacement used for setting the glyph size. 100% means the glyph size equals the actual displacement. Does not affect coloring and visible range.", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphScalePercent->setSuffix(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "%", nullptr));
        GlyphSourceOptions->setTitle(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "3D glyph settings", nullptr));
#if QT_CONFIG(tooltip)
        GlyphDiameterMmLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Adjust radius of base of arrow tip", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphDiameterMmLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Diameter:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphDiameterMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Base diameter of the widget", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GlyphShaftDiameterLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Adjust radius of arrow shaft", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphShaftDiameterLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Shaft diameter:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphShaftDiameterPercent->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Diameter of the arrow shaft relative to the base diameter", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphShaftDiameterPercent->setSuffix(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "%", nullptr));
#if QT_CONFIG(tooltip)
        GlyphTipLengthLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Adjust how much of the tip the arrow will consist of as a decimal percentage", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphTipLengthLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Tip length:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphTipLengthPercent->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Length of the arrow tip  as percentage of displacement", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphTipLengthPercent->setSuffix(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "%", nullptr));
#if QT_CONFIG(tooltip)
        GlyphResolutionLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Adjust resolution of the glyph (higher value generates smoother curved lines but visualization may be slower)", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphResolutionLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Resolution:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphResolution->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Adjust resolution of arrow (lower is less detailed but rendered faster)", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphPointsLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Source points:", nullptr));
#if QT_CONFIG(tooltip)
        GlyphPointsNodeComboBox->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Markups node that defines glyph starting positions. If specified then 3D view 'Region' is ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphPointsNodeComboBox->setNoneDisplay(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Entire region", nullptr));
#if QT_CONFIG(tooltip)
        GridSpacingLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between the gridlines", nullptr));
#endif // QT_CONFIG(tooltip)
        GridSpacingLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Spacing:", nullptr));
#if QT_CONFIG(tooltip)
        GridSpacingMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between the gridlines", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        GridScaleLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Percentage of displacement applied to the gridpoints. 100% means that the grid is deformed with the actual displacement.", nullptr));
#endif // QT_CONFIG(tooltip)
        GridScaleLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Scale factor:", nullptr));
#if QT_CONFIG(tooltip)
        GridScalePercent->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Percentage of displacement applied to the gridpoints. 100% means that the grid is deformed with the actual displacement.", nullptr));
#endif // QT_CONFIG(tooltip)
        GridScalePercent->setSuffix(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "%", nullptr));
#if QT_CONFIG(tooltip)
        GridLineDiameterLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Thickness of the gridlines in the 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
        GridLineDiameterLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "3D gridline diameter:", nullptr));
#if QT_CONFIG(tooltip)
        GridLineDiameterMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Thickness of the gridlines in the 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between sample points along the gridlines. Lower values result in gridlines that follow more closely the actual displacement vectors, but require more computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Resolution:", nullptr));
#if QT_CONFIG(tooltip)
        GridResolutionMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Distance between sample points along the gridlines. Lower values result in gridlines that follow more closely the actual displacement vectors, but require more computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show non-warped grid in the slice view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show original grid:", nullptr));
#if QT_CONFIG(tooltip)
        GridShowNonWarped->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Show non-warped grid in the slice view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ContourLevelsLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Values defining the isolines and isosurfaces to contour. Values are separated by spaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        ContourLevelsLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Levels (mm):", nullptr));
#if QT_CONFIG(tooltip)
        ContourLevelsMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Values defining the isolines and isosurfaces to contour. Values are separated by spaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        ContourLevelsMm->setInputMask(QString());
        ContourLevelsMm->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "1 2 3 4", nullptr));
#if QT_CONFIG(tooltip)
        ContourDecimationLabel->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Sampling distance for discretizing the displacement field. Lower values result in more accurate contours, but require more computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
        ContourDecimationLabel->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Resolution:", nullptr));
#if QT_CONFIG(tooltip)
        ContourResolutionMm->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Sampling distance for discretizing the displacement field. Lower values result in more accurate contours, but require more computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Opacity of the contour isosurfaces in the 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "3D opacity:", nullptr));
#if QT_CONFIG(tooltip)
        ContourOpacityPercent->setToolTip(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "Opacity of the contour isosurfaces in the 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
        ContourOpacityPercent->setSuffix(QCoreApplication::translate("qMRMLTransformDisplayNodeWidget", "%", nullptr));
        VisibleCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLTransformDisplayNodeWidget: public Ui_qMRMLTransformDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTRANSFORMDISPLAYNODEWIDGET_H
