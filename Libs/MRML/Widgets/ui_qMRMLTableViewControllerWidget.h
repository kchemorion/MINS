/********************************************************************************
** Form generated from reading UI file 'qMRMLTableViewControllerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTABLEVIEWCONTROLLERWIDGET_H
#define UI_QMRMLTABLEVIEWCONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkPopupWidget.h"
#include "qMRMLNodeComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLTableViewControllerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    qMRMLNodeComboBox *tableComboBox;
    QPushButton *LockTableButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *CopyButton;
    QToolButton *PasteButton;
    QToolButton *PlotButton;
    QFrame *EditControlsFrame;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QToolButton *ColumnInsertButton;
    QToolButton *ColumnDeleteButton;
    QToolButton *LockFirstColumnButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *RowInsertButton;
    QToolButton *RowDeleteButton;
    QToolButton *LockFirstRowButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *BottomSpacer;

    void setupUi(ctkPopupWidget *qMRMLTableViewControllerWidget)
    {
        if (qMRMLTableViewControllerWidget->objectName().isEmpty())
            qMRMLTableViewControllerWidget->setObjectName(QString::fromUtf8("qMRMLTableViewControllerWidget"));
        qMRMLTableViewControllerWidget->resize(472, 367);
        verticalLayout = new QVBoxLayout(qMRMLTableViewControllerWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        tableComboBox = new qMRMLNodeComboBox(qMRMLTableViewControllerWidget);
        tableComboBox->setObjectName(QString::fromUtf8("tableComboBox"));
        tableComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTableNode"));
        tableComboBox->setNoneEnabled(true);
        tableComboBox->setAddEnabled(true);
        tableComboBox->setRemoveEnabled(true);
        tableComboBox->setEditEnabled(true);
        tableComboBox->setRenameEnabled(true);

        horizontalLayout_3->addWidget(tableComboBox);

        LockTableButton = new QPushButton(qMRMLTableViewControllerWidget);
        LockTableButton->setObjectName(QString::fromUtf8("LockTableButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LockTableButton->sizePolicy().hasHeightForWidth());
        LockTableButton->setSizePolicy(sizePolicy);
        LockTableButton->setMinimumSize(QSize(30, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Medium/SlicerUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockTableButton->setIcon(icon);
        LockTableButton->setCheckable(false);
        LockTableButton->setFlat(false);

        horizontalLayout_3->addWidget(LockTableButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CopyButton = new QToolButton(qMRMLTableViewControllerWidget);
        CopyButton->setObjectName(QString::fromUtf8("CopyButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Medium/SlicerEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CopyButton->setIcon(icon1);

        horizontalLayout->addWidget(CopyButton);

        PasteButton = new QToolButton(qMRMLTableViewControllerWidget);
        PasteButton->setObjectName(QString::fromUtf8("PasteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Medium/SlicerEditPaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasteButton->setIcon(icon2);

        horizontalLayout->addWidget(PasteButton);

        PlotButton = new QToolButton(qMRMLTableViewControllerWidget);
        PlotButton->setObjectName(QString::fromUtf8("PlotButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Medium/SlicerInteractivePlotting.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlotButton->setIcon(icon3);

        horizontalLayout->addWidget(PlotButton);

        EditControlsFrame = new QFrame(qMRMLTableViewControllerWidget);
        EditControlsFrame->setObjectName(QString::fromUtf8("EditControlsFrame"));
        EditControlsFrame->setMinimumSize(QSize(0, 15));
        EditControlsFrame->setFrameShape(QFrame::NoFrame);
        EditControlsFrame->setFrameShadow(QFrame::Plain);
        EditControlsFrame->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(EditControlsFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        ColumnInsertButton = new QToolButton(EditControlsFrame);
        ColumnInsertButton->setObjectName(QString::fromUtf8("ColumnInsertButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/column_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColumnInsertButton->setIcon(icon4);

        horizontalLayout_7->addWidget(ColumnInsertButton);

        ColumnDeleteButton = new QToolButton(EditControlsFrame);
        ColumnDeleteButton->setObjectName(QString::fromUtf8("ColumnDeleteButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/column_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColumnDeleteButton->setIcon(icon5);

        horizontalLayout_7->addWidget(ColumnDeleteButton);

        LockFirstColumnButton = new QToolButton(EditControlsFrame);
        LockFirstColumnButton->setObjectName(QString::fromUtf8("LockFirstColumnButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/row_header_lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockFirstColumnButton->setIcon(icon6);
        LockFirstColumnButton->setCheckable(true);

        horizontalLayout_7->addWidget(LockFirstColumnButton);

        horizontalSpacer_2 = new QSpacerItem(8, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        RowInsertButton = new QToolButton(EditControlsFrame);
        RowInsertButton->setObjectName(QString::fromUtf8("RowInsertButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/row_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        RowInsertButton->setIcon(icon7);

        horizontalLayout_7->addWidget(RowInsertButton);

        RowDeleteButton = new QToolButton(EditControlsFrame);
        RowDeleteButton->setObjectName(QString::fromUtf8("RowDeleteButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/row_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        RowDeleteButton->setIcon(icon8);

        horizontalLayout_7->addWidget(RowDeleteButton);

        LockFirstRowButton = new QToolButton(EditControlsFrame);
        LockFirstRowButton->setObjectName(QString::fromUtf8("LockFirstRowButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/column_header_lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockFirstRowButton->setIcon(icon9);
        LockFirstRowButton->setCheckable(true);
        LockFirstRowButton->setChecked(true);

        horizontalLayout_7->addWidget(LockFirstRowButton);


        horizontalLayout->addWidget(EditControlsFrame);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BottomSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(BottomSpacer);


        retranslateUi(qMRMLTableViewControllerWidget);

        QMetaObject::connectSlotsByName(qMRMLTableViewControllerWidget);
    } // setupUi

    void retranslateUi(ctkPopupWidget *qMRMLTableViewControllerWidget)
    {
        qMRMLTableViewControllerWidget->setWindowTitle(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Table View Controller", nullptr));
#if QT_CONFIG(tooltip)
        LockTableButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Allow table editing", nullptr));
#endif // QT_CONFIG(tooltip)
        LockTableButton->setText(QString());
#if QT_CONFIG(tooltip)
        CopyButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        CopyButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        PasteButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        PasteButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        PlotButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Generate an Interactive Plot based on user-selection of the columns of the table.", nullptr));
#endif // QT_CONFIG(tooltip)
        PlotButton->setText(QString());
#if QT_CONFIG(tooltip)
        ColumnInsertButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        ColumnInsertButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        ColumnDeleteButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Delete column", nullptr));
#endif // QT_CONFIG(tooltip)
        ColumnDeleteButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        LockFirstColumnButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Lock first column", nullptr));
#endif // QT_CONFIG(tooltip)
        LockFirstColumnButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        RowInsertButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        RowInsertButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        RowDeleteButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Delete row", nullptr));
#endif // QT_CONFIG(tooltip)
        RowDeleteButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        LockFirstRowButton->setToolTip(QCoreApplication::translate("qMRMLTableViewControllerWidget", "Lock first row", nullptr));
#endif // QT_CONFIG(tooltip)
        LockFirstRowButton->setText(QCoreApplication::translate("qMRMLTableViewControllerWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLTableViewControllerWidget: public Ui_qMRMLTableViewControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTABLEVIEWCONTROLLERWIDGET_H
