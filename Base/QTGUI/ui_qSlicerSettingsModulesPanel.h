/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsModulesPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSMODULESPANEL_H
#define UI_QSLICERSETTINGSMODULESPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCheckablePushButton.h"
#include "ctkDirectoryButton.h"
#include "ctkExpandButton.h"
#include "ctkPushButton.h"
#include "ctkSearchBox.h"
#include "ctkSettingsPanel.h"
#include "qSlicerDirectoryListView.h"
#include "qSlicerModulesListView.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsModulesPanel
{
public:
    QFormLayout *formLayout;
    QLabel *LoadModulesLabel;
    QWidget *SkipLoadingContainerWidget;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *LoadLoadableModulesCheckBox;
    QCheckBox *LoadCommandLineModulesCheckBox;
    QCheckBox *LoadScriptedLoadableModulesCheckBox;
    QLabel *LoadBuildInModulesLabel;
    QWidget *SkipLoadingBuiltinContainerWidget;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *LoadBuiltInLoadableModulesCheckBox;
    QCheckBox *LoadBuiltInCommandLineModulesCheckBox;
    QCheckBox *LoadBuiltInScriptedLoadableModulesCheckBox;
    QLabel *ShowHiddenModulesLabel;
    QWidget *ShowHiddenContainerWidget;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *ShowHiddenModulesCheckBox;
    QLabel *TemporaryDirectoryLabel;
    QWidget *TempDirContainerWidget;
    QHBoxLayout *horizontalLayout_8;
    ctkDirectoryButton *TemporaryDirectoryButton;
    QLabel *AdditionalModulePathsLabel;
    QWidget *AdditionalModulePathsWidget;
    QHBoxLayout *horizontalLayout_2;
    qSlicerDirectoryListView *AdditionalModulePathsView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddAdditionalModulePathButton;
    QPushButton *RemoveAdditionalModulePathButton;
    QSpacerItem *verticalSpacer;
    ctkExpandButton *AdditionalModulePathMoreButton;
    QLabel *DisableModulesLabel;
    QWidget *ModuleListContainerWidget;
    QHBoxLayout *horizontalLayout;
    qSlicerModulesListView *DisableModulesListView;
    QGroupBox *FilterGroupBox;
    QVBoxLayout *verticalLayout_3;
    ctkCheckablePushButton *FilterToLoadPushButton;
    ctkCheckablePushButton *FilterToIgnorePushButton;
    QPushButton *FilterLoadedPushButton;
    QPushButton *FilterIgnoredPushButton;
    QPushButton *FilterFailedPushButton;
    ctkSearchBox *FilterTitleSearchBox;
    QSpacerItem *verticalSpacer_3;
    ctkExpandButton *FilterMoreButton;
    QLabel *HomeModuleLabel;
    QWidget *DefaultStartupContainerWidget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *HomeModuleButton;
    QLabel *FavoritesModulesLabel;
    QWidget *FavoriteModulesContainerWidget;
    QHBoxLayout *horizontalLayout_3;
    qSlicerModulesListView *FavoritesModulesListView;
    QGroupBox *FavoritesMoreGroupBox;
    QGridLayout *gridLayout;
    QPushButton *FavoritesRemoveButton;
    QToolButton *FavoritesMoveLeftButton;
    QToolButton *FavoritesMoveRightButton;
    ctkExpandButton *FavoritesMoreButton;

    void setupUi(ctkSettingsPanel *qSlicerSettingsModulesPanel)
    {
        if (qSlicerSettingsModulesPanel->objectName().isEmpty())
            qSlicerSettingsModulesPanel->setObjectName(QString::fromUtf8("qSlicerSettingsModulesPanel"));
        qSlicerSettingsModulesPanel->resize(535, 609);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerSettingsModulesPanel->sizePolicy().hasHeightForWidth());
        qSlicerSettingsModulesPanel->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(qSlicerSettingsModulesPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        LoadModulesLabel = new QLabel(qSlicerSettingsModulesPanel);
        LoadModulesLabel->setObjectName(QString::fromUtf8("LoadModulesLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LoadModulesLabel->sizePolicy().hasHeightForWidth());
        LoadModulesLabel->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::LabelRole, LoadModulesLabel);

        SkipLoadingContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        SkipLoadingContainerWidget->setObjectName(QString::fromUtf8("SkipLoadingContainerWidget"));
        sizePolicy1.setHeightForWidth(SkipLoadingContainerWidget->sizePolicy().hasHeightForWidth());
        SkipLoadingContainerWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_1 = new QHBoxLayout(SkipLoadingContainerWidget);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        LoadLoadableModulesCheckBox = new QCheckBox(SkipLoadingContainerWidget);
        LoadLoadableModulesCheckBox->setObjectName(QString::fromUtf8("LoadLoadableModulesCheckBox"));

        horizontalLayout_1->addWidget(LoadLoadableModulesCheckBox);

        LoadCommandLineModulesCheckBox = new QCheckBox(SkipLoadingContainerWidget);
        LoadCommandLineModulesCheckBox->setObjectName(QString::fromUtf8("LoadCommandLineModulesCheckBox"));

        horizontalLayout_1->addWidget(LoadCommandLineModulesCheckBox);

        LoadScriptedLoadableModulesCheckBox = new QCheckBox(SkipLoadingContainerWidget);
        LoadScriptedLoadableModulesCheckBox->setObjectName(QString::fromUtf8("LoadScriptedLoadableModulesCheckBox"));

        horizontalLayout_1->addWidget(LoadScriptedLoadableModulesCheckBox);


        formLayout->setWidget(2, QFormLayout::FieldRole, SkipLoadingContainerWidget);

        LoadBuildInModulesLabel = new QLabel(qSlicerSettingsModulesPanel);
        LoadBuildInModulesLabel->setObjectName(QString::fromUtf8("LoadBuildInModulesLabel"));
        sizePolicy1.setHeightForWidth(LoadBuildInModulesLabel->sizePolicy().hasHeightForWidth());
        LoadBuildInModulesLabel->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::LabelRole, LoadBuildInModulesLabel);

        SkipLoadingBuiltinContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        SkipLoadingBuiltinContainerWidget->setObjectName(QString::fromUtf8("SkipLoadingBuiltinContainerWidget"));
        sizePolicy1.setHeightForWidth(SkipLoadingBuiltinContainerWidget->sizePolicy().hasHeightForWidth());
        SkipLoadingBuiltinContainerWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(SkipLoadingBuiltinContainerWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        LoadBuiltInLoadableModulesCheckBox = new QCheckBox(SkipLoadingBuiltinContainerWidget);
        LoadBuiltInLoadableModulesCheckBox->setObjectName(QString::fromUtf8("LoadBuiltInLoadableModulesCheckBox"));

        horizontalLayout_4->addWidget(LoadBuiltInLoadableModulesCheckBox);

        LoadBuiltInCommandLineModulesCheckBox = new QCheckBox(SkipLoadingBuiltinContainerWidget);
        LoadBuiltInCommandLineModulesCheckBox->setObjectName(QString::fromUtf8("LoadBuiltInCommandLineModulesCheckBox"));

        horizontalLayout_4->addWidget(LoadBuiltInCommandLineModulesCheckBox);

        LoadBuiltInScriptedLoadableModulesCheckBox = new QCheckBox(SkipLoadingBuiltinContainerWidget);
        LoadBuiltInScriptedLoadableModulesCheckBox->setObjectName(QString::fromUtf8("LoadBuiltInScriptedLoadableModulesCheckBox"));

        horizontalLayout_4->addWidget(LoadBuiltInScriptedLoadableModulesCheckBox);


        formLayout->setWidget(3, QFormLayout::FieldRole, SkipLoadingBuiltinContainerWidget);

        ShowHiddenModulesLabel = new QLabel(qSlicerSettingsModulesPanel);
        ShowHiddenModulesLabel->setObjectName(QString::fromUtf8("ShowHiddenModulesLabel"));
        sizePolicy1.setHeightForWidth(ShowHiddenModulesLabel->sizePolicy().hasHeightForWidth());
        ShowHiddenModulesLabel->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::LabelRole, ShowHiddenModulesLabel);

        ShowHiddenContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        ShowHiddenContainerWidget->setObjectName(QString::fromUtf8("ShowHiddenContainerWidget"));
        sizePolicy1.setHeightForWidth(ShowHiddenContainerWidget->sizePolicy().hasHeightForWidth());
        ShowHiddenContainerWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(ShowHiddenContainerWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        ShowHiddenModulesCheckBox = new QCheckBox(ShowHiddenContainerWidget);
        ShowHiddenModulesCheckBox->setObjectName(QString::fromUtf8("ShowHiddenModulesCheckBox"));

        horizontalLayout_6->addWidget(ShowHiddenModulesCheckBox);


        formLayout->setWidget(4, QFormLayout::FieldRole, ShowHiddenContainerWidget);

        TemporaryDirectoryLabel = new QLabel(qSlicerSettingsModulesPanel);
        TemporaryDirectoryLabel->setObjectName(QString::fromUtf8("TemporaryDirectoryLabel"));
        sizePolicy1.setHeightForWidth(TemporaryDirectoryLabel->sizePolicy().hasHeightForWidth());
        TemporaryDirectoryLabel->setSizePolicy(sizePolicy1);

        formLayout->setWidget(5, QFormLayout::LabelRole, TemporaryDirectoryLabel);

        TempDirContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        TempDirContainerWidget->setObjectName(QString::fromUtf8("TempDirContainerWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TempDirContainerWidget->sizePolicy().hasHeightForWidth());
        TempDirContainerWidget->setSizePolicy(sizePolicy2);
        horizontalLayout_8 = new QHBoxLayout(TempDirContainerWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        TemporaryDirectoryButton = new ctkDirectoryButton(TempDirContainerWidget);
        TemporaryDirectoryButton->setObjectName(QString::fromUtf8("TemporaryDirectoryButton"));

        horizontalLayout_8->addWidget(TemporaryDirectoryButton);


        formLayout->setWidget(5, QFormLayout::FieldRole, TempDirContainerWidget);

        AdditionalModulePathsLabel = new QLabel(qSlicerSettingsModulesPanel);
        AdditionalModulePathsLabel->setObjectName(QString::fromUtf8("AdditionalModulePathsLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(AdditionalModulePathsLabel->sizePolicy().hasHeightForWidth());
        AdditionalModulePathsLabel->setSizePolicy(sizePolicy3);
        AdditionalModulePathsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(6, QFormLayout::LabelRole, AdditionalModulePathsLabel);

        AdditionalModulePathsWidget = new QWidget(qSlicerSettingsModulesPanel);
        AdditionalModulePathsWidget->setObjectName(QString::fromUtf8("AdditionalModulePathsWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AdditionalModulePathsWidget->sizePolicy().hasHeightForWidth());
        AdditionalModulePathsWidget->setSizePolicy(sizePolicy4);
        horizontalLayout_2 = new QHBoxLayout(AdditionalModulePathsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        AdditionalModulePathsView = new qSlicerDirectoryListView(AdditionalModulePathsWidget);
        AdditionalModulePathsView->setObjectName(QString::fromUtf8("AdditionalModulePathsView"));
        AdditionalModulePathsView->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_2->addWidget(AdditionalModulePathsView);

        groupBox = new QGroupBox(AdditionalModulePathsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AddAdditionalModulePathButton = new QPushButton(groupBox);
        AddAdditionalModulePathButton->setObjectName(QString::fromUtf8("AddAdditionalModulePathButton"));

        verticalLayout_2->addWidget(AddAdditionalModulePathButton);

        RemoveAdditionalModulePathButton = new QPushButton(groupBox);
        RemoveAdditionalModulePathButton->setObjectName(QString::fromUtf8("RemoveAdditionalModulePathButton"));

        verticalLayout_2->addWidget(RemoveAdditionalModulePathButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(groupBox);

        AdditionalModulePathMoreButton = new ctkExpandButton(AdditionalModulePathsWidget);
        AdditionalModulePathMoreButton->setObjectName(QString::fromUtf8("AdditionalModulePathMoreButton"));
        AdditionalModulePathMoreButton->setChecked(true);
        AdditionalModulePathMoreButton->setMirrorOnExpand(true);

        horizontalLayout_2->addWidget(AdditionalModulePathMoreButton);


        formLayout->setWidget(6, QFormLayout::FieldRole, AdditionalModulePathsWidget);

        DisableModulesLabel = new QLabel(qSlicerSettingsModulesPanel);
        DisableModulesLabel->setObjectName(QString::fromUtf8("DisableModulesLabel"));
        sizePolicy3.setHeightForWidth(DisableModulesLabel->sizePolicy().hasHeightForWidth());
        DisableModulesLabel->setSizePolicy(sizePolicy3);
        DisableModulesLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(7, QFormLayout::LabelRole, DisableModulesLabel);

        ModuleListContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        ModuleListContainerWidget->setObjectName(QString::fromUtf8("ModuleListContainerWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(ModuleListContainerWidget->sizePolicy().hasHeightForWidth());
        ModuleListContainerWidget->setSizePolicy(sizePolicy5);
        horizontalLayout = new QHBoxLayout(ModuleListContainerWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        DisableModulesListView = new qSlicerModulesListView(ModuleListContainerWidget);
        DisableModulesListView->setObjectName(QString::fromUtf8("DisableModulesListView"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(DisableModulesListView->sizePolicy().hasHeightForWidth());
        DisableModulesListView->setSizePolicy(sizePolicy6);
        DisableModulesListView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        DisableModulesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        DisableModulesListView->setDragDropMode(QAbstractItemView::DragOnly);
        DisableModulesListView->setAlternatingRowColors(false);
        DisableModulesListView->setCheckBoxVisible(true);

        horizontalLayout->addWidget(DisableModulesListView);

        FilterGroupBox = new QGroupBox(ModuleListContainerWidget);
        FilterGroupBox->setObjectName(QString::fromUtf8("FilterGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(FilterGroupBox->sizePolicy().hasHeightForWidth());
        FilterGroupBox->setSizePolicy(sizePolicy7);
        verticalLayout_3 = new QVBoxLayout(FilterGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        FilterToLoadPushButton = new ctkCheckablePushButton(FilterGroupBox);
        FilterToLoadPushButton->setObjectName(QString::fromUtf8("FilterToLoadPushButton"));
        FilterToLoadPushButton->setCheckable(true);
        FilterToLoadPushButton->setChecked(true);
        FilterToLoadPushButton->setCheckBoxControlsButton(false);
        FilterToLoadPushButton->setCheckBoxUserCheckable(false);

        verticalLayout_3->addWidget(FilterToLoadPushButton);

        FilterToIgnorePushButton = new ctkCheckablePushButton(FilterGroupBox);
        FilterToIgnorePushButton->setObjectName(QString::fromUtf8("FilterToIgnorePushButton"));
        FilterToIgnorePushButton->setCheckable(true);
        FilterToIgnorePushButton->setChecked(true);
        FilterToIgnorePushButton->setCheckBoxControlsButton(false);
        FilterToIgnorePushButton->setCheckBoxUserCheckable(false);

        verticalLayout_3->addWidget(FilterToIgnorePushButton);

        FilterLoadedPushButton = new QPushButton(FilterGroupBox);
        FilterLoadedPushButton->setObjectName(QString::fromUtf8("FilterLoadedPushButton"));
        FilterLoadedPushButton->setCheckable(true);
        FilterLoadedPushButton->setChecked(true);

        verticalLayout_3->addWidget(FilterLoadedPushButton);

        FilterIgnoredPushButton = new QPushButton(FilterGroupBox);
        FilterIgnoredPushButton->setObjectName(QString::fromUtf8("FilterIgnoredPushButton"));
        QPalette palette;
        QBrush brush(QColor(106, 104, 100, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        FilterIgnoredPushButton->setPalette(palette);
        FilterIgnoredPushButton->setCheckable(true);
        FilterIgnoredPushButton->setChecked(true);

        verticalLayout_3->addWidget(FilterIgnoredPushButton);

        FilterFailedPushButton = new QPushButton(FilterGroupBox);
        FilterFailedPushButton->setObjectName(QString::fromUtf8("FilterFailedPushButton"));
        QPalette palette1;
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        FilterFailedPushButton->setPalette(palette1);
        FilterFailedPushButton->setCheckable(true);
        FilterFailedPushButton->setChecked(true);

        verticalLayout_3->addWidget(FilterFailedPushButton);

        FilterTitleSearchBox = new ctkSearchBox(FilterGroupBox);
        FilterTitleSearchBox->setObjectName(QString::fromUtf8("FilterTitleSearchBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(FilterTitleSearchBox->sizePolicy().hasHeightForWidth());
        FilterTitleSearchBox->setSizePolicy(sizePolicy8);
        FilterTitleSearchBox->setShowSearchIcon(true);

        verticalLayout_3->addWidget(FilterTitleSearchBox);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(FilterGroupBox);

        FilterMoreButton = new ctkExpandButton(ModuleListContainerWidget);
        FilterMoreButton->setObjectName(QString::fromUtf8("FilterMoreButton"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(FilterMoreButton->sizePolicy().hasHeightForWidth());
        FilterMoreButton->setSizePolicy(sizePolicy9);
        FilterMoreButton->setChecked(true);
        FilterMoreButton->setMirrorOnExpand(true);

        horizontalLayout->addWidget(FilterMoreButton);


        formLayout->setWidget(7, QFormLayout::FieldRole, ModuleListContainerWidget);

        HomeModuleLabel = new QLabel(qSlicerSettingsModulesPanel);
        HomeModuleLabel->setObjectName(QString::fromUtf8("HomeModuleLabel"));
        sizePolicy1.setHeightForWidth(HomeModuleLabel->sizePolicy().hasHeightForWidth());
        HomeModuleLabel->setSizePolicy(sizePolicy1);

        formLayout->setWidget(8, QFormLayout::LabelRole, HomeModuleLabel);

        DefaultStartupContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        DefaultStartupContainerWidget->setObjectName(QString::fromUtf8("DefaultStartupContainerWidget"));
        sizePolicy1.setHeightForWidth(DefaultStartupContainerWidget->sizePolicy().hasHeightForWidth());
        DefaultStartupContainerWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_7 = new QHBoxLayout(DefaultStartupContainerWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        HomeModuleButton = new QPushButton(DefaultStartupContainerWidget);
        HomeModuleButton->setObjectName(QString::fromUtf8("HomeModuleButton"));

        horizontalLayout_7->addWidget(HomeModuleButton);


        formLayout->setWidget(8, QFormLayout::FieldRole, DefaultStartupContainerWidget);

        FavoritesModulesLabel = new QLabel(qSlicerSettingsModulesPanel);
        FavoritesModulesLabel->setObjectName(QString::fromUtf8("FavoritesModulesLabel"));
        sizePolicy1.setHeightForWidth(FavoritesModulesLabel->sizePolicy().hasHeightForWidth());
        FavoritesModulesLabel->setSizePolicy(sizePolicy1);
        FavoritesModulesLabel->setWordWrap(true);

        formLayout->setWidget(9, QFormLayout::LabelRole, FavoritesModulesLabel);

        FavoriteModulesContainerWidget = new QWidget(qSlicerSettingsModulesPanel);
        FavoriteModulesContainerWidget->setObjectName(QString::fromUtf8("FavoriteModulesContainerWidget"));
        sizePolicy1.setHeightForWidth(FavoriteModulesContainerWidget->sizePolicy().hasHeightForWidth());
        FavoriteModulesContainerWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(FavoriteModulesContainerWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        FavoritesModulesListView = new qSlicerModulesListView(FavoriteModulesContainerWidget);
        FavoritesModulesListView->setObjectName(QString::fromUtf8("FavoritesModulesListView"));
        FavoritesModulesListView->setMaximumSize(QSize(16777215, 80));
        FavoritesModulesListView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        FavoritesModulesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        FavoritesModulesListView->setDragDropMode(QAbstractItemView::DragDrop);
        FavoritesModulesListView->setDefaultDropAction(Qt::CopyAction);
        FavoritesModulesListView->setSelectionMode(QAbstractItemView::SingleSelection);
        FavoritesModulesListView->setIconSize(QSize(32, 32));
        FavoritesModulesListView->setFlow(QListView::LeftToRight);
        FavoritesModulesListView->setProperty("isWrapping", QVariant(false));
        FavoritesModulesListView->setViewMode(QListView::IconMode);
        FavoritesModulesListView->setUniformItemSizes(false);
        FavoritesModulesListView->setWordWrap(true);

        horizontalLayout_3->addWidget(FavoritesModulesListView);

        FavoritesMoreGroupBox = new QGroupBox(FavoriteModulesContainerWidget);
        FavoritesMoreGroupBox->setObjectName(QString::fromUtf8("FavoritesMoreGroupBox"));
        gridLayout = new QGridLayout(FavoritesMoreGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        FavoritesRemoveButton = new QPushButton(FavoritesMoreGroupBox);
        FavoritesRemoveButton->setObjectName(QString::fromUtf8("FavoritesRemoveButton"));

        gridLayout->addWidget(FavoritesRemoveButton, 0, 0, 1, 2);

        FavoritesMoveLeftButton = new QToolButton(FavoritesMoreGroupBox);
        FavoritesMoveLeftButton->setObjectName(QString::fromUtf8("FavoritesMoveLeftButton"));

        gridLayout->addWidget(FavoritesMoveLeftButton, 2, 0, 1, 1);

        FavoritesMoveRightButton = new QToolButton(FavoritesMoreGroupBox);
        FavoritesMoveRightButton->setObjectName(QString::fromUtf8("FavoritesMoveRightButton"));

        gridLayout->addWidget(FavoritesMoveRightButton, 2, 1, 1, 1);


        horizontalLayout_3->addWidget(FavoritesMoreGroupBox);

        FavoritesMoreButton = new ctkExpandButton(FavoriteModulesContainerWidget);
        FavoritesMoreButton->setObjectName(QString::fromUtf8("FavoritesMoreButton"));
        FavoritesMoreButton->setChecked(true);
        FavoritesMoreButton->setMirrorOnExpand(true);

        horizontalLayout_3->addWidget(FavoritesMoreButton);


        formLayout->setWidget(9, QFormLayout::FieldRole, FavoriteModulesContainerWidget);


        retranslateUi(qSlicerSettingsModulesPanel);
        QObject::connect(AdditionalModulePathMoreButton, SIGNAL(toggled(bool)), groupBox, SLOT(setVisible(bool)));
        QObject::connect(FilterMoreButton, SIGNAL(toggled(bool)), FilterGroupBox, SLOT(setVisible(bool)));
        QObject::connect(FavoritesMoreButton, SIGNAL(toggled(bool)), FavoritesMoreGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qSlicerSettingsModulesPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsModulesPanel)
    {
        qSlicerSettingsModulesPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Module", nullptr));
        LoadModulesLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Skip loading of any:", nullptr));
#if QT_CONFIG(tooltip)
        LoadLoadableModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass --disable-loadable-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadLoadableModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "loadable modules", nullptr));
#if QT_CONFIG(tooltip)
        LoadCommandLineModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass --disable-cli-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadCommandLineModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "command-line plugins", nullptr));
#if QT_CONFIG(tooltip)
        LoadScriptedLoadableModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass  --disable-scripted-loadable-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadScriptedLoadableModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "scripted loadable modules", nullptr));
        LoadBuildInModulesLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Skip loading of builtin:", nullptr));
#if QT_CONFIG(tooltip)
        LoadBuiltInLoadableModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass --disable-builtin-loadable-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadBuiltInLoadableModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "loadable modules", nullptr));
#if QT_CONFIG(tooltip)
        LoadBuiltInCommandLineModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass --disable-builtin-cli-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadBuiltInCommandLineModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "command-line plugins", nullptr));
#if QT_CONFIG(tooltip)
        LoadBuiltInScriptedLoadableModulesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To temporarily disable, pass  --disable-builtin-scripted-loadable-modules on the command line", nullptr));
#endif // QT_CONFIG(tooltip)
        LoadBuiltInScriptedLoadableModulesCheckBox->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "scripted loadable modules", nullptr));
        ShowHiddenModulesLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Show hidden modules:", nullptr));
        ShowHiddenModulesCheckBox->setText(QString());
        TemporaryDirectoryLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Temporary directory:", nullptr));
        AdditionalModulePathsLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "<html><head/><body>\n"
"<p>Additional module paths:</p>\n"
"<p style=\"margin-left: 10px;\"><span style=\" font-size:small; font-style:italic;\">Drag &amp; drop files or folders<br/>from File Explorer</span></p>\n"
"</body></html>\n"
"", nullptr));
        groupBox->setTitle(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Paths", nullptr));
        AddAdditionalModulePathButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Add", nullptr));
        RemoveAdditionalModulePathButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        DisableModulesLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "when checking/unchecking a module, its dependencies are checked/unchecked accordingly", nullptr));
#endif // QT_CONFIG(tooltip)
        DisableModulesLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Modules:", nullptr));
        FilterGroupBox->setTitle(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        FilterToLoadPushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Hide modules to load at startup", nullptr));
#endif // QT_CONFIG(tooltip)
        FilterToLoadPushButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To load", nullptr));
#if QT_CONFIG(tooltip)
        FilterToIgnorePushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Hide modules to ignore at startup", nullptr));
#endif // QT_CONFIG(tooltip)
        FilterToIgnorePushButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "To ignore", nullptr));
#if QT_CONFIG(tooltip)
        FilterLoadedPushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Hide loaded modules", nullptr));
#endif // QT_CONFIG(tooltip)
        FilterLoadedPushButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Loaded", nullptr));
#if QT_CONFIG(tooltip)
        FilterIgnoredPushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Hide ignored modules", nullptr));
#endif // QT_CONFIG(tooltip)
        FilterIgnoredPushButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Ignored", nullptr));
#if QT_CONFIG(tooltip)
        FilterFailedPushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Hide Failed to load modules", nullptr));
#endif // QT_CONFIG(tooltip)
        FilterFailedPushButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Failed", nullptr));
        HomeModuleLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Default startup module:", nullptr));
        HomeModuleButton->setText(QString());
#if QT_CONFIG(tooltip)
        FavoritesModulesLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Add to the list by dragging modules from the above \"Modules\" list. Note: modules with no icons will not appear in the toolbar.", nullptr));
#endif // QT_CONFIG(tooltip)
        FavoritesModulesLabel->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "<html><head/><body><p>Favorite Modules:</p><p style=\"margin-left: 10px;\"><span style=\" font-size:small; font-style:italic;\">Drag &amp; drop modules<br/>from </span><span style=\" font-size:small;\">Modules</span><span style=\" font-size:small; font-style:italic;\"> list</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        FavoritesMoreGroupBox->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Add to the list by dragging modules from the above \"Modules\" list", nullptr));
#endif // QT_CONFIG(tooltip)
        FavoritesMoreGroupBox->setTitle(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Favorite", nullptr));
#if QT_CONFIG(tooltip)
        FavoritesRemoveButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Remove selected module from favorites", nullptr));
#endif // QT_CONFIG(tooltip)
        FavoritesRemoveButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        FavoritesMoveLeftButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Move to the left", nullptr));
#endif // QT_CONFIG(tooltip)
        FavoritesMoveLeftButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Move Left", nullptr));
#if QT_CONFIG(tooltip)
        FavoritesMoveRightButton->setToolTip(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Move to the right", nullptr));
#endif // QT_CONFIG(tooltip)
        FavoritesMoveRightButton->setText(QCoreApplication::translate("qSlicerSettingsModulesPanel", "Move Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsModulesPanel: public Ui_qSlicerSettingsModulesPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSMODULESPANEL_H
