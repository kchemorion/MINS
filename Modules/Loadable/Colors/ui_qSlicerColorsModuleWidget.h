/********************************************************************************
** Form generated from reading UI file 'qSlicerColorsModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERCOLORSMODULEWIDGET_H
#define UI_QSLICERCOLORSMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include "ctkCollapsibleButton.h"
#include "ctkDynamicSpacer.h"
#include "ctkRangeWidget.h"
#include "ctkVTKScalarsToColorsWidget.h"
#include "qMRMLColorLegendDisplayNodeWidget.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLColorTableView.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLRangeWidget.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerColorsModuleWidget
{
public:
    QGridLayout *gridLayout_7;
    ctkDynamicSpacer *DynamicSpacer;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *ColorTableLabel;
    QHBoxLayout *horizontalLayout;
    qMRMLColorTableComboBox *ColorTableComboBox;
    QToolButton *CopyColorNodeButton;
    ctkCollapsibleButton *ColorLegendCollapsibleButton;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    qMRMLNodeComboBox *DisplayableNodeComboBox;
    QLabel *DisplayableNodeLabel;
    qMRMLColorLegendDisplayNodeWidget *ColorLegendDisplayNodeWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *CreateColorLegendButton;
    QPushButton *UseCurrentColorsButton;
    QPushButton *DeleteColorLegendButton;
    QLabel *DisplayableNodeLabel_2;
    ctkCollapsibleButton *EditColorsCollapsibleButton;
    QGridLayout *gridLayout;
    ctkVTKScalarsToColorsWidget *ContinuousScalarsToColorsWidget;
    QFrame *ColorTableFrame;
    QFormLayout *formLayout_2;
    QLabel *NumberOfColorsLabel;
    QSpinBox *NumberOfColorsSpinBox;
    QLabel *HideInvalidColorsLabel;
    QCheckBox *HideInvalidColorsCheckBox;
    QLabel *LUTRangeLabel;
    qMRMLRangeWidget *LUTRangeWidget;
    qMRMLColorTableView *ColorView;

    void setupUi(qSlicerWidget *qSlicerColorsModuleWidget)
    {
        if (qSlicerColorsModuleWidget->objectName().isEmpty())
            qSlicerColorsModuleWidget->setObjectName(QString::fromUtf8("qSlicerColorsModuleWidget"));
        qSlicerColorsModuleWidget->resize(301, 625);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Colors.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerColorsModuleWidget->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(qSlicerColorsModuleWidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        DynamicSpacer = new ctkDynamicSpacer(qSlicerColorsModuleWidget);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setActiveSizePolicy(sizePolicy);

        gridLayout_7->addWidget(DynamicSpacer, 4, 1, 1, 1);

        frame = new QFrame(qSlicerColorsModuleWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        ColorTableLabel = new QLabel(frame);
        ColorTableLabel->setObjectName(QString::fromUtf8("ColorTableLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ColorTableLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ColorTableComboBox = new qMRMLColorTableComboBox(frame);
        ColorTableComboBox->setObjectName(QString::fromUtf8("ColorTableComboBox"));
        ColorTableComboBox->setAddEnabled(false);
        ColorTableComboBox->setRemoveEnabled(false);

        horizontalLayout->addWidget(ColorTableComboBox);

        CopyColorNodeButton = new QToolButton(frame);
        CopyColorNodeButton->setObjectName(QString::fromUtf8("CopyColorNodeButton"));

        horizontalLayout->addWidget(CopyColorNodeButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        gridLayout_7->addWidget(frame, 0, 0, 1, 3);

        ColorLegendCollapsibleButton = new ctkCollapsibleButton(qSlicerColorsModuleWidget);
        ColorLegendCollapsibleButton->setObjectName(QString::fromUtf8("ColorLegendCollapsibleButton"));
        ColorLegendCollapsibleButton->setEnabled(true);
        ColorLegendCollapsibleButton->setCollapsed(true);
        gridLayout_2 = new QGridLayout(ColorLegendCollapsibleButton);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DisplayableNodeComboBox = new qMRMLNodeComboBox(ColorLegendCollapsibleButton);
        DisplayableNodeComboBox->setObjectName(QString::fromUtf8("DisplayableNodeComboBox"));
        sizePolicy1.setHeightForWidth(DisplayableNodeComboBox->sizePolicy().hasHeightForWidth());
        DisplayableNodeComboBox->setSizePolicy(sizePolicy1);
        DisplayableNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode") << QString::fromUtf8("vtkMRMLModelNode"));
        DisplayableNodeComboBox->setAddEnabled(false);
        DisplayableNodeComboBox->setRemoveEnabled(false);
        DisplayableNodeComboBox->setEditEnabled(true);

        gridLayout_3->addWidget(DisplayableNodeComboBox, 0, 1, 1, 1);

        DisplayableNodeLabel = new QLabel(ColorLegendCollapsibleButton);
        DisplayableNodeLabel->setObjectName(QString::fromUtf8("DisplayableNodeLabel"));

        gridLayout_3->addWidget(DisplayableNodeLabel, 0, 0, 1, 1);

        ColorLegendDisplayNodeWidget = new qMRMLColorLegendDisplayNodeWidget(ColorLegendCollapsibleButton);
        ColorLegendDisplayNodeWidget->setObjectName(QString::fromUtf8("ColorLegendDisplayNodeWidget"));

        gridLayout_3->addWidget(ColorLegendDisplayNodeWidget, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        CreateColorLegendButton = new QPushButton(ColorLegendCollapsibleButton);
        CreateColorLegendButton->setObjectName(QString::fromUtf8("CreateColorLegendButton"));

        horizontalLayout_2->addWidget(CreateColorLegendButton);

        UseCurrentColorsButton = new QPushButton(ColorLegendCollapsibleButton);
        UseCurrentColorsButton->setObjectName(QString::fromUtf8("UseCurrentColorsButton"));

        horizontalLayout_2->addWidget(UseCurrentColorsButton);

        DeleteColorLegendButton = new QPushButton(ColorLegendCollapsibleButton);
        DeleteColorLegendButton->setObjectName(QString::fromUtf8("DeleteColorLegendButton"));

        horizontalLayout_2->addWidget(DeleteColorLegendButton);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        DisplayableNodeLabel_2 = new QLabel(ColorLegendCollapsibleButton);
        DisplayableNodeLabel_2->setObjectName(QString::fromUtf8("DisplayableNodeLabel_2"));

        gridLayout_3->addWidget(DisplayableNodeLabel_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_7->addWidget(ColorLegendCollapsibleButton, 3, 0, 1, 3);

        EditColorsCollapsibleButton = new ctkCollapsibleButton(qSlicerColorsModuleWidget);
        EditColorsCollapsibleButton->setObjectName(QString::fromUtf8("EditColorsCollapsibleButton"));
        EditColorsCollapsibleButton->setChecked(true);
        EditColorsCollapsibleButton->setCollapsed(false);
        gridLayout = new QGridLayout(EditColorsCollapsibleButton);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ContinuousScalarsToColorsWidget = new ctkVTKScalarsToColorsWidget(EditColorsCollapsibleButton);
        ContinuousScalarsToColorsWidget->setObjectName(QString::fromUtf8("ContinuousScalarsToColorsWidget"));
        ContinuousScalarsToColorsWidget->setMinimumSize(QSize(0, 120));
        ContinuousScalarsToColorsWidget->setMaximumSize(QSize(16777215, 120));

        gridLayout->addWidget(ContinuousScalarsToColorsWidget, 6, 0, 1, 2);

        ColorTableFrame = new QFrame(EditColorsCollapsibleButton);
        ColorTableFrame->setObjectName(QString::fromUtf8("ColorTableFrame"));
        ColorTableFrame->setFrameShape(QFrame::NoFrame);
        ColorTableFrame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(ColorTableFrame);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(0);
        formLayout_2->setContentsMargins(0, -1, 0, 0);
        NumberOfColorsLabel = new QLabel(ColorTableFrame);
        NumberOfColorsLabel->setObjectName(QString::fromUtf8("NumberOfColorsLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(NumberOfColorsLabel->sizePolicy().hasHeightForWidth());
        NumberOfColorsLabel->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, NumberOfColorsLabel);

        NumberOfColorsSpinBox = new QSpinBox(ColorTableFrame);
        NumberOfColorsSpinBox->setObjectName(QString::fromUtf8("NumberOfColorsSpinBox"));
        NumberOfColorsSpinBox->setEnabled(false);
        NumberOfColorsSpinBox->setMaximum(10000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, NumberOfColorsSpinBox);

        HideInvalidColorsLabel = new QLabel(ColorTableFrame);
        HideInvalidColorsLabel->setObjectName(QString::fromUtf8("HideInvalidColorsLabel"));
        sizePolicy2.setHeightForWidth(HideInvalidColorsLabel->sizePolicy().hasHeightForWidth());
        HideInvalidColorsLabel->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, HideInvalidColorsLabel);

        HideInvalidColorsCheckBox = new QCheckBox(ColorTableFrame);
        HideInvalidColorsCheckBox->setObjectName(QString::fromUtf8("HideInvalidColorsCheckBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, HideInvalidColorsCheckBox);

        LUTRangeLabel = new QLabel(ColorTableFrame);
        LUTRangeLabel->setObjectName(QString::fromUtf8("LUTRangeLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, LUTRangeLabel);

        LUTRangeWidget = new qMRMLRangeWidget(ColorTableFrame);
        LUTRangeWidget->setObjectName(QString::fromUtf8("LUTRangeWidget"));
        LUTRangeWidget->setEnabled(false);
        LUTRangeWidget->setMinimum(-150.000000000000000);
        LUTRangeWidget->setMaximum(150.000000000000000);
        LUTRangeWidget->setMinimumValue(-100.000000000000000);
        LUTRangeWidget->setMaximumValue(100.000000000000000);

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, LUTRangeWidget);

        ColorView = new qMRMLColorTableView(ColorTableFrame);
        ColorView->setObjectName(QString::fromUtf8("ColorView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ColorView->sizePolicy().hasHeightForWidth());
        ColorView->setSizePolicy(sizePolicy3);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, ColorView);


        gridLayout->addWidget(ColorTableFrame, 0, 0, 1, 1);


        gridLayout_7->addWidget(EditColorsCollapsibleButton, 1, 0, 1, 3);


        retranslateUi(qSlicerColorsModuleWidget);
        QObject::connect(qSlicerColorsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(EditColorsCollapsibleButton, SIGNAL(toggled(bool)), DynamicSpacer, SLOT(setInactive(bool)));
        QObject::connect(ColorTableComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)), ColorView, SLOT(setMRMLColorNode(vtkMRMLNode*)));
        QObject::connect(EditColorsCollapsibleButton, SIGNAL(toggled(bool)), ColorView, SLOT(setShowOnlyNamedColors(bool)));
        QObject::connect(HideInvalidColorsCheckBox, SIGNAL(toggled(bool)), ColorView, SLOT(setShowOnlyNamedColors(bool)));
        QObject::connect(qSlicerColorsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), LUTRangeWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerColorsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), DisplayableNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerColorsModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerColorsModuleWidget)
    {
        qSlicerColorsModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerColorsModuleWidget", "Colors", nullptr));
        ColorTableLabel->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Colors:", nullptr));
#if QT_CONFIG(tooltip)
        CopyColorNodeButton->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "Duplicate the current color node to allow editing colors, scalar range, size.", nullptr));
#endif // QT_CONFIG(tooltip)
        CopyColorNodeButton->setText(QString());
        ColorLegendCollapsibleButton->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Color Legend", nullptr));
        DisplayableNodeLabel->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Displayable node:", nullptr));
#if QT_CONFIG(tooltip)
        CreateColorLegendButton->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "Create color legend for the selected displayable node.", nullptr));
#endif // QT_CONFIG(tooltip)
        CreateColorLegendButton->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Create", nullptr));
#if QT_CONFIG(tooltip)
        UseCurrentColorsButton->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "Use the currently selected colors for the selected displayable node.", nullptr));
#endif // QT_CONFIG(tooltip)
        UseCurrentColorsButton->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Use current colors", nullptr));
#if QT_CONFIG(tooltip)
        DeleteColorLegendButton->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "Delete the color legend for the selected displayable node.", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteColorLegendButton->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Delete", nullptr));
        DisplayableNodeLabel_2->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Color legend:", nullptr));
        EditColorsCollapsibleButton->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Color Table", nullptr));
        NumberOfColorsLabel->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Number of Colors: ", nullptr));
        HideInvalidColorsLabel->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Hide empty Colors: ", nullptr));
#if QT_CONFIG(tooltip)
        HideInvalidColorsCheckBox->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "Show/Hide the unnamed color entries in the list below.", nullptr));
#endif // QT_CONFIG(tooltip)
        HideInvalidColorsCheckBox->setText(QString());
        LUTRangeLabel->setText(QCoreApplication::translate("qSlicerColorsModuleWidget", "Scalar Range:", nullptr));
#if QT_CONFIG(tooltip)
        LUTRangeWidget->setToolTip(QCoreApplication::translate("qSlicerColorsModuleWidget", "The range of scalars that are mapped to the full range of colors.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerColorsModuleWidget: public Ui_qSlicerColorsModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERCOLORSMODULEWIDGET_H
