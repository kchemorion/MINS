/********************************************************************************
** Form generated from reading UI file 'qSlicerAnnotationModuleIOOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERANNOTATIONMODULEIOOPTIONSWIDGET_H
#define UI_QSLICERANNOTATIONMODULEIOOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerAnnotationModuleIOOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *NameLineEdit;
    QRadioButton *FiducialRadioButton;
    QRadioButton *RulerRadioButton;
    QRadioButton *ROIRadioButton;

    void setupUi(qSlicerWidget *qSlicerAnnotationModuleIOOptionsWidget)
    {
        if (qSlicerAnnotationModuleIOOptionsWidget->objectName().isEmpty())
            qSlicerAnnotationModuleIOOptionsWidget->setObjectName(QString::fromUtf8("qSlicerAnnotationModuleIOOptionsWidget"));
        qSlicerAnnotationModuleIOOptionsWidget->resize(552, 27);
        horizontalLayout = new QHBoxLayout(qSlicerAnnotationModuleIOOptionsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NameLineEdit = new QLineEdit(qSlicerAnnotationModuleIOOptionsWidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NameLineEdit->sizePolicy().hasHeightForWidth());
        NameLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(NameLineEdit);

        FiducialRadioButton = new QRadioButton(qSlicerAnnotationModuleIOOptionsWidget);
        FiducialRadioButton->setObjectName(QString::fromUtf8("FiducialRadioButton"));
        FiducialRadioButton->setChecked(true);

        horizontalLayout->addWidget(FiducialRadioButton);

        RulerRadioButton = new QRadioButton(qSlicerAnnotationModuleIOOptionsWidget);
        RulerRadioButton->setObjectName(QString::fromUtf8("RulerRadioButton"));

        horizontalLayout->addWidget(RulerRadioButton);

        ROIRadioButton = new QRadioButton(qSlicerAnnotationModuleIOOptionsWidget);
        ROIRadioButton->setObjectName(QString::fromUtf8("ROIRadioButton"));

        horizontalLayout->addWidget(ROIRadioButton);


        retranslateUi(qSlicerAnnotationModuleIOOptionsWidget);

        QMetaObject::connectSlotsByName(qSlicerAnnotationModuleIOOptionsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerAnnotationModuleIOOptionsWidget)
    {
        qSlicerAnnotationModuleIOOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerAnnotationModuleIOOptionsWidget", "Volume Options", nullptr));
        FiducialRadioButton->setText(QCoreApplication::translate("qSlicerAnnotationModuleIOOptionsWidget", "Fiducial", nullptr));
        RulerRadioButton->setText(QCoreApplication::translate("qSlicerAnnotationModuleIOOptionsWidget", "Ruler", nullptr));
        ROIRadioButton->setText(QCoreApplication::translate("qSlicerAnnotationModuleIOOptionsWidget", "ROI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerAnnotationModuleIOOptionsWidget: public Ui_qSlicerAnnotationModuleIOOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERANNOTATIONMODULEIOOPTIONSWIDGET_H
