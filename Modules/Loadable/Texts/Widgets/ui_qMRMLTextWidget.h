/********************************************************************************
** Form generated from reading UI file 'qMRMLTextWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTEXTWIDGET_H
#define UI_QMRMLTEXTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLTextWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *TextEdit;
    QHBoxLayout *ButtonLayout;
    QPushButton *EditButton;
    QPushButton *CancelButton;
    QPushButton *SaveButton;

    void setupUi(qSlicerWidget *qMRMLTextWidget)
    {
        if (qMRMLTextWidget->objectName().isEmpty())
            qMRMLTextWidget->setObjectName(QString::fromUtf8("qMRMLTextWidget"));
        qMRMLTextWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(qMRMLTextWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextEdit = new QTextEdit(qMRMLTextWidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        TextEdit->setFont(font);

        verticalLayout->addWidget(TextEdit);

        ButtonLayout = new QHBoxLayout();
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        EditButton = new QPushButton(qMRMLTextWidget);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        EditButton->setIconSize(QSize(12, 12));

        ButtonLayout->addWidget(EditButton);

        CancelButton = new QPushButton(qMRMLTextWidget);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));
        CancelButton->setEnabled(true);

        ButtonLayout->addWidget(CancelButton);

        SaveButton = new QPushButton(qMRMLTextWidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setEnabled(true);

        ButtonLayout->addWidget(SaveButton);


        verticalLayout->addLayout(ButtonLayout);


        retranslateUi(qMRMLTextWidget);

        QMetaObject::connectSlotsByName(qMRMLTextWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qMRMLTextWidget)
    {
        qMRMLTextWidget->setWindowTitle(QCoreApplication::translate("qMRMLTextWidget", "Text Properties", nullptr));
        EditButton->setText(QCoreApplication::translate("qMRMLTextWidget", "Edit", nullptr));
        CancelButton->setText(QCoreApplication::translate("qMRMLTextWidget", "Cancel", nullptr));
        SaveButton->setText(QCoreApplication::translate("qMRMLTextWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLTextWidget: public Ui_qMRMLTextWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTEXTWIDGET_H
