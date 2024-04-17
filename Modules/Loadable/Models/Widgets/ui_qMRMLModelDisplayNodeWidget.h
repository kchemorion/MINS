/********************************************************************************
** Form generated from reading UI file 'qMRMLModelDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMODELDISPLAYNODEWIDGET_H
#define UI_QMRMLMODELDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "ctkCollapsibleGroupBox.h"
#include "ctkColorPickerButton.h"
#include "ctkDoubleSpinBox.h"
#include "ctkMaterialPropertyWidget.h"
#include "ctkSliderWidget.h"
#include "ctkVTKSurfaceMaterialPropertyWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLScalarsDisplayWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLModelDisplayNodeWidget
{
public:
    QGridLayout *gridLayout_2;
    ctkCollapsibleGroupBox *RepresentationCollapsibleGroupBox;
    QFormLayout *formLayout_4;
    QLabel *RepresentationLabel;
    QComboBox *RepresentationComboBox;
    QLabel *CullingLabel;
    QComboBox *ShowFacesComboBox;
    QLabel *ClippingLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ClippingCheckBox;
    QPushButton *ConfigureClippingPushButton;
    QSpacerItem *horizontalSpacer;
    ctkCollapsibleGroupBox *Advanced3dCollapsibleGroupBox;
    QFormLayout *formLayout_5;
    QLabel *PointSizeLabel;
    ctkSliderWidget *PointSizeSliderWidget;
    QLabel *LineWidthLabel;
    ctkSliderWidget *LineWidthSliderWidget;
    QLabel *EdgeColorLabel;
    ctkColorPickerButton *EdgeColorPickerButton;
    QLabel *LightingLabel;
    QCheckBox *LightingCheckBox;
    QLabel *InterpolationLabel;
    QComboBox *InterpolationComboBox;
    ctkVTKSurfaceMaterialPropertyWidget *MaterialPropertyWidget;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    ctkDoubleSpinBox *BackfaceHueOffsetSpinBox;
    ctkDoubleSpinBox *BackfaceSaturationOffsetSpinBox;
    ctkDoubleSpinBox *BackfaceBrightnessOffsetSpinBox;
    ctkCollapsibleGroupBox *SliceDisplayCollapsibleGroupBox;
    QFormLayout *formLayout_6;
    QLabel *SliceIntersectionVisibilityLabel;
    QCheckBox *SliceIntersectionVisibilityCheckBox;
    QLabel *SliceIntersectionOpacityLabel;
    ctkSliderWidget *SliceIntersectionOpacitySlider;
    QLabel *label;
    QComboBox *SliceDisplayModeComboBox;
    QLabel *SliceIntersectionThicknessLabel;
    QSpinBox *SliceIntersectionThicknessSpinBox;
    QLabel *DistanceToColorLabel;
    qMRMLColorTableComboBox *DistanceToColorNodeComboBox;
    ctkCollapsibleGroupBox *ScalarsGroupBox;
    QGridLayout *gridLayout;
    qMRMLScalarsDisplayWidget *ScalarsDisplayWidget;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QGridLayout *gridLayout_3;
    qMRMLDisplayNodeViewComboBox *DisplayNodeViewComboBox;
    QLabel *DisplayNodeViewLabel;
    ctkColorPickerButton *ColorPickerButton;
    QLabel *ColorLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *VisibilityCheckBox;
    QLabel *OpacityLabel;
    ctkSliderWidget *OpacitySliderWidget;
    QLabel *VisibilityLabel;

    void setupUi(qMRMLWidget *qMRMLModelDisplayNodeWidget)
    {
        if (qMRMLModelDisplayNodeWidget->objectName().isEmpty())
            qMRMLModelDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLModelDisplayNodeWidget"));
        qMRMLModelDisplayNodeWidget->resize(427, 459);
        gridLayout_2 = new QGridLayout(qMRMLModelDisplayNodeWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        RepresentationCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLModelDisplayNodeWidget);
        RepresentationCollapsibleGroupBox->setObjectName(QString::fromUtf8("RepresentationCollapsibleGroupBox"));
        RepresentationCollapsibleGroupBox->setCollapsed(false);
        formLayout_4 = new QFormLayout(RepresentationCollapsibleGroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        RepresentationLabel = new QLabel(RepresentationCollapsibleGroupBox);
        RepresentationLabel->setObjectName(QString::fromUtf8("RepresentationLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, RepresentationLabel);

        RepresentationComboBox = new QComboBox(RepresentationCollapsibleGroupBox);
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->addItem(QString());
        RepresentationComboBox->setObjectName(QString::fromUtf8("RepresentationComboBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, RepresentationComboBox);

        CullingLabel = new QLabel(RepresentationCollapsibleGroupBox);
        CullingLabel->setObjectName(QString::fromUtf8("CullingLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, CullingLabel);

        ShowFacesComboBox = new QComboBox(RepresentationCollapsibleGroupBox);
        ShowFacesComboBox->addItem(QString());
        ShowFacesComboBox->addItem(QString());
        ShowFacesComboBox->addItem(QString());
        ShowFacesComboBox->setObjectName(QString::fromUtf8("ShowFacesComboBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, ShowFacesComboBox);

        ClippingLabel = new QLabel(RepresentationCollapsibleGroupBox);
        ClippingLabel->setObjectName(QString::fromUtf8("ClippingLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, ClippingLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ClippingCheckBox = new QCheckBox(RepresentationCollapsibleGroupBox);
        ClippingCheckBox->setObjectName(QString::fromUtf8("ClippingCheckBox"));

        horizontalLayout->addWidget(ClippingCheckBox);

        ConfigureClippingPushButton = new QPushButton(RepresentationCollapsibleGroupBox);
        ConfigureClippingPushButton->setObjectName(QString::fromUtf8("ConfigureClippingPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigureClippingPushButton->sizePolicy().hasHeightForWidth());
        ConfigureClippingPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ConfigureClippingPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        Advanced3dCollapsibleGroupBox = new ctkCollapsibleGroupBox(RepresentationCollapsibleGroupBox);
        Advanced3dCollapsibleGroupBox->setObjectName(QString::fromUtf8("Advanced3dCollapsibleGroupBox"));
        Advanced3dCollapsibleGroupBox->setCollapsed(true);
        formLayout_5 = new QFormLayout(Advanced3dCollapsibleGroupBox);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        PointSizeLabel = new QLabel(Advanced3dCollapsibleGroupBox);
        PointSizeLabel->setObjectName(QString::fromUtf8("PointSizeLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, PointSizeLabel);

        PointSizeSliderWidget = new ctkSliderWidget(Advanced3dCollapsibleGroupBox);
        PointSizeSliderWidget->setObjectName(QString::fromUtf8("PointSizeSliderWidget"));
        PointSizeSliderWidget->setDecimals(2);
        PointSizeSliderWidget->setMinimum(1.000000000000000);
        PointSizeSliderWidget->setMaximum(100.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, PointSizeSliderWidget);

        LineWidthLabel = new QLabel(Advanced3dCollapsibleGroupBox);
        LineWidthLabel->setObjectName(QString::fromUtf8("LineWidthLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, LineWidthLabel);

        LineWidthSliderWidget = new ctkSliderWidget(Advanced3dCollapsibleGroupBox);
        LineWidthSliderWidget->setObjectName(QString::fromUtf8("LineWidthSliderWidget"));
        LineWidthSliderWidget->setDecimals(2);
        LineWidthSliderWidget->setMinimum(1.000000000000000);
        LineWidthSliderWidget->setMaximum(100.000000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, LineWidthSliderWidget);

        EdgeColorLabel = new QLabel(Advanced3dCollapsibleGroupBox);
        EdgeColorLabel->setObjectName(QString::fromUtf8("EdgeColorLabel"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, EdgeColorLabel);

        EdgeColorPickerButton = new ctkColorPickerButton(Advanced3dCollapsibleGroupBox);
        EdgeColorPickerButton->setObjectName(QString::fromUtf8("EdgeColorPickerButton"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, EdgeColorPickerButton);

        LightingLabel = new QLabel(Advanced3dCollapsibleGroupBox);
        LightingLabel->setObjectName(QString::fromUtf8("LightingLabel"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, LightingLabel);

        LightingCheckBox = new QCheckBox(Advanced3dCollapsibleGroupBox);
        LightingCheckBox->setObjectName(QString::fromUtf8("LightingCheckBox"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, LightingCheckBox);

        InterpolationLabel = new QLabel(Advanced3dCollapsibleGroupBox);
        InterpolationLabel->setObjectName(QString::fromUtf8("InterpolationLabel"));

        formLayout_5->setWidget(5, QFormLayout::LabelRole, InterpolationLabel);

        InterpolationComboBox = new QComboBox(Advanced3dCollapsibleGroupBox);
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->addItem(QString());
        InterpolationComboBox->setObjectName(QString::fromUtf8("InterpolationComboBox"));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, InterpolationComboBox);

        MaterialPropertyWidget = new ctkVTKSurfaceMaterialPropertyWidget(Advanced3dCollapsibleGroupBox);
        MaterialPropertyWidget->setObjectName(QString::fromUtf8("MaterialPropertyWidget"));
        MaterialPropertyWidget->setColorVisible(false);
        MaterialPropertyWidget->setOpacityVisible(false);
        MaterialPropertyWidget->setBackfaceCullingVisible(false);

        formLayout_5->setWidget(6, QFormLayout::SpanningRole, MaterialPropertyWidget);

        label_2 = new QLabel(Advanced3dCollapsibleGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BackfaceHueOffsetSpinBox = new ctkDoubleSpinBox(Advanced3dCollapsibleGroupBox);
        BackfaceHueOffsetSpinBox->setObjectName(QString::fromUtf8("BackfaceHueOffsetSpinBox"));
        BackfaceHueOffsetSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::ReplaceDecimals);
        BackfaceHueOffsetSpinBox->setMinimum(-0.500000000000000);
        BackfaceHueOffsetSpinBox->setMaximum(0.500000000000000);
        BackfaceHueOffsetSpinBox->setSingleStep(0.050000000000000);

        horizontalLayout_3->addWidget(BackfaceHueOffsetSpinBox);

        BackfaceSaturationOffsetSpinBox = new ctkDoubleSpinBox(Advanced3dCollapsibleGroupBox);
        BackfaceSaturationOffsetSpinBox->setObjectName(QString::fromUtf8("BackfaceSaturationOffsetSpinBox"));
        BackfaceSaturationOffsetSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::InsertDecimals|ctkDoubleSpinBox::ReplaceDecimals);
        BackfaceSaturationOffsetSpinBox->setMinimum(-1.000000000000000);
        BackfaceSaturationOffsetSpinBox->setMaximum(1.000000000000000);
        BackfaceSaturationOffsetSpinBox->setSingleStep(0.050000000000000);

        horizontalLayout_3->addWidget(BackfaceSaturationOffsetSpinBox);

        BackfaceBrightnessOffsetSpinBox = new ctkDoubleSpinBox(Advanced3dCollapsibleGroupBox);
        BackfaceBrightnessOffsetSpinBox->setObjectName(QString::fromUtf8("BackfaceBrightnessOffsetSpinBox"));
        BackfaceBrightnessOffsetSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::InsertDecimals|ctkDoubleSpinBox::ReplaceDecimals);
        BackfaceBrightnessOffsetSpinBox->setMinimum(-1.000000000000000);
        BackfaceBrightnessOffsetSpinBox->setMaximum(1.000000000000000);
        BackfaceBrightnessOffsetSpinBox->setSingleStep(0.050000000000000);

        horizontalLayout_3->addWidget(BackfaceBrightnessOffsetSpinBox);


        formLayout_5->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);


        formLayout_4->setWidget(4, QFormLayout::SpanningRole, Advanced3dCollapsibleGroupBox);


        gridLayout_2->addWidget(RepresentationCollapsibleGroupBox, 1, 0, 1, 1);

        SliceDisplayCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLModelDisplayNodeWidget);
        SliceDisplayCollapsibleGroupBox->setObjectName(QString::fromUtf8("SliceDisplayCollapsibleGroupBox"));
        formLayout_6 = new QFormLayout(SliceDisplayCollapsibleGroupBox);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        SliceIntersectionVisibilityLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionVisibilityLabel->setObjectName(QString::fromUtf8("SliceIntersectionVisibilityLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, SliceIntersectionVisibilityLabel);

        SliceIntersectionVisibilityCheckBox = new QCheckBox(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionVisibilityCheckBox->setObjectName(QString::fromUtf8("SliceIntersectionVisibilityCheckBox"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, SliceIntersectionVisibilityCheckBox);

        SliceIntersectionOpacityLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionOpacityLabel->setObjectName(QString::fromUtf8("SliceIntersectionOpacityLabel"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, SliceIntersectionOpacityLabel);

        SliceIntersectionOpacitySlider = new ctkSliderWidget(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionOpacitySlider->setObjectName(QString::fromUtf8("SliceIntersectionOpacitySlider"));
        SliceIntersectionOpacitySlider->setSingleStep(0.050000000000000);
        SliceIntersectionOpacitySlider->setPageStep(0.100000000000000);
        SliceIntersectionOpacitySlider->setMinimum(0.000000000000000);
        SliceIntersectionOpacitySlider->setMaximum(1.000000000000000);
        SliceIntersectionOpacitySlider->setValue(1.000000000000000);
        SliceIntersectionOpacitySlider->setProperty("SingleStep", QVariant(0.050000000000000));
        SliceIntersectionOpacitySlider->setProperty("Decimals", QVariant(2));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, SliceIntersectionOpacitySlider);

        label = new QLabel(SliceDisplayCollapsibleGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label);

        SliceDisplayModeComboBox = new QComboBox(SliceDisplayCollapsibleGroupBox);
        SliceDisplayModeComboBox->addItem(QString());
        SliceDisplayModeComboBox->addItem(QString());
        SliceDisplayModeComboBox->addItem(QString());
        SliceDisplayModeComboBox->setObjectName(QString::fromUtf8("SliceDisplayModeComboBox"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, SliceDisplayModeComboBox);

        SliceIntersectionThicknessLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionThicknessLabel->setObjectName(QString::fromUtf8("SliceIntersectionThicknessLabel"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, SliceIntersectionThicknessLabel);

        SliceIntersectionThicknessSpinBox = new QSpinBox(SliceDisplayCollapsibleGroupBox);
        SliceIntersectionThicknessSpinBox->setObjectName(QString::fromUtf8("SliceIntersectionThicknessSpinBox"));
        SliceIntersectionThicknessSpinBox->setMinimum(0);
        SliceIntersectionThicknessSpinBox->setMaximum(10);
        SliceIntersectionThicknessSpinBox->setSingleStep(1);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, SliceIntersectionThicknessSpinBox);

        DistanceToColorLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        DistanceToColorLabel->setObjectName(QString::fromUtf8("DistanceToColorLabel"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, DistanceToColorLabel);

        DistanceToColorNodeComboBox = new qMRMLColorTableComboBox(SliceDisplayCollapsibleGroupBox);
        DistanceToColorNodeComboBox->setObjectName(QString::fromUtf8("DistanceToColorNodeComboBox"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, DistanceToColorNodeComboBox);


        gridLayout_2->addWidget(SliceDisplayCollapsibleGroupBox, 2, 0, 1, 1);

        ScalarsGroupBox = new ctkCollapsibleGroupBox(qMRMLModelDisplayNodeWidget);
        ScalarsGroupBox->setObjectName(QString::fromUtf8("ScalarsGroupBox"));
        ScalarsGroupBox->setChecked(false);
        ScalarsGroupBox->setCollapsed(true);
        gridLayout = new QGridLayout(ScalarsGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ScalarsDisplayWidget = new qMRMLScalarsDisplayWidget(ScalarsGroupBox);
        ScalarsDisplayWidget->setObjectName(QString::fromUtf8("ScalarsDisplayWidget"));

        gridLayout->addWidget(ScalarsDisplayWidget, 0, 0, 1, 2);


        gridLayout_2->addWidget(ScalarsGroupBox, 3, 0, 1, 1);

        CollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLModelDisplayNodeWidget);
        CollapsibleGroupBox->setObjectName(QString::fromUtf8("CollapsibleGroupBox"));
        gridLayout_3 = new QGridLayout(CollapsibleGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DisplayNodeViewComboBox = new qMRMLDisplayNodeViewComboBox(CollapsibleGroupBox);
        DisplayNodeViewComboBox->setObjectName(QString::fromUtf8("DisplayNodeViewComboBox"));

        gridLayout_3->addWidget(DisplayNodeViewComboBox, 1, 1, 1, 1);

        DisplayNodeViewLabel = new QLabel(CollapsibleGroupBox);
        DisplayNodeViewLabel->setObjectName(QString::fromUtf8("DisplayNodeViewLabel"));

        gridLayout_3->addWidget(DisplayNodeViewLabel, 1, 0, 1, 1);

        ColorPickerButton = new ctkColorPickerButton(CollapsibleGroupBox);
        ColorPickerButton->setObjectName(QString::fromUtf8("ColorPickerButton"));
        ColorPickerButton->setDisplayColorName(true);

        gridLayout_3->addWidget(ColorPickerButton, 2, 1, 1, 1);

        ColorLabel = new QLabel(CollapsibleGroupBox);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));

        gridLayout_3->addWidget(ColorLabel, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        VisibilityCheckBox = new QCheckBox(CollapsibleGroupBox);
        VisibilityCheckBox->setObjectName(QString::fromUtf8("VisibilityCheckBox"));

        horizontalLayout_2->addWidget(VisibilityCheckBox);

        OpacityLabel = new QLabel(CollapsibleGroupBox);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        horizontalLayout_2->addWidget(OpacityLabel);

        OpacitySliderWidget = new ctkSliderWidget(CollapsibleGroupBox);
        OpacitySliderWidget->setObjectName(QString::fromUtf8("OpacitySliderWidget"));
        OpacitySliderWidget->setSingleStep(0.050000000000000);
        OpacitySliderWidget->setPageStep(0.100000000000000);
        OpacitySliderWidget->setMaximum(1.000000000000000);

        horizontalLayout_2->addWidget(OpacitySliderWidget);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        VisibilityLabel = new QLabel(CollapsibleGroupBox);
        VisibilityLabel->setObjectName(QString::fromUtf8("VisibilityLabel"));

        gridLayout_3->addWidget(VisibilityLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(CollapsibleGroupBox, 0, 0, 1, 1);


        retranslateUi(qMRMLModelDisplayNodeWidget);
        QObject::connect(qMRMLModelDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ScalarsDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLModelDisplayNodeWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLModelDisplayNodeWidget)
    {
        qMRMLModelDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Model Display Properties", nullptr));
        RepresentationCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "3D Display", nullptr));
        RepresentationLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Representation:", nullptr));
        RepresentationComboBox->setItemText(0, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Points", nullptr));
        RepresentationComboBox->setItemText(1, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Wireframe", nullptr));
        RepresentationComboBox->setItemText(2, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Surface", nullptr));
        RepresentationComboBox->setItemText(3, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Surface with Edges", nullptr));

        CullingLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Visible Sides:", nullptr));
        ShowFacesComboBox->setItemText(0, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "All", nullptr));
        ShowFacesComboBox->setItemText(1, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Front-facing", nullptr));
        ShowFacesComboBox->setItemText(2, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Back-facing", nullptr));

#if QT_CONFIG(tooltip)
        ShowFacesComboBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "All: recommended for open surface. Front: recommended for faster rendering of closed opaque surfaces. Back: Useful for rendering backface of open surfaces with different color.", nullptr));
#endif // QT_CONFIG(tooltip)
        ClippingLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Clipping:", nullptr));
#if QT_CONFIG(tooltip)
        ClippingCheckBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Hide part of the model according to Clipping Planes settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        ClippingCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        ConfigureClippingPushButton->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Configure clipping planes", nullptr));
#endif // QT_CONFIG(tooltip)
        ConfigureClippingPushButton->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Configure...", nullptr));
        Advanced3dCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Advanced", nullptr));
        PointSizeLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Point Size:", nullptr));
        LineWidthLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Line Width:", nullptr));
        EdgeColorLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Edge Color:", nullptr));
        LightingLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Lighting:", nullptr));
        LightingCheckBox->setText(QString());
        InterpolationLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Interpolation:", nullptr));
        InterpolationComboBox->setItemText(0, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Flat", nullptr));
        InterpolationComboBox->setItemText(1, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Gouraud", nullptr));
        InterpolationComboBox->setItemText(2, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Phong", nullptr));
        InterpolationComboBox->setItemText(3, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "PBR", nullptr));

#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Backface color hue, saturation, and brightess offset to frontface color", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Backface Color Offset:", nullptr));
#if QT_CONFIG(tooltip)
        BackfaceHueOffsetSpinBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color hue offset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BackfaceSaturationOffsetSpinBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color saturation offset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BackfaceBrightnessOffsetSpinBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color saturation offset", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceDisplayCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Slice Display", nullptr));
        SliceIntersectionVisibilityLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Visibility:", nullptr));
        SliceIntersectionVisibilityCheckBox->setText(QString());
        SliceIntersectionOpacityLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Opacity:", nullptr));
        label->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Mode:", nullptr));
        SliceDisplayModeComboBox->setItemText(0, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Intersection", nullptr));
        SliceDisplayModeComboBox->setItemText(1, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Projection", nullptr));
        SliceDisplayModeComboBox->setItemText(2, QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Distance encoded projection", nullptr));

#if QT_CONFIG(tooltip)
        SliceDisplayModeComboBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Intersection: shows intersection of the model with the slice. Projection: shows the full model projected on the slice plane with solid color. Colored projection: shows the full model projected on the slice plane, colored by distance from the slice plane (overrides Active scalar selection).", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceIntersectionThicknessLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Line Width:", nullptr));
        SliceIntersectionThicknessSpinBox->setSuffix(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", " px", nullptr));
        DistanceToColorLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color Table:", nullptr));
#if QT_CONFIG(tooltip)
        DistanceToColorNodeComboBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color table that maps distance from slice plane to colors. Used when 'Distance encoded projection' mode is chosen.", nullptr));
#endif // QT_CONFIG(tooltip)
        ScalarsGroupBox->setTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Scalars", nullptr));
        CollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Visibility", nullptr));
#if QT_CONFIG(tooltip)
        DisplayNodeViewComboBox->setToolTip(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Select views in which to show this node. All unchecked shows in all 3D and 2D views.", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayNodeViewLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "View:", nullptr));
        ColorLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Color:", nullptr));
        VisibilityCheckBox->setText(QString());
        OpacityLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Opacity:", nullptr));
        VisibilityLabel->setText(QCoreApplication::translate("qMRMLModelDisplayNodeWidget", "Visibility:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLModelDisplayNodeWidget: public Ui_qMRMLModelDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMODELDISPLAYNODEWIDGET_H
