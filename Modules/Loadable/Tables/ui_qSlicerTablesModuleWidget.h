/********************************************************************************
** Form generated from reading UI file 'qSlicerTablesModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTABLESMODULEWIDGET_H
#define UI_QSLICERTABLESMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLTableView.h"
#include "qSlicerTableColumnPropertiesWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTablesModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    qMRMLNodeComboBox *TableNodeSelector;
    QPushButton *LockTableButton;
    ctkCollapsibleButton *DisplayEditCollapsibleWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QToolButton *CopyButton;
    QToolButton *PasteButton;
    QFrame *EditControlsFrame;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *PlotButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *ColumnInsertButton;
    QToolButton *ColumnDeleteButton;
    QToolButton *LockFirstColumnButton;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *RowInsertButton;
    QToolButton *RowDeleteButton;
    QToolButton *LockFirstRowButton;
    qMRMLTableView *TableView;
    ctkCollapsibleButton *SelectedColumnPropertiesCollapsibleButton;
    QVBoxLayout *verticalLayout_2;
    qSlicerTableColumnPropertiesWidget *SelectedColumnPropertiesWidget;
    ctkCollapsibleButton *NewColumnPropertiesCollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    qSlicerTableColumnPropertiesWidget *NewColumnPropertiesWidget;
    QSpacerItem *verticalSpacer;
    QSpacerItem *BottomSpacer;

    void setupUi(qSlicerWidget *qSlicerTablesModuleWidget)
    {
        if (qSlicerTablesModuleWidget->objectName().isEmpty())
            qSlicerTablesModuleWidget->setObjectName(QString::fromUtf8("qSlicerTablesModuleWidget"));
        qSlicerTablesModuleWidget->resize(467, 502);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerTablesModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerTablesModuleWidget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Tables.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerTablesModuleWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qSlicerTablesModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        TableNodeSelector = new qMRMLNodeComboBox(qSlicerTablesModuleWidget);
        TableNodeSelector->setObjectName(QString::fromUtf8("TableNodeSelector"));
        TableNodeSelector->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLTableNode")));
        TableNodeSelector->setProperty("renameEnabled", QVariant(true));

        horizontalLayout_3->addWidget(TableNodeSelector);

        LockTableButton = new QPushButton(qSlicerTablesModuleWidget);
        LockTableButton->setObjectName(QString::fromUtf8("LockTableButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LockTableButton->sizePolicy().hasHeightForWidth());
        LockTableButton->setSizePolicy(sizePolicy1);
        LockTableButton->setMinimumSize(QSize(30, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Medium/SlicerUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockTableButton->setIcon(icon1);
        LockTableButton->setCheckable(false);
        LockTableButton->setFlat(false);

        horizontalLayout_3->addWidget(LockTableButton);


        verticalLayout->addLayout(horizontalLayout_3);

        DisplayEditCollapsibleWidget = new ctkCollapsibleButton(qSlicerTablesModuleWidget);
        DisplayEditCollapsibleWidget->setObjectName(QString::fromUtf8("DisplayEditCollapsibleWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(DisplayEditCollapsibleWidget->sizePolicy().hasHeightForWidth());
        DisplayEditCollapsibleWidget->setSizePolicy(sizePolicy2);
        DisplayEditCollapsibleWidget->setProperty("checked", QVariant(true));
        verticalLayout_8 = new QVBoxLayout(DisplayEditCollapsibleWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CopyButton = new QToolButton(DisplayEditCollapsibleWidget);
        CopyButton->setObjectName(QString::fromUtf8("CopyButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Medium/SlicerEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        CopyButton->setIcon(icon2);

        horizontalLayout->addWidget(CopyButton);

        PasteButton = new QToolButton(DisplayEditCollapsibleWidget);
        PasteButton->setObjectName(QString::fromUtf8("PasteButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Medium/SlicerEditPaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        PasteButton->setIcon(icon3);

        horizontalLayout->addWidget(PasteButton);

        EditControlsFrame = new QFrame(DisplayEditCollapsibleWidget);
        EditControlsFrame->setObjectName(QString::fromUtf8("EditControlsFrame"));
        EditControlsFrame->setMinimumSize(QSize(0, 15));
        EditControlsFrame->setFrameShape(QFrame::NoFrame);
        EditControlsFrame->setFrameShadow(QFrame::Plain);
        EditControlsFrame->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(EditControlsFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        PlotButton = new QToolButton(EditControlsFrame);
        PlotButton->setObjectName(QString::fromUtf8("PlotButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Medium/SlicerInteractivePlotting.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlotButton->setIcon(icon4);

        horizontalLayout_7->addWidget(PlotButton);

        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        ColumnInsertButton = new QToolButton(EditControlsFrame);
        ColumnInsertButton->setObjectName(QString::fromUtf8("ColumnInsertButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/column_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColumnInsertButton->setIcon(icon5);

        horizontalLayout_7->addWidget(ColumnInsertButton);

        ColumnDeleteButton = new QToolButton(EditControlsFrame);
        ColumnDeleteButton->setObjectName(QString::fromUtf8("ColumnDeleteButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/column_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColumnDeleteButton->setIcon(icon6);

        horizontalLayout_7->addWidget(ColumnDeleteButton);

        LockFirstColumnButton = new QToolButton(EditControlsFrame);
        LockFirstColumnButton->setObjectName(QString::fromUtf8("LockFirstColumnButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/row_header_lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockFirstColumnButton->setIcon(icon7);
        LockFirstColumnButton->setCheckable(true);

        horizontalLayout_7->addWidget(LockFirstColumnButton);

        horizontalSpacer_2 = new QSpacerItem(8, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        RowInsertButton = new QToolButton(EditControlsFrame);
        RowInsertButton->setObjectName(QString::fromUtf8("RowInsertButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/row_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        RowInsertButton->setIcon(icon8);

        horizontalLayout_7->addWidget(RowInsertButton);

        RowDeleteButton = new QToolButton(EditControlsFrame);
        RowDeleteButton->setObjectName(QString::fromUtf8("RowDeleteButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/row_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        RowDeleteButton->setIcon(icon9);

        horizontalLayout_7->addWidget(RowDeleteButton);

        LockFirstRowButton = new QToolButton(EditControlsFrame);
        LockFirstRowButton->setObjectName(QString::fromUtf8("LockFirstRowButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/column_header_lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        LockFirstRowButton->setIcon(icon10);
        LockFirstRowButton->setCheckable(true);
        LockFirstRowButton->setChecked(true);

        horizontalLayout_7->addWidget(LockFirstRowButton);


        horizontalLayout->addWidget(EditControlsFrame);


        verticalLayout_8->addLayout(horizontalLayout);

        TableView = new qMRMLTableView(DisplayEditCollapsibleWidget);
        TableView->setObjectName(QString::fromUtf8("TableView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TableView->sizePolicy().hasHeightForWidth());
        TableView->setSizePolicy(sizePolicy3);
        TableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        TableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_8->addWidget(TableView);

        SelectedColumnPropertiesCollapsibleButton = new ctkCollapsibleButton(DisplayEditCollapsibleWidget);
        SelectedColumnPropertiesCollapsibleButton->setObjectName(QString::fromUtf8("SelectedColumnPropertiesCollapsibleButton"));
        SelectedColumnPropertiesCollapsibleButton->setProperty("collapsed", QVariant(true));
        verticalLayout_2 = new QVBoxLayout(SelectedColumnPropertiesCollapsibleButton);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        SelectedColumnPropertiesWidget = new qSlicerTableColumnPropertiesWidget(SelectedColumnPropertiesCollapsibleButton);
        SelectedColumnPropertiesWidget->setObjectName(QString::fromUtf8("SelectedColumnPropertiesWidget"));

        verticalLayout_2->addWidget(SelectedColumnPropertiesWidget);


        verticalLayout_8->addWidget(SelectedColumnPropertiesCollapsibleButton);

        NewColumnPropertiesCollapsibleButton = new ctkCollapsibleButton(DisplayEditCollapsibleWidget);
        NewColumnPropertiesCollapsibleButton->setObjectName(QString::fromUtf8("NewColumnPropertiesCollapsibleButton"));
        NewColumnPropertiesCollapsibleButton->setProperty("collapsed", QVariant(true));
        verticalLayout_3 = new QVBoxLayout(NewColumnPropertiesCollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        NewColumnPropertiesWidget = new qSlicerTableColumnPropertiesWidget(NewColumnPropertiesCollapsibleButton);
        NewColumnPropertiesWidget->setObjectName(QString::fromUtf8("NewColumnPropertiesWidget"));
        NewColumnPropertiesWidget->setProperty("columnNameVisible", QVariant(false));
        NewColumnPropertiesWidget->setProperty("confirmTypeChange", QVariant(false));

        verticalLayout_3->addWidget(NewColumnPropertiesWidget);


        verticalLayout_8->addWidget(NewColumnPropertiesCollapsibleButton);


        verticalLayout->addWidget(DisplayEditCollapsibleWidget);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BottomSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(BottomSpacer);


        retranslateUi(qSlicerTablesModuleWidget);
        QObject::connect(TableNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), TableView, SLOT(setMRMLTableNode(vtkMRMLNode*)));
        QObject::connect(qSlicerTablesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TableNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTablesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TableView, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerTablesModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerTablesModuleWidget)
    {
        qSlicerTablesModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerTablesModuleWidget", "Tables", nullptr));
#if QT_CONFIG(tooltip)
        LockTableButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Allow table editing", nullptr));
#endif // QT_CONFIG(tooltip)
        LockTableButton->setText(QString());
        DisplayEditCollapsibleWidget->setProperty("text", QVariant(QCoreApplication::translate("qSlicerTablesModuleWidget", "Edit", nullptr)));
#if QT_CONFIG(tooltip)
        CopyButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
        CopyButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        PasteButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        PasteButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        PlotButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Generate an Interactive Plot based on user-selection of the columns of the table. The First (from left to right) Column will be used as X-Axis and each additional Column will be plotted in the same Chart as Y-Axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        PlotButton->setText(QString());
#if QT_CONFIG(tooltip)
        ColumnInsertButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Add column", nullptr));
#endif // QT_CONFIG(tooltip)
        ColumnInsertButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        ColumnDeleteButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Delete column", nullptr));
#endif // QT_CONFIG(tooltip)
        ColumnDeleteButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        LockFirstColumnButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Lock first column", nullptr));
#endif // QT_CONFIG(tooltip)
        LockFirstColumnButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        RowInsertButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Add row", nullptr));
#endif // QT_CONFIG(tooltip)
        RowInsertButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        RowDeleteButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Delete row", nullptr));
#endif // QT_CONFIG(tooltip)
        RowDeleteButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        LockFirstRowButton->setToolTip(QCoreApplication::translate("qSlicerTablesModuleWidget", "Lock first row", nullptr));
#endif // QT_CONFIG(tooltip)
        LockFirstRowButton->setText(QCoreApplication::translate("qSlicerTablesModuleWidget", "...", nullptr));
        SelectedColumnPropertiesCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qSlicerTablesModuleWidget", "Column properties", nullptr)));
        NewColumnPropertiesCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qSlicerTablesModuleWidget", "New column defaults", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class qSlicerTablesModuleWidget: public Ui_qSlicerTablesModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTABLESMODULEWIDGET_H
