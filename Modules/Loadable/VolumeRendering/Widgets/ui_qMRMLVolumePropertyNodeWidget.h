/********************************************************************************
** Form generated from reading UI file 'qMRMLVolumePropertyNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLVOLUMEPROPERTYNODEWIDGET_H
#define UI_QMRMLVOLUMEPROPERTYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkVTKVolumePropertyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLVolumePropertyNodeWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkVTKVolumePropertyWidget *VolumePropertyWidget;

    void setupUi(QWidget *qMRMLVolumePropertyNodeWidget)
    {
        if (qMRMLVolumePropertyNodeWidget->objectName().isEmpty())
            qMRMLVolumePropertyNodeWidget->setObjectName(QString::fromUtf8("qMRMLVolumePropertyNodeWidget"));
        qMRMLVolumePropertyNodeWidget->resize(240, 338);
        verticalLayout = new QVBoxLayout(qMRMLVolumePropertyNodeWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        VolumePropertyWidget = new ctkVTKVolumePropertyWidget(qMRMLVolumePropertyNodeWidget);
        VolumePropertyWidget->setObjectName(QString::fromUtf8("VolumePropertyWidget"));

        verticalLayout->addWidget(VolumePropertyWidget);


        retranslateUi(qMRMLVolumePropertyNodeWidget);

        QMetaObject::connectSlotsByName(qMRMLVolumePropertyNodeWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLVolumePropertyNodeWidget)
    {
        qMRMLVolumePropertyNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLVolumePropertyNodeWidget", "Volume Property Node", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLVolumePropertyNodeWidget: public Ui_qMRMLVolumePropertyNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLVOLUMEPROPERTYNODEWIDGET_H
