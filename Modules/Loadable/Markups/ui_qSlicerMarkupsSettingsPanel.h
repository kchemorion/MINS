/********************************************************************************
** Form generated from reading UI file 'qSlicerMarkupsSettingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMARKUPSSETTINGSPANEL_H
#define UI_QSLICERMARKUPSSETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "ctkColorPickerButton.h"
#include "ctkSettingsPanel.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerMarkupsSettingsPanel
{
public:
    QFormLayout *formLayout;
    QLabel *defaultGlyphTypeLabel;
    QComboBox *defaultGlyphTypeComboBox;
    QLabel *defaultSelectedColorLabel;
    ctkColorPickerButton *defaultSelectedColorPickerButton;
    QLabel *defaultUnselectedColorLabel;
    ctkColorPickerButton *defaultUnselectedColorPickerButton;
    QLabel *defaultGlyphScaleLabel;
    ctkSliderWidget *defaultGlyphScaleSliderWidget;
    QLabel *defaultTextScaleLabel;
    ctkSliderWidget *defaultTextScaleSliderWidget;
    QLabel *defaultOpacityLabel;
    ctkSliderWidget *defaultOpacitySliderWidget;
    QLabel *defaultActiveColorLabel;
    ctkColorPickerButton *defaultActiveColorPickerButton;

    void setupUi(ctkSettingsPanel *qSlicerMarkupsSettingsPanel)
    {
        if (qSlicerMarkupsSettingsPanel->objectName().isEmpty())
            qSlicerMarkupsSettingsPanel->setObjectName(QString::fromUtf8("qSlicerMarkupsSettingsPanel"));
        qSlicerMarkupsSettingsPanel->resize(345, 204);
        formLayout = new QFormLayout(qSlicerMarkupsSettingsPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        defaultGlyphTypeLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultGlyphTypeLabel->setObjectName(QString::fromUtf8("defaultGlyphTypeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, defaultGlyphTypeLabel);

        defaultGlyphTypeComboBox = new QComboBox(qSlicerMarkupsSettingsPanel);
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->addItem(QString());
        defaultGlyphTypeComboBox->setObjectName(QString::fromUtf8("defaultGlyphTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, defaultGlyphTypeComboBox);

        defaultSelectedColorLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultSelectedColorLabel->setObjectName(QString::fromUtf8("defaultSelectedColorLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, defaultSelectedColorLabel);

        defaultSelectedColorPickerButton = new ctkColorPickerButton(qSlicerMarkupsSettingsPanel);
        defaultSelectedColorPickerButton->setObjectName(QString::fromUtf8("defaultSelectedColorPickerButton"));
        defaultSelectedColorPickerButton->setColor(QColor(68, 172, 100));
        defaultSelectedColorPickerButton->setDisplayColorName(false);
        defaultSelectedColorPickerButton->setDialogOptions(ctkColorPickerButton::UseCTKColorDialog);

        formLayout->setWidget(1, QFormLayout::FieldRole, defaultSelectedColorPickerButton);

        defaultUnselectedColorLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultUnselectedColorLabel->setObjectName(QString::fromUtf8("defaultUnselectedColorLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, defaultUnselectedColorLabel);

        defaultUnselectedColorPickerButton = new ctkColorPickerButton(qSlicerMarkupsSettingsPanel);
        defaultUnselectedColorPickerButton->setObjectName(QString::fromUtf8("defaultUnselectedColorPickerButton"));
        defaultUnselectedColorPickerButton->setColor(QColor(188, 65, 28));
        defaultUnselectedColorPickerButton->setDisplayColorName(false);
        defaultUnselectedColorPickerButton->setDialogOptions(ctkColorPickerButton::UseCTKColorDialog);

        formLayout->setWidget(2, QFormLayout::FieldRole, defaultUnselectedColorPickerButton);

        defaultGlyphScaleLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultGlyphScaleLabel->setObjectName(QString::fromUtf8("defaultGlyphScaleLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, defaultGlyphScaleLabel);

        defaultGlyphScaleSliderWidget = new ctkSliderWidget(qSlicerMarkupsSettingsPanel);
        defaultGlyphScaleSliderWidget->setObjectName(QString::fromUtf8("defaultGlyphScaleSliderWidget"));
        defaultGlyphScaleSliderWidget->setSingleStep(0.100000000000000);
        defaultGlyphScaleSliderWidget->setMaximum(20.000000000000000);
        defaultGlyphScaleSliderWidget->setValue(5.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, defaultGlyphScaleSliderWidget);

        defaultTextScaleLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultTextScaleLabel->setObjectName(QString::fromUtf8("defaultTextScaleLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, defaultTextScaleLabel);

        defaultTextScaleSliderWidget = new ctkSliderWidget(qSlicerMarkupsSettingsPanel);
        defaultTextScaleSliderWidget->setObjectName(QString::fromUtf8("defaultTextScaleSliderWidget"));
        defaultTextScaleSliderWidget->setSingleStep(0.100000000000000);
        defaultTextScaleSliderWidget->setMaximum(20.000000000000000);
        defaultTextScaleSliderWidget->setValue(4.500000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, defaultTextScaleSliderWidget);

        defaultOpacityLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultOpacityLabel->setObjectName(QString::fromUtf8("defaultOpacityLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, defaultOpacityLabel);

        defaultOpacitySliderWidget = new ctkSliderWidget(qSlicerMarkupsSettingsPanel);
        defaultOpacitySliderWidget->setObjectName(QString::fromUtf8("defaultOpacitySliderWidget"));
        defaultOpacitySliderWidget->setSingleStep(0.100000000000000);
        defaultOpacitySliderWidget->setMaximum(1.000000000000000);
        defaultOpacitySliderWidget->setValue(1.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, defaultOpacitySliderWidget);

        defaultActiveColorLabel = new QLabel(qSlicerMarkupsSettingsPanel);
        defaultActiveColorLabel->setObjectName(QString::fromUtf8("defaultActiveColorLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, defaultActiveColorLabel);

        defaultActiveColorPickerButton = new ctkColorPickerButton(qSlicerMarkupsSettingsPanel);
        defaultActiveColorPickerButton->setObjectName(QString::fromUtf8("defaultActiveColorPickerButton"));
        defaultActiveColorPickerButton->setDisplayColorName(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, defaultActiveColorPickerButton);


        retranslateUi(qSlicerMarkupsSettingsPanel);

        defaultGlyphTypeComboBox->setCurrentIndex(12);


        QMetaObject::connectSlotsByName(qSlicerMarkupsSettingsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerMarkupsSettingsPanel)
    {
        qSlicerMarkupsSettingsPanel->setWindowTitle(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Markups Settings", nullptr));
        defaultGlyphTypeLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default glyph type:", nullptr));
        defaultGlyphTypeComboBox->setItemText(0, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Vertex2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(1, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Dash2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(2, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Cross2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(3, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "ThickCross2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(4, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Triangle2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(5, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Square2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(6, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Circle2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(7, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Diamond2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(8, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Arrow2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(9, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "ThickArrow2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(10, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "HookedArrow2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(11, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "StarBurst2D", nullptr));
        defaultGlyphTypeComboBox->setItemText(12, QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Sphere3D", nullptr));

#if QT_CONFIG(tooltip)
        defaultGlyphTypeComboBox->setToolTip(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "The symbol used for the markup", nullptr));
#endif // QT_CONFIG(tooltip)
        defaultSelectedColorLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default selected color:", nullptr));
        defaultUnselectedColorLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default unselected color:", nullptr));
        defaultGlyphScaleLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default glyph scale:", nullptr));
#if QT_CONFIG(tooltip)
        defaultGlyphScaleSliderWidget->setToolTip(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default glyph scale", nullptr));
#endif // QT_CONFIG(tooltip)
        defaultTextScaleLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default text scale:", nullptr));
#if QT_CONFIG(tooltip)
        defaultTextScaleSliderWidget->setToolTip(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default text scale", nullptr));
#endif // QT_CONFIG(tooltip)
        defaultOpacityLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default opacity:", nullptr));
        defaultActiveColorLabel->setText(QCoreApplication::translate("qSlicerMarkupsSettingsPanel", "Default active color:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerMarkupsSettingsPanel: public Ui_qSlicerMarkupsSettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMARKUPSSETTINGSPANEL_H
