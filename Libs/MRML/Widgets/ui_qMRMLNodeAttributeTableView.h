/********************************************************************************
** Form generated from reading UI file 'qMRMLNodeAttributeTableView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLNODEATTRIBUTETABLEVIEW_H
#define UI_QMRMLNODEATTRIBUTETABLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLNodeAttributeTableView
{
public:
    QGridLayout *gridLayout;
    QLabel *AttributeTableMessageLabel;
    QTableWidget *NodeAttributesTable;

    void setupUi(QWidget *qMRMLNodeAttributeTableView)
    {
        if (qMRMLNodeAttributeTableView->objectName().isEmpty())
            qMRMLNodeAttributeTableView->setObjectName(QString::fromUtf8("qMRMLNodeAttributeTableView"));
        qMRMLNodeAttributeTableView->resize(400, 115);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLNodeAttributeTableView->sizePolicy().hasHeightForWidth());
        qMRMLNodeAttributeTableView->setSizePolicy(sizePolicy);
        qMRMLNodeAttributeTableView->setMinimumSize(QSize(0, 115));
        gridLayout = new QGridLayout(qMRMLNodeAttributeTableView);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        AttributeTableMessageLabel = new QLabel(qMRMLNodeAttributeTableView);
        AttributeTableMessageLabel->setObjectName(QString::fromUtf8("AttributeTableMessageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AttributeTableMessageLabel->sizePolicy().hasHeightForWidth());
        AttributeTableMessageLabel->setSizePolicy(sizePolicy1);
        AttributeTableMessageLabel->setMinimumSize(QSize(0, 13));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        AttributeTableMessageLabel->setFont(font);

        gridLayout->addWidget(AttributeTableMessageLabel, 0, 0, 1, 1);

        NodeAttributesTable = new QTableWidget(qMRMLNodeAttributeTableView);
        if (NodeAttributesTable->columnCount() < 2)
            NodeAttributesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        NodeAttributesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        NodeAttributesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        NodeAttributesTable->setObjectName(QString::fromUtf8("NodeAttributesTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(NodeAttributesTable->sizePolicy().hasHeightForWidth());
        NodeAttributesTable->setSizePolicy(sizePolicy2);
        NodeAttributesTable->setMinimumSize(QSize(0, 96));
        NodeAttributesTable->setMaximumSize(QSize(16777215, 16777215));
        NodeAttributesTable->setAlternatingRowColors(true);
        NodeAttributesTable->verticalHeader()->setVisible(false);

        gridLayout->addWidget(NodeAttributesTable, 1, 0, 1, 1);


        retranslateUi(qMRMLNodeAttributeTableView);

        QMetaObject::connectSlotsByName(qMRMLNodeAttributeTableView);
    } // setupUi

    void retranslateUi(QWidget *qMRMLNodeAttributeTableView)
    {
        qMRMLNodeAttributeTableView->setWindowTitle(QCoreApplication::translate("qMRMLNodeAttributeTableView", "qMRMLNodeAttributeTableView", nullptr));
        AttributeTableMessageLabel->setText(QCoreApplication::translate("qMRMLNodeAttributeTableView", "No node selected", nullptr));
        QTableWidgetItem *___qtablewidgetitem = NodeAttributesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qMRMLNodeAttributeTableView", "Attribute Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = NodeAttributesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qMRMLNodeAttributeTableView", "Attribute Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLNodeAttributeTableView: public Ui_qMRMLNodeAttributeTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLNODEATTRIBUTETABLEVIEW_H
