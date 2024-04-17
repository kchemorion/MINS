/********************************************************************************
** Form generated from reading UI file 'qSlicerReformatModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERREFORMATMODULEWIDGET_H
#define UI_QSLICERREFORMATMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCheckBox.h"
#include "ctkCheckablePushButton.h"
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkComboBox.h"
#include "ctkCoordinatesWidget.h"
#include "ctkDoubleSpinBox.h"
#include "ctkPushButton.h"
#include "ctkSliderWidget.h"
#include "qMRMLLinearTransformSlider.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSliderWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerReformatModuleWidget
{
public:
    QAction *actionLockNormalToCamera;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    ctkCheckBox *VisibilityCheckBox;
    qMRMLNodeComboBox *SliceNodeSelector;
    QToolButton *ShowReformatWidgetToolButton;
    ctkCollapsibleButton *DisplayEditCollapsibleWidget;
    QVBoxLayout *verticalLayout_3;
    ctkCollapsibleGroupBox *OffsetSlidersGroupBox;
    QGridLayout *gridLayout_2;
    qMRMLLinearTransformSlider *OffsetSlider;
    QWidget *MinMaxWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_3;
    ctkCollapsibleGroupBox *OriginCoordinatesGroupBox;
    QGridLayout *gridLayout_3;
    QGroupBox *CoordinateReferenceGroupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *OnPlaneRadioButton;
    QRadioButton *InVolumeRadioButton;
    QGroupBox *OnPlaneGroupBox;
    QHBoxLayout *OnPlaneLayout;
    ctkDoubleSpinBox *OnPlaneXdoubleSpinBox;
    ctkDoubleSpinBox *OnPlaneYdoubleSpinBox;
    QPushButton *CenterPushButton;
    ctkCoordinatesWidget *InVolumeCoordinatesWidget;
    ctkCollapsibleGroupBox *RotationSlidersGroupBox;
    QGridLayout *gridLayout;
    qMRMLLinearTransformSlider *RotateZSlider;
    QLabel *PALabel;
    QLabel *ISLabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *NormalToLRPushButton;
    QPushButton *NormalToPAPushButton;
    QPushButton *NormalToISPushButton;
    QPushButton *RotateToVolumePlanePushButton;
    QLabel *Normal_2;
    qMRMLLinearTransformSlider *RotateYSlider;
    qMRMLLinearTransformSlider *RotateXSlider;
    QLabel *Resetlabel;
    QLabel *Normal;
    QLabel *LRLabel;
    QWidget *MinMaxWidget;
    QHBoxLayout *horizontalLayout_4;
    ctkComboBox *SliceOrientationSelector;
    QSpacerItem *verticalSpacer_2;
    ctkCheckablePushButton *NormalToCameraCheckablePushButton;
    ctkCoordinatesWidget *NormalCoordinatesWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *FlipHorizontalPushButton;
    QPushButton *FlipVerticalPushButton;
    QPushButton *RotateClockwisePushButton;
    QPushButton *RotateCounterClockwisePushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerReformatModuleWidget)
    {
        if (qSlicerReformatModuleWidget->objectName().isEmpty())
            qSlicerReformatModuleWidget->setObjectName(QString::fromUtf8("qSlicerReformatModuleWidget"));
        qSlicerReformatModuleWidget->resize(411, 780);
        actionLockNormalToCamera = new QAction(qSlicerReformatModuleWidget);
        actionLockNormalToCamera->setObjectName(QString::fromUtf8("actionLockNormalToCamera"));
        actionLockNormalToCamera->setCheckable(true);
        gridLayout_4 = new QGridLayout(qSlicerReformatModuleWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        VisibilityCheckBox = new ctkCheckBox(qSlicerReformatModuleWidget);
        VisibilityCheckBox->setObjectName(QString::fromUtf8("VisibilityCheckBox"));
        VisibilityCheckBox->setEnabled(false);
        VisibilityCheckBox->setTristate(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::On);
        VisibilityCheckBox->setIndicatorIcon(icon);
        VisibilityCheckBox->setIndicatorIconSize(QSize(21, 21));

        horizontalLayout_3->addWidget(VisibilityCheckBox);

        SliceNodeSelector = new qMRMLNodeComboBox(qSlicerReformatModuleWidget);
        SliceNodeSelector->setObjectName(QString::fromUtf8("SliceNodeSelector"));
        SliceNodeSelector->setAutoFillBackground(false);
        SliceNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSliceNode"));
        SliceNodeSelector->setShowHidden(true);
        SliceNodeSelector->setNoneEnabled(true);
        SliceNodeSelector->setAddEnabled(false);
        SliceNodeSelector->setRemoveEnabled(false);
        SliceNodeSelector->setRenameEnabled(false);

        horizontalLayout_3->addWidget(SliceNodeSelector);

        ShowReformatWidgetToolButton = new QToolButton(qSlicerReformatModuleWidget);
        ShowReformatWidgetToolButton->setObjectName(QString::fromUtf8("ShowReformatWidgetToolButton"));
        ShowReformatWidgetToolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/SliceWidgetOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Icons/SliceWidgetOn.png"), QSize(), QIcon::Normal, QIcon::On);
        ShowReformatWidgetToolButton->setIcon(icon1);
        ShowReformatWidgetToolButton->setCheckable(true);
        ShowReformatWidgetToolButton->setChecked(false);
        ShowReformatWidgetToolButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(ShowReformatWidgetToolButton);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        DisplayEditCollapsibleWidget = new ctkCollapsibleButton(qSlicerReformatModuleWidget);
        DisplayEditCollapsibleWidget->setObjectName(QString::fromUtf8("DisplayEditCollapsibleWidget"));
        DisplayEditCollapsibleWidget->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DisplayEditCollapsibleWidget->sizePolicy().hasHeightForWidth());
        DisplayEditCollapsibleWidget->setSizePolicy(sizePolicy);
        DisplayEditCollapsibleWidget->setContentsLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(DisplayEditCollapsibleWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        OffsetSlidersGroupBox = new ctkCollapsibleGroupBox(DisplayEditCollapsibleWidget);
        OffsetSlidersGroupBox->setObjectName(QString::fromUtf8("OffsetSlidersGroupBox"));
        gridLayout_2 = new QGridLayout(OffsetSlidersGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        OffsetSlider = new qMRMLLinearTransformSlider(OffsetSlidersGroupBox);
        OffsetSlider->setObjectName(QString::fromUtf8("OffsetSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OffsetSlider->sizePolicy().hasHeightForWidth());
        OffsetSlider->setSizePolicy(sizePolicy1);
        OffsetSlider->setMinimum(-200.000000000000000);
        OffsetSlider->setMaximum(200.000000000000000);

        gridLayout_2->addWidget(OffsetSlider, 0, 1, 1, 1);

        MinMaxWidget_2 = new QWidget(OffsetSlidersGroupBox);
        MinMaxWidget_2->setObjectName(QString::fromUtf8("MinMaxWidget_2"));
        sizePolicy.setHeightForWidth(MinMaxWidget_2->sizePolicy().hasHeightForWidth());
        MinMaxWidget_2->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(MinMaxWidget_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);

        gridLayout_2->addWidget(MinMaxWidget_2, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 2);


        verticalLayout_3->addWidget(OffsetSlidersGroupBox);

        OriginCoordinatesGroupBox = new ctkCollapsibleGroupBox(DisplayEditCollapsibleWidget);
        OriginCoordinatesGroupBox->setObjectName(QString::fromUtf8("OriginCoordinatesGroupBox"));
        gridLayout_3 = new QGridLayout(OriginCoordinatesGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        CoordinateReferenceGroupBox = new QGroupBox(OriginCoordinatesGroupBox);
        CoordinateReferenceGroupBox->setObjectName(QString::fromUtf8("CoordinateReferenceGroupBox"));
        horizontalLayout = new QHBoxLayout(CoordinateReferenceGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OnPlaneRadioButton = new QRadioButton(CoordinateReferenceGroupBox);
        OnPlaneRadioButton->setObjectName(QString::fromUtf8("OnPlaneRadioButton"));
        OnPlaneRadioButton->setChecked(true);

        horizontalLayout->addWidget(OnPlaneRadioButton);

        InVolumeRadioButton = new QRadioButton(CoordinateReferenceGroupBox);
        InVolumeRadioButton->setObjectName(QString::fromUtf8("InVolumeRadioButton"));

        horizontalLayout->addWidget(InVolumeRadioButton);


        gridLayout_3->addWidget(CoordinateReferenceGroupBox, 0, 0, 1, 1);

        OnPlaneGroupBox = new QGroupBox(OriginCoordinatesGroupBox);
        OnPlaneGroupBox->setObjectName(QString::fromUtf8("OnPlaneGroupBox"));
        OnPlaneLayout = new QHBoxLayout(OnPlaneGroupBox);
        OnPlaneLayout->setObjectName(QString::fromUtf8("OnPlaneLayout"));
        OnPlaneLayout->setContentsMargins(0, 0, 0, 0);
        OnPlaneXdoubleSpinBox = new ctkDoubleSpinBox(OnPlaneGroupBox);
        OnPlaneXdoubleSpinBox->setObjectName(QString::fromUtf8("OnPlaneXdoubleSpinBox"));

        OnPlaneLayout->addWidget(OnPlaneXdoubleSpinBox);

        OnPlaneYdoubleSpinBox = new ctkDoubleSpinBox(OnPlaneGroupBox);
        OnPlaneYdoubleSpinBox->setObjectName(QString::fromUtf8("OnPlaneYdoubleSpinBox"));

        OnPlaneLayout->addWidget(OnPlaneYdoubleSpinBox);


        gridLayout_3->addWidget(OnPlaneGroupBox, 1, 0, 1, 1);

        CenterPushButton = new QPushButton(OriginCoordinatesGroupBox);
        CenterPushButton->setObjectName(QString::fromUtf8("CenterPushButton"));

        gridLayout_3->addWidget(CenterPushButton, 3, 0, 1, 1);

        InVolumeCoordinatesWidget = new ctkCoordinatesWidget(OriginCoordinatesGroupBox);
        InVolumeCoordinatesWidget->setObjectName(QString::fromUtf8("InVolumeCoordinatesWidget"));

        gridLayout_3->addWidget(InVolumeCoordinatesWidget, 2, 0, 1, 1);


        verticalLayout_3->addWidget(OriginCoordinatesGroupBox);

        RotationSlidersGroupBox = new ctkCollapsibleGroupBox(DisplayEditCollapsibleWidget);
        RotationSlidersGroupBox->setObjectName(QString::fromUtf8("RotationSlidersGroupBox"));
        gridLayout = new QGridLayout(RotationSlidersGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RotateZSlider = new qMRMLLinearTransformSlider(RotationSlidersGroupBox);
        RotateZSlider->setObjectName(QString::fromUtf8("RotateZSlider"));
        sizePolicy1.setHeightForWidth(RotateZSlider->sizePolicy().hasHeightForWidth());
        RotateZSlider->setSizePolicy(sizePolicy1);
        RotateZSlider->setMinimum(-200.000000000000000);
        RotateZSlider->setMaximum(200.000000000000000);

        gridLayout->addWidget(RotateZSlider, 11, 1, 1, 1);

        PALabel = new QLabel(RotationSlidersGroupBox);
        PALabel->setObjectName(QString::fromUtf8("PALabel"));
        PALabel->setIndent(12);

        gridLayout->addWidget(PALabel, 10, 0, 1, 1);

        ISLabel = new QLabel(RotationSlidersGroupBox);
        ISLabel->setObjectName(QString::fromUtf8("ISLabel"));
        ISLabel->setIndent(12);

        gridLayout->addWidget(ISLabel, 11, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        NormalToLRPushButton = new QPushButton(RotationSlidersGroupBox);
        NormalToLRPushButton->setObjectName(QString::fromUtf8("NormalToLRPushButton"));

        horizontalLayout_2->addWidget(NormalToLRPushButton);

        NormalToPAPushButton = new QPushButton(RotationSlidersGroupBox);
        NormalToPAPushButton->setObjectName(QString::fromUtf8("NormalToPAPushButton"));

        horizontalLayout_2->addWidget(NormalToPAPushButton);

        NormalToISPushButton = new QPushButton(RotationSlidersGroupBox);
        NormalToISPushButton->setObjectName(QString::fromUtf8("NormalToISPushButton"));

        horizontalLayout_2->addWidget(NormalToISPushButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        RotateToVolumePlanePushButton = new QPushButton(RotationSlidersGroupBox);
        RotateToVolumePlanePushButton->setObjectName(QString::fromUtf8("RotateToVolumePlanePushButton"));

        gridLayout->addWidget(RotateToVolumePlanePushButton, 1, 1, 1, 1);

        Normal_2 = new QLabel(RotationSlidersGroupBox);
        Normal_2->setObjectName(QString::fromUtf8("Normal_2"));

        gridLayout->addWidget(Normal_2, 7, 0, 1, 1);

        RotateYSlider = new qMRMLLinearTransformSlider(RotationSlidersGroupBox);
        RotateYSlider->setObjectName(QString::fromUtf8("RotateYSlider"));
        sizePolicy1.setHeightForWidth(RotateYSlider->sizePolicy().hasHeightForWidth());
        RotateYSlider->setSizePolicy(sizePolicy1);
        RotateYSlider->setDecimals(2);
        RotateYSlider->setMinimum(-200.000000000000000);
        RotateYSlider->setMaximum(200.000000000000000);

        gridLayout->addWidget(RotateYSlider, 10, 1, 1, 1);

        RotateXSlider = new qMRMLLinearTransformSlider(RotationSlidersGroupBox);
        RotateXSlider->setObjectName(QString::fromUtf8("RotateXSlider"));
        sizePolicy1.setHeightForWidth(RotateXSlider->sizePolicy().hasHeightForWidth());
        RotateXSlider->setSizePolicy(sizePolicy1);
        RotateXSlider->setDecimals(2);
        RotateXSlider->setMinimum(-200.000000000000000);
        RotateXSlider->setMaximum(200.000000000000000);

        gridLayout->addWidget(RotateXSlider, 9, 1, 1, 1);

        Resetlabel = new QLabel(RotationSlidersGroupBox);
        Resetlabel->setObjectName(QString::fromUtf8("Resetlabel"));

        gridLayout->addWidget(Resetlabel, 0, 0, 1, 1);

        Normal = new QLabel(RotationSlidersGroupBox);
        Normal->setObjectName(QString::fromUtf8("Normal"));

        gridLayout->addWidget(Normal, 4, 0, 1, 1);

        LRLabel = new QLabel(RotationSlidersGroupBox);
        LRLabel->setObjectName(QString::fromUtf8("LRLabel"));
        LRLabel->setIndent(12);

        gridLayout->addWidget(LRLabel, 9, 0, 1, 1);

        MinMaxWidget = new QWidget(RotationSlidersGroupBox);
        MinMaxWidget->setObjectName(QString::fromUtf8("MinMaxWidget"));
        sizePolicy.setHeightForWidth(MinMaxWidget->sizePolicy().hasHeightForWidth());
        MinMaxWidget->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(MinMaxWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(MinMaxWidget, 12, 0, 1, 2);

        SliceOrientationSelector = new ctkComboBox(RotationSlidersGroupBox);
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->setObjectName(QString::fromUtf8("SliceOrientationSelector"));

        gridLayout->addWidget(SliceOrientationSelector, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 13, 0, 1, 2);

        NormalToCameraCheckablePushButton = new ctkCheckablePushButton(RotationSlidersGroupBox);
        NormalToCameraCheckablePushButton->setObjectName(QString::fromUtf8("NormalToCameraCheckablePushButton"));
        NormalToCameraCheckablePushButton->setCheckable(false);
        NormalToCameraCheckablePushButton->setChecked(false);
        NormalToCameraCheckablePushButton->setFlat(false);
        NormalToCameraCheckablePushButton->setButtonTextAlignment(Qt::AlignCenter|Qt::AlignHCenter|Qt::AlignJustify|Qt::AlignVCenter);
        NormalToCameraCheckablePushButton->setIndicatorAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        NormalToCameraCheckablePushButton->setCheckState(Qt::Unchecked);

        gridLayout->addWidget(NormalToCameraCheckablePushButton, 6, 1, 1, 1);

        NormalCoordinatesWidget = new ctkCoordinatesWidget(RotationSlidersGroupBox);
        NormalCoordinatesWidget->setObjectName(QString::fromUtf8("NormalCoordinatesWidget"));
        NormalCoordinatesWidget->setNormalized(true);

        gridLayout->addWidget(NormalCoordinatesWidget, 4, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        FlipHorizontalPushButton = new QPushButton(RotationSlidersGroupBox);
        FlipHorizontalPushButton->setObjectName(QString::fromUtf8("FlipHorizontalPushButton"));

        horizontalLayout_6->addWidget(FlipHorizontalPushButton);

        FlipVerticalPushButton = new QPushButton(RotationSlidersGroupBox);
        FlipVerticalPushButton->setObjectName(QString::fromUtf8("FlipVerticalPushButton"));

        horizontalLayout_6->addWidget(FlipVerticalPushButton);

        RotateClockwisePushButton = new QPushButton(RotationSlidersGroupBox);
        RotateClockwisePushButton->setObjectName(QString::fromUtf8("RotateClockwisePushButton"));

        horizontalLayout_6->addWidget(RotateClockwisePushButton);

        RotateCounterClockwisePushButton = new QPushButton(RotationSlidersGroupBox);
        RotateCounterClockwisePushButton->setObjectName(QString::fromUtf8("RotateCounterClockwisePushButton"));

        horizontalLayout_6->addWidget(RotateCounterClockwisePushButton);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);


        verticalLayout_3->addWidget(RotationSlidersGroupBox);


        gridLayout_4->addWidget(DisplayEditCollapsibleWidget, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(qSlicerReformatModuleWidget);
        QObject::connect(qSlicerReformatModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SliceNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(SliceNodeSelector, SIGNAL(currentNodeChanged(bool)), DisplayEditCollapsibleWidget, SLOT(setEnabled(bool)));

        SliceOrientationSelector->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerReformatModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerReformatModuleWidget)
    {
        qSlicerReformatModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerReformatModuleWidget", "Reformat", nullptr));
        actionLockNormalToCamera->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Lock Normal To Camera", nullptr));
#if QT_CONFIG(tooltip)
        actionLockNormalToCamera->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Lock reformat widget's normal to the camera one. ", nullptr));
#endif // QT_CONFIG(tooltip)
        VisibilityCheckBox->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Slice:", nullptr));
#if QT_CONFIG(tooltip)
        ShowReformatWidgetToolButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Show reformat widget in 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayEditCollapsibleWidget->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Display && Edit", nullptr));
        OffsetSlidersGroupBox->setTitle(QCoreApplication::translate("qSlicerReformatModuleWidget", "Offset", nullptr));
        OriginCoordinatesGroupBox->setTitle(QCoreApplication::translate("qSlicerReformatModuleWidget", "Origin", nullptr));
        CoordinateReferenceGroupBox->setTitle(QCoreApplication::translate("qSlicerReformatModuleWidget", "Coordinate Reference", nullptr));
        OnPlaneRadioButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "On Plane", nullptr));
        InVolumeRadioButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "In Volume", nullptr));
        CenterPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Center", nullptr));
        RotationSlidersGroupBox->setTitle(QCoreApplication::translate("qSlicerReformatModuleWidget", "Orientation", nullptr));
#if QT_CONFIG(tooltip)
        RotateZSlider->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate the slice in the current slice plane, around the slice normal", nullptr));
#endif // QT_CONFIG(tooltip)
        PALabel->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Vertical:", nullptr));
        ISLabel->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "In-Plane:", nullptr));
        NormalToLRPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Normal to LR", nullptr));
        NormalToPAPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Normal to PA", nullptr));
        NormalToISPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Normal to IS", nullptr));
#if QT_CONFIG(tooltip)
        RotateToVolumePlanePushButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Flip slice view horizontally (left-right)", nullptr));
#endif // QT_CONFIG(tooltip)
        RotateToVolumePlanePushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate to volume plane", nullptr));
        Normal_2->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotation:", nullptr));
#if QT_CONFIG(tooltip)
        RotateYSlider->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate around the slice vertical axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        RotateXSlider->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate around the slice horizontal axis", nullptr));
#endif // QT_CONFIG(tooltip)
        Resetlabel->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Reset to:", nullptr));
        Normal->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Normal:", nullptr));
        LRLabel->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Horizontal:", nullptr));
        SliceOrientationSelector->setItemText(0, QCoreApplication::translate("qSlicerReformatModuleWidget", "Axial", nullptr));
        SliceOrientationSelector->setItemText(1, QCoreApplication::translate("qSlicerReformatModuleWidget", "Sagittal", nullptr));
        SliceOrientationSelector->setItemText(2, QCoreApplication::translate("qSlicerReformatModuleWidget", "Coronal", nullptr));
        SliceOrientationSelector->setItemText(3, QCoreApplication::translate("qSlicerReformatModuleWidget", "Reformat", nullptr));

#if QT_CONFIG(tooltip)
        SliceOrientationSelector->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Slice orientation (Axial, Sagittal, Coronal, Reformat).", nullptr));
#endif // QT_CONFIG(tooltip)
        NormalToCameraCheckablePushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Normal to Camera", nullptr));
#if QT_CONFIG(tooltip)
        FlipHorizontalPushButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Flip slice view horizontally (left-right)", nullptr));
#endif // QT_CONFIG(tooltip)
        FlipHorizontalPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Flip H", nullptr));
#if QT_CONFIG(tooltip)
        FlipVerticalPushButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Flip slice view vertically (upside-down)", nullptr));
#endif // QT_CONFIG(tooltip)
        FlipVerticalPushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Flip V", nullptr));
#if QT_CONFIG(tooltip)
        RotateClockwisePushButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate slice view clockwise by 90 degrees", nullptr));
#endif // QT_CONFIG(tooltip)
        RotateClockwisePushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate CW", nullptr));
#if QT_CONFIG(tooltip)
        RotateCounterClockwisePushButton->setToolTip(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate slice view counterclockwise by 90 degrees", nullptr));
#endif // QT_CONFIG(tooltip)
        RotateCounterClockwisePushButton->setText(QCoreApplication::translate("qSlicerReformatModuleWidget", "Rotate CCW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerReformatModuleWidget: public Ui_qSlicerReformatModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERREFORMATMODULEWIDGET_H
