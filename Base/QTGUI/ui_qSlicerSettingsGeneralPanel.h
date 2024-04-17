/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsGeneralPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSGENERALPANEL_H
#define UI_QSLICERSETTINGSGENERALPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "ctkDirectoryButton.h"
#include "ctkLanguageComboBox.h"
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsGeneralPanel
{
public:
    QFormLayout *formLayout;
    QLabel *DefaultScenePathLabel;
    ctkDirectoryButton *DefaultScenePathButton;
    QLabel *ShowSplashScreenLabel;
    QCheckBox *ShowSplashScreenCheckBox;
    ctkLanguageComboBox *LanguageComboBox;
    QLabel *LanguageLabel;
    QLabel *ConfirmRestartLabel;
    QCheckBox *ConfirmRestartCheckBox;
    QLabel *ConfirmExitLabel;
    QCheckBox *ConfirmExitCheckBox;
    QLabel *ConfirmSceneCloseLabel;
    QCheckBox *ConfirmSceneCloseCheckBox;
    QLabel *DocumentationBaseURLLabel;
    QLineEdit *DocumentationBaseURLLineEdit;
    QSpinBox *NumOfRecentlyLoadedFiles;
    QLabel *NumOfRecentlyLoadedFilesLabel;
    QLabel *SlicerRCFileLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *SlicerRCFileValueLabel;
    QPushButton *SlicerRCFileOpenButton;
    QLabel *DocumentationBaseURLLabel_2;
    QLineEdit *ModuleDocumentationURLLineEdit;
    QLabel *ApplicationAutoUpdateCheckLabel;
    QCheckBox *ApplicationAutoUpdateCheckCheckBox;
    QLabel *ApplicationUpdateServerURLLabel;
    QLineEdit *ApplicationUpdateServerURLLineEdit;

    void setupUi(ctkSettingsPanel *qSlicerSettingsGeneralPanel)
    {
        if (qSlicerSettingsGeneralPanel->objectName().isEmpty())
            qSlicerSettingsGeneralPanel->setObjectName(QString::fromUtf8("qSlicerSettingsGeneralPanel"));
        qSlicerSettingsGeneralPanel->resize(415, 306);
        formLayout = new QFormLayout(qSlicerSettingsGeneralPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        DefaultScenePathLabel = new QLabel(qSlicerSettingsGeneralPanel);
        DefaultScenePathLabel->setObjectName(QString::fromUtf8("DefaultScenePathLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, DefaultScenePathLabel);

        DefaultScenePathButton = new ctkDirectoryButton(qSlicerSettingsGeneralPanel);
        DefaultScenePathButton->setObjectName(QString::fromUtf8("DefaultScenePathButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, DefaultScenePathButton);

        ShowSplashScreenLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ShowSplashScreenLabel->setObjectName(QString::fromUtf8("ShowSplashScreenLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ShowSplashScreenLabel);

        ShowSplashScreenCheckBox = new QCheckBox(qSlicerSettingsGeneralPanel);
        ShowSplashScreenCheckBox->setObjectName(QString::fromUtf8("ShowSplashScreenCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ShowSplashScreenCheckBox);

        LanguageComboBox = new ctkLanguageComboBox(qSlicerSettingsGeneralPanel);
        LanguageComboBox->setObjectName(QString::fromUtf8("LanguageComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, LanguageComboBox);

        LanguageLabel = new QLabel(qSlicerSettingsGeneralPanel);
        LanguageLabel->setObjectName(QString::fromUtf8("LanguageLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, LanguageLabel);

        ConfirmRestartLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ConfirmRestartLabel->setObjectName(QString::fromUtf8("ConfirmRestartLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ConfirmRestartLabel);

        ConfirmRestartCheckBox = new QCheckBox(qSlicerSettingsGeneralPanel);
        ConfirmRestartCheckBox->setObjectName(QString::fromUtf8("ConfirmRestartCheckBox"));
        ConfirmRestartCheckBox->setChecked(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, ConfirmRestartCheckBox);

        ConfirmExitLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ConfirmExitLabel->setObjectName(QString::fromUtf8("ConfirmExitLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, ConfirmExitLabel);

        ConfirmExitCheckBox = new QCheckBox(qSlicerSettingsGeneralPanel);
        ConfirmExitCheckBox->setObjectName(QString::fromUtf8("ConfirmExitCheckBox"));
        ConfirmExitCheckBox->setChecked(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, ConfirmExitCheckBox);

        ConfirmSceneCloseLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ConfirmSceneCloseLabel->setObjectName(QString::fromUtf8("ConfirmSceneCloseLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, ConfirmSceneCloseLabel);

        ConfirmSceneCloseCheckBox = new QCheckBox(qSlicerSettingsGeneralPanel);
        ConfirmSceneCloseCheckBox->setObjectName(QString::fromUtf8("ConfirmSceneCloseCheckBox"));
        ConfirmSceneCloseCheckBox->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, ConfirmSceneCloseCheckBox);

        DocumentationBaseURLLabel = new QLabel(qSlicerSettingsGeneralPanel);
        DocumentationBaseURLLabel->setObjectName(QString::fromUtf8("DocumentationBaseURLLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, DocumentationBaseURLLabel);

        DocumentationBaseURLLineEdit = new QLineEdit(qSlicerSettingsGeneralPanel);
        DocumentationBaseURLLineEdit->setObjectName(QString::fromUtf8("DocumentationBaseURLLineEdit"));

        formLayout->setWidget(9, QFormLayout::FieldRole, DocumentationBaseURLLineEdit);

        NumOfRecentlyLoadedFiles = new QSpinBox(qSlicerSettingsGeneralPanel);
        NumOfRecentlyLoadedFiles->setObjectName(QString::fromUtf8("NumOfRecentlyLoadedFiles"));
        NumOfRecentlyLoadedFiles->setMinimum(1);
        NumOfRecentlyLoadedFiles->setMaximum(50);
        NumOfRecentlyLoadedFiles->setValue(10);

        formLayout->setWidget(11, QFormLayout::FieldRole, NumOfRecentlyLoadedFiles);

        NumOfRecentlyLoadedFilesLabel = new QLabel(qSlicerSettingsGeneralPanel);
        NumOfRecentlyLoadedFilesLabel->setObjectName(QString::fromUtf8("NumOfRecentlyLoadedFilesLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, NumOfRecentlyLoadedFilesLabel);

        SlicerRCFileLabel = new QLabel(qSlicerSettingsGeneralPanel);
        SlicerRCFileLabel->setObjectName(QString::fromUtf8("SlicerRCFileLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, SlicerRCFileLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SlicerRCFileValueLabel = new QLineEdit(qSlicerSettingsGeneralPanel);
        SlicerRCFileValueLabel->setObjectName(QString::fromUtf8("SlicerRCFileValueLabel"));
        SlicerRCFileValueLabel->setEnabled(true);
        SlicerRCFileValueLabel->setFrame(true);
        SlicerRCFileValueLabel->setReadOnly(true);

        horizontalLayout->addWidget(SlicerRCFileValueLabel);

        SlicerRCFileOpenButton = new QPushButton(qSlicerSettingsGeneralPanel);
        SlicerRCFileOpenButton->setObjectName(QString::fromUtf8("SlicerRCFileOpenButton"));

        horizontalLayout->addWidget(SlicerRCFileOpenButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        DocumentationBaseURLLabel_2 = new QLabel(qSlicerSettingsGeneralPanel);
        DocumentationBaseURLLabel_2->setObjectName(QString::fromUtf8("DocumentationBaseURLLabel_2"));

        formLayout->setWidget(10, QFormLayout::LabelRole, DocumentationBaseURLLabel_2);

        ModuleDocumentationURLLineEdit = new QLineEdit(qSlicerSettingsGeneralPanel);
        ModuleDocumentationURLLineEdit->setObjectName(QString::fromUtf8("ModuleDocumentationURLLineEdit"));

        formLayout->setWidget(10, QFormLayout::FieldRole, ModuleDocumentationURLLineEdit);

        ApplicationAutoUpdateCheckLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ApplicationAutoUpdateCheckLabel->setObjectName(QString::fromUtf8("ApplicationAutoUpdateCheckLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, ApplicationAutoUpdateCheckLabel);

        ApplicationAutoUpdateCheckCheckBox = new QCheckBox(qSlicerSettingsGeneralPanel);
        ApplicationAutoUpdateCheckCheckBox->setObjectName(QString::fromUtf8("ApplicationAutoUpdateCheckCheckBox"));
        ApplicationAutoUpdateCheckCheckBox->setChecked(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, ApplicationAutoUpdateCheckCheckBox);

        ApplicationUpdateServerURLLabel = new QLabel(qSlicerSettingsGeneralPanel);
        ApplicationUpdateServerURLLabel->setObjectName(QString::fromUtf8("ApplicationUpdateServerURLLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, ApplicationUpdateServerURLLabel);

        ApplicationUpdateServerURLLineEdit = new QLineEdit(qSlicerSettingsGeneralPanel);
        ApplicationUpdateServerURLLineEdit->setObjectName(QString::fromUtf8("ApplicationUpdateServerURLLineEdit"));

        formLayout->setWidget(8, QFormLayout::FieldRole, ApplicationUpdateServerURLLineEdit);


        retranslateUi(qSlicerSettingsGeneralPanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsGeneralPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsGeneralPanel)
    {
        qSlicerSettingsGeneralPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "General", nullptr));
#if QT_CONFIG(tooltip)
        DefaultScenePathLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Directory where scenes are saved to by default", nullptr));
#endif // QT_CONFIG(tooltip)
        DefaultScenePathLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Default scene location:", nullptr));
        ShowSplashScreenLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Disable splash screen:", nullptr));
        ShowSplashScreenCheckBox->setText(QString());
        LanguageLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Language", nullptr));
        ConfirmRestartLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Confirm on restart:", nullptr));
        ConfirmRestartCheckBox->setText(QString());
        ConfirmExitLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Confirm on exit:", nullptr));
        ConfirmExitCheckBox->setText(QString());
        ConfirmSceneCloseLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Confirm on scene close:", nullptr));
        ConfirmSceneCloseCheckBox->setText(QString());
        DocumentationBaseURLLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Documentation base URL:", nullptr));
#if QT_CONFIG(tooltip)
        DocumentationBaseURLLineEdit->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Specify documentation location.\n"
"Available placeholders: {language}, {version}.\n"
"Default: https://slicer.readthedocs.io/{language}/{version}", nullptr));
#endif // QT_CONFIG(tooltip)
        NumOfRecentlyLoadedFilesLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Max. number of 'Recent' menu items:", nullptr));
#if QT_CONFIG(tooltip)
        SlicerRCFileLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Python script that is executed after the application is started", nullptr));
#endif // QT_CONFIG(tooltip)
        SlicerRCFileLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Application startup script:", nullptr));
#if QT_CONFIG(tooltip)
        SlicerRCFileOpenButton->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Open Slicer resource file", nullptr));
#endif // QT_CONFIG(tooltip)
        SlicerRCFileOpenButton->setText(QString());
        DocumentationBaseURLLabel_2->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Module documentation URL:", nullptr));
#if QT_CONFIG(tooltip)
        ModuleDocumentationURLLineEdit->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Specify URL for module documentation.\n"
"Available placeholders: {documentationbaseurl}, {lowercasemodulename}.\n"
"Default: {documentationbaseurl}/user_guide/modules/{lowercasemodulename}.html", nullptr));
#endif // QT_CONFIG(tooltip)
        ApplicationAutoUpdateCheckLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Automatically check for updates:", nullptr));
#if QT_CONFIG(tooltip)
        ApplicationAutoUpdateCheckCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Periodically check for available application updates", nullptr));
#endif // QT_CONFIG(tooltip)
        ApplicationAutoUpdateCheckCheckBox->setText(QString());
        ApplicationUpdateServerURLLabel->setText(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Update server URL:", nullptr));
#if QT_CONFIG(tooltip)
        ApplicationUpdateServerURLLineEdit->setToolTip(QCoreApplication::translate("qSlicerSettingsGeneralPanel", "Address of the server that provides information on latest available application version.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsGeneralPanel: public Ui_qSlicerSettingsGeneralPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSGENERALPANEL_H
