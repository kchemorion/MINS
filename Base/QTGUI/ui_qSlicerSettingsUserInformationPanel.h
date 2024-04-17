/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsUserInformationPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSUSERINFORMATIONPANEL_H
#define UI_QSLICERSETTINGSUSERINFORMATIONPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsUserInformationPanel
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *ProcedureRoleLineEdit;
    QLabel *OrganizationRoleLabel;
    QLineEdit *LoginLineEdit;
    QLabel *LoginLabel;
    QLineEdit *OrganizationRoleLineEdit;
    QLabel *NameLabel;
    QLineEdit *OrganizationLineEdit;
    QLabel *ProcedureRoleLabel;
    QLabel *OrganizationLabel;
    QLineEdit *EmailLineEdit;
    QLineEdit *NameLineEdit;
    QLabel *EmailLabel;
    QLabel *EmailValidationLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(ctkSettingsPanel *qSlicerSettingsUserInformationPanel)
    {
        if (qSlicerSettingsUserInformationPanel->objectName().isEmpty())
            qSlicerSettingsUserInformationPanel->setObjectName(QString::fromUtf8("qSlicerSettingsUserInformationPanel"));
        qSlicerSettingsUserInformationPanel->resize(288, 212);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerSettingsUserInformationPanel->sizePolicy().hasHeightForWidth());
        qSlicerSettingsUserInformationPanel->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qSlicerSettingsUserInformationPanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        ProcedureRoleLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        ProcedureRoleLineEdit->setObjectName(QString::fromUtf8("ProcedureRoleLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ProcedureRoleLineEdit->sizePolicy().hasHeightForWidth());
        ProcedureRoleLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(ProcedureRoleLineEdit, 5, 1, 1, 1);

        OrganizationRoleLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        OrganizationRoleLabel->setObjectName(QString::fromUtf8("OrganizationRoleLabel"));

        gridLayout_2->addWidget(OrganizationRoleLabel, 4, 0, 1, 1);

        LoginLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        LoginLineEdit->setObjectName(QString::fromUtf8("LoginLineEdit"));
        sizePolicy1.setHeightForWidth(LoginLineEdit->sizePolicy().hasHeightForWidth());
        LoginLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(LoginLineEdit, 1, 1, 1, 1);

        LoginLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        LoginLabel->setObjectName(QString::fromUtf8("LoginLabel"));

        gridLayout_2->addWidget(LoginLabel, 1, 0, 1, 1);

        OrganizationRoleLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        OrganizationRoleLineEdit->setObjectName(QString::fromUtf8("OrganizationRoleLineEdit"));
        sizePolicy1.setHeightForWidth(OrganizationRoleLineEdit->sizePolicy().hasHeightForWidth());
        OrganizationRoleLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(OrganizationRoleLineEdit, 4, 1, 1, 1);

        NameLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        gridLayout_2->addWidget(NameLabel, 0, 0, 1, 1);

        OrganizationLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        OrganizationLineEdit->setObjectName(QString::fromUtf8("OrganizationLineEdit"));
        sizePolicy1.setHeightForWidth(OrganizationLineEdit->sizePolicy().hasHeightForWidth());
        OrganizationLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(OrganizationLineEdit, 3, 1, 1, 1);

        ProcedureRoleLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        ProcedureRoleLabel->setObjectName(QString::fromUtf8("ProcedureRoleLabel"));

        gridLayout_2->addWidget(ProcedureRoleLabel, 5, 0, 1, 1);

        OrganizationLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        OrganizationLabel->setObjectName(QString::fromUtf8("OrganizationLabel"));

        gridLayout_2->addWidget(OrganizationLabel, 3, 0, 1, 1);

        EmailLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        EmailLineEdit->setObjectName(QString::fromUtf8("EmailLineEdit"));
        sizePolicy1.setHeightForWidth(EmailLineEdit->sizePolicy().hasHeightForWidth());
        EmailLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(EmailLineEdit, 2, 1, 1, 1);

        NameLineEdit = new QLineEdit(qSlicerSettingsUserInformationPanel);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));
        sizePolicy1.setHeightForWidth(NameLineEdit->sizePolicy().hasHeightForWidth());
        NameLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(NameLineEdit, 0, 1, 1, 1);

        EmailLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        EmailLabel->setObjectName(QString::fromUtf8("EmailLabel"));

        gridLayout_2->addWidget(EmailLabel, 2, 0, 1, 1);

        EmailValidationLabel = new QLabel(qSlicerSettingsUserInformationPanel);
        EmailValidationLabel->setObjectName(QString::fromUtf8("EmailValidationLabel"));
        EmailValidationLabel->setStyleSheet(QString::fromUtf8("color:red"));

        gridLayout_2->addWidget(EmailValidationLabel, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(qSlicerSettingsUserInformationPanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsUserInformationPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsUserInformationPanel)
    {
        qSlicerSettingsUserInformationPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "General", nullptr));
        OrganizationRoleLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Organization role:", nullptr));
        LoginLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Login:", nullptr));
#if QT_CONFIG(tooltip)
        NameLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Directory where scenes are saved to by default", nullptr));
#endif // QT_CONFIG(tooltip)
        NameLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Name:", nullptr));
        ProcedureRoleLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Procedure role:", nullptr));
        OrganizationLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Organization:", nullptr));
#if QT_CONFIG(tooltip)
        EmailLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Python script that is executed after the application is started", nullptr));
#endif // QT_CONFIG(tooltip)
        EmailLabel->setText(QCoreApplication::translate("qSlicerSettingsUserInformationPanel", "Email:", nullptr));
        EmailValidationLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsUserInformationPanel: public Ui_qSlicerSettingsUserInformationPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSUSERINFORMATIONPANEL_H
