/********************************************************************************
** Form generated from reading UI file 'qMRMLSliceVerticalControllerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSLICEVERTICALCONTROLLERWIDGET_H
#define UI_QMRMLSLICEVERTICALCONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include "ctkSliderWidget.h"
#include "qMRMLSliderWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSliceVerticalControllerWidget
{
public:
    QVBoxLayout *verticalLayout;
    qMRMLSliderWidget *SliceVerticalOffsetSlider;

    void setupUi(qMRMLWidget *qMRMLSliceVerticalControllerWidget)
    {
        if (qMRMLSliceVerticalControllerWidget->objectName().isEmpty())
            qMRMLSliceVerticalControllerWidget->setObjectName(QString::fromUtf8("qMRMLSliceVerticalControllerWidget"));
        qMRMLSliceVerticalControllerWidget->setEnabled(false);
        qMRMLSliceVerticalControllerWidget->resize(84, 319);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSliceVerticalControllerWidget->sizePolicy().hasHeightForWidth());
        qMRMLSliceVerticalControllerWidget->setSizePolicy(sizePolicy);
        qMRMLSliceVerticalControllerWidget->setMinimumSize(QSize(0, 0));
        qMRMLSliceVerticalControllerWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(qMRMLSliceVerticalControllerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SliceVerticalOffsetSlider = new qMRMLSliderWidget(qMRMLSliceVerticalControllerWidget);
        SliceVerticalOffsetSlider->setObjectName(QString::fromUtf8("SliceVerticalOffsetSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SliceVerticalOffsetSlider->sizePolicy().hasHeightForWidth());
        SliceVerticalOffsetSlider->setSizePolicy(sizePolicy1);
        SliceVerticalOffsetSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:vertical {\n"
"	background-color: black;\n"
"    margin: 0px 0px 0px 0px;\n"
"	border: none;\n"
"	 width: 12px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"	background-color: rgba(200, 200, 200, 200);;\n"
"	border-width: 1px;\n"
"   margin-top: -5px;\n"
"	margin-bottom: -5px;\n"
"	height: 50px;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"	background-color: rgba(150, 150, 150, 200);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:pressed {\n"
"	background-color: rgba(0, 150, 150, 200);\n"
"    border-radius: 5px;\n"
"}"));
        SliceVerticalOffsetSlider->setSpinBoxVisible(false);
        SliceVerticalOffsetSlider->setQuantity(QString::fromUtf8("length"));
        SliceVerticalOffsetSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(SliceVerticalOffsetSlider);


        retranslateUi(qMRMLSliceVerticalControllerWidget);

        QMetaObject::connectSlotsByName(qMRMLSliceVerticalControllerWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSliceVerticalControllerWidget)
    {
        qMRMLSliceVerticalControllerWidget->setWindowTitle(QCoreApplication::translate("qMRMLSliceVerticalControllerWidget", "Vertical Slice Controller", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSliceVerticalControllerWidget: public Ui_qMRMLSliceVerticalControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSLICEVERTICALCONTROLLERWIDGET_H
