/********************************************************************************
** Form generated from reading UI file 'qSlicerErrorReportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERERRORREPORTDIALOG_H
#define UI_QSLICERERRORREPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTableWidget>
#include "ctkPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerErrorReportDialog
{
public:
    QFormLayout *formLayout;
    QLabel *InstructionsLabel;
    QLabel *RecentLogFilesLabel;
    QPlainTextEdit *LogText;
    QHBoxLayout *horizontalLayout_2;
    ctkPushButton *LogCopyToClipboardPushButton;
    ctkPushButton *LogFileOpenPushButton;
    ctkPushButton *LogOpenFileLocationPushButton;
    QCheckBox *LogFileEditCheckBox;
    QDialogButtonBox *ButtonBox;
    QTableWidget *RecentLogFilesComboBox;
    QLabel *RecentLogFilesLabel_2;

    void setupUi(QDialog *qSlicerErrorReportDialog)
    {
        if (qSlicerErrorReportDialog->objectName().isEmpty())
            qSlicerErrorReportDialog->setObjectName(QString::fromUtf8("qSlicerErrorReportDialog"));
        qSlicerErrorReportDialog->resize(607, 638);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(qSlicerErrorReportDialog->sizePolicy().hasHeightForWidth());
        qSlicerErrorReportDialog->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(qSlicerErrorReportDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        InstructionsLabel = new QLabel(qSlicerErrorReportDialog);
        InstructionsLabel->setObjectName(QString::fromUtf8("InstructionsLabel"));
        InstructionsLabel->setTextFormat(Qt::RichText);
        InstructionsLabel->setWordWrap(true);
        InstructionsLabel->setOpenExternalLinks(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, InstructionsLabel);

        RecentLogFilesLabel = new QLabel(qSlicerErrorReportDialog);
        RecentLogFilesLabel->setObjectName(QString::fromUtf8("RecentLogFilesLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, RecentLogFilesLabel);

        LogText = new QPlainTextEdit(qSlicerErrorReportDialog);
        LogText->setObjectName(QString::fromUtf8("LogText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(LogText->sizePolicy().hasHeightForWidth());
        LogText->setSizePolicy(sizePolicy1);
        LogText->setMinimumSize(QSize(50, 50));
        LogText->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::SpanningRole, LogText);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LogCopyToClipboardPushButton = new ctkPushButton(qSlicerErrorReportDialog);
        LogCopyToClipboardPushButton->setObjectName(QString::fromUtf8("LogCopyToClipboardPushButton"));
        LogCopyToClipboardPushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(LogCopyToClipboardPushButton);

        LogFileOpenPushButton = new ctkPushButton(qSlicerErrorReportDialog);
        LogFileOpenPushButton->setObjectName(QString::fromUtf8("LogFileOpenPushButton"));
        LogFileOpenPushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(LogFileOpenPushButton);

        LogOpenFileLocationPushButton = new ctkPushButton(qSlicerErrorReportDialog);
        LogOpenFileLocationPushButton->setObjectName(QString::fromUtf8("LogOpenFileLocationPushButton"));
        LogOpenFileLocationPushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(LogOpenFileLocationPushButton);

        LogFileEditCheckBox = new QCheckBox(qSlicerErrorReportDialog);
        LogFileEditCheckBox->setObjectName(QString::fromUtf8("LogFileEditCheckBox"));

        horizontalLayout_2->addWidget(LogFileEditCheckBox);

        ButtonBox = new QDialogButtonBox(qSlicerErrorReportDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(ButtonBox);


        formLayout->setLayout(6, QFormLayout::SpanningRole, horizontalLayout_2);

        RecentLogFilesComboBox = new QTableWidget(qSlicerErrorReportDialog);
        RecentLogFilesComboBox->setObjectName(QString::fromUtf8("RecentLogFilesComboBox"));
        RecentLogFilesComboBox->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        RecentLogFilesComboBox->setEditTriggers(QAbstractItemView::NoEditTriggers);
        RecentLogFilesComboBox->setSelectionBehavior(QAbstractItemView::SelectRows);
        RecentLogFilesComboBox->horizontalHeader()->setCascadingSectionResizes(false);

        formLayout->setWidget(2, QFormLayout::SpanningRole, RecentLogFilesComboBox);

        RecentLogFilesLabel_2 = new QLabel(qSlicerErrorReportDialog);
        RecentLogFilesLabel_2->setObjectName(QString::fromUtf8("RecentLogFilesLabel_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, RecentLogFilesLabel_2);


        retranslateUi(qSlicerErrorReportDialog);

        QMetaObject::connectSlotsByName(qSlicerErrorReportDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerErrorReportDialog)
    {
        qSlicerErrorReportDialog->setWindowTitle(QCoreApplication::translate("qSlicerErrorReportDialog", "Report bugs and request enhancements", nullptr));
        InstructionsLabel->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Questions and feature requests:</span> visit the <a href=\"https://discourse.slicer.org\"><span style=\" text-decoration: underline;\">Slicer forum</span></a>.</p><p><span style=\" font-weight:600;\">Bug reports: </span><a href=\"https://discourse.slicer.org/new-topic?body=Problem%20report%20for%20[appname-version-platform]:%20[please%20describe%20expected%20and%20actual%20behavior]&amp;category=support\"><span style=\" text-decoration: underline;\">post a new topic to the Slicer forum</span></a> to tell us about your problem or submit a bug report to the <a href=\"https://issues.slicer.org\"><span style=\" text-decoration: underline;\">3D Slicer bugtracker</span></a>. Describe the steps that lead to the error and also attach log messages.</p><p><span style=\" font-weight:600;\">Warning - if you work with patient data:</span> Check that the log messages do not contain any information that may identify a patient. Send the log messages to specific people in"
                        "stead of sharing them publicly on a mailing list or website.</p></body></html>", nullptr));
        RecentLogFilesLabel->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Recent log files:", nullptr));
        LogCopyToClipboardPushButton->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Copy log to clipboard", nullptr));
        LogFileOpenPushButton->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Open log in editor", nullptr));
        LogOpenFileLocationPushButton->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Open log location", nullptr));
        LogFileEditCheckBox->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Edit Log", nullptr));
        RecentLogFilesLabel_2->setText(QCoreApplication::translate("qSlicerErrorReportDialog", "Log file content:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerErrorReportDialog: public Ui_qSlicerErrorReportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERERRORREPORTDIALOG_H
