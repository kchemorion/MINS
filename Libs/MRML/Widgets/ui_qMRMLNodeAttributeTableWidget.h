/********************************************************************************
** Form generated from reading UI file 'qMRMLNodeAttributeTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLNODEATTRIBUTETABLEWIDGET_H
#define UI_QMRMLNODEATTRIBUTETABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "qMRMLNodeAttributeTableView.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLNodeAttributeTableWidget
{
public:
    QGridLayout *gridLayout;
    qMRMLNodeAttributeTableView *MRMLNodeAttributeTableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddAttributeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *RemoveAttributeButton;
    ctkCollapsibleGroupBox *NodeInformationGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *MRMLNodeInfoLabel;

    void setupUi(QWidget *qMRMLNodeAttributeTableWidget)
    {
        if (qMRMLNodeAttributeTableWidget->objectName().isEmpty())
            qMRMLNodeAttributeTableWidget->setObjectName(QString::fromUtf8("qMRMLNodeAttributeTableWidget"));
        qMRMLNodeAttributeTableWidget->resize(400, 219);
        gridLayout = new QGridLayout(qMRMLNodeAttributeTableWidget);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MRMLNodeAttributeTableView = new qMRMLNodeAttributeTableView(qMRMLNodeAttributeTableWidget);
        MRMLNodeAttributeTableView->setObjectName(QString::fromUtf8("MRMLNodeAttributeTableView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MRMLNodeAttributeTableView->sizePolicy().hasHeightForWidth());
        MRMLNodeAttributeTableView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(MRMLNodeAttributeTableView, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddAttributeButton = new QPushButton(qMRMLNodeAttributeTableWidget);
        AddAttributeButton->setObjectName(QString::fromUtf8("AddAttributeButton"));
        AddAttributeButton->setMinimumSize(QSize(72, 0));

        horizontalLayout->addWidget(AddAttributeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        RemoveAttributeButton = new QPushButton(qMRMLNodeAttributeTableWidget);
        RemoveAttributeButton->setObjectName(QString::fromUtf8("RemoveAttributeButton"));
        RemoveAttributeButton->setMinimumSize(QSize(72, 0));

        horizontalLayout->addWidget(RemoveAttributeButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        NodeInformationGroupBox = new ctkCollapsibleGroupBox(qMRMLNodeAttributeTableWidget);
        NodeInformationGroupBox->setObjectName(QString::fromUtf8("NodeInformationGroupBox"));
        NodeInformationGroupBox->setCollapsed(true);
        verticalLayout = new QVBoxLayout(NodeInformationGroupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MRMLNodeInfoLabel = new QLabel(NodeInformationGroupBox);
        MRMLNodeInfoLabel->setObjectName(QString::fromUtf8("MRMLNodeInfoLabel"));
        MRMLNodeInfoLabel->setWordWrap(true);
        MRMLNodeInfoLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(MRMLNodeInfoLabel);


        gridLayout->addWidget(NodeInformationGroupBox, 1, 0, 1, 1);


        retranslateUi(qMRMLNodeAttributeTableWidget);

        QMetaObject::connectSlotsByName(qMRMLNodeAttributeTableWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLNodeAttributeTableWidget)
    {
        qMRMLNodeAttributeTableWidget->setWindowTitle(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "qMRMLNodeAttributeTableWidget", nullptr));
#if QT_CONFIG(tooltip)
        AddAttributeButton->setToolTip(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "Add blank row to the table. The attribute is added to the MRML node when the name and value is set", nullptr));
#endif // QT_CONFIG(tooltip)
        AddAttributeButton->setText(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        RemoveAttributeButton->setToolTip(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "Remove selected attribute(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveAttributeButton->setText(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "Remove", nullptr));
        NodeInformationGroupBox->setTitle(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "Node information", nullptr));
        MRMLNodeInfoLabel->setText(QCoreApplication::translate("qMRMLNodeAttributeTableWidget", "No node information is available.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLNodeAttributeTableWidget: public Ui_qMRMLNodeAttributeTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLNODEATTRIBUTETABLEWIDGET_H
