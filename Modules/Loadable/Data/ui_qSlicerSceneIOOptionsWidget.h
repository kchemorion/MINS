/********************************************************************************
** Form generated from reading UI file 'qSlicerSceneIOOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSCENEIOOPTIONSWIDGET_H
#define UI_QSLICERSCENEIOOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSceneIOOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *ClearSceneCheckBox;

    void setupUi(qSlicerWidget *qSlicerSceneIOOptionsWidget)
    {
        if (qSlicerSceneIOOptionsWidget->objectName().isEmpty())
            qSlicerSceneIOOptionsWidget->setObjectName(QString::fromUtf8("qSlicerSceneIOOptionsWidget"));
        qSlicerSceneIOOptionsWidget->resize(256, 17);
        horizontalLayout = new QHBoxLayout(qSlicerSceneIOOptionsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ClearSceneCheckBox = new QCheckBox(qSlicerSceneIOOptionsWidget);
        ClearSceneCheckBox->setObjectName(QString::fromUtf8("ClearSceneCheckBox"));
        ClearSceneCheckBox->setChecked(false);

        horizontalLayout->addWidget(ClearSceneCheckBox);


        retranslateUi(qSlicerSceneIOOptionsWidget);

        QMetaObject::connectSlotsByName(qSlicerSceneIOOptionsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSceneIOOptionsWidget)
    {
        qSlicerSceneIOOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerSceneIOOptionsWidget", "Scene Options", nullptr));
        ClearSceneCheckBox->setText(QCoreApplication::translate("qSlicerSceneIOOptionsWidget", "Clear existing scene", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSceneIOOptionsWidget: public Ui_qSlicerSceneIOOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSCENEIOOPTIONSWIDGET_H
