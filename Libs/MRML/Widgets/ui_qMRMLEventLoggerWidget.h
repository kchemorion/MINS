/********************************************************************************
** Form generated from reading UI file 'qMRMLEventLoggerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLEVENTLOGGERWIDGET_H
#define UI_QMRMLEVENTLOGGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLEventLoggerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *TextEdit;

    void setupUi(QWidget *qMRMLEventLoggerWidget)
    {
        if (qMRMLEventLoggerWidget->objectName().isEmpty())
            qMRMLEventLoggerWidget->setObjectName(QString::fromUtf8("qMRMLEventLoggerWidget"));
        qMRMLEventLoggerWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(qMRMLEventLoggerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextEdit = new QTextEdit(qMRMLEventLoggerWidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        TextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(TextEdit);


        retranslateUi(qMRMLEventLoggerWidget);

        QMetaObject::connectSlotsByName(qMRMLEventLoggerWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLEventLoggerWidget)
    {
        qMRMLEventLoggerWidget->setWindowTitle(QCoreApplication::translate("qMRMLEventLoggerWidget", "MRML Event logger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLEventLoggerWidget: public Ui_qMRMLEventLoggerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLEVENTLOGGERWIDGET_H
