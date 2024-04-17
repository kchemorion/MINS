/********************************************************************************
** Form generated from reading UI file 'qSlicerExportNodeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICEREXPORTNODEDIALOG_H
#define UI_QSLICEREXPORTNODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkPathLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerExportNodeDialog
{
public:
    QFormLayout *formLayout;
    QLabel *FilenameLabel;
    QLineEdit *FilenameLineEdit;
    QLabel *DirectoryLabel;
    ctkPathLineEdit *DirectoryPathLineEdit;
    QLabel *ExportFormatsLabel;
    QLabel *GeneralOptionsLabel;
    QWidget *GeneralOptionsWidget;
    QVBoxLayout *GeneralOptionsLayout;
    QCheckBox *IncludeChildrenCheckBox;
    QCheckBox *RecursiveChildrenCheckBox;
    QCheckBox *PreserveHierarchyCheckBox;
    QCheckBox *HardenTransformCheckBox;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *qSlicerExportNodeDialog)
    {
        if (qSlicerExportNodeDialog->objectName().isEmpty())
            qSlicerExportNodeDialog->setObjectName(QString::fromUtf8("qSlicerExportNodeDialog"));
        qSlicerExportNodeDialog->resize(450, 300);
        qSlicerExportNodeDialog->setMinimumSize(QSize(450, 0));
        qSlicerExportNodeDialog->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SaveScene.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerExportNodeDialog->setWindowIcon(icon);
        qSlicerExportNodeDialog->setSizeGripEnabled(false);
        formLayout = new QFormLayout(qSlicerExportNodeDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(10, 14, 10, -1);
        FilenameLabel = new QLabel(qSlicerExportNodeDialog);
        FilenameLabel->setObjectName(QString::fromUtf8("FilenameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, FilenameLabel);

        FilenameLineEdit = new QLineEdit(qSlicerExportNodeDialog);
        FilenameLineEdit->setObjectName(QString::fromUtf8("FilenameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, FilenameLineEdit);

        DirectoryLabel = new QLabel(qSlicerExportNodeDialog);
        DirectoryLabel->setObjectName(QString::fromUtf8("DirectoryLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, DirectoryLabel);

        DirectoryPathLineEdit = new ctkPathLineEdit(qSlicerExportNodeDialog);
        DirectoryPathLineEdit->setObjectName(QString::fromUtf8("DirectoryPathLineEdit"));
        DirectoryPathLineEdit->setMinimumSize(QSize(0, 10));

        formLayout->setWidget(1, QFormLayout::FieldRole, DirectoryPathLineEdit);

        ExportFormatsLabel = new QLabel(qSlicerExportNodeDialog);
        ExportFormatsLabel->setObjectName(QString::fromUtf8("ExportFormatsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ExportFormatsLabel);

        GeneralOptionsLabel = new QLabel(qSlicerExportNodeDialog);
        GeneralOptionsLabel->setObjectName(QString::fromUtf8("GeneralOptionsLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, GeneralOptionsLabel);

        GeneralOptionsWidget = new QWidget(qSlicerExportNodeDialog);
        GeneralOptionsWidget->setObjectName(QString::fromUtf8("GeneralOptionsWidget"));
        GeneralOptionsWidget->setFocusPolicy(Qt::NoFocus);
        GeneralOptionsLayout = new QVBoxLayout(GeneralOptionsWidget);
        GeneralOptionsLayout->setObjectName(QString::fromUtf8("GeneralOptionsLayout"));
        GeneralOptionsLayout->setContentsMargins(0, 0, 0, 0);
        IncludeChildrenCheckBox = new QCheckBox(GeneralOptionsWidget);
        IncludeChildrenCheckBox->setObjectName(QString::fromUtf8("IncludeChildrenCheckBox"));

        GeneralOptionsLayout->addWidget(IncludeChildrenCheckBox);

        RecursiveChildrenCheckBox = new QCheckBox(GeneralOptionsWidget);
        RecursiveChildrenCheckBox->setObjectName(QString::fromUtf8("RecursiveChildrenCheckBox"));

        GeneralOptionsLayout->addWidget(RecursiveChildrenCheckBox);

        PreserveHierarchyCheckBox = new QCheckBox(GeneralOptionsWidget);
        PreserveHierarchyCheckBox->setObjectName(QString::fromUtf8("PreserveHierarchyCheckBox"));

        GeneralOptionsLayout->addWidget(PreserveHierarchyCheckBox);

        HardenTransformCheckBox = new QCheckBox(GeneralOptionsWidget);
        HardenTransformCheckBox->setObjectName(QString::fromUtf8("HardenTransformCheckBox"));

        GeneralOptionsLayout->addWidget(HardenTransformCheckBox);


        formLayout->setWidget(3, QFormLayout::FieldRole, GeneralOptionsWidget);

        ButtonBox = new QDialogButtonBox(qSlicerExportNodeDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        formLayout->setWidget(4, QFormLayout::FieldRole, ButtonBox);


        retranslateUi(qSlicerExportNodeDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), qSlicerExportNodeDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), qSlicerExportNodeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qSlicerExportNodeDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerExportNodeDialog)
    {
        qSlicerExportNodeDialog->setWindowTitle(QCoreApplication::translate("qSlicerExportNodeDialog", "Export node", nullptr));
        FilenameLabel->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Filename:", nullptr));
        FilenameLineEdit->setText(QString());
        DirectoryLabel->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Directory:", nullptr));
#if QT_CONFIG(tooltip)
        DirectoryPathLineEdit->setToolTip(QCoreApplication::translate("qSlicerExportNodeDialog", "Destination directory", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportFormatsLabel->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Export formats:", nullptr));
        GeneralOptionsLabel->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Options:", nullptr));
#if QT_CONFIG(tooltip)
        IncludeChildrenCheckBox->setToolTip(QCoreApplication::translate("qSlicerExportNodeDialog", "Include nodes directly under the selected item in the hierarchy.", nullptr));
#endif // QT_CONFIG(tooltip)
        IncludeChildrenCheckBox->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Include children", nullptr));
#if QT_CONFIG(tooltip)
        RecursiveChildrenCheckBox->setToolTip(QCoreApplication::translate("qSlicerExportNodeDialog", "Include all nodes in the selected item in the hierarchy, including in subfolders.", nullptr));
#endif // QT_CONFIG(tooltip)
        RecursiveChildrenCheckBox->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Recursively include children", nullptr));
#if QT_CONFIG(tooltip)
        PreserveHierarchyCheckBox->setToolTip(QCoreApplication::translate("qSlicerExportNodeDialog", "Create subdirectory structure based on node hierarchy. Uncheck this to export all nodes directly into the target directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        PreserveHierarchyCheckBox->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Export folder structure", nullptr));
#if QT_CONFIG(tooltip)
        HardenTransformCheckBox->setToolTip(QCoreApplication::translate("qSlicerExportNodeDialog", "Temporarily harden any transforms for export", nullptr));
#endif // QT_CONFIG(tooltip)
        HardenTransformCheckBox->setText(QCoreApplication::translate("qSlicerExportNodeDialog", "Apply transforms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerExportNodeDialog: public Ui_qSlicerExportNodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICEREXPORTNODEDIALOG_H
