/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsROIWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSROIWIDGET_H
#define UI_QMRMLMARKUPSROIWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkRangeWidget.h"
#include "qMRMLRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsROIWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *roiSettingsCollapseButton;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_10;
    QComboBox *roiTypeComboBox;
    QLabel *label;
    QCheckBox *insideOutCheckBox;
    QGridLayout *gridLayout;
    QLabel *LRRangeLabel;
    qMRMLRangeWidget *LRRangeWidget;
    QLabel *PARangeLabel;
    qMRMLRangeWidget *PARangeWidget;
    qMRMLRangeWidget *ISRangeWidget;
    QLabel *ISRangeLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *DisplayClippingBoxButton;
    QLabel *DisplayClippingBoxLabel;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *InteractiveModeCheckBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *qMRMLMarkupsROIWidget)
    {
        if (qMRMLMarkupsROIWidget->objectName().isEmpty())
            qMRMLMarkupsROIWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsROIWidget"));
        qMRMLMarkupsROIWidget->resize(400, 301);
        verticalLayout = new QVBoxLayout(qMRMLMarkupsROIWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        roiSettingsCollapseButton = new ctkCollapsibleButton(qMRMLMarkupsROIWidget);
        roiSettingsCollapseButton->setObjectName(QString::fromUtf8("roiSettingsCollapseButton"));
        roiSettingsCollapseButton->setCollapsed(false);
        verticalLayout_2 = new QVBoxLayout(roiSettingsCollapseButton);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_10 = new QLabel(roiSettingsCollapseButton);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        roiTypeComboBox = new QComboBox(roiSettingsCollapseButton);
        roiTypeComboBox->setObjectName(QString::fromUtf8("roiTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, roiTypeComboBox);

        label = new QLabel(roiSettingsCollapseButton);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        insideOutCheckBox = new QCheckBox(roiSettingsCollapseButton);
        insideOutCheckBox->setObjectName(QString::fromUtf8("insideOutCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, insideOutCheckBox);


        verticalLayout_2->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LRRangeLabel = new QLabel(roiSettingsCollapseButton);
        LRRangeLabel->setObjectName(QString::fromUtf8("LRRangeLabel"));
        LRRangeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(LRRangeLabel, 0, 0, 1, 1);

        LRRangeWidget = new qMRMLRangeWidget(roiSettingsCollapseButton);
        LRRangeWidget->setObjectName(QString::fromUtf8("LRRangeWidget"));
        LRRangeWidget->setMinimum(-100.000000000000000);
        LRRangeWidget->setMaximum(100.000000000000000);
        LRRangeWidget->setMinimumValue(-50.000000000000000);
        LRRangeWidget->setMaximumValue(50.000000000000000);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(180, 160, 220, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(255, 0, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush4(QColor(255, 127, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 0, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        LRRangeWidget->setMinimumHandlePalette(palette);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(107, 66, 154, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush8(QColor(255, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush9(QColor(255, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(127, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        LRRangeWidget->setMaximumHandlePalette(palette1);
        LRRangeWidget->setQuantity(QString::fromUtf8("length"));

        gridLayout->addWidget(LRRangeWidget, 0, 1, 1, 1);

        PARangeLabel = new QLabel(roiSettingsCollapseButton);
        PARangeLabel->setObjectName(QString::fromUtf8("PARangeLabel"));
        PARangeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(PARangeLabel, 1, 0, 1, 1);

        PARangeWidget = new qMRMLRangeWidget(roiSettingsCollapseButton);
        PARangeWidget->setObjectName(QString::fromUtf8("PARangeWidget"));
        PARangeWidget->setMinimum(-100.000000000000000);
        PARangeWidget->setMaximum(100.000000000000000);
        PARangeWidget->setMinimumValue(-50.000000000000000);
        PARangeWidget->setMaximumValue(50.000000000000000);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush11(QColor(154, 13, 6, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush12(QColor(227, 153, 18, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(241, 204, 136, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(113, 76, 9, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        PARangeWidget->setMinimumHandlePalette(palette2);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush15(QColor(233, 101, 0, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(127, 127, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        PARangeWidget->setMaximumHandlePalette(palette3);
        PARangeWidget->setQuantity(QString::fromUtf8("length"));

        gridLayout->addWidget(PARangeWidget, 1, 1, 1, 1);

        ISRangeWidget = new qMRMLRangeWidget(roiSettingsCollapseButton);
        ISRangeWidget->setObjectName(QString::fromUtf8("ISRangeWidget"));
        ISRangeWidget->setMinimum(-100.000000000000000);
        ISRangeWidget->setMaximum(100.000000000000000);
        ISRangeWidget->setMinimumValue(-50.000000000000000);
        ISRangeWidget->setMaximumValue(50.000000000000000);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(36, 78, 128, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush18(QColor(0, 0, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush19(QColor(127, 127, 255, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush20(QColor(0, 0, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ISRangeWidget->setMinimumHandlePalette(palette4);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush21(QColor(87, 177, 184, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush21);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush21);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ISRangeWidget->setMaximumHandlePalette(palette5);
        ISRangeWidget->setQuantity(QString::fromUtf8("length"));

        gridLayout->addWidget(ISRangeWidget, 2, 1, 1, 1);

        ISRangeLabel = new QLabel(roiSettingsCollapseButton);
        ISRangeLabel->setObjectName(QString::fromUtf8("ISRangeLabel"));
        ISRangeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(ISRangeLabel, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DisplayClippingBoxButton = new QToolButton(roiSettingsCollapseButton);
        DisplayClippingBoxButton->setObjectName(QString::fromUtf8("DisplayClippingBoxButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::On);
        DisplayClippingBoxButton->setIcon(icon);
        DisplayClippingBoxButton->setCheckable(true);
        DisplayClippingBoxButton->setChecked(false);

        horizontalLayout->addWidget(DisplayClippingBoxButton);

        DisplayClippingBoxLabel = new QLabel(roiSettingsCollapseButton);
        DisplayClippingBoxLabel->setObjectName(QString::fromUtf8("DisplayClippingBoxLabel"));

        horizontalLayout->addWidget(DisplayClippingBoxLabel);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        InteractiveModeCheckBox = new QCheckBox(roiSettingsCollapseButton);
        InteractiveModeCheckBox->setObjectName(QString::fromUtf8("InteractiveModeCheckBox"));
        InteractiveModeCheckBox->setChecked(true);

        horizontalLayout->addWidget(InteractiveModeCheckBox);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(5, 3);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(roiSettingsCollapseButton);


        retranslateUi(qMRMLMarkupsROIWidget);

        QMetaObject::connectSlotsByName(qMRMLMarkupsROIWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLMarkupsROIWidget)
    {
        qMRMLMarkupsROIWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsROIWidget", "ROI Settings", nullptr));
        roiSettingsCollapseButton->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "ROI Settings", nullptr));
        label_10->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "ROI type:", nullptr));
        label->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "Inside out:", nullptr));
        insideOutCheckBox->setText(QString());
        LRRangeLabel->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "L-R Range:", nullptr));
        PARangeLabel->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "P-A Range:", nullptr));
        ISRangeLabel->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "I-S Range:", nullptr));
        DisplayClippingBoxLabel->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "Display ROI", nullptr));
        InteractiveModeCheckBox->setText(QCoreApplication::translate("qMRMLMarkupsROIWidget", "Interactive Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsROIWidget: public Ui_qMRMLMarkupsROIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSROIWIDGET_H
