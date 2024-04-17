/********************************************************************************
** Form generated from reading UI file 'qMRMLColorLegendDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLCOLORLEGENDDISPLAYNODEWIDGET_H
#define UI_QMRMLCOLORLEGENDDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkDoubleSlider.h"
#include "ctkDynamicSpacer.h"
#include "ctkVTKTextPropertyWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLColorLegendDisplayNodeWidget
{
public:
    QFormLayout *formLayout;
    QLabel *VisibilityLabel;
    ctkCheckBox *ColorLegendVisibilityCheckBox;
    QLabel *DisplayedOnViewLabel;
    qMRMLDisplayNodeViewComboBox *DisplayNodeViewComboBox;
    QLabel *TitleTextLabel;
    QLineEdit *TitleTextLineEdit;
    QLabel *LabelTextLabel;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *UseScalarValueAsLabelTextRadioButton;
    QRadioButton *UseColorNameAsLabelTextRadioButton;
    QLabel *NumberOfLabelsLabel;
    QSpinBox *NumberOfLabelsSpinBox;
    QLabel *MaxNumberOfColorsLabel;
    QSpinBox *MaxNumberOfColorsSpinBox;
    QLabel *ColorLegendOrientationLabel;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *VerticalOrientationRadioButton;
    QRadioButton *HorizontalOrientationRadioButton;
    QLabel *PositionWithinViewLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    ctkDoubleSlider *PositionXSlider;
    QLabel *label_2;
    ctkDoubleSlider *PositionYSlider;
    QLabel *DimensionsLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    ctkDoubleSlider *ShortSideSizeSlider;
    QLabel *label_3;
    ctkDoubleSlider *LongSideSizeSlider;
    ctkCollapsibleGroupBox *TitlePropertiesGroupBox;
    QVBoxLayout *verticalLayout;
    ctkVTKTextPropertyWidget *TitleTextPropertyWidget;
    ctkCollapsibleGroupBox *LabelPropertiesGroupBox;
    QFormLayout *formLayout_3;
    ctkVTKTextPropertyWidget *LabelTextPropertyWidget;
    ctkDynamicSpacer *DynamicSpacer;
    QButtonGroup *ColorLegendOrientationButtonGroup;
    QButtonGroup *LabelTextButtonGroup;

    void setupUi(qMRMLWidget *qMRMLColorLegendDisplayNodeWidget)
    {
        if (qMRMLColorLegendDisplayNodeWidget->objectName().isEmpty())
            qMRMLColorLegendDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLColorLegendDisplayNodeWidget"));
        qMRMLColorLegendDisplayNodeWidget->resize(356, 374);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Icons/Colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        qMRMLColorLegendDisplayNodeWidget->setWindowIcon(icon);
        formLayout = new QFormLayout(qMRMLColorLegendDisplayNodeWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        VisibilityLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        VisibilityLabel->setObjectName(QString::fromUtf8("VisibilityLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, VisibilityLabel);

        ColorLegendVisibilityCheckBox = new ctkCheckBox(qMRMLColorLegendDisplayNodeWidget);
        ColorLegendVisibilityCheckBox->setObjectName(QString::fromUtf8("ColorLegendVisibilityCheckBox"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::On);
        ColorLegendVisibilityCheckBox->setIndicatorIcon(icon1);
        ColorLegendVisibilityCheckBox->setIndicatorIconSize(QSize(21, 21));

        formLayout->setWidget(0, QFormLayout::FieldRole, ColorLegendVisibilityCheckBox);

        DisplayedOnViewLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        DisplayedOnViewLabel->setObjectName(QString::fromUtf8("DisplayedOnViewLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, DisplayedOnViewLabel);

        DisplayNodeViewComboBox = new qMRMLDisplayNodeViewComboBox(qMRMLColorLegendDisplayNodeWidget);
        DisplayNodeViewComboBox->setObjectName(QString::fromUtf8("DisplayNodeViewComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, DisplayNodeViewComboBox);

        TitleTextLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        TitleTextLabel->setObjectName(QString::fromUtf8("TitleTextLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, TitleTextLabel);

        TitleTextLineEdit = new QLineEdit(qMRMLColorLegendDisplayNodeWidget);
        TitleTextLineEdit->setObjectName(QString::fromUtf8("TitleTextLineEdit"));
        TitleTextLineEdit->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, TitleTextLineEdit);

        LabelTextLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        LabelTextLabel->setObjectName(QString::fromUtf8("LabelTextLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, LabelTextLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        UseScalarValueAsLabelTextRadioButton = new QRadioButton(qMRMLColorLegendDisplayNodeWidget);
        LabelTextButtonGroup = new QButtonGroup(qMRMLColorLegendDisplayNodeWidget);
        LabelTextButtonGroup->setObjectName(QString::fromUtf8("LabelTextButtonGroup"));
        LabelTextButtonGroup->addButton(UseScalarValueAsLabelTextRadioButton);
        UseScalarValueAsLabelTextRadioButton->setObjectName(QString::fromUtf8("UseScalarValueAsLabelTextRadioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UseScalarValueAsLabelTextRadioButton->sizePolicy().hasHeightForWidth());
        UseScalarValueAsLabelTextRadioButton->setSizePolicy(sizePolicy);
        UseScalarValueAsLabelTextRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(UseScalarValueAsLabelTextRadioButton);

        UseColorNameAsLabelTextRadioButton = new QRadioButton(qMRMLColorLegendDisplayNodeWidget);
        LabelTextButtonGroup->addButton(UseColorNameAsLabelTextRadioButton);
        UseColorNameAsLabelTextRadioButton->setObjectName(QString::fromUtf8("UseColorNameAsLabelTextRadioButton"));

        horizontalLayout_6->addWidget(UseColorNameAsLabelTextRadioButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_6);

        NumberOfLabelsLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        NumberOfLabelsLabel->setObjectName(QString::fromUtf8("NumberOfLabelsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, NumberOfLabelsLabel);

        NumberOfLabelsSpinBox = new QSpinBox(qMRMLColorLegendDisplayNodeWidget);
        NumberOfLabelsSpinBox->setObjectName(QString::fromUtf8("NumberOfLabelsSpinBox"));
        NumberOfLabelsSpinBox->setMaximum(64);
        NumberOfLabelsSpinBox->setValue(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, NumberOfLabelsSpinBox);

        MaxNumberOfColorsLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        MaxNumberOfColorsLabel->setObjectName(QString::fromUtf8("MaxNumberOfColorsLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, MaxNumberOfColorsLabel);

        MaxNumberOfColorsSpinBox = new QSpinBox(qMRMLColorLegendDisplayNodeWidget);
        MaxNumberOfColorsSpinBox->setObjectName(QString::fromUtf8("MaxNumberOfColorsSpinBox"));
        MaxNumberOfColorsSpinBox->setMinimum(2);
        MaxNumberOfColorsSpinBox->setMaximum(9999);
        MaxNumberOfColorsSpinBox->setValue(256);

        formLayout->setWidget(5, QFormLayout::FieldRole, MaxNumberOfColorsSpinBox);

        ColorLegendOrientationLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        ColorLegendOrientationLabel->setObjectName(QString::fromUtf8("ColorLegendOrientationLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, ColorLegendOrientationLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        VerticalOrientationRadioButton = new QRadioButton(qMRMLColorLegendDisplayNodeWidget);
        ColorLegendOrientationButtonGroup = new QButtonGroup(qMRMLColorLegendDisplayNodeWidget);
        ColorLegendOrientationButtonGroup->setObjectName(QString::fromUtf8("ColorLegendOrientationButtonGroup"));
        ColorLegendOrientationButtonGroup->addButton(VerticalOrientationRadioButton);
        VerticalOrientationRadioButton->setObjectName(QString::fromUtf8("VerticalOrientationRadioButton"));
        sizePolicy.setHeightForWidth(VerticalOrientationRadioButton->sizePolicy().hasHeightForWidth());
        VerticalOrientationRadioButton->setSizePolicy(sizePolicy);
        VerticalOrientationRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(VerticalOrientationRadioButton);

        HorizontalOrientationRadioButton = new QRadioButton(qMRMLColorLegendDisplayNodeWidget);
        ColorLegendOrientationButtonGroup->addButton(HorizontalOrientationRadioButton);
        HorizontalOrientationRadioButton->setObjectName(QString::fromUtf8("HorizontalOrientationRadioButton"));

        horizontalLayout_4->addWidget(HorizontalOrientationRadioButton);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_4);

        PositionWithinViewLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        PositionWithinViewLabel->setObjectName(QString::fromUtf8("PositionWithinViewLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, PositionWithinViewLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        PositionXSlider = new ctkDoubleSlider(qMRMLColorLegendDisplayNodeWidget);
        PositionXSlider->setObjectName(QString::fromUtf8("PositionXSlider"));
        PositionXSlider->setSingleStep(0.010000000000000);
        PositionXSlider->setPageStep(0.100000000000000);
        PositionXSlider->setMaximum(1.000000000000000);
        PositionXSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(PositionXSlider);

        label_2 = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        PositionYSlider = new ctkDoubleSlider(qMRMLColorLegendDisplayNodeWidget);
        PositionYSlider->setObjectName(QString::fromUtf8("PositionYSlider"));
        PositionYSlider->setSingleStep(0.010000000000000);
        PositionYSlider->setPageStep(0.100000000000000);
        PositionYSlider->setMaximum(1.000000000000000);
        PositionYSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(PositionYSlider);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_5);

        DimensionsLabel = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        DimensionsLabel->setObjectName(QString::fromUtf8("DimensionsLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, DimensionsLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        ShortSideSizeSlider = new ctkDoubleSlider(qMRMLColorLegendDisplayNodeWidget);
        ShortSideSizeSlider->setObjectName(QString::fromUtf8("ShortSideSizeSlider"));
        ShortSideSizeSlider->setSingleStep(0.010000000000000);
        ShortSideSizeSlider->setPageStep(0.100000000000000);
        ShortSideSizeSlider->setMaximum(1.000000000000000);
        ShortSideSizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(ShortSideSizeSlider);

        label_3 = new QLabel(qMRMLColorLegendDisplayNodeWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        LongSideSizeSlider = new ctkDoubleSlider(qMRMLColorLegendDisplayNodeWidget);
        LongSideSizeSlider->setObjectName(QString::fromUtf8("LongSideSizeSlider"));
        LongSideSizeSlider->setSingleStep(0.010000000000000);
        LongSideSizeSlider->setPageStep(0.100000000000000);
        LongSideSizeSlider->setMaximum(1.000000000000000);
        LongSideSizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(LongSideSizeSlider);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_3);

        TitlePropertiesGroupBox = new ctkCollapsibleGroupBox(qMRMLColorLegendDisplayNodeWidget);
        TitlePropertiesGroupBox->setObjectName(QString::fromUtf8("TitlePropertiesGroupBox"));
        TitlePropertiesGroupBox->setCollapsed(true);
        verticalLayout = new QVBoxLayout(TitlePropertiesGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleTextPropertyWidget = new ctkVTKTextPropertyWidget(TitlePropertiesGroupBox);
        TitleTextPropertyWidget->setObjectName(QString::fromUtf8("TitleTextPropertyWidget"));
        TitleTextPropertyWidget->setProperty("showText", QVariant(false));

        verticalLayout->addWidget(TitleTextPropertyWidget);


        formLayout->setWidget(9, QFormLayout::SpanningRole, TitlePropertiesGroupBox);

        LabelPropertiesGroupBox = new ctkCollapsibleGroupBox(qMRMLColorLegendDisplayNodeWidget);
        LabelPropertiesGroupBox->setObjectName(QString::fromUtf8("LabelPropertiesGroupBox"));
        LabelPropertiesGroupBox->setCollapsed(true);
        formLayout_3 = new QFormLayout(LabelPropertiesGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        LabelTextPropertyWidget = new ctkVTKTextPropertyWidget(LabelPropertiesGroupBox);
        LabelTextPropertyWidget->setObjectName(QString::fromUtf8("LabelTextPropertyWidget"));
        LabelTextPropertyWidget->setProperty("showSize", QVariant(false));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, LabelTextPropertyWidget);


        formLayout->setWidget(10, QFormLayout::SpanningRole, LabelPropertiesGroupBox);

        DynamicSpacer = new ctkDynamicSpacer(qMRMLColorLegendDisplayNodeWidget);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setActiveSizePolicy(sizePolicy1);

        formLayout->setWidget(11, QFormLayout::LabelRole, DynamicSpacer);


        retranslateUi(qMRMLColorLegendDisplayNodeWidget);
        QObject::connect(qMRMLColorLegendDisplayNodeWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), DisplayNodeViewComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLColorLegendDisplayNodeWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLColorLegendDisplayNodeWidget)
    {
        qMRMLColorLegendDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Color Legend", nullptr));
        VisibilityLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Visibility:", nullptr));
        DisplayedOnViewLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "View:", nullptr));
        TitleTextLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Title:", nullptr));
        TitleTextLineEdit->setText(QString());
        LabelTextLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Label text:", nullptr));
#if QT_CONFIG(tooltip)
        UseScalarValueAsLabelTextRadioButton->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Show numeric value as label text", nullptr));
#endif // QT_CONFIG(tooltip)
        UseScalarValueAsLabelTextRadioButton->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Value", nullptr));
#if QT_CONFIG(tooltip)
        UseColorNameAsLabelTextRadioButton->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Show color name as label text", nullptr));
#endif // QT_CONFIG(tooltip)
        UseColorNameAsLabelTextRadioButton->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Color name", nullptr));
        NumberOfLabelsLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Number of labels:", nullptr));
#if QT_CONFIG(tooltip)
        NumberOfLabelsSpinBox->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Number of labels to display. Only applicable if values are used as label text (not color name).", nullptr));
#endif // QT_CONFIG(tooltip)
        MaxNumberOfColorsLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Number of colors:", nullptr));
#if QT_CONFIG(tooltip)
        MaxNumberOfColorsSpinBox->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Maximum number of colors displayed. Reduce the number to see discrete colors instead of a continuous color gradient. Only applicable if values are used as label text (not color name).", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorLegendOrientationLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Orientation:", nullptr));
        VerticalOrientationRadioButton->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Vertical", nullptr));
        HorizontalOrientationRadioButton->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Horizontal", nullptr));
        PositionWithinViewLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Position:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Horizontal position of the color legend", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "H:", nullptr));
#if QT_CONFIG(tooltip)
        PositionXSlider->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Horizontal position of the color legend", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Vertical position of the color legend", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "V:", nullptr));
#if QT_CONFIG(tooltip)
        PositionYSlider->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Vertical position of the color legend", nullptr));
#endif // QT_CONFIG(tooltip)
        DimensionsLabel->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Size:", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Short side length of the color legend, relative to view size", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "S:", nullptr));
#if QT_CONFIG(tooltip)
        ShortSideSizeSlider->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Short side length of the color legend, relative to view size", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Long side length of the color legend, relative to view size", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "L:", nullptr));
#if QT_CONFIG(tooltip)
        LongSideSizeSlider->setToolTip(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Long side length of the color legend, relative to view size", nullptr));
#endif // QT_CONFIG(tooltip)
        TitlePropertiesGroupBox->setTitle(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Title properties", nullptr));
        LabelPropertiesGroupBox->setTitle(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Label properties", nullptr));
        LabelTextPropertyWidget->setTextLabel(QCoreApplication::translate("qMRMLColorLegendDisplayNodeWidget", "Format:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLColorLegendDisplayNodeWidget: public Ui_qMRMLColorLegendDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLCOLORLEGENDDISPLAYNODEWIDGET_H
