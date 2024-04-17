/********************************************************************************
** Form generated from reading UI file 'qSlicerWebWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERWEBWIDGET_H
#define UI_QSLICERWEBWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerWebWidget
{
public:
    QVBoxLayout *verticalLayout;
    QProgressBar *ProgressBar;

    void setupUi(QWidget *qSlicerWebWidget)
    {
        if (qSlicerWebWidget->objectName().isEmpty())
            qSlicerWebWidget->setObjectName(QString::fromUtf8("qSlicerWebWidget"));
        qSlicerWebWidget->resize(564, 346);
        verticalLayout = new QVBoxLayout(qSlicerWebWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ProgressBar = new QProgressBar(qSlicerWebWidget);
        ProgressBar->setObjectName(QString::fromUtf8("ProgressBar"));
        ProgressBar->setValue(24);

        verticalLayout->addWidget(ProgressBar);


        retranslateUi(qSlicerWebWidget);

        QMetaObject::connectSlotsByName(qSlicerWebWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerWebWidget)
    {
        (void)qSlicerWebWidget;
    } // retranslateUi

};

namespace Ui {
    class qSlicerWebWidget: public Ui_qSlicerWebWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERWEBWIDGET_H
