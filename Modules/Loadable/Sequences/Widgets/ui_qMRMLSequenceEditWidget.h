/********************************************************************************
** Form generated from reading UI file 'qMRMLSequenceEditWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEQUENCEEDITWIDGET_H
#define UI_QMRMLSEQUENCEEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkComboBox.h"
#include "ctkDoubleSpinBox.h"
#include "ctkExpandButton.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSequenceEditWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *GroupBox_Sequence;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_IndexName;
    QLineEdit *LineEdit_IndexName;
    QLabel *Label_IndexUnit;
    QLineEdit *LineEdit_IndexUnit;
    QLabel *label_IndexType;
    ctkComboBox *ComboBox_IndexType;
    QGroupBox *GroupBox_SequenceNodes;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *TableWidget_DataNodes;
    ctkExpandButton *ExpandButton_DataNodes;
    QGroupBox *GroupBox_CandidateNodes;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *PushButton_AddCandidateNode;
    ctkDoubleSpinBox *DoubleSpinBox_IndexValueAutoIncrement;
    QLabel *Label_UseNodeNameAsIndexValue;
    QLabel *Label_AutoAdvanceDataSelection;
    QCheckBox *CheckBox_AutoAdvanceDataSelection;
    QLabel *Label_IndexIncrement;
    QLabel *Label_IndexValue;
    QCheckBox *CheckBox_UseNodeNameAsIndexValue;
    QLineEdit *LineEdit_NewCandidateNodeIndexValue;
    QListWidget *ListWidget_CandidateNodes;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *PushButton_RemoveDataNode;
    QSpacerItem *horizontalSpacer_2;
    QLabel *Label_DataNodeType;
    QLabel *Label_DataNodeTypeValue;

    void setupUi(QWidget *qMRMLSequenceEditWidget)
    {
        if (qMRMLSequenceEditWidget->objectName().isEmpty())
            qMRMLSequenceEditWidget->setObjectName(QString::fromUtf8("qMRMLSequenceEditWidget"));
        qMRMLSequenceEditWidget->resize(549, 429);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSequenceEditWidget->sizePolicy().hasHeightForWidth());
        qMRMLSequenceEditWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qMRMLSequenceEditWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        GroupBox_Sequence = new QGroupBox(qMRMLSequenceEditWidget);
        GroupBox_Sequence->setObjectName(QString::fromUtf8("GroupBox_Sequence"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GroupBox_Sequence->sizePolicy().hasHeightForWidth());
        GroupBox_Sequence->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(GroupBox_Sequence);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_IndexName = new QLabel(GroupBox_Sequence);
        label_IndexName->setObjectName(QString::fromUtf8("label_IndexName"));

        horizontalLayout_2->addWidget(label_IndexName);

        LineEdit_IndexName = new QLineEdit(GroupBox_Sequence);
        LineEdit_IndexName->setObjectName(QString::fromUtf8("LineEdit_IndexName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LineEdit_IndexName->sizePolicy().hasHeightForWidth());
        LineEdit_IndexName->setSizePolicy(sizePolicy2);
        LineEdit_IndexName->setText(QString::fromUtf8("time"));

        horizontalLayout_2->addWidget(LineEdit_IndexName);

        Label_IndexUnit = new QLabel(GroupBox_Sequence);
        Label_IndexUnit->setObjectName(QString::fromUtf8("Label_IndexUnit"));

        horizontalLayout_2->addWidget(Label_IndexUnit);

        LineEdit_IndexUnit = new QLineEdit(GroupBox_Sequence);
        LineEdit_IndexUnit->setObjectName(QString::fromUtf8("LineEdit_IndexUnit"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(LineEdit_IndexUnit->sizePolicy().hasHeightForWidth());
        LineEdit_IndexUnit->setSizePolicy(sizePolicy3);
        LineEdit_IndexUnit->setText(QString::fromUtf8("s"));

        horizontalLayout_2->addWidget(LineEdit_IndexUnit);

        label_IndexType = new QLabel(GroupBox_Sequence);
        label_IndexType->setObjectName(QString::fromUtf8("label_IndexType"));

        horizontalLayout_2->addWidget(label_IndexType);

        ComboBox_IndexType = new ctkComboBox(GroupBox_Sequence);
        ComboBox_IndexType->setObjectName(QString::fromUtf8("ComboBox_IndexType"));
        sizePolicy3.setHeightForWidth(ComboBox_IndexType->sizePolicy().hasHeightForWidth());
        ComboBox_IndexType->setSizePolicy(sizePolicy3);
        ComboBox_IndexType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(ComboBox_IndexType);


        verticalLayout->addWidget(GroupBox_Sequence);

        GroupBox_SequenceNodes = new QGroupBox(qMRMLSequenceEditWidget);
        GroupBox_SequenceNodes->setObjectName(QString::fromUtf8("GroupBox_SequenceNodes"));
        horizontalLayout_3 = new QHBoxLayout(GroupBox_SequenceNodes);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TableWidget_DataNodes = new QTableWidget(GroupBox_SequenceNodes);
        TableWidget_DataNodes->setObjectName(QString::fromUtf8("TableWidget_DataNodes"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TableWidget_DataNodes->sizePolicy().hasHeightForWidth());
        TableWidget_DataNodes->setSizePolicy(sizePolicy4);
        TableWidget_DataNodes->setSelectionMode(QAbstractItemView::ExtendedSelection);
        TableWidget_DataNodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableWidget_DataNodes->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(TableWidget_DataNodes);

        ExpandButton_DataNodes = new ctkExpandButton(GroupBox_SequenceNodes);
        ExpandButton_DataNodes->setObjectName(QString::fromUtf8("ExpandButton_DataNodes"));
        ExpandButton_DataNodes->setChecked(true);
        ExpandButton_DataNodes->setMirrorOnExpand(true);

        horizontalLayout_3->addWidget(ExpandButton_DataNodes);

        GroupBox_CandidateNodes = new QGroupBox(GroupBox_SequenceNodes);
        GroupBox_CandidateNodes->setObjectName(QString::fromUtf8("GroupBox_CandidateNodes"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(GroupBox_CandidateNodes->sizePolicy().hasHeightForWidth());
        GroupBox_CandidateNodes->setSizePolicy(sizePolicy5);
        horizontalLayout_4 = new QHBoxLayout(GroupBox_CandidateNodes);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PushButton_AddCandidateNode = new QPushButton(GroupBox_CandidateNodes);
        PushButton_AddCandidateNode->setObjectName(QString::fromUtf8("PushButton_AddCandidateNode"));

        gridLayout->addWidget(PushButton_AddCandidateNode, 0, 0, 1, 1);

        DoubleSpinBox_IndexValueAutoIncrement = new ctkDoubleSpinBox(GroupBox_CandidateNodes);
        DoubleSpinBox_IndexValueAutoIncrement->setObjectName(QString::fromUtf8("DoubleSpinBox_IndexValueAutoIncrement"));
        DoubleSpinBox_IndexValueAutoIncrement->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue|ctkDoubleSpinBox::InsertDecimals);
        DoubleSpinBox_IndexValueAutoIncrement->setMaximum(1000000.000000000000000);
        DoubleSpinBox_IndexValueAutoIncrement->setValue(1.000000000000000);

        gridLayout->addWidget(DoubleSpinBox_IndexValueAutoIncrement, 1, 2, 1, 1);

        Label_UseNodeNameAsIndexValue = new QLabel(GroupBox_CandidateNodes);
        Label_UseNodeNameAsIndexValue->setObjectName(QString::fromUtf8("Label_UseNodeNameAsIndexValue"));

        gridLayout->addWidget(Label_UseNodeNameAsIndexValue, 2, 0, 1, 2);

        Label_AutoAdvanceDataSelection = new QLabel(GroupBox_CandidateNodes);
        Label_AutoAdvanceDataSelection->setObjectName(QString::fromUtf8("Label_AutoAdvanceDataSelection"));

        gridLayout->addWidget(Label_AutoAdvanceDataSelection, 3, 0, 1, 2);

        CheckBox_AutoAdvanceDataSelection = new QCheckBox(GroupBox_CandidateNodes);
        CheckBox_AutoAdvanceDataSelection->setObjectName(QString::fromUtf8("CheckBox_AutoAdvanceDataSelection"));
        CheckBox_AutoAdvanceDataSelection->setChecked(true);

        gridLayout->addWidget(CheckBox_AutoAdvanceDataSelection, 3, 2, 1, 1);

        Label_IndexIncrement = new QLabel(GroupBox_CandidateNodes);
        Label_IndexIncrement->setObjectName(QString::fromUtf8("Label_IndexIncrement"));

        gridLayout->addWidget(Label_IndexIncrement, 1, 0, 1, 2);

        Label_IndexValue = new QLabel(GroupBox_CandidateNodes);
        Label_IndexValue->setObjectName(QString::fromUtf8("Label_IndexValue"));

        gridLayout->addWidget(Label_IndexValue, 0, 1, 1, 1);

        CheckBox_UseNodeNameAsIndexValue = new QCheckBox(GroupBox_CandidateNodes);
        CheckBox_UseNodeNameAsIndexValue->setObjectName(QString::fromUtf8("CheckBox_UseNodeNameAsIndexValue"));
        CheckBox_UseNodeNameAsIndexValue->setChecked(true);

        gridLayout->addWidget(CheckBox_UseNodeNameAsIndexValue, 2, 2, 1, 1);

        LineEdit_NewCandidateNodeIndexValue = new QLineEdit(GroupBox_CandidateNodes);
        LineEdit_NewCandidateNodeIndexValue->setObjectName(QString::fromUtf8("LineEdit_NewCandidateNodeIndexValue"));
        LineEdit_NewCandidateNodeIndexValue->setText(QString::fromUtf8("0"));

        gridLayout->addWidget(LineEdit_NewCandidateNodeIndexValue, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        ListWidget_CandidateNodes = new QListWidget(GroupBox_CandidateNodes);
        ListWidget_CandidateNodes->setObjectName(QString::fromUtf8("ListWidget_CandidateNodes"));
        sizePolicy4.setHeightForWidth(ListWidget_CandidateNodes->sizePolicy().hasHeightForWidth());
        ListWidget_CandidateNodes->setSizePolicy(sizePolicy4);
        ListWidget_CandidateNodes->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout_2->addWidget(ListWidget_CandidateNodes);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        PushButton_RemoveDataNode = new QPushButton(GroupBox_CandidateNodes);
        PushButton_RemoveDataNode->setObjectName(QString::fromUtf8("PushButton_RemoveDataNode"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(PushButton_RemoveDataNode->sizePolicy().hasHeightForWidth());
        PushButton_RemoveDataNode->setSizePolicy(sizePolicy6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/DataNodeDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        PushButton_RemoveDataNode->setIcon(icon);

        horizontalLayout_8->addWidget(PushButton_RemoveDataNode);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        Label_DataNodeType = new QLabel(GroupBox_CandidateNodes);
        Label_DataNodeType->setObjectName(QString::fromUtf8("Label_DataNodeType"));

        horizontalLayout_8->addWidget(Label_DataNodeType);

        Label_DataNodeTypeValue = new QLabel(GroupBox_CandidateNodes);
        Label_DataNodeTypeValue->setObjectName(QString::fromUtf8("Label_DataNodeTypeValue"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(Label_DataNodeTypeValue->sizePolicy().hasHeightForWidth());
        Label_DataNodeTypeValue->setSizePolicy(sizePolicy7);
        Label_DataNodeTypeValue->setText(QString::fromUtf8("-"));

        horizontalLayout_8->addWidget(Label_DataNodeTypeValue);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(GroupBox_CandidateNodes);


        verticalLayout->addWidget(GroupBox_SequenceNodes);


        retranslateUi(qMRMLSequenceEditWidget);

        QMetaObject::connectSlotsByName(qMRMLSequenceEditWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSequenceEditWidget)
    {
        qMRMLSequenceEditWidget->setWindowTitle(QCoreApplication::translate("qMRMLSequenceEditWidget", "Edit sequence", nullptr));
        GroupBox_Sequence->setTitle(QCoreApplication::translate("qMRMLSequenceEditWidget", "Index properties", nullptr));
        label_IndexName->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Name:", nullptr));
        Label_IndexUnit->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Unit:", nullptr));
        label_IndexType->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Type:", nullptr));
        GroupBox_SequenceNodes->setTitle(QCoreApplication::translate("qMRMLSequenceEditWidget", "Data nodes", nullptr));
        GroupBox_CandidateNodes->setTitle(QCoreApplication::translate("qMRMLSequenceEditWidget", "Add/remove data nodes", nullptr));
#if QT_CONFIG(tooltip)
        PushButton_AddCandidateNode->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "Add to sequence items", nullptr));
#endif // QT_CONFIG(tooltip)
        PushButton_AddCandidateNode->setText(QString());
#if QT_CONFIG(tooltip)
        DoubleSpinBox_IndexValueAutoIncrement->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "Increment index by this much after adding a data node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Label_UseNodeNameAsIndexValue->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "Use node name as index value", nullptr));
#endif // QT_CONFIG(tooltip)
        Label_UseNodeNameAsIndexValue->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Use node name:", nullptr));
#if QT_CONFIG(tooltip)
        Label_AutoAdvanceDataSelection->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "If enabled then after the selected node is added to the sequence items the selection moves to the next item", nullptr));
#endif // QT_CONFIG(tooltip)
        Label_AutoAdvanceDataSelection->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Auto-advance:", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_AutoAdvanceDataSelection->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "If enabled then after the selected node is added to the sequence items the selection moves to the next item", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_AutoAdvanceDataSelection->setText(QString());
#if QT_CONFIG(tooltip)
        Label_IndexIncrement->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "Increment index by this much after adding a data node", nullptr));
#endif // QT_CONFIG(tooltip)
        Label_IndexIncrement->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Index increment:", nullptr));
        Label_IndexValue->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Index value:", nullptr));
#if QT_CONFIG(tooltip)
        CheckBox_UseNodeNameAsIndexValue->setToolTip(QCoreApplication::translate("qMRMLSequenceEditWidget", "Use node name as index value", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckBox_UseNodeNameAsIndexValue->setText(QString());
        PushButton_RemoveDataNode->setText(QString());
        Label_DataNodeType->setText(QCoreApplication::translate("qMRMLSequenceEditWidget", "Node type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSequenceEditWidget: public Ui_qMRMLSequenceEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEQUENCEEDITWIDGET_H
