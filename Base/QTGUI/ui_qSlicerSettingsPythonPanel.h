/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsPythonPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSPYTHONPANEL_H
#define UI_QSLICERSETTINGSPYTHONPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkFontButton.h"
#include "ctkPathLineEdit.h"
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsPythonPanel
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *GeneralGroupBox;
    QFormLayout *formLayout_2;
    QLabel *EditorLabel;
    ctkPathLineEdit *EditorPathLineEdit;
    QGroupBox *ShellDisplayGroupBox;
    QFormLayout *formLayout;
    QLabel *DockableWindowLabel;
    ctkCheckBox *DockableWindowCheckBox;
    QLabel *PromptFontLabel;
    ctkFontButton *ConsoleFontButton;
    QLabel *LogLevelLabel;
    QComboBox *ConsoleLogLevelComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(ctkSettingsPanel *qSlicerSettingsPythonPanel)
    {
        if (qSlicerSettingsPythonPanel->objectName().isEmpty())
            qSlicerSettingsPythonPanel->setObjectName(QString::fromUtf8("qSlicerSettingsPythonPanel"));
        qSlicerSettingsPythonPanel->resize(370, 220);
        verticalLayout = new QVBoxLayout(qSlicerSettingsPythonPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        GeneralGroupBox = new QGroupBox(qSlicerSettingsPythonPanel);
        GeneralGroupBox->setObjectName(QString::fromUtf8("GeneralGroupBox"));
        GeneralGroupBox->setFlat(true);
        formLayout_2 = new QFormLayout(GeneralGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        EditorLabel = new QLabel(GeneralGroupBox);
        EditorLabel->setObjectName(QString::fromUtf8("EditorLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, EditorLabel);

        EditorPathLineEdit = new ctkPathLineEdit(GeneralGroupBox);
        EditorPathLineEdit->setObjectName(QString::fromUtf8("EditorPathLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, EditorPathLineEdit);


        verticalLayout->addWidget(GeneralGroupBox);

        ShellDisplayGroupBox = new QGroupBox(qSlicerSettingsPythonPanel);
        ShellDisplayGroupBox->setObjectName(QString::fromUtf8("ShellDisplayGroupBox"));
        ShellDisplayGroupBox->setFlat(true);
        formLayout = new QFormLayout(ShellDisplayGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        DockableWindowLabel = new QLabel(ShellDisplayGroupBox);
        DockableWindowLabel->setObjectName(QString::fromUtf8("DockableWindowLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, DockableWindowLabel);

        DockableWindowCheckBox = new ctkCheckBox(ShellDisplayGroupBox);
        DockableWindowCheckBox->setObjectName(QString::fromUtf8("DockableWindowCheckBox"));
        DockableWindowCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, DockableWindowCheckBox);

        PromptFontLabel = new QLabel(ShellDisplayGroupBox);
        PromptFontLabel->setObjectName(QString::fromUtf8("PromptFontLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, PromptFontLabel);

        ConsoleFontButton = new ctkFontButton(ShellDisplayGroupBox);
        ConsoleFontButton->setObjectName(QString::fromUtf8("ConsoleFontButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ConsoleFontButton);

        LogLevelLabel = new QLabel(ShellDisplayGroupBox);
        LogLevelLabel->setObjectName(QString::fromUtf8("LogLevelLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, LogLevelLabel);

        ConsoleLogLevelComboBox = new QComboBox(ShellDisplayGroupBox);
        ConsoleLogLevelComboBox->setObjectName(QString::fromUtf8("ConsoleLogLevelComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ConsoleLogLevelComboBox);


        verticalLayout->addWidget(ShellDisplayGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(qSlicerSettingsPythonPanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsPythonPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsPythonPanel)
    {
        qSlicerSettingsPythonPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Python", nullptr));
        GeneralGroupBox->setTitle(QCoreApplication::translate("qSlicerSettingsPythonPanel", "General", nullptr));
        EditorLabel->setText(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Editor for .py files:", nullptr));
#if QT_CONFIG(tooltip)
        EditorPathLineEdit->setToolTip(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Select an executable for editing .py files. If left empty then the default program associated with .py files will be launched.", nullptr));
#endif // QT_CONFIG(tooltip)
        EditorPathLineEdit->setSettingKey(QCoreApplication::translate("qSlicerSettingsPythonPanel", "PythonEditor", nullptr));
        ShellDisplayGroupBox->setTitle(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Python Console", nullptr));
        DockableWindowLabel->setText(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Display in dockable window:", nullptr));
#if QT_CONFIG(tooltip)
        DockableWindowCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Display Python console in a window that can be placed inside the main window. If disabled then the Python Console is displayed as an independent window.", nullptr));
#endif // QT_CONFIG(tooltip)
        PromptFontLabel->setText(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Font:", nullptr));
        ConsoleFontButton->setText(QString());
        LogLevelLabel->setText(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Log level:", nullptr));
#if QT_CONFIG(tooltip)
        ConsoleLogLevelComboBox->setToolTip(QCoreApplication::translate("qSlicerSettingsPythonPanel", "Log messages at this level and above are displayed in the Python console.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsPythonPanel: public Ui_qSlicerSettingsPythonPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSPYTHONPANEL_H
