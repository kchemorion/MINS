/********************************************************************************
** Form generated from reading UI file 'qSlicerModulePanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMODULEPANEL_H
#define UI_QSLICERMODULEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkFittedTextBrowser.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerModulePanel
{
public:
    QGridLayout *gridLayout;
    QScrollArea *ScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    ctkCollapsibleButton *HelpCollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *HelpAcknowledgementTabWidget;
    QWidget *HelpTab;
    QVBoxLayout *verticalLayout;
    ctkFittedTextBrowser *HelpLabel;
    QWidget *AcknowledgementTab;
    QVBoxLayout *verticalLayout_2;
    ctkFittedTextBrowser *AcknowledgementLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerModulePanel)
    {
        if (qSlicerModulePanel->objectName().isEmpty())
            qSlicerModulePanel->setObjectName(QString::fromUtf8("qSlicerModulePanel"));
        qSlicerModulePanel->resize(357, 161);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerModulePanel->sizePolicy().hasHeightForWidth());
        qSlicerModulePanel->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qSlicerModulePanel);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        ScrollArea = new QScrollArea(qSlicerModulePanel);
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ScrollArea->sizePolicy().hasHeightForWidth());
        ScrollArea->setSizePolicy(sizePolicy1);
        ScrollArea->setFrameShape(QFrame::NoFrame);
        ScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 357, 161));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinAndMaxSize);
        HelpCollapsibleButton = new ctkCollapsibleButton(scrollAreaWidgetContents);
        HelpCollapsibleButton->setObjectName(QString::fromUtf8("HelpCollapsibleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(HelpCollapsibleButton->sizePolicy().hasHeightForWidth());
        HelpCollapsibleButton->setSizePolicy(sizePolicy2);
        HelpCollapsibleButton->setCollapsed(true);
        HelpCollapsibleButton->setContentsFrameShape(QFrame::StyledPanel);
        verticalLayout_3 = new QVBoxLayout(HelpCollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        HelpAcknowledgementTabWidget = new QTabWidget(HelpCollapsibleButton);
        HelpAcknowledgementTabWidget->setObjectName(QString::fromUtf8("HelpAcknowledgementTabWidget"));
        HelpTab = new QWidget();
        HelpTab->setObjectName(QString::fromUtf8("HelpTab"));
        verticalLayout = new QVBoxLayout(HelpTab);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        HelpLabel = new ctkFittedTextBrowser(HelpTab);
        HelpLabel->setObjectName(QString::fromUtf8("HelpLabel"));
        HelpLabel->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(HelpLabel);

        HelpAcknowledgementTabWidget->addTab(HelpTab, QString());
        AcknowledgementTab = new QWidget();
        AcknowledgementTab->setObjectName(QString::fromUtf8("AcknowledgementTab"));
        verticalLayout_2 = new QVBoxLayout(AcknowledgementTab);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AcknowledgementLabel = new ctkFittedTextBrowser(AcknowledgementTab);
        AcknowledgementLabel->setObjectName(QString::fromUtf8("AcknowledgementLabel"));
        AcknowledgementLabel->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(AcknowledgementLabel);

        HelpAcknowledgementTabWidget->addTab(AcknowledgementTab, QString());

        verticalLayout_3->addWidget(HelpAcknowledgementTabWidget);


        verticalLayout_4->addWidget(HelpCollapsibleButton);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        ScrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(ScrollArea, 0, 0, 1, 1);


        retranslateUi(qSlicerModulePanel);

        HelpAcknowledgementTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerModulePanel);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerModulePanel)
    {
        qSlicerModulePanel->setWindowTitle(QCoreApplication::translate("qSlicerModulePanel", "Module Panel", nullptr));
        HelpCollapsibleButton->setText(QCoreApplication::translate("qSlicerModulePanel", "Help && Acknowledgement", nullptr));
        HelpAcknowledgementTabWidget->setTabText(HelpAcknowledgementTabWidget->indexOf(HelpTab), QCoreApplication::translate("qSlicerModulePanel", "Help", nullptr));
        HelpAcknowledgementTabWidget->setTabText(HelpAcknowledgementTabWidget->indexOf(AcknowledgementTab), QCoreApplication::translate("qSlicerModulePanel", "Acknowledgement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerModulePanel: public Ui_qSlicerModulePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMODULEPANEL_H
