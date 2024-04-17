/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsInternationalizationPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSINTERNATIONALIZATIONPANEL_H
#define UI_QSLICERSETTINGSINTERNATIONALIZATIONPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsInternationalizationPanel
{
public:
    QFormLayout *formLayout;
    QLabel *InternationalizationEnabledLabel;
    QCheckBox *InternationalizationEnabledCheckBox;

    void setupUi(ctkSettingsPanel *qSlicerSettingsInternationalizationPanel)
    {
        if (qSlicerSettingsInternationalizationPanel->objectName().isEmpty())
            qSlicerSettingsInternationalizationPanel->setObjectName(QString::fromUtf8("qSlicerSettingsInternationalizationPanel"));
        qSlicerSettingsInternationalizationPanel->resize(751, 128);
        formLayout = new QFormLayout(qSlicerSettingsInternationalizationPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        InternationalizationEnabledLabel = new QLabel(qSlicerSettingsInternationalizationPanel);
        InternationalizationEnabledLabel->setObjectName(QString::fromUtf8("InternationalizationEnabledLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, InternationalizationEnabledLabel);

        InternationalizationEnabledCheckBox = new QCheckBox(qSlicerSettingsInternationalizationPanel);
        InternationalizationEnabledCheckBox->setObjectName(QString::fromUtf8("InternationalizationEnabledCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, InternationalizationEnabledCheckBox);


        retranslateUi(qSlicerSettingsInternationalizationPanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsInternationalizationPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsInternationalizationPanel)
    {
        qSlicerSettingsInternationalizationPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsInternationalizationPanel", "Internationalization", nullptr));
        InternationalizationEnabledLabel->setText(QCoreApplication::translate("qSlicerSettingsInternationalizationPanel", "Enable Internationalization:", nullptr));
        InternationalizationEnabledCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsInternationalizationPanel: public Ui_qSlicerSettingsInternationalizationPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSINTERNATIONALIZATIONPANEL_H
