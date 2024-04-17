/********************************************************************************
** Form generated from reading UI file 'qSlicerActionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERACTIONSDIALOG_H
#define UI_QSLICERACTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkActionsWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerActionsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *ActionsTab;
    QGridLayout *gridLayout_2;
    ctkActionsWidget *ActionsWidget;
    QWidget *WikiTab;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qSlicerActionsDialog)
    {
        if (qSlicerActionsDialog->objectName().isEmpty())
            qSlicerActionsDialog->setObjectName(QString::fromUtf8("qSlicerActionsDialog"));
        qSlicerActionsDialog->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(qSlicerActionsDialog);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(qSlicerActionsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        ActionsTab = new QWidget();
        ActionsTab->setObjectName(QString::fromUtf8("ActionsTab"));
        gridLayout_2 = new QGridLayout(ActionsTab);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ActionsWidget = new ctkActionsWidget(ActionsTab);
        ActionsWidget->setObjectName(QString::fromUtf8("ActionsWidget"));
        ActionsWidget->setSortColumn(0);

        gridLayout_2->addWidget(ActionsWidget, 0, 0, 1, 1);

        tabWidget->addTab(ActionsTab, QString());
        WikiTab = new QWidget();
        WikiTab->setObjectName(QString::fromUtf8("WikiTab"));
        gridLayout = new QGridLayout(WikiTab);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget->addTab(WikiTab, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(qSlicerActionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(qSlicerActionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), qSlicerActionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), qSlicerActionsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerActionsDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerActionsDialog)
    {
        qSlicerActionsDialog->setWindowTitle(QCoreApplication::translate("qSlicerActionsDialog", "Actions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ActionsTab), QCoreApplication::translate("qSlicerActionsDialog", "Shortcuts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(WikiTab), QCoreApplication::translate("qSlicerActionsDialog", "More...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerActionsDialog: public Ui_qSlicerActionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERACTIONSDIALOG_H
