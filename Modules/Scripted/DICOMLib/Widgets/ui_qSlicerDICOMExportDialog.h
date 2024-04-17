/********************************************************************************
** Form generated from reading UI file 'qSlicerDICOMExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDICOMEXPORTDIALOG_H
#define UI_QSLICERDICOMEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkPathLineEdit.h"
#include "qMRMLSubjectHierarchyTreeView.h"
#include "qSlicerDICOMTagEditorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerDICOMExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_1SelectNode;
    QGridLayout *gridLayout;
    qMRMLSubjectHierarchyTreeView *SubjectHierarchyTreeView;
    QGroupBox *groupBox_2SelectExportType;
    QGridLayout *gridLayout_2;
    QListWidget *ExportablesListWidget;
    QGroupBox *groupBox_3EditDICOMTags;
    QVBoxLayout *verticalLayout_2;
    qSlicerDICOMTagEditorWidget *DICOMTagEditorWidget;
    QCheckBox *SaveTagsCheckBox;
    QFrame *ExportFrame;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *ExportToFolderCheckBox;
    ctkPathLineEdit *PathLineEdit_OutputFolder;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ErrorLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ExportButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *qSlicerDICOMExportDialog)
    {
        if (qSlicerDICOMExportDialog->objectName().isEmpty())
            qSlicerDICOMExportDialog->setObjectName(QString::fromUtf8("qSlicerDICOMExportDialog"));
        qSlicerDICOMExportDialog->resize(660, 596);
        qSlicerDICOMExportDialog->setMinimumSize(QSize(420, 0));
        verticalLayout = new QVBoxLayout(qSlicerDICOMExportDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame = new QFrame(qSlicerDICOMExportDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_1SelectNode = new QGroupBox(frame);
        groupBox_1SelectNode->setObjectName(QString::fromUtf8("groupBox_1SelectNode"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(groupBox_1SelectNode->sizePolicy().hasHeightForWidth());
        groupBox_1SelectNode->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox_1SelectNode);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        SubjectHierarchyTreeView = new qMRMLSubjectHierarchyTreeView(groupBox_1SelectNode);
        SubjectHierarchyTreeView->setObjectName(QString::fromUtf8("SubjectHierarchyTreeView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SubjectHierarchyTreeView->sizePolicy().hasHeightForWidth());
        SubjectHierarchyTreeView->setSizePolicy(sizePolicy2);
        SubjectHierarchyTreeView->setContextMenuEnabled(false);

        gridLayout->addWidget(SubjectHierarchyTreeView, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_1SelectNode, 0, 0, 1, 1);

        groupBox_2SelectExportType = new QGroupBox(frame);
        groupBox_2SelectExportType->setObjectName(QString::fromUtf8("groupBox_2SelectExportType"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(groupBox_2SelectExportType->sizePolicy().hasHeightForWidth());
        groupBox_2SelectExportType->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(groupBox_2SelectExportType);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        ExportablesListWidget = new QListWidget(groupBox_2SelectExportType);
        ExportablesListWidget->setObjectName(QString::fromUtf8("ExportablesListWidget"));
        sizePolicy2.setHeightForWidth(ExportablesListWidget->sizePolicy().hasHeightForWidth());
        ExportablesListWidget->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(ExportablesListWidget, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2SelectExportType, 1, 0, 1, 1);


        horizontalLayout_5->addWidget(frame);

        groupBox_3EditDICOMTags = new QGroupBox(qSlicerDICOMExportDialog);
        groupBox_3EditDICOMTags->setObjectName(QString::fromUtf8("groupBox_3EditDICOMTags"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(3);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_3EditDICOMTags->sizePolicy().hasHeightForWidth());
        groupBox_3EditDICOMTags->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(groupBox_3EditDICOMTags);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        DICOMTagEditorWidget = new qSlicerDICOMTagEditorWidget(groupBox_3EditDICOMTags);
        DICOMTagEditorWidget->setObjectName(QString::fromUtf8("DICOMTagEditorWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(DICOMTagEditorWidget->sizePolicy().hasHeightForWidth());
        DICOMTagEditorWidget->setSizePolicy(sizePolicy5);

        verticalLayout_2->addWidget(DICOMTagEditorWidget);

        SaveTagsCheckBox = new QCheckBox(groupBox_3EditDICOMTags);
        SaveTagsCheckBox->setObjectName(QString::fromUtf8("SaveTagsCheckBox"));
        SaveTagsCheckBox->setChecked(true);

        verticalLayout_2->addWidget(SaveTagsCheckBox);


        horizontalLayout_5->addWidget(groupBox_3EditDICOMTags);


        verticalLayout->addLayout(horizontalLayout_5);

        ExportFrame = new QFrame(qSlicerDICOMExportDialog);
        ExportFrame->setObjectName(QString::fromUtf8("ExportFrame"));
        ExportFrame->setFrameShape(QFrame::NoFrame);
        ExportFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(ExportFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 0, 4, 0);
        ExportToFolderCheckBox = new QCheckBox(ExportFrame);
        ExportToFolderCheckBox->setObjectName(QString::fromUtf8("ExportToFolderCheckBox"));

        horizontalLayout_2->addWidget(ExportToFolderCheckBox);

        PathLineEdit_OutputFolder = new ctkPathLineEdit(ExportFrame);
        PathLineEdit_OutputFolder->setObjectName(QString::fromUtf8("PathLineEdit_OutputFolder"));
        PathLineEdit_OutputFolder->setEnabled(false);
        PathLineEdit_OutputFolder->setFilters(ctkPathLineEdit::Dirs|ctkPathLineEdit::Drives|ctkPathLineEdit::Executable|ctkPathLineEdit::NoDot|ctkPathLineEdit::NoDotDot|ctkPathLineEdit::PermissionMask|ctkPathLineEdit::Readable|ctkPathLineEdit::Writable);
        PathLineEdit_OutputFolder->setOptions(ctkPathLineEdit::ShowDirsOnly);
        PathLineEdit_OutputFolder->setSettingKey(QString::fromUtf8("DICOM/ExportFolder"));

        horizontalLayout_2->addWidget(PathLineEdit_OutputFolder);


        verticalLayout->addWidget(ExportFrame);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(4, -1, 4, -1);
        ErrorLabel = new QLabel(qSlicerDICOMExportDialog);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));
        QPalette palette;
        QBrush brush(QColor(212, 26, 1, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ErrorLabel->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ErrorLabel->setFont(font);

        horizontalLayout_6->addWidget(ErrorLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        ExportButton = new QPushButton(qSlicerDICOMExportDialog);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));
        ExportButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(ExportButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(qSlicerDICOMExportDialog);
        QObject::connect(ExportToFolderCheckBox, SIGNAL(toggled(bool)), PathLineEdit_OutputFolder, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(qSlicerDICOMExportDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerDICOMExportDialog)
    {
        qSlicerDICOMExportDialog->setWindowTitle(QCoreApplication::translate("qSlicerDICOMExportDialog", "DICOM Export", nullptr));
        groupBox_1SelectNode->setTitle(QCoreApplication::translate("qSlicerDICOMExportDialog", "1. Select node", nullptr));
        groupBox_2SelectExportType->setTitle(QCoreApplication::translate("qSlicerDICOMExportDialog", "2. Select export type", nullptr));
        groupBox_3EditDICOMTags->setTitle(QCoreApplication::translate("qSlicerDICOMExportDialog", "3. Edit DICOM tags", nullptr));
#if QT_CONFIG(tooltip)
        SaveTagsCheckBox->setToolTip(QCoreApplication::translate("qSlicerDICOMExportDialog", "If checked, the manually edited tags will be saved into the scene, preserved for the next export. If unchecked, temporary changes can be made, only for this export operation.", nullptr));
#endif // QT_CONFIG(tooltip)
        SaveTagsCheckBox->setText(QCoreApplication::translate("qSlicerDICOMExportDialog", "Save modified tags", nullptr));
#if QT_CONFIG(tooltip)
        ExportToFolderCheckBox->setToolTip(QCoreApplication::translate("qSlicerDICOMExportDialog", "If checked, the exported DICOM files will be written into the specified folder.\n"
"If unchecked, the exported dataset will be added to the DICOM database.", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportToFolderCheckBox->setText(QCoreApplication::translate("qSlicerDICOMExportDialog", "Export to folder:", nullptr));
#if QT_CONFIG(tooltip)
        PathLineEdit_OutputFolder->setToolTip(QCoreApplication::translate("qSlicerDICOMExportDialog", "Exported DICOM files into this folder instead of the application's DICOM database.", nullptr));
#endif // QT_CONFIG(tooltip)
        ErrorLabel->setText(QCoreApplication::translate("qSlicerDICOMExportDialog", "Error messages", nullptr));
        ExportButton->setText(QCoreApplication::translate("qSlicerDICOMExportDialog", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerDICOMExportDialog: public Ui_qSlicerDICOMExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDICOMEXPORTDIALOG_H
