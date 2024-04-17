/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentationConversionParametersWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTATIONCONVERSIONPARAMETERSWIDGET_H
#define UI_QMRMLSEGMENTATIONCONVERSIONPARAMETERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentationConversionParametersWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Converting;
    QLabel *label_RepresentationName;
    QLabel *label;
    QLabel *label_SegmentationName;
    QSpacerItem *horizontalSpacer;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_Paths;
    QGridLayout *gridLayout_2;
    QTableWidget *PathsTable;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_Parameters;
    QGridLayout *gridLayout_3;
    QTableWidget *ParametersTable;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Convert;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *qMRMLSegmentationConversionParametersWidget)
    {
        if (qMRMLSegmentationConversionParametersWidget->objectName().isEmpty())
            qMRMLSegmentationConversionParametersWidget->setObjectName(QString::fromUtf8("qMRMLSegmentationConversionParametersWidget"));
        qMRMLSegmentationConversionParametersWidget->resize(649, 361);
        gridLayout = new QGridLayout(qMRMLSegmentationConversionParametersWidget);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Converting = new QLabel(qMRMLSegmentationConversionParametersWidget);
        label_Converting->setObjectName(QString::fromUtf8("label_Converting"));

        horizontalLayout->addWidget(label_Converting);

        label_RepresentationName = new QLabel(qMRMLSegmentationConversionParametersWidget);
        label_RepresentationName->setObjectName(QString::fromUtf8("label_RepresentationName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_RepresentationName->setFont(font);
        label_RepresentationName->setText(QString::fromUtf8("Closed surface model"));

        horizontalLayout->addWidget(label_RepresentationName);

        label = new QLabel(qMRMLSegmentationConversionParametersWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_SegmentationName = new QLabel(qMRMLSegmentationConversionParametersWidget);
        label_SegmentationName->setObjectName(QString::fromUtf8("label_SegmentationName"));
        label_SegmentationName->setFont(font);
        label_SegmentationName->setText(QString::fromUtf8("Segmentation"));

        horizontalLayout->addWidget(label_SegmentationName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        CollapsibleGroupBox_Paths = new ctkCollapsibleGroupBox(qMRMLSegmentationConversionParametersWidget);
        CollapsibleGroupBox_Paths->setObjectName(QString::fromUtf8("CollapsibleGroupBox_Paths"));
        gridLayout_2 = new QGridLayout(CollapsibleGroupBox_Paths);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        PathsTable = new QTableWidget(CollapsibleGroupBox_Paths);
        if (PathsTable->columnCount() < 2)
            PathsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        PathsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        PathsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        PathsTable->setObjectName(QString::fromUtf8("PathsTable"));
        PathsTable->setSelectionMode(QAbstractItemView::SingleSelection);
        PathsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        PathsTable->horizontalHeader()->setDefaultSectionSize(80);
        PathsTable->horizontalHeader()->setStretchLastSection(true);
        PathsTable->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(PathsTable, 0, 0, 1, 1);


        gridLayout->addWidget(CollapsibleGroupBox_Paths, 1, 0, 1, 1);

        CollapsibleGroupBox_Parameters = new ctkCollapsibleGroupBox(qMRMLSegmentationConversionParametersWidget);
        CollapsibleGroupBox_Parameters->setObjectName(QString::fromUtf8("CollapsibleGroupBox_Parameters"));
        gridLayout_3 = new QGridLayout(CollapsibleGroupBox_Parameters);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        ParametersTable = new QTableWidget(CollapsibleGroupBox_Parameters);
        if (ParametersTable->columnCount() < 2)
            ParametersTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ParametersTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ParametersTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        ParametersTable->setObjectName(QString::fromUtf8("ParametersTable"));
        ParametersTable->setSelectionMode(QAbstractItemView::NoSelection);
        ParametersTable->horizontalHeader()->setDefaultSectionSize(80);
        ParametersTable->horizontalHeader()->setStretchLastSection(true);
        ParametersTable->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(ParametersTable, 0, 0, 1, 1);


        gridLayout->addWidget(CollapsibleGroupBox_Parameters, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_Convert = new QPushButton(qMRMLSegmentationConversionParametersWidget);
        pushButton_Convert->setObjectName(QString::fromUtf8("pushButton_Convert"));

        horizontalLayout_2->addWidget(pushButton_Convert);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        retranslateUi(qMRMLSegmentationConversionParametersWidget);

        QMetaObject::connectSlotsByName(qMRMLSegmentationConversionParametersWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSegmentationConversionParametersWidget)
    {
        qMRMLSegmentationConversionParametersWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Segmentation conversion parameters", nullptr));
        label_Converting->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Converting", nullptr));
        label->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "in", nullptr));
        CollapsibleGroupBox_Paths->setTitle(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "1. Conversion path", nullptr));
        QTableWidgetItem *___qtablewidgetitem = PathsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Estimated relative cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = PathsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Path", nullptr));
        CollapsibleGroupBox_Parameters->setTitle(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "2. Conversion parameters", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ParametersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ParametersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Value", nullptr));
        pushButton_Convert->setText(QCoreApplication::translate("qMRMLSegmentationConversionParametersWidget", "Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentationConversionParametersWidget: public Ui_qMRMLSegmentationConversionParametersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTATIONCONVERSIONPARAMETERSWIDGET_H
