/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSDISPLAYNODEWIDGET_H
#define UI_QMRMLMARKUPSDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleGroupBox.h"
#include "ctkColorPickerButton.h"
#include "ctkSliderWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLMarkupsFiducialProjectionPropertyWidget.h"
#include "qMRMLMarkupsInteractionHandleWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLScalarsDisplayWidget.h"
#include "qMRMLSliderWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsDisplayNodeWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *VisibilityCheckBox;
    QLabel *opacityLabel;
    ctkSliderWidget *opacitySliderWidget;
    QLabel *VisibilityLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *glyphSizeIsAbsoluteButton;
    ctkSliderWidget *glyphScaleSliderWidget;
    qMRMLSliderWidget *glyphSizeSliderWidget;
    ctkCollapsibleGroupBox *SliceDisplayCollapsibleGroupBox;
    QGridLayout *gridLayout_2;
    ctkCollapsibleGroupBox *TextDisplayGroupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *TextFontFamilyComboBox;
    QCheckBox *TextBoldCheckBox;
    QCheckBox *TextItalicCheckBox;
    QCheckBox *TextShadowCheckBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    ctkColorPickerButton *TextBackgroundColorPickerButton;
    QLabel *label_2;
    ctkSliderWidget *TextBackgroundOpacitySlider;
    QLabel *label;
    QComboBox *glyphTypeComboBox;
    qMRMLDisplayNodeViewComboBox *DisplayNodeViewComboBox;
    QLabel *activeColorPickerLabel;
    ctkCollapsibleGroupBox *TwoDDisplayGroupBox;
    QGridLayout *gridLayout_4;
    qMRMLMarkupsFiducialProjectionPropertyWidget *pointFiducialProjectionWidget;
    QLabel *FillLabel;
    QLabel *glyphTypeLabel;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *OutlineVisibilityCheckBox;
    QLabel *OpacityLabel2;
    ctkSliderWidget *OutlineOpacitySliderWidget;
    QLabel *DisplayNodeViewLabel;
    QLabel *unselectedColorLabel;
    QLabel *OutlineLabel;
    QCheckBox *PointLabelsVisibilityCheckBox;
    ctkColorPickerButton *selectedColorPickerButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *curveLineSizeIsAbsoluteButton;
    ctkSliderWidget *curveLineThicknessSliderWidget;
    qMRMLSliderWidget *curveLineDiameterSliderWidget;
    QLabel *lineThicknessLabel;
    QLabel *selectedColorLabel;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *FillVisibilityCheckBox;
    QLabel *OpacityLabel3;
    ctkSliderWidget *FillOpacitySliderWidget;
    QLabel *PointLabelsVisibilityLabel;
    ctkColorPickerButton *unselectedColorPickerButton;
    ctkCollapsibleGroupBox *ThreeDDisplayGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *OccludedVisibilityLabel;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *OccludedVisibilityCheckBox;
    QLabel *OpacityLabel;
    ctkSliderWidget *OccludedOpacitySliderWidget;
    QLabel *PointLabelsVisibilityLabel_2;
    QComboBox *SnapModeComboBox;
    QLabel *PropertiesLabelVisibilityLabel;
    ctkColorPickerButton *activeColorPickerButton;
    QCheckBox *PropertiesLabelVisibilityCheckBox;
    QLabel *glyphScaleLabel;
    ctkSliderWidget *textScaleSliderWidget;
    QLabel *textScaleLabel;
    ctkCollapsibleGroupBox *ScalarsCollapsibleGroupBox;
    QVBoxLayout *verticalLayout;
    qMRMLScalarsDisplayWidget *ScalarsDisplayWidget;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QVBoxLayout *verticalLayout_2;
    qMRMLMarkupsInteractionHandleWidget *InteractionHandleWidget;

    void setupUi(qMRMLWidget *qMRMLMarkupsDisplayNodeWidget)
    {
        if (qMRMLMarkupsDisplayNodeWidget->objectName().isEmpty())
            qMRMLMarkupsDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsDisplayNodeWidget"));
        qMRMLMarkupsDisplayNodeWidget->resize(368, 186);
        gridLayout = new QGridLayout(qMRMLMarkupsDisplayNodeWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        VisibilityCheckBox = new QCheckBox(qMRMLMarkupsDisplayNodeWidget);
        VisibilityCheckBox->setObjectName(QString::fromUtf8("VisibilityCheckBox"));

        horizontalLayout->addWidget(VisibilityCheckBox);

        opacityLabel = new QLabel(qMRMLMarkupsDisplayNodeWidget);
        opacityLabel->setObjectName(QString::fromUtf8("opacityLabel"));

        horizontalLayout->addWidget(opacityLabel);

        opacitySliderWidget = new ctkSliderWidget(qMRMLMarkupsDisplayNodeWidget);
        opacitySliderWidget->setObjectName(QString::fromUtf8("opacitySliderWidget"));
        opacitySliderWidget->setSingleStep(0.100000000000000);
        opacitySliderWidget->setMaximum(1.000000000000000);

        horizontalLayout->addWidget(opacitySliderWidget);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        VisibilityLabel = new QLabel(qMRMLMarkupsDisplayNodeWidget);
        VisibilityLabel->setObjectName(QString::fromUtf8("VisibilityLabel"));

        gridLayout->addWidget(VisibilityLabel, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        glyphSizeIsAbsoluteButton = new QPushButton(qMRMLMarkupsDisplayNodeWidget);
        glyphSizeIsAbsoluteButton->setObjectName(QString::fromUtf8("glyphSizeIsAbsoluteButton"));
        glyphSizeIsAbsoluteButton->setCheckable(true);

        horizontalLayout_2->addWidget(glyphSizeIsAbsoluteButton);

        glyphScaleSliderWidget = new ctkSliderWidget(qMRMLMarkupsDisplayNodeWidget);
        glyphScaleSliderWidget->setObjectName(QString::fromUtf8("glyphScaleSliderWidget"));
        glyphScaleSliderWidget->setSingleStep(0.100000000000000);
        glyphScaleSliderWidget->setMaximum(30.000000000000000);

        horizontalLayout_2->addWidget(glyphScaleSliderWidget);

        glyphSizeSliderWidget = new qMRMLSliderWidget(qMRMLMarkupsDisplayNodeWidget);
        glyphSizeSliderWidget->setObjectName(QString::fromUtf8("glyphSizeSliderWidget"));
        glyphSizeSliderWidget->setSingleStep(0.100000000000000);
        glyphSizeSliderWidget->setPageStep(1.000000000000000);
        glyphSizeSliderWidget->setValue(5.000000000000000);
        glyphSizeSliderWidget->setQuantity(QString::fromUtf8("length"));

        horizontalLayout_2->addWidget(glyphSizeSliderWidget);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        SliceDisplayCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLMarkupsDisplayNodeWidget);
        SliceDisplayCollapsibleGroupBox->setObjectName(QString::fromUtf8("SliceDisplayCollapsibleGroupBox"));
        SliceDisplayCollapsibleGroupBox->setChecked(false);
        SliceDisplayCollapsibleGroupBox->setCollapsed(true);
        gridLayout_2 = new QGridLayout(SliceDisplayCollapsibleGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, 5, 0);
        TextDisplayGroupBox = new ctkCollapsibleGroupBox(SliceDisplayCollapsibleGroupBox);
        TextDisplayGroupBox->setObjectName(QString::fromUtf8("TextDisplayGroupBox"));
        gridLayout_5 = new QGridLayout(TextDisplayGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        TextFontFamilyComboBox = new QComboBox(TextDisplayGroupBox);
        TextFontFamilyComboBox->setObjectName(QString::fromUtf8("TextFontFamilyComboBox"));

        horizontalLayout_8->addWidget(TextFontFamilyComboBox);

        TextBoldCheckBox = new QCheckBox(TextDisplayGroupBox);
        TextBoldCheckBox->setObjectName(QString::fromUtf8("TextBoldCheckBox"));

        horizontalLayout_8->addWidget(TextBoldCheckBox);

        TextItalicCheckBox = new QCheckBox(TextDisplayGroupBox);
        TextItalicCheckBox->setObjectName(QString::fromUtf8("TextItalicCheckBox"));

        horizontalLayout_8->addWidget(TextItalicCheckBox);

        TextShadowCheckBox = new QCheckBox(TextDisplayGroupBox);
        TextShadowCheckBox->setObjectName(QString::fromUtf8("TextShadowCheckBox"));

        horizontalLayout_8->addWidget(TextShadowCheckBox);


        gridLayout_5->addLayout(horizontalLayout_8, 0, 1, 1, 1);

        label_3 = new QLabel(TextDisplayGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        TextBackgroundColorPickerButton = new ctkColorPickerButton(TextDisplayGroupBox);
        TextBackgroundColorPickerButton->setObjectName(QString::fromUtf8("TextBackgroundColorPickerButton"));
        TextBackgroundColorPickerButton->setDisplayColorName(false);

        horizontalLayout_7->addWidget(TextBackgroundColorPickerButton);

        label_2 = new QLabel(TextDisplayGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        TextBackgroundOpacitySlider = new ctkSliderWidget(TextDisplayGroupBox);
        TextBackgroundOpacitySlider->setObjectName(QString::fromUtf8("TextBackgroundOpacitySlider"));
        TextBackgroundOpacitySlider->setSingleStep(0.010000000000000);
        TextBackgroundOpacitySlider->setPageStep(0.100000000000000);
        TextBackgroundOpacitySlider->setMaximum(1.000000000000000);

        horizontalLayout_7->addWidget(TextBackgroundOpacitySlider);


        gridLayout_5->addLayout(horizontalLayout_7, 2, 1, 1, 1);

        label = new QLabel(TextDisplayGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 1);


        gridLayout_2->addWidget(TextDisplayGroupBox, 12, 0, 1, 2);

        glyphTypeComboBox = new QComboBox(SliceDisplayCollapsibleGroupBox);
        glyphTypeComboBox->setObjectName(QString::fromUtf8("glyphTypeComboBox"));

        gridLayout_2->addWidget(glyphTypeComboBox, 4, 1, 1, 1);

        DisplayNodeViewComboBox = new qMRMLDisplayNodeViewComboBox(SliceDisplayCollapsibleGroupBox);
        DisplayNodeViewComboBox->setObjectName(QString::fromUtf8("DisplayNodeViewComboBox"));

        gridLayout_2->addWidget(DisplayNodeViewComboBox, 0, 1, 1, 1);

        activeColorPickerLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        activeColorPickerLabel->setObjectName(QString::fromUtf8("activeColorPickerLabel"));

        gridLayout_2->addWidget(activeColorPickerLabel, 3, 0, 1, 1);

        TwoDDisplayGroupBox = new ctkCollapsibleGroupBox(SliceDisplayCollapsibleGroupBox);
        TwoDDisplayGroupBox->setObjectName(QString::fromUtf8("TwoDDisplayGroupBox"));
        gridLayout_4 = new QGridLayout(TwoDDisplayGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pointFiducialProjectionWidget = new qMRMLMarkupsFiducialProjectionPropertyWidget(TwoDDisplayGroupBox);
        pointFiducialProjectionWidget->setObjectName(QString::fromUtf8("pointFiducialProjectionWidget"));

        gridLayout_4->addWidget(pointFiducialProjectionWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(TwoDDisplayGroupBox, 14, 0, 1, 2);

        FillLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        FillLabel->setObjectName(QString::fromUtf8("FillLabel"));

        gridLayout_2->addWidget(FillLabel, 7, 0, 1, 1);

        glyphTypeLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        glyphTypeLabel->setObjectName(QString::fromUtf8("glyphTypeLabel"));

        gridLayout_2->addWidget(glyphTypeLabel, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        OutlineVisibilityCheckBox = new QCheckBox(SliceDisplayCollapsibleGroupBox);
        OutlineVisibilityCheckBox->setObjectName(QString::fromUtf8("OutlineVisibilityCheckBox"));

        horizontalLayout_5->addWidget(OutlineVisibilityCheckBox);

        OpacityLabel2 = new QLabel(SliceDisplayCollapsibleGroupBox);
        OpacityLabel2->setObjectName(QString::fromUtf8("OpacityLabel2"));

        horizontalLayout_5->addWidget(OpacityLabel2);

        OutlineOpacitySliderWidget = new ctkSliderWidget(SliceDisplayCollapsibleGroupBox);
        OutlineOpacitySliderWidget->setObjectName(QString::fromUtf8("OutlineOpacitySliderWidget"));
        OutlineOpacitySliderWidget->setSingleStep(0.010000000000000);
        OutlineOpacitySliderWidget->setPageStep(0.100000000000000);
        OutlineOpacitySliderWidget->setMaximum(1.000000000000000);

        horizontalLayout_5->addWidget(OutlineOpacitySliderWidget);


        gridLayout_2->addLayout(horizontalLayout_5, 6, 1, 1, 1);

        DisplayNodeViewLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        DisplayNodeViewLabel->setObjectName(QString::fromUtf8("DisplayNodeViewLabel"));

        gridLayout_2->addWidget(DisplayNodeViewLabel, 0, 0, 1, 1);

        unselectedColorLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        unselectedColorLabel->setObjectName(QString::fromUtf8("unselectedColorLabel"));

        gridLayout_2->addWidget(unselectedColorLabel, 2, 0, 1, 1);

        OutlineLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        OutlineLabel->setObjectName(QString::fromUtf8("OutlineLabel"));

        gridLayout_2->addWidget(OutlineLabel, 6, 0, 1, 1);

        PointLabelsVisibilityCheckBox = new QCheckBox(SliceDisplayCollapsibleGroupBox);
        PointLabelsVisibilityCheckBox->setObjectName(QString::fromUtf8("PointLabelsVisibilityCheckBox"));

        gridLayout_2->addWidget(PointLabelsVisibilityCheckBox, 11, 1, 1, 1);

        selectedColorPickerButton = new ctkColorPickerButton(SliceDisplayCollapsibleGroupBox);
        selectedColorPickerButton->setObjectName(QString::fromUtf8("selectedColorPickerButton"));
        selectedColorPickerButton->setDisplayColorName(false);

        gridLayout_2->addWidget(selectedColorPickerButton, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        curveLineSizeIsAbsoluteButton = new QPushButton(SliceDisplayCollapsibleGroupBox);
        curveLineSizeIsAbsoluteButton->setObjectName(QString::fromUtf8("curveLineSizeIsAbsoluteButton"));
        curveLineSizeIsAbsoluteButton->setCheckable(true);

        horizontalLayout_3->addWidget(curveLineSizeIsAbsoluteButton);

        curveLineThicknessSliderWidget = new ctkSliderWidget(SliceDisplayCollapsibleGroupBox);
        curveLineThicknessSliderWidget->setObjectName(QString::fromUtf8("curveLineThicknessSliderWidget"));
        curveLineThicknessSliderWidget->setSingleStep(1.000000000000000);
        curveLineThicknessSliderWidget->setPageStep(5.000000000000000);
        curveLineThicknessSliderWidget->setMaximum(100.000000000000000);
        curveLineThicknessSliderWidget->setValue(20.000000000000000);

        horizontalLayout_3->addWidget(curveLineThicknessSliderWidget);

        curveLineDiameterSliderWidget = new qMRMLSliderWidget(SliceDisplayCollapsibleGroupBox);
        curveLineDiameterSliderWidget->setObjectName(QString::fromUtf8("curveLineDiameterSliderWidget"));
        curveLineDiameterSliderWidget->setSingleStep(0.100000000000000);
        curveLineDiameterSliderWidget->setPageStep(1.000000000000000);
        curveLineDiameterSliderWidget->setValue(5.000000000000000);
        curveLineDiameterSliderWidget->setQuantity(QString::fromUtf8("length"));

        horizontalLayout_3->addWidget(curveLineDiameterSliderWidget);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        lineThicknessLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        lineThicknessLabel->setObjectName(QString::fromUtf8("lineThicknessLabel"));

        gridLayout_2->addWidget(lineThicknessLabel, 5, 0, 1, 1);

        selectedColorLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        selectedColorLabel->setObjectName(QString::fromUtf8("selectedColorLabel"));

        gridLayout_2->addWidget(selectedColorLabel, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        FillVisibilityCheckBox = new QCheckBox(SliceDisplayCollapsibleGroupBox);
        FillVisibilityCheckBox->setObjectName(QString::fromUtf8("FillVisibilityCheckBox"));

        horizontalLayout_4->addWidget(FillVisibilityCheckBox);

        OpacityLabel3 = new QLabel(SliceDisplayCollapsibleGroupBox);
        OpacityLabel3->setObjectName(QString::fromUtf8("OpacityLabel3"));

        horizontalLayout_4->addWidget(OpacityLabel3);

        FillOpacitySliderWidget = new ctkSliderWidget(SliceDisplayCollapsibleGroupBox);
        FillOpacitySliderWidget->setObjectName(QString::fromUtf8("FillOpacitySliderWidget"));
        FillOpacitySliderWidget->setSingleStep(0.010000000000000);
        FillOpacitySliderWidget->setPageStep(0.100000000000000);
        FillOpacitySliderWidget->setMaximum(1.000000000000000);

        horizontalLayout_4->addWidget(FillOpacitySliderWidget);


        gridLayout_2->addLayout(horizontalLayout_4, 7, 1, 1, 1);

        PointLabelsVisibilityLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        PointLabelsVisibilityLabel->setObjectName(QString::fromUtf8("PointLabelsVisibilityLabel"));

        gridLayout_2->addWidget(PointLabelsVisibilityLabel, 11, 0, 1, 1);

        unselectedColorPickerButton = new ctkColorPickerButton(SliceDisplayCollapsibleGroupBox);
        unselectedColorPickerButton->setObjectName(QString::fromUtf8("unselectedColorPickerButton"));
        unselectedColorPickerButton->setDisplayColorName(false);

        gridLayout_2->addWidget(unselectedColorPickerButton, 2, 1, 1, 1);

        ThreeDDisplayGroupBox = new ctkCollapsibleGroupBox(SliceDisplayCollapsibleGroupBox);
        ThreeDDisplayGroupBox->setObjectName(QString::fromUtf8("ThreeDDisplayGroupBox"));
        gridLayout_3 = new QGridLayout(ThreeDDisplayGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, 5, 0);
        OccludedVisibilityLabel = new QLabel(ThreeDDisplayGroupBox);
        OccludedVisibilityLabel->setObjectName(QString::fromUtf8("OccludedVisibilityLabel"));

        gridLayout_3->addWidget(OccludedVisibilityLabel, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        OccludedVisibilityCheckBox = new QCheckBox(ThreeDDisplayGroupBox);
        OccludedVisibilityCheckBox->setObjectName(QString::fromUtf8("OccludedVisibilityCheckBox"));

        horizontalLayout_6->addWidget(OccludedVisibilityCheckBox);

        OpacityLabel = new QLabel(ThreeDDisplayGroupBox);
        OpacityLabel->setObjectName(QString::fromUtf8("OpacityLabel"));

        horizontalLayout_6->addWidget(OpacityLabel);

        OccludedOpacitySliderWidget = new ctkSliderWidget(ThreeDDisplayGroupBox);
        OccludedOpacitySliderWidget->setObjectName(QString::fromUtf8("OccludedOpacitySliderWidget"));
        OccludedOpacitySliderWidget->setSingleStep(0.010000000000000);
        OccludedOpacitySliderWidget->setPageStep(0.100000000000000);
        OccludedOpacitySliderWidget->setMaximum(1.000000000000000);

        horizontalLayout_6->addWidget(OccludedOpacitySliderWidget);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        PointLabelsVisibilityLabel_2 = new QLabel(ThreeDDisplayGroupBox);
        PointLabelsVisibilityLabel_2->setObjectName(QString::fromUtf8("PointLabelsVisibilityLabel_2"));

        gridLayout_3->addWidget(PointLabelsVisibilityLabel_2, 0, 0, 1, 1);

        SnapModeComboBox = new QComboBox(ThreeDDisplayGroupBox);
        SnapModeComboBox->setObjectName(QString::fromUtf8("SnapModeComboBox"));

        gridLayout_3->addWidget(SnapModeComboBox, 0, 1, 1, 1);


        gridLayout_2->addWidget(ThreeDDisplayGroupBox, 13, 0, 1, 2);

        PropertiesLabelVisibilityLabel = new QLabel(SliceDisplayCollapsibleGroupBox);
        PropertiesLabelVisibilityLabel->setObjectName(QString::fromUtf8("PropertiesLabelVisibilityLabel"));

        gridLayout_2->addWidget(PropertiesLabelVisibilityLabel, 8, 0, 1, 1);

        activeColorPickerButton = new ctkColorPickerButton(SliceDisplayCollapsibleGroupBox);
        activeColorPickerButton->setObjectName(QString::fromUtf8("activeColorPickerButton"));
        activeColorPickerButton->setDisplayColorName(false);

        gridLayout_2->addWidget(activeColorPickerButton, 3, 1, 1, 1);

        PropertiesLabelVisibilityCheckBox = new QCheckBox(SliceDisplayCollapsibleGroupBox);
        PropertiesLabelVisibilityCheckBox->setObjectName(QString::fromUtf8("PropertiesLabelVisibilityCheckBox"));

        gridLayout_2->addWidget(PropertiesLabelVisibilityCheckBox, 8, 1, 1, 1);


        gridLayout->addWidget(SliceDisplayCollapsibleGroupBox, 10, 0, 1, 2);

        glyphScaleLabel = new QLabel(qMRMLMarkupsDisplayNodeWidget);
        glyphScaleLabel->setObjectName(QString::fromUtf8("glyphScaleLabel"));

        gridLayout->addWidget(glyphScaleLabel, 5, 0, 1, 1);

        textScaleSliderWidget = new ctkSliderWidget(qMRMLMarkupsDisplayNodeWidget);
        textScaleSliderWidget->setObjectName(QString::fromUtf8("textScaleSliderWidget"));
        textScaleSliderWidget->setSingleStep(0.100000000000000);
        textScaleSliderWidget->setMaximum(20.000000000000000);

        gridLayout->addWidget(textScaleSliderWidget, 7, 1, 1, 1);

        textScaleLabel = new QLabel(qMRMLMarkupsDisplayNodeWidget);
        textScaleLabel->setObjectName(QString::fromUtf8("textScaleLabel"));

        gridLayout->addWidget(textScaleLabel, 7, 0, 1, 1);

        ScalarsCollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLMarkupsDisplayNodeWidget);
        ScalarsCollapsibleGroupBox->setObjectName(QString::fromUtf8("ScalarsCollapsibleGroupBox"));
        ScalarsCollapsibleGroupBox->setCollapsed(true);
        verticalLayout = new QVBoxLayout(ScalarsCollapsibleGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ScalarsDisplayWidget = new qMRMLScalarsDisplayWidget(ScalarsCollapsibleGroupBox);
        ScalarsDisplayWidget->setObjectName(QString::fromUtf8("ScalarsDisplayWidget"));

        verticalLayout->addWidget(ScalarsDisplayWidget);


        gridLayout->addWidget(ScalarsCollapsibleGroupBox, 11, 0, 1, 2);

        CollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLMarkupsDisplayNodeWidget);
        CollapsibleGroupBox->setObjectName(QString::fromUtf8("CollapsibleGroupBox"));
        CollapsibleGroupBox->setCollapsed(true);
        verticalLayout_2 = new QVBoxLayout(CollapsibleGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        InteractionHandleWidget = new qMRMLMarkupsInteractionHandleWidget(CollapsibleGroupBox);
        InteractionHandleWidget->setObjectName(QString::fromUtf8("InteractionHandleWidget"));

        verticalLayout_2->addWidget(InteractionHandleWidget);


        gridLayout->addWidget(CollapsibleGroupBox, 8, 0, 1, 2);


        retranslateUi(qMRMLMarkupsDisplayNodeWidget);
        QObject::connect(glyphSizeIsAbsoluteButton, SIGNAL(toggled(bool)), glyphScaleSliderWidget, SLOT(setHidden(bool)));
        QObject::connect(glyphSizeIsAbsoluteButton, SIGNAL(toggled(bool)), glyphSizeSliderWidget, SLOT(setVisible(bool)));
        QObject::connect(qMRMLMarkupsDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ScalarsDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(curveLineSizeIsAbsoluteButton, SIGNAL(toggled(bool)), curveLineThicknessSliderWidget, SLOT(setHidden(bool)));
        QObject::connect(curveLineSizeIsAbsoluteButton, SIGNAL(toggled(bool)), curveLineDiameterSliderWidget, SLOT(setVisible(bool)));
        QObject::connect(qMRMLMarkupsDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), InteractionHandleWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLMarkupsDisplayNodeWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLMarkupsDisplayNodeWidget)
    {
        qMRMLMarkupsDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Markups Display Properties", nullptr));
#if QT_CONFIG(tooltip)
        VisibilityCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Overall visibility of the selected node in all views", nullptr));
#endif // QT_CONFIG(tooltip)
        VisibilityCheckBox->setText(QString());
        opacityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Opacity:", nullptr));
        VisibilityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Visibility:", nullptr));
#if QT_CONFIG(tooltip)
        glyphSizeIsAbsoluteButton->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "If button is pressed then control point glyph size is specified in physical length unit, otherwise as percentage of window size", nullptr));
#endif // QT_CONFIG(tooltip)
        glyphSizeIsAbsoluteButton->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "absolute", nullptr));
        glyphScaleSliderWidget->setSuffix(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", " %", nullptr));
        SliceDisplayCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Advanced", nullptr));
        TextDisplayGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Text Display", nullptr));
        TextBoldCheckBox->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Bold", nullptr));
        TextItalicCheckBox->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Italic", nullptr));
        TextShadowCheckBox->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Shadow", nullptr));
        label_3->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Font:", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Opacity", nullptr));
        label->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Background:", nullptr));
#if QT_CONFIG(tooltip)
        DisplayNodeViewComboBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Select views in which to show this node. All unchecked shows in all 3D and 2D views.", nullptr));
#endif // QT_CONFIG(tooltip)
        activeColorPickerLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Active Color:", nullptr));
        TwoDDisplayGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "2D Display", nullptr));
        FillLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Fill:", nullptr));
        glyphTypeLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Glyph Type:", nullptr));
        OutlineVisibilityCheckBox->setText(QString());
        OpacityLabel2->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Opacity:", nullptr));
        DisplayNodeViewLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "View:", nullptr));
        unselectedColorLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Unselected Color:", nullptr));
        OutlineLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Outline:", nullptr));
#if QT_CONFIG(tooltip)
        PointLabelsVisibilityCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Show control point labels", nullptr));
#endif // QT_CONFIG(tooltip)
        PointLabelsVisibilityCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        curveLineSizeIsAbsoluteButton->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "If button is pressed then line thickness is specified in physical length unit, otherwise as percentage of glyph size", nullptr));
#endif // QT_CONFIG(tooltip)
        curveLineSizeIsAbsoluteButton->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "absolute", nullptr));
        curveLineThicknessSliderWidget->setSuffix(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", " %", nullptr));
        lineThicknessLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Line Thickness:", nullptr));
        selectedColorLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Selected Color:", nullptr));
        FillVisibilityCheckBox->setText(QString());
        OpacityLabel3->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Opacity:", nullptr));
        PointLabelsVisibilityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Control Point Labels:", nullptr));
        ThreeDDisplayGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "3D Display", nullptr));
        OccludedVisibilityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Occluded Visibility:", nullptr));
        OccludedVisibilityCheckBox->setText(QString());
        OpacityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Opacity:", nullptr));
        PointLabelsVisibilityLabel_2->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Placement mode:", nullptr));
        PropertiesLabelVisibilityLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Properties Label:", nullptr));
#if QT_CONFIG(tooltip)
        PropertiesLabelVisibilityCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Show node name and measurements", nullptr));
#endif // QT_CONFIG(tooltip)
        PropertiesLabelVisibilityCheckBox->setText(QString());
        glyphScaleLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Glyph Size:", nullptr));
        textScaleSliderWidget->setSuffix(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", " %", nullptr));
        textScaleLabel->setText(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Text Size:", nullptr));
        ScalarsCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Scalars", nullptr));
        CollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsDisplayNodeWidget", "Interaction handles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsDisplayNodeWidget: public Ui_qMRMLMarkupsDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSDISPLAYNODEWIDGET_H
