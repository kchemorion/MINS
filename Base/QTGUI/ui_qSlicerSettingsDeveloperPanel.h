/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsDeveloperPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSDEVELOPERPANEL_H
#define UI_QSLICERSETTINGSDEVELOPERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "ctkSettingsPanel.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsDeveloperPanel
{
public:
    QFormLayout *formLayout;
    QLabel *DeveloperModeEnabledLabel;
    QCheckBox *DeveloperModeEnabledCheckBox;
    QLabel *QtTestingEnabledLabel;
    QCheckBox *QtTestingEnabledCheckBox;
    QLabel *SelfTestMessageDelayLabel;
    ctkSliderWidget *SelfTestMessageDelaySlider;
    QLabel *QtDesignerLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *QtDesignerButton;
    QSpacerItem *horizontalSpacer;
    QLabel *DeveloperModeEnabledLabel_2;
    QCheckBox *PreserveCLIModuleDataFilesCheckBox;

    void setupUi(ctkSettingsPanel *qSlicerSettingsDeveloperPanel)
    {
        if (qSlicerSettingsDeveloperPanel->objectName().isEmpty())
            qSlicerSettingsDeveloperPanel->setObjectName(QString::fromUtf8("qSlicerSettingsDeveloperPanel"));
        qSlicerSettingsDeveloperPanel->resize(305, 121);
        formLayout = new QFormLayout(qSlicerSettingsDeveloperPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        DeveloperModeEnabledLabel = new QLabel(qSlicerSettingsDeveloperPanel);
        DeveloperModeEnabledLabel->setObjectName(QString::fromUtf8("DeveloperModeEnabledLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, DeveloperModeEnabledLabel);

        DeveloperModeEnabledCheckBox = new QCheckBox(qSlicerSettingsDeveloperPanel);
        DeveloperModeEnabledCheckBox->setObjectName(QString::fromUtf8("DeveloperModeEnabledCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, DeveloperModeEnabledCheckBox);

        QtTestingEnabledLabel = new QLabel(qSlicerSettingsDeveloperPanel);
        QtTestingEnabledLabel->setObjectName(QString::fromUtf8("QtTestingEnabledLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, QtTestingEnabledLabel);

        QtTestingEnabledCheckBox = new QCheckBox(qSlicerSettingsDeveloperPanel);
        QtTestingEnabledCheckBox->setObjectName(QString::fromUtf8("QtTestingEnabledCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, QtTestingEnabledCheckBox);

        SelfTestMessageDelayLabel = new QLabel(qSlicerSettingsDeveloperPanel);
        SelfTestMessageDelayLabel->setObjectName(QString::fromUtf8("SelfTestMessageDelayLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, SelfTestMessageDelayLabel);

        SelfTestMessageDelaySlider = new ctkSliderWidget(qSlicerSettingsDeveloperPanel);
        SelfTestMessageDelaySlider->setObjectName(QString::fromUtf8("SelfTestMessageDelaySlider"));
        SelfTestMessageDelaySlider->setDecimals(0);
        SelfTestMessageDelaySlider->setSingleStep(10.000000000000000);
        SelfTestMessageDelaySlider->setPageStep(100.000000000000000);
        SelfTestMessageDelaySlider->setMaximum(2000.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, SelfTestMessageDelaySlider);

        QtDesignerLabel = new QLabel(qSlicerSettingsDeveloperPanel);
        QtDesignerLabel->setObjectName(QString::fromUtf8("QtDesignerLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, QtDesignerLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        QtDesignerButton = new QPushButton(qSlicerSettingsDeveloperPanel);
        QtDesignerButton->setObjectName(QString::fromUtf8("QtDesignerButton"));

        horizontalLayout->addWidget(QtDesignerButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        DeveloperModeEnabledLabel_2 = new QLabel(qSlicerSettingsDeveloperPanel);
        DeveloperModeEnabledLabel_2->setObjectName(QString::fromUtf8("DeveloperModeEnabledLabel_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, DeveloperModeEnabledLabel_2);

        PreserveCLIModuleDataFilesCheckBox = new QCheckBox(qSlicerSettingsDeveloperPanel);
        PreserveCLIModuleDataFilesCheckBox->setObjectName(QString::fromUtf8("PreserveCLIModuleDataFilesCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, PreserveCLIModuleDataFilesCheckBox);


        retranslateUi(qSlicerSettingsDeveloperPanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsDeveloperPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsDeveloperPanel)
    {
        qSlicerSettingsDeveloperPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Developer", nullptr));
        DeveloperModeEnabledLabel->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Enable developer mode:", nullptr));
#if QT_CONFIG(tooltip)
        DeveloperModeEnabledCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Run the application in developer mode: testing modules are shown in the module list, Reload&Test section is shown in scripted modules user interface, CLI module input and output files are not deleted after module execution", nullptr));
#endif // QT_CONFIG(tooltip)
        DeveloperModeEnabledCheckBox->setText(QString());
        QtTestingEnabledLabel->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Enable QtTesting:", nullptr));
        QtTestingEnabledCheckBox->setText(QString());
        SelfTestMessageDelayLabel->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Self-test message delay:", nullptr));
#if QT_CONFIG(tooltip)
        SelfTestMessageDelaySlider->setToolTip(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Time to wait before resuming self-test execution and hiding messages displayed to the user", nullptr));
#endif // QT_CONFIG(tooltip)
        SelfTestMessageDelaySlider->setSuffix(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "ms", nullptr));
        QtDesignerLabel->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Qt Designer:", nullptr));
        QtDesignerButton->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "launch", nullptr));
        DeveloperModeEnabledLabel_2->setText(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Preserve CLI module data files:", nullptr));
#if QT_CONFIG(tooltip)
        PreserveCLIModuleDataFilesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsDeveloperPanel", "Preserve input and data files created during CLI module execution", nullptr));
#endif // QT_CONFIG(tooltip)
        PreserveCLIModuleDataFilesCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsDeveloperPanel: public Ui_qSlicerSettingsDeveloperPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSDEVELOPERPANEL_H
