/********************************************************************************
** Form generated from reading UI file 'qSlicerEventBrokerModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICEREVENTBROKERMODULEWIDGET_H
#define UI_QSLICEREVENTBROKERMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "qMRMLEventBrokerWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerEventBrokerModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *RefreshPushButton;
    qMRMLEventBrokerWidget *EventBrokerWidget;
    QPushButton *ResetElapsedTimesPushButton;
    QPushButton *ShowElapsedTimesPushButton;
    QTextEdit *TextEdit;

    void setupUi(qSlicerWidget *qSlicerEventBrokerModuleWidget)
    {
        if (qSlicerEventBrokerModuleWidget->objectName().isEmpty())
            qSlicerEventBrokerModuleWidget->setObjectName(QString::fromUtf8("qSlicerEventBrokerModuleWidget"));
        qSlicerEventBrokerModuleWidget->resize(513, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerEventBrokerModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerEventBrokerModuleWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qSlicerEventBrokerModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        RefreshPushButton = new QPushButton(qSlicerEventBrokerModuleWidget);
        RefreshPushButton->setObjectName(QString::fromUtf8("RefreshPushButton"));

        verticalLayout->addWidget(RefreshPushButton);

        EventBrokerWidget = new qMRMLEventBrokerWidget(qSlicerEventBrokerModuleWidget);
        EventBrokerWidget->setObjectName(QString::fromUtf8("EventBrokerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EventBrokerWidget->sizePolicy().hasHeightForWidth());
        EventBrokerWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(EventBrokerWidget);

        ResetElapsedTimesPushButton = new QPushButton(qSlicerEventBrokerModuleWidget);
        ResetElapsedTimesPushButton->setObjectName(QString::fromUtf8("ResetElapsedTimesPushButton"));

        verticalLayout->addWidget(ResetElapsedTimesPushButton);

        ShowElapsedTimesPushButton = new QPushButton(qSlicerEventBrokerModuleWidget);
        ShowElapsedTimesPushButton->setObjectName(QString::fromUtf8("ShowElapsedTimesPushButton"));

        verticalLayout->addWidget(ShowElapsedTimesPushButton);

        TextEdit = new QTextEdit(qSlicerEventBrokerModuleWidget);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        TextEdit->setTabChangesFocus(true);
        TextEdit->setLineWrapMode(QTextEdit::NoWrap);
        TextEdit->setReadOnly(true);
        TextEdit->setAcceptRichText(false);

        verticalLayout->addWidget(TextEdit);


        retranslateUi(qSlicerEventBrokerModuleWidget);
        QObject::connect(RefreshPushButton, SIGNAL(clicked()), EventBrokerWidget, SLOT(refresh()));
        QObject::connect(ResetElapsedTimesPushButton, SIGNAL(clicked()), EventBrokerWidget, SLOT(resetElapsedTimes()));
        QObject::connect(ShowElapsedTimesPushButton, SIGNAL(clicked()), EventBrokerWidget, SLOT(expandElapsedTimeItems()));

        QMetaObject::connectSlotsByName(qSlicerEventBrokerModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerEventBrokerModuleWidget)
    {
        qSlicerEventBrokerModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerEventBrokerModuleWidget", "Event Broker", nullptr));
        RefreshPushButton->setText(QCoreApplication::translate("qSlicerEventBrokerModuleWidget", "Refresh", nullptr));
        ResetElapsedTimesPushButton->setText(QCoreApplication::translate("qSlicerEventBrokerModuleWidget", "Reset Times", nullptr));
        ShowElapsedTimesPushButton->setText(QCoreApplication::translate("qSlicerEventBrokerModuleWidget", "Show observations with Elapsed Times > 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerEventBrokerModuleWidget: public Ui_qSlicerEventBrokerModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICEREVENTBROKERMODULEWIDGET_H
