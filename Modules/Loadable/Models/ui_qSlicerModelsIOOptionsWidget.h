/********************************************************************************
** Form generated from reading UI file 'qSlicerModelsIOOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMODELSIOOPTIONSWIDGET_H
#define UI_QSLICERMODELSIOOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerModelsIOOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *coordinateSystemComboBox;

    void setupUi(qSlicerWidget *qSlicerModelsIOOptionsWidget)
    {
        if (qSlicerModelsIOOptionsWidget->objectName().isEmpty())
            qSlicerModelsIOOptionsWidget->setObjectName(QString::fromUtf8("qSlicerModelsIOOptionsWidget"));
        qSlicerModelsIOOptionsWidget->resize(151, 19);
        horizontalLayout = new QHBoxLayout(qSlicerModelsIOOptionsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(qSlicerModelsIOOptionsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        coordinateSystemComboBox = new QComboBox(qSlicerModelsIOOptionsWidget);
        coordinateSystemComboBox->addItem(QString());
        coordinateSystemComboBox->addItem(QString());
        coordinateSystemComboBox->addItem(QString());
        coordinateSystemComboBox->setObjectName(QString::fromUtf8("coordinateSystemComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(coordinateSystemComboBox->sizePolicy().hasHeightForWidth());
        coordinateSystemComboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(coordinateSystemComboBox);


        retranslateUi(qSlicerModelsIOOptionsWidget);

        QMetaObject::connectSlotsByName(qSlicerModelsIOOptionsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerModelsIOOptionsWidget)
    {
        qSlicerModelsIOOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "Models options", nullptr));
        label->setText(QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "Coordinate system:", nullptr));
        coordinateSystemComboBox->setItemText(0, QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "Default", nullptr));
        coordinateSystemComboBox->setItemText(1, QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "LPS", nullptr));
        coordinateSystemComboBox->setItemText(2, QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "RAS", nullptr));

#if QT_CONFIG(tooltip)
        coordinateSystemComboBox->setToolTip(QCoreApplication::translate("qSlicerModelsIOOptionsWidget", "Use LPS (left-posterior-superior) for better compatibility with most software (this is the default). Use RAS (right-anterior-superior) for better compatibility with earlier Slicer versions. If coordinate system is defined in the file then that is used and this choice is ignored.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerModelsIOOptionsWidget: public Ui_qSlicerModelsIOOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMODELSIOOPTIONSWIDGET_H
