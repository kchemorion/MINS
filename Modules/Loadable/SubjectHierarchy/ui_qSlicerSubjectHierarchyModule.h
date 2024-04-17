/********************************************************************************
** Form generated from reading UI file 'qSlicerSubjectHierarchyModule.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSUBJECTHIERARCHYMODULE_H
#define UI_QSLICERSUBJECTHIERARCHYMODULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSubjectHierarchyModule
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(qSlicerWidget *qSlicerSubjectHierarchyModule)
    {
        if (qSlicerSubjectHierarchyModule->objectName().isEmpty())
            qSlicerSubjectHierarchyModule->setObjectName(QString::fromUtf8("qSlicerSubjectHierarchyModule"));
        qSlicerSubjectHierarchyModule->resize(283, 285);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SubjectHierarchy.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerSubjectHierarchyModule->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qSlicerSubjectHierarchyModule);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        retranslateUi(qSlicerSubjectHierarchyModule);

        QMetaObject::connectSlotsByName(qSlicerSubjectHierarchyModule);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSubjectHierarchyModule)
    {
        qSlicerSubjectHierarchyModule->setWindowTitle(QCoreApplication::translate("qSlicerSubjectHierarchyModule", "SubjectHierarchy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSubjectHierarchyModule: public Ui_qSlicerSubjectHierarchyModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSUBJECTHIERARCHYMODULE_H
