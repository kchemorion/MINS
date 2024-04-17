/********************************************************************************
** Form generated from reading UI file 'qSlicerMarkupsModule.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMARKUPSMODULE_H
#define UI_QSLICERMARKUPSMODULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkDynamicSpacer.h"
#include "ctkExpandableWidget.h"
#include "ctkMenuButton.h"
#include "qMRMLCollapsibleButton.h"
#include "qMRMLColorLegendDisplayNodeWidget.h"
#include "qMRMLMarkupsDisplayNodeWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSubjectHierarchyTreeView.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerMarkupsModule
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *markupsModuleVerticalLayout;
    QGroupBox *createMarkupsGroupBox;
    ctkExpandableWidget *ResizableFrame;
    QVBoxLayout *verticalLayout_3;
    qMRMLSubjectHierarchyTreeView *activeMarkupTreeView;
    qMRMLCollapsibleButton *displayCollapsibleButton;
    QVBoxLayout *verticalLayout_4;
    qMRMLMarkupsDisplayNodeWidget *markupsDisplayWidget;
    ctkCollapsibleGroupBox *ColorLegendCollapsibleGroupBox;
    QGridLayout *gridLayout_2;
    qMRMLColorLegendDisplayNodeWidget *ColorLegendDisplayNodeWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *saveToDefaultDisplayPropertiesPushButton;
    QPushButton *resetToDefaultDisplayPropertiesPushButton;
    ctkCollapsibleButton *controlPointsCollapsibleButton;
    QFormLayout *formLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *listLockedUnlockedPushButton;
    QPushButton *fixedNumberOfControlPointsPushButton;
    QLabel *label;
    QComboBox *jumpModeComboBox;
    QLabel *label_2;
    ctkCheckBox *sliceIntersectionsVisibilityCheckBox;
    QHBoxLayout *horizontalLayout_6;
    ctkMenuButton *visibilityAllControlPointsInListMenuButton;
    ctkMenuButton *selectedAllControlPointsInListMenuButton;
    ctkMenuButton *lockAllControlPointsInListMenuButton;
    QPushButton *missingControlPointPushButton;
    QPushButton *unsetControlPointPushButton;
    QPushButton *deleteControlPointPushButton;
    QPushButton *deleteAllControlPointsInListPushButton;
    QToolButton *CutControlPointsToolButton;
    QToolButton *CopyControlPointsToolButton;
    QToolButton *PasteControlPointsToolButton;
    QLabel *label_coords;
    QComboBox *coordinatesComboBox;
    QTableWidget *activeMarkupTableWidget;
    ctkCollapsibleGroupBox *advancedCollapsibleButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *moveControlPointUpPushButton;
    QPushButton *moveControlPointDownPushButton;
    QPushButton *addControlPointPushButton;
    ctkCollapsibleGroupBox *namingCollapsibleGroupBox;
    QGridLayout *gridLayout;
    QLabel *nameFormatLabel;
    QLineEdit *nameFormatLineEdit;
    QPushButton *resetNameFormatToDefaultPushButton;
    QPushButton *renameAllWithCurrentNameFormatPushButton;
    ctkCollapsibleButton *measurementsCollapsibleButton;
    QVBoxLayout *verticalLayout_7;
    QLabel *measurementsLabel;
    ctkCollapsibleGroupBox *MeasurementSettingsCollapsibleGroupBox;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *measurementSettingsTableWidget;
    qMRMLCollapsibleButton *exportImportCollapsibleButton;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *tableExportRadioButton;
    QRadioButton *tableImportRadioButton;
    QLabel *exportImportTableLabel;
    qMRMLNodeComboBox *exportedImportedNodeComboBox;
    QPushButton *exportImportPushButton;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rasExportRadioButton;
    QRadioButton *lpsExportRadioButton;
    ctkDynamicSpacer *DynamicSpacer;

    void setupUi(qSlicerWidget *qSlicerMarkupsModule)
    {
        if (qSlicerMarkupsModule->objectName().isEmpty())
            qSlicerMarkupsModule->setObjectName(QString::fromUtf8("qSlicerMarkupsModule"));
        qSlicerMarkupsModule->resize(276, 294);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerMarkupsModule->sizePolicy().hasHeightForWidth());
        qSlicerMarkupsModule->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(qSlicerMarkupsModule);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        markupsModuleVerticalLayout = new QVBoxLayout();
        markupsModuleVerticalLayout->setObjectName(QString::fromUtf8("markupsModuleVerticalLayout"));
        createMarkupsGroupBox = new QGroupBox(qSlicerMarkupsModule);
        createMarkupsGroupBox->setObjectName(QString::fromUtf8("createMarkupsGroupBox"));

        markupsModuleVerticalLayout->addWidget(createMarkupsGroupBox);

        ResizableFrame = new ctkExpandableWidget(qSlicerMarkupsModule);
        ResizableFrame->setObjectName(QString::fromUtf8("ResizableFrame"));
        ResizableFrame->setOrientations(Qt::Vertical);
        verticalLayout_3 = new QVBoxLayout(ResizableFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 3);
        activeMarkupTreeView = new qMRMLSubjectHierarchyTreeView(ResizableFrame);
        activeMarkupTreeView->setObjectName(QString::fromUtf8("activeMarkupTreeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(activeMarkupTreeView->sizePolicy().hasHeightForWidth());
        activeMarkupTreeView->setSizePolicy(sizePolicy1);
        activeMarkupTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        activeMarkupTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        activeMarkupTreeView->setIndentation(8);
        activeMarkupTreeView->setEditMenuActionVisible(false);

        verticalLayout_3->addWidget(activeMarkupTreeView);


        markupsModuleVerticalLayout->addWidget(ResizableFrame);

        displayCollapsibleButton = new qMRMLCollapsibleButton(qSlicerMarkupsModule);
        displayCollapsibleButton->setObjectName(QString::fromUtf8("displayCollapsibleButton"));
        displayCollapsibleButton->setEnabled(false);
        displayCollapsibleButton->setCollapsed(true);
        verticalLayout_4 = new QVBoxLayout(displayCollapsibleButton);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        markupsDisplayWidget = new qMRMLMarkupsDisplayNodeWidget(displayCollapsibleButton);
        markupsDisplayWidget->setObjectName(QString::fromUtf8("markupsDisplayWidget"));

        verticalLayout_4->addWidget(markupsDisplayWidget);

        ColorLegendCollapsibleGroupBox = new ctkCollapsibleGroupBox(displayCollapsibleButton);
        ColorLegendCollapsibleGroupBox->setObjectName(QString::fromUtf8("ColorLegendCollapsibleGroupBox"));
        ColorLegendCollapsibleGroupBox->setCollapsed(true);
        gridLayout_2 = new QGridLayout(ColorLegendCollapsibleGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ColorLegendDisplayNodeWidget = new qMRMLColorLegendDisplayNodeWidget(ColorLegendCollapsibleGroupBox);
        ColorLegendDisplayNodeWidget->setObjectName(QString::fromUtf8("ColorLegendDisplayNodeWidget"));

        gridLayout_2->addWidget(ColorLegendDisplayNodeWidget, 0, 0, 1, 1);


        verticalLayout_4->addWidget(ColorLegendCollapsibleGroupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        saveToDefaultDisplayPropertiesPushButton = new QPushButton(displayCollapsibleButton);
        saveToDefaultDisplayPropertiesPushButton->setObjectName(QString::fromUtf8("saveToDefaultDisplayPropertiesPushButton"));

        horizontalLayout_4->addWidget(saveToDefaultDisplayPropertiesPushButton);

        resetToDefaultDisplayPropertiesPushButton = new QPushButton(displayCollapsibleButton);
        resetToDefaultDisplayPropertiesPushButton->setObjectName(QString::fromUtf8("resetToDefaultDisplayPropertiesPushButton"));

        horizontalLayout_4->addWidget(resetToDefaultDisplayPropertiesPushButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        markupsModuleVerticalLayout->addWidget(displayCollapsibleButton);

        controlPointsCollapsibleButton = new ctkCollapsibleButton(qSlicerMarkupsModule);
        controlPointsCollapsibleButton->setObjectName(QString::fromUtf8("controlPointsCollapsibleButton"));
        controlPointsCollapsibleButton->setCollapsed(true);
        formLayout = new QFormLayout(controlPointsCollapsibleButton);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(controlPointsCollapsibleButton);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listLockedUnlockedPushButton = new QPushButton(controlPointsCollapsibleButton);
        listLockedUnlockedPushButton->setObjectName(QString::fromUtf8("listLockedUnlockedPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listLockedUnlockedPushButton->sizePolicy().hasHeightForWidth());
        listLockedUnlockedPushButton->setSizePolicy(sizePolicy2);
        listLockedUnlockedPushButton->setMinimumSize(QSize(30, 0));
        listLockedUnlockedPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":Icons/Medium/SlicerUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        listLockedUnlockedPushButton->setIcon(icon);

        horizontalLayout_2->addWidget(listLockedUnlockedPushButton);

        fixedNumberOfControlPointsPushButton = new QPushButton(controlPointsCollapsibleButton);
        fixedNumberOfControlPointsPushButton->setObjectName(QString::fromUtf8("fixedNumberOfControlPointsPushButton"));
        sizePolicy2.setHeightForWidth(fixedNumberOfControlPointsPushButton->sizePolicy().hasHeightForWidth());
        fixedNumberOfControlPointsPushButton->setSizePolicy(sizePolicy2);
        fixedNumberOfControlPointsPushButton->setMinimumSize(QSize(30, 0));
        fixedNumberOfControlPointsPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":Icons/Medium/SlicerPointNumberUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        fixedNumberOfControlPointsPushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(fixedNumberOfControlPointsPushButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label = new QLabel(controlPointsCollapsibleButton);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        jumpModeComboBox = new QComboBox(controlPointsCollapsibleButton);
        jumpModeComboBox->addItem(QString());
        jumpModeComboBox->addItem(QString());
        jumpModeComboBox->addItem(QString());
        jumpModeComboBox->setObjectName(QString::fromUtf8("jumpModeComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(jumpModeComboBox->sizePolicy().hasHeightForWidth());
        jumpModeComboBox->setSizePolicy(sizePolicy3);

        formLayout->setWidget(1, QFormLayout::FieldRole, jumpModeComboBox);

        label_2 = new QLabel(controlPointsCollapsibleButton);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        sliceIntersectionsVisibilityCheckBox = new ctkCheckBox(controlPointsCollapsibleButton);
        sliceIntersectionsVisibilityCheckBox->setObjectName(QString::fromUtf8("sliceIntersectionsVisibilityCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sliceIntersectionsVisibilityCheckBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        visibilityAllControlPointsInListMenuButton = new ctkMenuButton(controlPointsCollapsibleButton);
        visibilityAllControlPointsInListMenuButton->setObjectName(QString::fromUtf8("visibilityAllControlPointsInListMenuButton"));
        sizePolicy2.setHeightForWidth(visibilityAllControlPointsInListMenuButton->sizePolicy().hasHeightForWidth());
        visibilityAllControlPointsInListMenuButton->setSizePolicy(sizePolicy2);
        visibilityAllControlPointsInListMenuButton->setMinimumSize(QSize(64, 32));
        visibilityAllControlPointsInListMenuButton->setMaximumSize(QSize(32, 32));

        horizontalLayout_6->addWidget(visibilityAllControlPointsInListMenuButton);

        selectedAllControlPointsInListMenuButton = new ctkMenuButton(controlPointsCollapsibleButton);
        selectedAllControlPointsInListMenuButton->setObjectName(QString::fromUtf8("selectedAllControlPointsInListMenuButton"));
        sizePolicy2.setHeightForWidth(selectedAllControlPointsInListMenuButton->sizePolicy().hasHeightForWidth());
        selectedAllControlPointsInListMenuButton->setSizePolicy(sizePolicy2);
        selectedAllControlPointsInListMenuButton->setMinimumSize(QSize(64, 32));
        selectedAllControlPointsInListMenuButton->setMaximumSize(QSize(32, 32));

        horizontalLayout_6->addWidget(selectedAllControlPointsInListMenuButton);

        lockAllControlPointsInListMenuButton = new ctkMenuButton(controlPointsCollapsibleButton);
        lockAllControlPointsInListMenuButton->setObjectName(QString::fromUtf8("lockAllControlPointsInListMenuButton"));
        sizePolicy2.setHeightForWidth(lockAllControlPointsInListMenuButton->sizePolicy().hasHeightForWidth());
        lockAllControlPointsInListMenuButton->setSizePolicy(sizePolicy2);
        lockAllControlPointsInListMenuButton->setMinimumSize(QSize(64, 32));
        lockAllControlPointsInListMenuButton->setMaximumSize(QSize(32, 32));

        horizontalLayout_6->addWidget(lockAllControlPointsInListMenuButton);

        missingControlPointPushButton = new QPushButton(controlPointsCollapsibleButton);
        missingControlPointPushButton->setObjectName(QString::fromUtf8("missingControlPointPushButton"));
        missingControlPointPushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(missingControlPointPushButton->sizePolicy().hasHeightForWidth());
        missingControlPointPushButton->setSizePolicy(sizePolicy2);
        missingControlPointPushButton->setMinimumSize(QSize(30, 0));
        missingControlPointPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/MarkupsMissing.png"), QSize(), QIcon::Normal, QIcon::Off);
        missingControlPointPushButton->setIcon(icon2);

        horizontalLayout_6->addWidget(missingControlPointPushButton);

        unsetControlPointPushButton = new QPushButton(controlPointsCollapsibleButton);
        unsetControlPointPushButton->setObjectName(QString::fromUtf8("unsetControlPointPushButton"));
        unsetControlPointPushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(unsetControlPointPushButton->sizePolicy().hasHeightForWidth());
        unsetControlPointPushButton->setSizePolicy(sizePolicy2);
        unsetControlPointPushButton->setMinimumSize(QSize(30, 0));
        unsetControlPointPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/MarkupsUnset.png"), QSize(), QIcon::Normal, QIcon::Off);
        unsetControlPointPushButton->setIcon(icon3);

        horizontalLayout_6->addWidget(unsetControlPointPushButton);

        deleteControlPointPushButton = new QPushButton(controlPointsCollapsibleButton);
        deleteControlPointPushButton->setObjectName(QString::fromUtf8("deleteControlPointPushButton"));
        deleteControlPointPushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(deleteControlPointPushButton->sizePolicy().hasHeightForWidth());
        deleteControlPointPushButton->setSizePolicy(sizePolicy2);
        deleteControlPointPushButton->setMinimumSize(QSize(30, 0));
        deleteControlPointPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/MarkupsDeleteSelectedRows.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteControlPointPushButton->setIcon(icon4);

        horizontalLayout_6->addWidget(deleteControlPointPushButton);

        deleteAllControlPointsInListPushButton = new QPushButton(controlPointsCollapsibleButton);
        deleteAllControlPointsInListPushButton->setObjectName(QString::fromUtf8("deleteAllControlPointsInListPushButton"));
        deleteAllControlPointsInListPushButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(deleteAllControlPointsInListPushButton->sizePolicy().hasHeightForWidth());
        deleteAllControlPointsInListPushButton->setSizePolicy(sizePolicy2);
        deleteAllControlPointsInListPushButton->setMinimumSize(QSize(30, 0));
        deleteAllControlPointsInListPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/MarkupsDeleteAllRows.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAllControlPointsInListPushButton->setIcon(icon5);

        horizontalLayout_6->addWidget(deleteAllControlPointsInListPushButton);

        CutControlPointsToolButton = new QToolButton(controlPointsCollapsibleButton);
        CutControlPointsToolButton->setObjectName(QString::fromUtf8("CutControlPointsToolButton"));
        CutControlPointsToolButton->setEnabled(true);

        horizontalLayout_6->addWidget(CutControlPointsToolButton);

        CopyControlPointsToolButton = new QToolButton(controlPointsCollapsibleButton);
        CopyControlPointsToolButton->setObjectName(QString::fromUtf8("CopyControlPointsToolButton"));
        CopyControlPointsToolButton->setEnabled(true);

        horizontalLayout_6->addWidget(CopyControlPointsToolButton);

        PasteControlPointsToolButton = new QToolButton(controlPointsCollapsibleButton);
        PasteControlPointsToolButton->setObjectName(QString::fromUtf8("PasteControlPointsToolButton"));
        PasteControlPointsToolButton->setEnabled(true);

        horizontalLayout_6->addWidget(PasteControlPointsToolButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout_6);

        label_coords = new QLabel(controlPointsCollapsibleButton);
        label_coords->setObjectName(QString::fromUtf8("label_coords"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_coords);

        coordinatesComboBox = new QComboBox(controlPointsCollapsibleButton);
        coordinatesComboBox->addItem(QString());
        coordinatesComboBox->addItem(QString());
        coordinatesComboBox->addItem(QString());
        coordinatesComboBox->setObjectName(QString::fromUtf8("coordinatesComboBox"));
        sizePolicy3.setHeightForWidth(coordinatesComboBox->sizePolicy().hasHeightForWidth());
        coordinatesComboBox->setSizePolicy(sizePolicy3);

        formLayout->setWidget(4, QFormLayout::FieldRole, coordinatesComboBox);

        activeMarkupTableWidget = new QTableWidget(controlPointsCollapsibleButton);
        activeMarkupTableWidget->setObjectName(QString::fromUtf8("activeMarkupTableWidget"));
        sizePolicy1.setHeightForWidth(activeMarkupTableWidget->sizePolicy().hasHeightForWidth());
        activeMarkupTableWidget->setSizePolicy(sizePolicy1);
        activeMarkupTableWidget->setMinimumSize(QSize(0, 250));
        activeMarkupTableWidget->setAlternatingRowColors(true);
        activeMarkupTableWidget->horizontalHeader()->setStretchLastSection(true);

        formLayout->setWidget(5, QFormLayout::SpanningRole, activeMarkupTableWidget);

        advancedCollapsibleButton = new ctkCollapsibleGroupBox(controlPointsCollapsibleButton);
        advancedCollapsibleButton->setObjectName(QString::fromUtf8("advancedCollapsibleButton"));
        advancedCollapsibleButton->setCollapsed(true);
        verticalLayout = new QVBoxLayout(advancedCollapsibleButton);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        moveControlPointUpPushButton = new QPushButton(advancedCollapsibleButton);
        moveControlPointUpPushButton->setObjectName(QString::fromUtf8("moveControlPointUpPushButton"));
        sizePolicy2.setHeightForWidth(moveControlPointUpPushButton->sizePolicy().hasHeightForWidth());
        moveControlPointUpPushButton->setSizePolicy(sizePolicy2);
        moveControlPointUpPushButton->setMinimumSize(QSize(30, 0));
        moveControlPointUpPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/MarkupsMoveUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveControlPointUpPushButton->setIcon(icon6);

        horizontalLayout_7->addWidget(moveControlPointUpPushButton);

        moveControlPointDownPushButton = new QPushButton(advancedCollapsibleButton);
        moveControlPointDownPushButton->setObjectName(QString::fromUtf8("moveControlPointDownPushButton"));
        sizePolicy2.setHeightForWidth(moveControlPointDownPushButton->sizePolicy().hasHeightForWidth());
        moveControlPointDownPushButton->setSizePolicy(sizePolicy2);
        moveControlPointDownPushButton->setMinimumSize(QSize(30, 0));
        moveControlPointDownPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/MarkupsMoveDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveControlPointDownPushButton->setIcon(icon7);

        horizontalLayout_7->addWidget(moveControlPointDownPushButton);

        addControlPointPushButton = new QPushButton(advancedCollapsibleButton);
        addControlPointPushButton->setObjectName(QString::fromUtf8("addControlPointPushButton"));
        sizePolicy2.setHeightForWidth(addControlPointPushButton->sizePolicy().hasHeightForWidth());
        addControlPointPushButton->setSizePolicy(sizePolicy2);
        addControlPointPushButton->setMinimumSize(QSize(30, 0));
        addControlPointPushButton->setMaximumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/MarkupsAddFiducial.png"), QSize(), QIcon::Normal, QIcon::Off);
        addControlPointPushButton->setIcon(icon8);

        horizontalLayout_7->addWidget(addControlPointPushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        namingCollapsibleGroupBox = new ctkCollapsibleGroupBox(advancedCollapsibleButton);
        namingCollapsibleGroupBox->setObjectName(QString::fromUtf8("namingCollapsibleGroupBox"));
        gridLayout = new QGridLayout(namingCollapsibleGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameFormatLabel = new QLabel(namingCollapsibleGroupBox);
        nameFormatLabel->setObjectName(QString::fromUtf8("nameFormatLabel"));

        gridLayout->addWidget(nameFormatLabel, 2, 0, 1, 1);

        nameFormatLineEdit = new QLineEdit(namingCollapsibleGroupBox);
        nameFormatLineEdit->setObjectName(QString::fromUtf8("nameFormatLineEdit"));

        gridLayout->addWidget(nameFormatLineEdit, 2, 1, 1, 1);

        resetNameFormatToDefaultPushButton = new QPushButton(namingCollapsibleGroupBox);
        resetNameFormatToDefaultPushButton->setObjectName(QString::fromUtf8("resetNameFormatToDefaultPushButton"));

        gridLayout->addWidget(resetNameFormatToDefaultPushButton, 2, 3, 1, 1);

        renameAllWithCurrentNameFormatPushButton = new QPushButton(namingCollapsibleGroupBox);
        renameAllWithCurrentNameFormatPushButton->setObjectName(QString::fromUtf8("renameAllWithCurrentNameFormatPushButton"));

        gridLayout->addWidget(renameAllWithCurrentNameFormatPushButton, 2, 2, 1, 1);


        verticalLayout->addWidget(namingCollapsibleGroupBox);


        formLayout->setWidget(6, QFormLayout::SpanningRole, advancedCollapsibleButton);


        markupsModuleVerticalLayout->addWidget(controlPointsCollapsibleButton);

        measurementsCollapsibleButton = new ctkCollapsibleButton(qSlicerMarkupsModule);
        measurementsCollapsibleButton->setObjectName(QString::fromUtf8("measurementsCollapsibleButton"));
        measurementsCollapsibleButton->setEnabled(false);
        measurementsCollapsibleButton->setCollapsed(true);
        verticalLayout_7 = new QVBoxLayout(measurementsCollapsibleButton);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        measurementsLabel = new QLabel(measurementsCollapsibleButton);
        measurementsLabel->setObjectName(QString::fromUtf8("measurementsLabel"));

        verticalLayout_7->addWidget(measurementsLabel);

        MeasurementSettingsCollapsibleGroupBox = new ctkCollapsibleGroupBox(measurementsCollapsibleButton);
        MeasurementSettingsCollapsibleGroupBox->setObjectName(QString::fromUtf8("MeasurementSettingsCollapsibleGroupBox"));
        verticalLayout_8 = new QVBoxLayout(MeasurementSettingsCollapsibleGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(4, 4, 4, 4);
        measurementSettingsTableWidget = new QTableWidget(MeasurementSettingsCollapsibleGroupBox);
        if (measurementSettingsTableWidget->columnCount() < 2)
            measurementSettingsTableWidget->setColumnCount(2);
        measurementSettingsTableWidget->setObjectName(QString::fromUtf8("measurementSettingsTableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(measurementSettingsTableWidget->sizePolicy().hasHeightForWidth());
        measurementSettingsTableWidget->setSizePolicy(sizePolicy4);
        measurementSettingsTableWidget->setFrameShape(QFrame::NoFrame);
        measurementSettingsTableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        measurementSettingsTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        measurementSettingsTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        measurementSettingsTableWidget->setShowGrid(false);
        measurementSettingsTableWidget->setColumnCount(2);
        measurementSettingsTableWidget->horizontalHeader()->setHighlightSections(false);
        measurementSettingsTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_8->addWidget(measurementSettingsTableWidget);


        verticalLayout_7->addWidget(MeasurementSettingsCollapsibleGroupBox);


        markupsModuleVerticalLayout->addWidget(measurementsCollapsibleButton);

        exportImportCollapsibleButton = new qMRMLCollapsibleButton(qSlicerMarkupsModule);
        exportImportCollapsibleButton->setObjectName(QString::fromUtf8("exportImportCollapsibleButton"));
        exportImportCollapsibleButton->setCollapsed(true);
        formLayout_2 = new QFormLayout(exportImportCollapsibleButton);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(exportImportCollapsibleButton);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableExportRadioButton = new QRadioButton(exportImportCollapsibleButton);
        tableExportRadioButton->setObjectName(QString::fromUtf8("tableExportRadioButton"));

        horizontalLayout->addWidget(tableExportRadioButton);

        tableImportRadioButton = new QRadioButton(exportImportCollapsibleButton);
        tableImportRadioButton->setObjectName(QString::fromUtf8("tableImportRadioButton"));

        horizontalLayout->addWidget(tableImportRadioButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        exportImportTableLabel = new QLabel(exportImportCollapsibleButton);
        exportImportTableLabel->setObjectName(QString::fromUtf8("exportImportTableLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, exportImportTableLabel);

        exportedImportedNodeComboBox = new qMRMLNodeComboBox(exportImportCollapsibleButton);
        exportedImportedNodeComboBox->setObjectName(QString::fromUtf8("exportedImportedNodeComboBox"));
        exportedImportedNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTableNode"));
        exportedImportedNodeComboBox->setEditEnabled(true);
        exportedImportedNodeComboBox->setRenameEnabled(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, exportedImportedNodeComboBox);

        exportImportPushButton = new QPushButton(exportImportCollapsibleButton);
        exportImportPushButton->setObjectName(QString::fromUtf8("exportImportPushButton"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, exportImportPushButton);

        CollapsibleGroupBox = new ctkCollapsibleGroupBox(exportImportCollapsibleButton);
        CollapsibleGroupBox->setObjectName(QString::fromUtf8("CollapsibleGroupBox"));
        CollapsibleGroupBox->setCollapsed(true);
        formLayout_3 = new QFormLayout(CollapsibleGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(4);
        formLayout_3->setVerticalSpacing(4);
        formLayout_3->setContentsMargins(4, 4, 4, 4);
        label_5 = new QLabel(CollapsibleGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rasExportRadioButton = new QRadioButton(CollapsibleGroupBox);
        rasExportRadioButton->setObjectName(QString::fromUtf8("rasExportRadioButton"));

        horizontalLayout_3->addWidget(rasExportRadioButton);

        lpsExportRadioButton = new QRadioButton(CollapsibleGroupBox);
        lpsExportRadioButton->setObjectName(QString::fromUtf8("lpsExportRadioButton"));

        horizontalLayout_3->addWidget(lpsExportRadioButton);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);


        formLayout_2->setWidget(2, QFormLayout::SpanningRole, CollapsibleGroupBox);


        markupsModuleVerticalLayout->addWidget(exportImportCollapsibleButton);


        verticalLayout_2->addLayout(markupsModuleVerticalLayout);

        DynamicSpacer = new ctkDynamicSpacer(qSlicerMarkupsModule);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setSizePolicy(sizePolicy5);

        verticalLayout_2->addWidget(DynamicSpacer);


        retranslateUi(qSlicerMarkupsModule);
        QObject::connect(qSlicerMarkupsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), activeMarkupTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerMarkupsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), exportedImportedNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerMarkupsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), markupsDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerMarkupsModule);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerMarkupsModule)
    {
        qSlicerMarkupsModule->setWindowTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Markups", nullptr));
        createMarkupsGroupBox->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Create Markups:", nullptr));
        displayCollapsibleButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Display", nullptr));
#if QT_CONFIG(tooltip)
        ColorLegendCollapsibleGroupBox->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Color legend for the Color Table selected in Scalars section.", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorLegendCollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Color Legend", nullptr));
#if QT_CONFIG(tooltip)
        saveToDefaultDisplayPropertiesPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Save current display property settings to defaults, will be saved for when Slicer restarts (see Application Settings)", nullptr));
#endif // QT_CONFIG(tooltip)
        saveToDefaultDisplayPropertiesPushButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Save to Defaults", nullptr));
#if QT_CONFIG(tooltip)
        resetToDefaultDisplayPropertiesPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Use default display properties.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetToDefaultDisplayPropertiesPushButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Reset to Defaults", nullptr));
        controlPointsCollapsibleButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Control Points", nullptr));
        label_3->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Interaction: ", nullptr));
#if QT_CONFIG(tooltip)
        listLockedUnlockedPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Enable/disable all interactions in slice and 3D views.", nullptr));
#endif // QT_CONFIG(tooltip)
        listLockedUnlockedPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        fixedNumberOfControlPointsPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Lock the number of points allowed in the active markup.", nullptr));
#endif // QT_CONFIG(tooltip)
        fixedNumberOfControlPointsPushButton->setText(QString());
        label->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Jump Slices:", nullptr));
        jumpModeComboBox->setItemText(0, QCoreApplication::translate("qSlicerMarkupsModule", "none", nullptr));
        jumpModeComboBox->setItemText(1, QCoreApplication::translate("qSlicerMarkupsModule", "offset", nullptr));
        jumpModeComboBox->setItemText(2, QCoreApplication::translate("qSlicerMarkupsModule", "centered", nullptr));

#if QT_CONFIG(tooltip)
        jumpModeComboBox->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Offset: set slice plane position. Centered: set slice plane position and center the slice view on the control point.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Show Slice Intersections:", nullptr));
#if QT_CONFIG(tooltip)
        sliceIntersectionsVisibilityCheckBox->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Show how the other slice planes intersect each slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        sliceIntersectionsVisibilityCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        visibilityAllControlPointsInListMenuButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Toggle visibility flag on all control points in the list. Use the drop down menu to set all to visible or invisible.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        selectedAllControlPointsInListMenuButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Toggle selected flag on all control points in the list. Use the drop down menu to set all to selected or deselected.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lockAllControlPointsInListMenuButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Toggle lock flag on all control points in the list. Use the drop down menu to set all to locked or unlocked.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        missingControlPointPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Skip placement of highlighted control point(s) from the active list (will clear current position).", nullptr));
#endif // QT_CONFIG(tooltip)
        missingControlPointPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        unsetControlPointPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Clear the position of highlighted control point(s) from the active list (the control points will not be deleted).", nullptr));
#endif // QT_CONFIG(tooltip)
        unsetControlPointPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteControlPointPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Delete the highlighted control point(s) from the active list", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteControlPointPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteAllControlPointsInListPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Remove all control points from the active list", nullptr));
#endif // QT_CONFIG(tooltip)
        CutControlPointsToolButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Cut", nullptr));
        CopyControlPointsToolButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Copy", nullptr));
        PasteControlPointsToolButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Paste", nullptr));
        label_coords->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Coordinates:  ", nullptr));
        coordinatesComboBox->setItemText(0, QCoreApplication::translate("qSlicerMarkupsModule", "World", nullptr));
        coordinatesComboBox->setItemText(1, QCoreApplication::translate("qSlicerMarkupsModule", "Local", nullptr));
        coordinatesComboBox->setItemText(2, QCoreApplication::translate("qSlicerMarkupsModule", "Hide", nullptr));

#if QT_CONFIG(tooltip)
        coordinatesComboBox->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Set visibility and coordinate system of control point positions.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        activeMarkupTableWidget->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "The control points in the currently active markups node. Right click in a row for delete, jump, copy, move.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        activeMarkupTableWidget->setAccessibleName(QCoreApplication::translate("qSlicerMarkupsModule", "active markup control point table", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        advancedCollapsibleButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Display, naming, volume interactions, moving up/down, adding", nullptr));
#endif // QT_CONFIG(tooltip)
        advancedCollapsibleButton->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        moveControlPointUpPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Move a highlighted control point up one spot in the list", nullptr));
#endif // QT_CONFIG(tooltip)
        moveControlPointUpPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveControlPointDownPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Move a highlighted control point down one spot in the list", nullptr));
#endif // QT_CONFIG(tooltip)
        moveControlPointDownPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        addControlPointPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Add a new control point to the active list, at origin", nullptr));
#endif // QT_CONFIG(tooltip)
        namingCollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Naming", nullptr));
#if QT_CONFIG(tooltip)
        nameFormatLabel->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Include %N for list name, %d for number.", nullptr));
#endif // QT_CONFIG(tooltip)
        nameFormatLabel->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Name Format", nullptr));
#if QT_CONFIG(tooltip)
        nameFormatLineEdit->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Format for creating names of new control points, using sprintf format style. %N is replaced by the list name, %S is replaced by the markup's short name and %d by an integer.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetNameFormatToDefaultPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Reset the name format field to the default value.", nullptr));
#endif // QT_CONFIG(tooltip)
        resetNameFormatToDefaultPushButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        renameAllWithCurrentNameFormatPushButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsModule", "Rename all control points in this list according to the current name format, trying to preserve numbers.", nullptr));
#endif // QT_CONFIG(tooltip)
        renameAllWithCurrentNameFormatPushButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Apply", nullptr));
        measurementsCollapsibleButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Measurements", nullptr));
        measurementsLabel->setText(QCoreApplication::translate("qSlicerMarkupsModule", "No measurement", nullptr));
        MeasurementSettingsCollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Measurement settings", nullptr));
        exportImportCollapsibleButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Export/import Table", nullptr));
        label_4->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Operation:", nullptr));
        tableExportRadioButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Export", nullptr));
        tableImportRadioButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Import", nullptr));
        exportImportTableLabel->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Table:", nullptr));
        exportImportPushButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Apply", nullptr));
        CollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerMarkupsModule", "Advanced", nullptr));
        label_5->setText(QCoreApplication::translate("qSlicerMarkupsModule", "Export coordinate system:", nullptr));
        rasExportRadioButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "RAS", nullptr));
        lpsExportRadioButton->setText(QCoreApplication::translate("qSlicerMarkupsModule", "LPS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerMarkupsModule: public Ui_qSlicerMarkupsModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMARKUPSMODULE_H
