/********************************************************************************
** Form generated from reading UI file 'qSlicerCLIModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERCLIMODULEWIDGET_H
#define UI_QSLICERCLIMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkMenuButton.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerCLIProgressBar.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerCLIModuleWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *ModuleCollapsibleButton;
    QVBoxLayout *VerticalLayout;
    QGridLayout *gridLayout;
    qMRMLNodeComboBox *MRMLCommandLineModuleNodeSelector;
    QLabel *ParameterSetLabel;
    QWidget *widget_2;
    qSlicerCLIProgressBar *CLIProgressBar;
    QHBoxLayout *ButtonLayout;
    QPushButton *DefaultPushButton;
    ctkMenuButton *AutoRunPushButton;
    QSpacerItem *HorizontalSpacer;
    QPushButton *CancelPushButton;
    QPushButton *ApplyPushButton;

    void setupUi(qSlicerWidget *qSlicerCLIModuleWidget)
    {
        if (qSlicerCLIModuleWidget->objectName().isEmpty())
            qSlicerCLIModuleWidget->setObjectName(QString::fromUtf8("qSlicerCLIModuleWidget"));
        qSlicerCLIModuleWidget->resize(433, 428);
        verticalLayout_3 = new QVBoxLayout(qSlicerCLIModuleWidget);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(qSlicerCLIModuleWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 433, 397));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ModuleCollapsibleButton = new ctkCollapsibleButton(scrollAreaWidgetContents);
        ModuleCollapsibleButton->setObjectName(QString::fromUtf8("ModuleCollapsibleButton"));
        VerticalLayout = new QVBoxLayout(ModuleCollapsibleButton);
        VerticalLayout->setContentsMargins(0, 0, 0, 0);
        VerticalLayout->setObjectName(QString::fromUtf8("VerticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MRMLCommandLineModuleNodeSelector = new qMRMLNodeComboBox(ModuleCollapsibleButton);
        MRMLCommandLineModuleNodeSelector->setObjectName(QString::fromUtf8("MRMLCommandLineModuleNodeSelector"));
        MRMLCommandLineModuleNodeSelector->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLCommandLineModuleNode")));
        MRMLCommandLineModuleNodeSelector->setProperty("showHidden", QVariant(true));

        gridLayout->addWidget(MRMLCommandLineModuleNodeSelector, 0, 1, 1, 1);

        ParameterSetLabel = new QLabel(ModuleCollapsibleButton);
        ParameterSetLabel->setObjectName(QString::fromUtf8("ParameterSetLabel"));

        gridLayout->addWidget(ParameterSetLabel, 0, 0, 1, 1);


        VerticalLayout->addLayout(gridLayout);


        verticalLayout->addWidget(ModuleCollapsibleButton);

        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        CLIProgressBar = new qSlicerCLIProgressBar(qSlicerCLIModuleWidget);
        CLIProgressBar->setObjectName(QString::fromUtf8("CLIProgressBar"));

        verticalLayout_3->addWidget(CLIProgressBar);

        ButtonLayout = new QHBoxLayout();
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        DefaultPushButton = new QPushButton(qSlicerCLIModuleWidget);
        DefaultPushButton->setObjectName(QString::fromUtf8("DefaultPushButton"));
        DefaultPushButton->setEnabled(false);

        ButtonLayout->addWidget(DefaultPushButton);

        AutoRunPushButton = new ctkMenuButton(qSlicerCLIModuleWidget);
        AutoRunPushButton->setObjectName(QString::fromUtf8("AutoRunPushButton"));
        AutoRunPushButton->setEnabled(false);
        AutoRunPushButton->setCheckable(true);

        ButtonLayout->addWidget(AutoRunPushButton);

        HorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ButtonLayout->addItem(HorizontalSpacer);

        CancelPushButton = new QPushButton(qSlicerCLIModuleWidget);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));
        CancelPushButton->setEnabled(false);

        ButtonLayout->addWidget(CancelPushButton);

        ApplyPushButton = new QPushButton(qSlicerCLIModuleWidget);
        ApplyPushButton->setObjectName(QString::fromUtf8("ApplyPushButton"));
        ApplyPushButton->setEnabled(false);

        ButtonLayout->addWidget(ApplyPushButton);


        verticalLayout_3->addLayout(ButtonLayout);


        retranslateUi(qSlicerCLIModuleWidget);

        QMetaObject::connectSlotsByName(qSlicerCLIModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerCLIModuleWidget)
    {
        qSlicerCLIModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerCLIModuleWidget", "Module", nullptr));
        ModuleCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qSlicerCLIModuleWidget", "Module Title", nullptr)));
        ParameterSetLabel->setText(QCoreApplication::translate("qSlicerCLIModuleWidget", "Parameter set:", nullptr));
#if QT_CONFIG(tooltip)
        DefaultPushButton->setToolTip(QCoreApplication::translate("qSlicerCLIModuleWidget", "Reset parameters to default.", nullptr));
#endif // QT_CONFIG(tooltip)
        DefaultPushButton->setText(QCoreApplication::translate("qSlicerCLIModuleWidget", "Restore Defaults", nullptr));
        AutoRunPushButton->setText(QCoreApplication::translate("qSlicerCLIModuleWidget", "AutoRun", nullptr));
#if QT_CONFIG(tooltip)
        CancelPushButton->setToolTip(QCoreApplication::translate("qSlicerCLIModuleWidget", "Cancel the execution of the module", nullptr));
#endif // QT_CONFIG(tooltip)
        CancelPushButton->setText(QCoreApplication::translate("qSlicerCLIModuleWidget", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        ApplyPushButton->setToolTip(QCoreApplication::translate("qSlicerCLIModuleWidget", "Execute the module", nullptr));
#endif // QT_CONFIG(tooltip)
        ApplyPushButton->setText(QCoreApplication::translate("qSlicerCLIModuleWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerCLIModuleWidget: public Ui_qSlicerCLIModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERCLIMODULEWIDGET_H
