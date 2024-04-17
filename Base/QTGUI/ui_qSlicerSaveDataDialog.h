/********************************************************************************
** Form generated from reading UI file 'qSlicerSaveDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSAVEDATADIALOG_H
#define UI_QSLICERSAVEDATADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include "ctkDirectoryButton.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSaveDataDialog
{
public:
    QGridLayout *gridLayout;
    QToolButton *SelectDataButton;
    QDialogButtonBox *ButtonBox;
    ctkDirectoryButton *DirectoryButton;
    QCheckBox *ShowMoreCheckBox;
    QToolButton *SelectSceneDataButton;
    QTableWidget *FileWidget;
    QToolButton *DataBundleButton;
    QLabel *ErrorLabel;

    void setupUi(QDialog *qSlicerSaveDataDialog)
    {
        if (qSlicerSaveDataDialog->objectName().isEmpty())
            qSlicerSaveDataDialog->setObjectName(QString::fromUtf8("qSlicerSaveDataDialog"));
        qSlicerSaveDataDialog->resize(630, 298);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SaveScene.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerSaveDataDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(qSlicerSaveDataDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SelectDataButton = new QToolButton(qSlicerSaveDataDialog);
        SelectDataButton->setObjectName(QString::fromUtf8("SelectDataButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/CheckModifiedData.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectDataButton->setIcon(icon1);
        SelectDataButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(SelectDataButton, 0, 1, 1, 1);

        ButtonBox = new QDialogButtonBox(qSlicerSaveDataDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(ButtonBox, 2, 5, 1, 2);

        DirectoryButton = new ctkDirectoryButton(qSlicerSaveDataDialog);
        DirectoryButton->setObjectName(QString::fromUtf8("DirectoryButton"));

        gridLayout->addWidget(DirectoryButton, 2, 0, 1, 4);

        ShowMoreCheckBox = new QCheckBox(qSlicerSaveDataDialog);
        ShowMoreCheckBox->setObjectName(QString::fromUtf8("ShowMoreCheckBox"));

        gridLayout->addWidget(ShowMoreCheckBox, 0, 6, 1, 1);

        SelectSceneDataButton = new QToolButton(qSlicerSaveDataDialog);
        SelectSceneDataButton->setObjectName(QString::fromUtf8("SelectSceneDataButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/CheckModified.png"), QSize(), QIcon::Normal, QIcon::Off);
        SelectSceneDataButton->setIcon(icon2);
        SelectSceneDataButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(SelectSceneDataButton, 0, 0, 1, 1);

        FileWidget = new QTableWidget(qSlicerSaveDataDialog);
        if (FileWidget->columnCount() < 7)
            FileWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        FileWidget->setObjectName(QString::fromUtf8("FileWidget"));
        FileWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
        FileWidget->setSelectionMode(QAbstractItemView::NoSelection);
        FileWidget->setSortingEnabled(true);

        gridLayout->addWidget(FileWidget, 1, 0, 1, 8);

        DataBundleButton = new QToolButton(qSlicerSaveDataDialog);
        DataBundleButton->setObjectName(QString::fromUtf8("DataBundleButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Medium/SlicerDataBundle.png"), QSize(), QIcon::Normal, QIcon::Off);
        DataBundleButton->setIcon(icon3);
        DataBundleButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(DataBundleButton, 0, 2, 1, 1);

        ErrorLabel = new QLabel(qSlicerSaveDataDialog);
        ErrorLabel->setObjectName(QString::fromUtf8("ErrorLabel"));

        gridLayout->addWidget(ErrorLabel, 2, 4, 1, 1);

        gridLayout->setColumnStretch(3, 1);

        retranslateUi(qSlicerSaveDataDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), qSlicerSaveDataDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), qSlicerSaveDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qSlicerSaveDataDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerSaveDataDialog)
    {
        qSlicerSaveDataDialog->setWindowTitle(QCoreApplication::translate("qSlicerSaveDataDialog", "Save Scene and Unsaved Data", nullptr));
#if QT_CONFIG(tooltip)
        SelectDataButton->setToolTip(QCoreApplication::translate("qSlicerSaveDataDialog", "select modified data only", nullptr));
#endif // QT_CONFIG(tooltip)
        SelectDataButton->setText(QString());
        DirectoryButton->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Change directory for selected files", nullptr));
        ShowMoreCheckBox->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Show options", nullptr));
#if QT_CONFIG(tooltip)
        SelectSceneDataButton->setToolTip(QCoreApplication::translate("qSlicerSaveDataDialog", "Select scene & modified data only", nullptr));
#endif // QT_CONFIG(tooltip)
        SelectSceneDataButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = FileWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "File Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = FileWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "File Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = FileWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Directory", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = FileWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Options", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = FileWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Node Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = FileWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Node Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = FileWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "Status", nullptr));
#if QT_CONFIG(tooltip)
        DataBundleButton->setToolTip(QCoreApplication::translate("qSlicerSaveDataDialog", "Create a Medical Record Bundle containing the scene", nullptr));
#endif // QT_CONFIG(tooltip)
        DataBundleButton->setText(QString());
        ErrorLabel->setText(QCoreApplication::translate("qSlicerSaveDataDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Errors or warnings occurred while saving. See status icons for details.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSaveDataDialog: public Ui_qSlicerSaveDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSAVEDATADIALOG_H
