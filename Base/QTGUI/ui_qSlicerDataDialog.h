/********************************************************************************
** Form generated from reading UI file 'qSlicerDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDATADIALOG_H
#define UI_QSLICERDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerDataDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *AddDirectoryButton;
    QPushButton *AddFilesButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *FileWidget;
    QDialogButtonBox *ButtonBox;
    QCheckBox *ShowOptionsCheckBox;

    void setupUi(QDialog *qSlicerDataDialog)
    {
        if (qSlicerDataDialog->objectName().isEmpty())
            qSlicerDataDialog->setObjectName(QString::fromUtf8("qSlicerDataDialog"));
        qSlicerDataDialog->resize(742, 404);
        gridLayout = new QGridLayout(qSlicerDataDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AddDirectoryButton = new QPushButton(qSlicerDataDialog);
        AddDirectoryButton->setObjectName(QString::fromUtf8("AddDirectoryButton"));

        gridLayout->addWidget(AddDirectoryButton, 0, 0, 1, 1);

        AddFilesButton = new QPushButton(qSlicerDataDialog);
        AddFilesButton->setObjectName(QString::fromUtf8("AddFilesButton"));

        gridLayout->addWidget(AddFilesButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(530, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        FileWidget = new QTableWidget(qSlicerDataDialog);
        if (FileWidget->columnCount() < 3)
            FileWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        FileWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        FileWidget->setObjectName(QString::fromUtf8("FileWidget"));
        FileWidget->setAlternatingRowColors(true);
        FileWidget->setSelectionMode(QAbstractItemView::NoSelection);
        FileWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        FileWidget->setTextElideMode(Qt::ElideLeft);
        FileWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        FileWidget->setSortingEnabled(true);
        FileWidget->setCornerButtonEnabled(false);
        FileWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        FileWidget->verticalHeader()->setVisible(false);
        FileWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(FileWidget, 1, 0, 1, 4);

        ButtonBox = new QDialogButtonBox(qSlicerDataDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout->addWidget(ButtonBox, 2, 0, 1, 4);

        ShowOptionsCheckBox = new QCheckBox(qSlicerDataDialog);
        ShowOptionsCheckBox->setObjectName(QString::fromUtf8("ShowOptionsCheckBox"));
        ShowOptionsCheckBox->setChecked(true);

        gridLayout->addWidget(ShowOptionsCheckBox, 0, 3, 1, 1);


        retranslateUi(qSlicerDataDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), qSlicerDataDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), qSlicerDataDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qSlicerDataDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerDataDialog)
    {
        qSlicerDataDialog->setWindowTitle(QCoreApplication::translate("qSlicerDataDialog", "Add data into the scene", nullptr));
        AddDirectoryButton->setText(QCoreApplication::translate("qSlicerDataDialog", "Choose Directory to Add", nullptr));
        AddFilesButton->setText(QCoreApplication::translate("qSlicerDataDialog", "Choose File(s) to Add", nullptr));
        QTableWidgetItem *___qtablewidgetitem = FileWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qSlicerDataDialog", "File", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = FileWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qSlicerDataDialog", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = FileWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("qSlicerDataDialog", "Options", nullptr));
        ShowOptionsCheckBox->setText(QCoreApplication::translate("qSlicerDataDialog", "Show Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerDataDialog: public Ui_qSlicerDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDATADIALOG_H
