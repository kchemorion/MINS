/********************************************************************************
** Form generated from reading UI file 'qSlicerTerminologiesModule.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTERMINOLOGIESMODULE_H
#define UI_QSLICERTERMINOLOGIESMODULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include "qSlicerTerminologyNavigatorWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTerminologiesModule
{
public:
    QGridLayout *gridLayout;
    qSlicerTerminologyNavigatorWidget *TerminologyNavigatorWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerTerminologiesModule)
    {
        if (qSlicerTerminologiesModule->objectName().isEmpty())
            qSlicerTerminologiesModule->setObjectName(QString::fromUtf8("qSlicerTerminologiesModule"));
        qSlicerTerminologiesModule->resize(365, 326);
        gridLayout = new QGridLayout(qSlicerTerminologiesModule);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TerminologyNavigatorWidget = new qSlicerTerminologyNavigatorWidget(qSlicerTerminologiesModule);
        TerminologyNavigatorWidget->setObjectName(QString::fromUtf8("TerminologyNavigatorWidget"));

        gridLayout->addWidget(TerminologyNavigatorWidget, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(qSlicerTerminologiesModule);

        QMetaObject::connectSlotsByName(qSlicerTerminologiesModule);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerTerminologiesModule)
    {
        qSlicerTerminologiesModule->setWindowTitle(QCoreApplication::translate("qSlicerTerminologiesModule", "Terminologies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerTerminologiesModule: public Ui_qSlicerTerminologiesModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTERMINOLOGIESMODULE_H
