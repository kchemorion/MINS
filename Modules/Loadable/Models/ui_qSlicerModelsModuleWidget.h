/********************************************************************************
** Form generated from reading UI file 'qSlicerModelsModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMODELSMODULEWIDGET_H
#define UI_QSLICERMODELSMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkExpandableWidget.h"
#include "ctkSearchBox.h"
#include "qMRMLClipNodeWidget.h"
#include "qMRMLColorLegendDisplayNodeWidget.h"
#include "qMRMLModelDisplayNodeWidget.h"
#include "qMRMLModelInfoWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSubjectHierarchyTreeView.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerModelsModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkExpandableWidget *ResizableFrame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *allModelsHorizontalLayout;
    ctkSearchBox *FilterModelSearchBox;
    QPushButton *hideAllModelsButton;
    QPushButton *showAllModelsButton;
    qMRMLSubjectHierarchyTreeView *SubjectHierarchyTreeView;
    ctkCollapsibleButton *InformationButton;
    QVBoxLayout *verticalLayout_2;
    qMRMLModelInfoWidget *MRMLModelInfoWidget;
    ctkCollapsibleButton *DisplayButton;
    QVBoxLayout *verticalLayout_3;
    qMRMLModelDisplayNodeWidget *ModelDisplayWidget;
    ctkCollapsibleGroupBox *ColorLegendCollapsibleGroupBox;
    QGridLayout *gridLayout;
    qMRMLColorLegendDisplayNodeWidget *ColorLegendDisplayNodeWidget;
    qMRMLNodeComboBox *ClipModelsNodeComboBox;
    ctkCollapsibleButton *ClippingButton;
    QFormLayout *formLayout;
    QLabel *ClipSelectedModelLabel;
    QCheckBox *ClipSelectedModelCheckBox;
    qMRMLClipNodeWidget *MRMLClipNodeWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerModelsModuleWidget)
    {
        if (qSlicerModelsModuleWidget->objectName().isEmpty())
            qSlicerModelsModuleWidget->setObjectName(QString::fromUtf8("qSlicerModelsModuleWidget"));
        qSlicerModelsModuleWidget->resize(412, 796);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerModelsModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerModelsModuleWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qSlicerModelsModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ResizableFrame = new ctkExpandableWidget(qSlicerModelsModuleWidget);
        ResizableFrame->setObjectName(QString::fromUtf8("ResizableFrame"));
        ResizableFrame->setOrientations(Qt::Vertical);
        ResizableFrame->setSizeGripInside(false);
        verticalLayout_5 = new QVBoxLayout(ResizableFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        allModelsHorizontalLayout = new QHBoxLayout();
        allModelsHorizontalLayout->setObjectName(QString::fromUtf8("allModelsHorizontalLayout"));
        FilterModelSearchBox = new ctkSearchBox(ResizableFrame);
        FilterModelSearchBox->setObjectName(QString::fromUtf8("FilterModelSearchBox"));
        FilterModelSearchBox->setShowSearchIcon(true);

        allModelsHorizontalLayout->addWidget(FilterModelSearchBox);

        hideAllModelsButton = new QPushButton(ResizableFrame);
        hideAllModelsButton->setObjectName(QString::fromUtf8("hideAllModelsButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Small/SlicerInvisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        hideAllModelsButton->setIcon(icon);

        allModelsHorizontalLayout->addWidget(hideAllModelsButton);

        showAllModelsButton = new QPushButton(ResizableFrame);
        showAllModelsButton->setObjectName(QString::fromUtf8("showAllModelsButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Small/SlicerVisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        showAllModelsButton->setIcon(icon1);

        allModelsHorizontalLayout->addWidget(showAllModelsButton);


        verticalLayout_5->addLayout(allModelsHorizontalLayout);

        SubjectHierarchyTreeView = new qMRMLSubjectHierarchyTreeView(ResizableFrame);
        SubjectHierarchyTreeView->setObjectName(QString::fromUtf8("SubjectHierarchyTreeView"));
        SubjectHierarchyTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        SubjectHierarchyTreeView->setIndentation(12);
        SubjectHierarchyTreeView->setEditMenuActionVisible(false);
        SubjectHierarchyTreeView->setMultiSelection(true);
        SubjectHierarchyTreeView->setHideChildNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLAnnotationNode"));

        verticalLayout_5->addWidget(SubjectHierarchyTreeView);


        verticalLayout->addWidget(ResizableFrame);

        InformationButton = new ctkCollapsibleButton(qSlicerModelsModuleWidget);
        InformationButton->setObjectName(QString::fromUtf8("InformationButton"));
        InformationButton->setCollapsed(true);
        verticalLayout_2 = new QVBoxLayout(InformationButton);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        MRMLModelInfoWidget = new qMRMLModelInfoWidget(InformationButton);
        MRMLModelInfoWidget->setObjectName(QString::fromUtf8("MRMLModelInfoWidget"));

        verticalLayout_2->addWidget(MRMLModelInfoWidget);


        verticalLayout->addWidget(InformationButton);

        DisplayButton = new ctkCollapsibleButton(qSlicerModelsModuleWidget);
        DisplayButton->setObjectName(QString::fromUtf8("DisplayButton"));
        sizePolicy.setHeightForWidth(DisplayButton->sizePolicy().hasHeightForWidth());
        DisplayButton->setSizePolicy(sizePolicy);
        DisplayButton->setCollapsed(false);
        verticalLayout_3 = new QVBoxLayout(DisplayButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ModelDisplayWidget = new qMRMLModelDisplayNodeWidget(DisplayButton);
        ModelDisplayWidget->setObjectName(QString::fromUtf8("ModelDisplayWidget"));
        sizePolicy.setHeightForWidth(ModelDisplayWidget->sizePolicy().hasHeightForWidth());
        ModelDisplayWidget->setSizePolicy(sizePolicy);
        ModelDisplayWidget->setClippingConfigurationButtonVisible(true);

        verticalLayout_3->addWidget(ModelDisplayWidget);

        ColorLegendCollapsibleGroupBox = new ctkCollapsibleGroupBox(DisplayButton);
        ColorLegendCollapsibleGroupBox->setObjectName(QString::fromUtf8("ColorLegendCollapsibleGroupBox"));
        ColorLegendCollapsibleGroupBox->setCollapsed(true);
        gridLayout = new QGridLayout(ColorLegendCollapsibleGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ColorLegendDisplayNodeWidget = new qMRMLColorLegendDisplayNodeWidget(ColorLegendCollapsibleGroupBox);
        ColorLegendDisplayNodeWidget->setObjectName(QString::fromUtf8("ColorLegendDisplayNodeWidget"));

        gridLayout->addWidget(ColorLegendDisplayNodeWidget, 0, 0, 1, 1);


        verticalLayout_3->addWidget(ColorLegendCollapsibleGroupBox);


        verticalLayout->addWidget(DisplayButton);

        ClipModelsNodeComboBox = new qMRMLNodeComboBox(qSlicerModelsModuleWidget);
        ClipModelsNodeComboBox->setObjectName(QString::fromUtf8("ClipModelsNodeComboBox"));
        ClipModelsNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLClipModelsNode"));
        ClipModelsNodeComboBox->setShowHidden(true);
        ClipModelsNodeComboBox->setAddEnabled(false);
        ClipModelsNodeComboBox->setRemoveEnabled(false);

        verticalLayout->addWidget(ClipModelsNodeComboBox);

        ClippingButton = new ctkCollapsibleButton(qSlicerModelsModuleWidget);
        ClippingButton->setObjectName(QString::fromUtf8("ClippingButton"));
        ClippingButton->setCollapsed(true);
        formLayout = new QFormLayout(ClippingButton);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        ClipSelectedModelLabel = new QLabel(ClippingButton);
        ClipSelectedModelLabel->setObjectName(QString::fromUtf8("ClipSelectedModelLabel"));
        ClipSelectedModelLabel->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, ClipSelectedModelLabel);

        ClipSelectedModelCheckBox = new QCheckBox(ClippingButton);
        ClipSelectedModelCheckBox->setObjectName(QString::fromUtf8("ClipSelectedModelCheckBox"));
        ClipSelectedModelCheckBox->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, ClipSelectedModelCheckBox);

        MRMLClipNodeWidget = new qMRMLClipNodeWidget(ClippingButton);
        MRMLClipNodeWidget->setObjectName(QString::fromUtf8("MRMLClipNodeWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, MRMLClipNodeWidget);


        verticalLayout->addWidget(ClippingButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(qSlicerModelsModuleWidget);
        QObject::connect(qSlicerModelsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ClipModelsNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerModelsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ModelDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(ClipModelsNodeComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)), MRMLClipNodeWidget, SLOT(setMRMLClipNode(vtkMRMLNode*)));
        QObject::connect(qSlicerModelsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SubjectHierarchyTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(showAllModelsButton, SIGNAL(clicked()), qSlicerModelsModuleWidget, SLOT(showAllModels()));
        QObject::connect(hideAllModelsButton, SIGNAL(clicked()), qSlicerModelsModuleWidget, SLOT(hideAllModels()));
        QObject::connect(qSlicerModelsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorLegendDisplayNodeWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerModelsModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerModelsModuleWidget)
    {
        qSlicerModelsModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerModelsModuleWidget", "Models", nullptr));
        FilterModelSearchBox->setPlaceholderText(QCoreApplication::translate("qSlicerModelsModuleWidget", "Filter by name...", nullptr));
#if QT_CONFIG(tooltip)
        hideAllModelsButton->setToolTip(QCoreApplication::translate("qSlicerModelsModuleWidget", "Turn the visibility off on all models (does not include hierarchies)", nullptr));
#endif // QT_CONFIG(tooltip)
        hideAllModelsButton->setText(QString());
#if QT_CONFIG(tooltip)
        showAllModelsButton->setToolTip(QCoreApplication::translate("qSlicerModelsModuleWidget", "Turns visibility on for all models (does not include hierarchies)", nullptr));
#endif // QT_CONFIG(tooltip)
        showAllModelsButton->setText(QString());
        InformationButton->setText(QCoreApplication::translate("qSlicerModelsModuleWidget", "Information", nullptr));
        DisplayButton->setText(QCoreApplication::translate("qSlicerModelsModuleWidget", "Display", nullptr));
#if QT_CONFIG(tooltip)
        ColorLegendCollapsibleGroupBox->setToolTip(QCoreApplication::translate("qSlicerModelsModuleWidget", "Color legend for the Color Table selected in Scalars section.", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorLegendCollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerModelsModuleWidget", "Color Legend", nullptr));
        ClippingButton->setText(QCoreApplication::translate("qSlicerModelsModuleWidget", "Clipping Planes", nullptr));
        ClipSelectedModelLabel->setText(QCoreApplication::translate("qSlicerModelsModuleWidget", "Clip selected model:", nullptr));
        ClipSelectedModelCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerModelsModuleWidget: public Ui_qSlicerModelsModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMODELSMODULEWIDGET_H
