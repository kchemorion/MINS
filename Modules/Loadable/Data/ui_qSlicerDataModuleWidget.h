/********************************************************************************
** Form generated from reading UI file 'qSlicerDataModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDATAMODULEWIDGET_H
#define UI_QSLICERDATAMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "ctkDynamicSpacer.h"
#include "qMRMLNodeAttributeTableWidget.h"
#include "qMRMLSubjectHierarchyTreeView.h"
#include "qMRMLTreeView.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerDataModuleWidget
{
public:
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *FilterLabel;
    QLineEdit *FilterLineEdit;
    ctkDynamicSpacer *DynamicSpacer;
    QTabWidget *ViewTabWidget;
    QWidget *tabSubject;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QCheckBox *SubjectHierarchyDisplayTransformsCheckBox;
    QCheckBox *SubjectHierarchyDisplayDataNodeIDsCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *HelpButton;
    qMRMLSubjectHierarchyTreeView *SubjectHierarchyTreeView;
    ctkCollapsibleGroupBox *SubjectHierarchyItemInfoGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SubjectHierarchyItemInfoLabel;
    QWidget *tabTransform;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *TransformDisplayMRMLIDsCheckBox;
    QCheckBox *TransformShowHiddenCheckBox;
    QSpacerItem *horizontalSpacer_2;
    qMRMLTreeView *TransformMRMLTreeView;
    QWidget *tabAll;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *AllNodesDisplayMRMLIDsCheckBox;
    QCheckBox *AllNodesTransformShowHiddenCheckBox;
    QSpacerItem *horizontalSpacer_3;
    qMRMLTreeView *AllNodesMRMLTreeView;
    ctkCollapsibleGroupBox *MRMLNodeInspectorGroupBox;
    QGridLayout *gridLayout_2;
    qMRMLNodeAttributeTableWidget *MRMLNodeAttributeTableWidget;

    void setupUi(qSlicerWidget *qSlicerDataModuleWidget)
    {
        if (qSlicerDataModuleWidget->objectName().isEmpty())
            qSlicerDataModuleWidget->setObjectName(QString::fromUtf8("qSlicerDataModuleWidget"));
        qSlicerDataModuleWidget->resize(345, 547);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Data.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerDataModuleWidget->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(qSlicerDataModuleWidget);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        FilterLabel = new QLabel(qSlicerDataModuleWidget);
        FilterLabel->setObjectName(QString::fromUtf8("FilterLabel"));

        horizontalLayout_4->addWidget(FilterLabel);

        FilterLineEdit = new QLineEdit(qSlicerDataModuleWidget);
        FilterLineEdit->setObjectName(QString::fromUtf8("FilterLineEdit"));

        horizontalLayout_4->addWidget(FilterLineEdit);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        DynamicSpacer = new ctkDynamicSpacer(qSlicerDataModuleWidget);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setActiveSizePolicy(sizePolicy);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setInactiveSizePolicy(sizePolicy1);
        DynamicSpacer->setActive(true);

        gridLayout_5->addWidget(DynamicSpacer, 3, 0, 1, 1);

        ViewTabWidget = new QTabWidget(qSlicerDataModuleWidget);
        ViewTabWidget->setObjectName(QString::fromUtf8("ViewTabWidget"));
        tabSubject = new QWidget();
        tabSubject->setObjectName(QString::fromUtf8("tabSubject"));
        gridLayout_4 = new QGridLayout(tabSubject);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SubjectHierarchyDisplayTransformsCheckBox = new QCheckBox(tabSubject);
        SubjectHierarchyDisplayTransformsCheckBox->setObjectName(QString::fromUtf8("SubjectHierarchyDisplayTransformsCheckBox"));
        SubjectHierarchyDisplayTransformsCheckBox->setChecked(true);

        horizontalLayout->addWidget(SubjectHierarchyDisplayTransformsCheckBox);

        SubjectHierarchyDisplayDataNodeIDsCheckBox = new QCheckBox(tabSubject);
        SubjectHierarchyDisplayDataNodeIDsCheckBox->setObjectName(QString::fromUtf8("SubjectHierarchyDisplayDataNodeIDsCheckBox"));

        horizontalLayout->addWidget(SubjectHierarchyDisplayDataNodeIDsCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        HelpButton = new QToolButton(tabSubject);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setStyleSheet(QString::fromUtf8("border: none; hover: {border: 1px}; pressed: {border: 1px}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        HelpButton->setIcon(icon1);
        HelpButton->setIconSize(QSize(21, 21));
        HelpButton->setToolButtonStyle(Qt::ToolButtonFollowStyle);

        horizontalLayout->addWidget(HelpButton);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        SubjectHierarchyTreeView = new qMRMLSubjectHierarchyTreeView(tabSubject);
        SubjectHierarchyTreeView->setObjectName(QString::fromUtf8("SubjectHierarchyTreeView"));
        SubjectHierarchyTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        SubjectHierarchyTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        SubjectHierarchyTreeView->setIndentation(12);
        SubjectHierarchyTreeView->setShowRootItem(true);

        gridLayout_4->addWidget(SubjectHierarchyTreeView, 0, 0, 1, 1);

        SubjectHierarchyItemInfoGroupBox = new ctkCollapsibleGroupBox(tabSubject);
        SubjectHierarchyItemInfoGroupBox->setObjectName(QString::fromUtf8("SubjectHierarchyItemInfoGroupBox"));
        SubjectHierarchyItemInfoGroupBox->setCollapsed(true);
        horizontalLayout_2 = new QHBoxLayout(SubjectHierarchyItemInfoGroupBox);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        SubjectHierarchyItemInfoLabel = new QLabel(SubjectHierarchyItemInfoGroupBox);
        SubjectHierarchyItemInfoLabel->setObjectName(QString::fromUtf8("SubjectHierarchyItemInfoLabel"));
        SubjectHierarchyItemInfoLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(SubjectHierarchyItemInfoLabel);


        gridLayout_4->addWidget(SubjectHierarchyItemInfoGroupBox, 2, 0, 1, 1);

        ViewTabWidget->addTab(tabSubject, QString());
        tabTransform = new QWidget();
        tabTransform->setObjectName(QString::fromUtf8("tabTransform"));
        gridLayout_6 = new QGridLayout(tabTransform);
        gridLayout_6->setSpacing(4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TransformDisplayMRMLIDsCheckBox = new QCheckBox(tabTransform);
        TransformDisplayMRMLIDsCheckBox->setObjectName(QString::fromUtf8("TransformDisplayMRMLIDsCheckBox"));

        horizontalLayout_3->addWidget(TransformDisplayMRMLIDsCheckBox);

        TransformShowHiddenCheckBox = new QCheckBox(tabTransform);
        TransformShowHiddenCheckBox->setObjectName(QString::fromUtf8("TransformShowHiddenCheckBox"));

        horizontalLayout_3->addWidget(TransformShowHiddenCheckBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        TransformMRMLTreeView = new qMRMLTreeView(tabTransform);
        TransformMRMLTreeView->setObjectName(QString::fromUtf8("TransformMRMLTreeView"));
        TransformMRMLTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        TransformMRMLTreeView->setIndentation(10);
        TransformMRMLTreeView->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTransformableNode"));
        TransformMRMLTreeView->setMinSizeHint(QSize(0, 120));
        TransformMRMLTreeView->setEditMenuActionVisible(true);

        gridLayout_6->addWidget(TransformMRMLTreeView, 0, 0, 1, 1);

        ViewTabWidget->addTab(tabTransform, QString());
        tabAll = new QWidget();
        tabAll->setObjectName(QString::fromUtf8("tabAll"));
        gridLayout = new QGridLayout(tabAll);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        AllNodesDisplayMRMLIDsCheckBox = new QCheckBox(tabAll);
        AllNodesDisplayMRMLIDsCheckBox->setObjectName(QString::fromUtf8("AllNodesDisplayMRMLIDsCheckBox"));

        horizontalLayout_5->addWidget(AllNodesDisplayMRMLIDsCheckBox);

        AllNodesTransformShowHiddenCheckBox = new QCheckBox(tabAll);
        AllNodesTransformShowHiddenCheckBox->setObjectName(QString::fromUtf8("AllNodesTransformShowHiddenCheckBox"));

        horizontalLayout_5->addWidget(AllNodesTransformShowHiddenCheckBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        AllNodesMRMLTreeView = new qMRMLTreeView(tabAll);
        AllNodesMRMLTreeView->setObjectName(QString::fromUtf8("AllNodesMRMLTreeView"));
        AllNodesMRMLTreeView->setIndentation(10);
        AllNodesMRMLTreeView->setMinSizeHint(QSize(0, 120));
        AllNodesMRMLTreeView->setEditMenuActionVisible(true);
        AllNodesMRMLTreeView->setShowScene(false);
        AllNodesMRMLTreeView->setShowRootNode(true);

        gridLayout->addWidget(AllNodesMRMLTreeView, 0, 0, 1, 1);

        ViewTabWidget->addTab(tabAll, QString());

        gridLayout_5->addWidget(ViewTabWidget, 0, 0, 1, 1);

        MRMLNodeInspectorGroupBox = new ctkCollapsibleGroupBox(qSlicerDataModuleWidget);
        MRMLNodeInspectorGroupBox->setObjectName(QString::fromUtf8("MRMLNodeInspectorGroupBox"));
        MRMLNodeInspectorGroupBox->setCollapsed(true);
        gridLayout_2 = new QGridLayout(MRMLNodeInspectorGroupBox);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        MRMLNodeAttributeTableWidget = new qMRMLNodeAttributeTableWidget(MRMLNodeInspectorGroupBox);
        MRMLNodeAttributeTableWidget->setObjectName(QString::fromUtf8("MRMLNodeAttributeTableWidget"));

        gridLayout_2->addWidget(MRMLNodeAttributeTableWidget, 0, 0, 1, 1);


        gridLayout_5->addWidget(MRMLNodeInspectorGroupBox, 2, 0, 1, 1);


        retranslateUi(qSlicerDataModuleWidget);
        QObject::connect(qSlicerDataModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformMRMLTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerDataModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SubjectHierarchyTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerDataModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), AllNodesMRMLTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));

        ViewTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerDataModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerDataModuleWidget)
    {
        qSlicerDataModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerDataModuleWidget", "Data", nullptr));
        FilterLabel->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Filter:", nullptr));
#if QT_CONFIG(tooltip)
        FilterLineEdit->setToolTip(QCoreApplication::translate("qSlicerDataModuleWidget", "A case sensitive string to filter nodes, uses all the columns (even if hidden)", nullptr));
#endif // QT_CONFIG(tooltip)
        SubjectHierarchyDisplayTransformsCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show transforms", nullptr));
        SubjectHierarchyDisplayDataNodeIDsCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show MRML ID's", nullptr));
        HelpButton->setText(QString());
        SubjectHierarchyItemInfoGroupBox->setTitle(QCoreApplication::translate("qSlicerDataModuleWidget", "Subject hierarchy item information", nullptr));
        SubjectHierarchyItemInfoLabel->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "No item selected", nullptr));
        ViewTabWidget->setTabText(ViewTabWidget->indexOf(tabSubject), QCoreApplication::translate("qSlicerDataModuleWidget", "Subject hierarchy", nullptr));
        TransformDisplayMRMLIDsCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show MRML ID's", nullptr));
        TransformShowHiddenCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show hidden nodes", nullptr));
        ViewTabWidget->setTabText(ViewTabWidget->indexOf(tabTransform), QCoreApplication::translate("qSlicerDataModuleWidget", "Transform hierarchy", nullptr));
        AllNodesDisplayMRMLIDsCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show MRML ID's", nullptr));
        AllNodesTransformShowHiddenCheckBox->setText(QCoreApplication::translate("qSlicerDataModuleWidget", "Show hidden nodes", nullptr));
        AllNodesMRMLTreeView->setSceneModelType(QString());
        ViewTabWidget->setTabText(ViewTabWidget->indexOf(tabAll), QCoreApplication::translate("qSlicerDataModuleWidget", "All nodes", nullptr));
        MRMLNodeInspectorGroupBox->setTitle(QCoreApplication::translate("qSlicerDataModuleWidget", "MRML node information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerDataModuleWidget: public Ui_qSlicerDataModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDATAMODULEWIDGET_H
