/********************************************************************************
** Form generated from reading UI file 'qMRMLThreeDViewInformationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTHREEDVIEWINFORMATIONWIDGET_H
#define UI_QMRMLTHREEDVIEWINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLThreeDViewInformationWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *LayoutNameLineEdit;
    QLabel *label_11;
    QSpinBox *ViewGroupSpinBox;

    void setupUi(qMRMLWidget *qMRMLThreeDViewInformationWidget)
    {
        if (qMRMLThreeDViewInformationWidget->objectName().isEmpty())
            qMRMLThreeDViewInformationWidget->setObjectName(QString::fromUtf8("qMRMLThreeDViewInformationWidget"));
        qMRMLThreeDViewInformationWidget->resize(471, 52);
        formLayout = new QFormLayout(qMRMLThreeDViewInformationWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(qMRMLThreeDViewInformationWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        LayoutNameLineEdit = new QLineEdit(qMRMLThreeDViewInformationWidget);
        LayoutNameLineEdit->setObjectName(QString::fromUtf8("LayoutNameLineEdit"));
        LayoutNameLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, LayoutNameLineEdit);

        label_11 = new QLabel(qMRMLThreeDViewInformationWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        ViewGroupSpinBox = new QSpinBox(qMRMLThreeDViewInformationWidget);
        ViewGroupSpinBox->setObjectName(QString::fromUtf8("ViewGroupSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ViewGroupSpinBox);


        retranslateUi(qMRMLThreeDViewInformationWidget);

        QMetaObject::connectSlotsByName(qMRMLThreeDViewInformationWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLThreeDViewInformationWidget)
    {
        qMRMLThreeDViewInformationWidget->setWindowTitle(QCoreApplication::translate("qMRMLThreeDViewInformationWidget", "3D View Information", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLThreeDViewInformationWidget", "Layout Name:", nullptr));
#if QT_CONFIG(tooltip)
        LayoutNameLineEdit->setToolTip(QCoreApplication::translate("qMRMLThreeDViewInformationWidget", "Name of the slice", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("qMRMLThreeDViewInformationWidget", "View group:", nullptr));
#if QT_CONFIG(tooltip)
        ViewGroupSpinBox->setToolTip(QCoreApplication::translate("qMRMLThreeDViewInformationWidget", "Navigation and linked properties are synchronized in views that has the same group index.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLThreeDViewInformationWidget: public Ui_qMRMLThreeDViewInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTHREEDVIEWINFORMATIONWIDGET_H
