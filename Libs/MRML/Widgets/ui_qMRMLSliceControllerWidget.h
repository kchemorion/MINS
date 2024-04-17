/********************************************************************************
** Form generated from reading UI file 'qMRMLSliceControllerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSLICECONTROLLERWIDGET_H
#define UI_QMRMLSLICECONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include "ctkComboBox.h"
#include "ctkDynamicSpacer.h"
#include "ctkExpandButton.h"
#include "ctkPopupWidget.h"
#include "ctkSliderWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSegmentSelectorWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSliceControllerWidget
{
public:
    QAction *actionHotLinked;
    QAction *actionFit_to_window;
    QAction *actionRotate_to_volume_plane;
    QAction *actionLabelMapOutline;
    QAction *actionShow_reformat_widget;
    QAction *actionEnable_slab_reconstruction_widget;
    QAction *actionSlabReconstructionInteractive;
    QAction *actionOrientationMarkerTypeCube;
    QAction *actionOrientationMarkerTypeHuman;
    QAction *actionOrientationMarkerTypeAxes;
    QAction *actionCompositingAlpha_blend;
    QAction *actionCompositingReverse_alpha_blend;
    QAction *actionCompositingAdd;
    QAction *actionCompositingSubtract;
    QAction *actionSliceSpacingModeAutomatic;
    QAction *actionSliceModelModeVolumes;
    QAction *actionSliceModelMode2D;
    QAction *actionSliceModelMode2D_Volumes;
    QAction *actionSliceModelModeVolumes_2D;
    QAction *actionLightbox1x1_view;
    QAction *actionLightbox1x2_view;
    QAction *actionLightbox1x3_view;
    QAction *actionLightbox1x4_view;
    QAction *actionLightbox1x6_view;
    QAction *actionLightbox1x8_view;
    QAction *actionLightbox2x2_view;
    QAction *actionLightbox3x3_view;
    QAction *actionLightbox6x6_view;
    QAction *actionAdjustDisplayForeground_volume;
    QAction *actionAdjustDisplayBackground_volume;
    QAction *actionAdjustDisplayLabel_map_volume;
    QAction *actionForegroundInterpolation;
    QAction *actionBackgroundInterpolation;
    QAction *actionLabelMapVisibility;
    QAction *actionForegroundVisibility;
    QAction *actionBackgroundVisibility;
    QAction *actionShow_in_3D;
    QAction *actionLockNormalToCamera;
    QAction *actionOrientationMarkerTypeNone;
    QAction *actionOrientationMarkerSizeSmall;
    QAction *actionOrientationMarkerSizeMedium;
    QAction *actionOrientationMarkerSizeLarge;
    QAction *actionRulerTypeNone;
    QAction *actionRulerTypeThin;
    QAction *actionRulerTypeThick;
    QAction *actionRulerColorWhite;
    QAction *actionRulerColorBlack;
    QAction *actionRulerColorYellow;
    QAction *actionSlabReconstructionMax;
    QAction *actionSlabReconstructionMin;
    QAction *actionSlabReconstructionMean;
    QAction *actionSlabReconstructionSum;
    QAction *actionSegmentationOutlineFill;
    QAction *actionSegmentationVisibility;
    QGridLayout *gridLayout;
    QToolButton *LabelMapVisibilityButton;
    qMRMLNodeComboBox *LabelMapComboBox;
    QToolButton *SegmentationOutlineButton;
    QToolButton *SegmentationVisibilityButton;
    QToolButton *LabelMapOutlineButton;
    ctkSliderWidget *ForegroundOpacitySlider;
    ctkSliderWidget *LabelMapOpacitySlider;
    qMRMLNodeComboBox *ForegroundComboBox;
    QToolButton *ForegroundInterpolationButton;
    ctkSliderWidget *SegmentationOpacitySlider;
    qMRMLSegmentSelectorWidget *SegmentSelectorWidget;
    ctkSliderWidget *BackgroundOpacitySlider;
    QToolButton *BackgroundInterpolationButton;
    qMRMLNodeComboBox *BackgroundComboBox;
    QLabel *LabelMapIconLabel;
    QLabel *ForegroundIconLabel;
    QLabel *BackgroundIconLabel;
    QHBoxLayout *horizontalLayout;
    ctkExpandButton *MoreButton;
    QFrame *SliceFrame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *SliceLinkButton;
    QToolButton *SliceVisibilityButton;
    ctkComboBox *SliceOrientationSelector;
    QToolButton *LightBoxToolButton;
    QToolButton *ShowReformatWidgetToolButton;
    QToolButton *SliceCompositeButton;
    QToolButton *SliceSpacingButton;
    QToolButton *SliceRotateToVolumePlaneButton;
    QToolButton *OrientationMarkerButton;
    QToolButton *RulerButton;
    QToolButton *EnableSlabReconstructionButton;
    QToolButton *SliceMoreOptionButton;
    ctkDynamicSpacer *DynamicSpacer;
    QLabel *SegmentationIconLabel;

    void setupUi(ctkPopupWidget *qMRMLSliceControllerWidget)
    {
        if (qMRMLSliceControllerWidget->objectName().isEmpty())
            qMRMLSliceControllerWidget->setObjectName(QString::fromUtf8("qMRMLSliceControllerWidget"));
        qMRMLSliceControllerWidget->resize(329, 138);
        actionHotLinked = new QAction(qMRMLSliceControllerWidget);
        actionHotLinked->setObjectName(QString::fromUtf8("actionHotLinked"));
        actionHotLinked->setCheckable(true);
        actionFit_to_window = new QAction(qMRMLSliceControllerWidget);
        actionFit_to_window->setObjectName(QString::fromUtf8("actionFit_to_window"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SlicesFitToWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFit_to_window->setIcon(icon);
        actionRotate_to_volume_plane = new QAction(qMRMLSliceControllerWidget);
        actionRotate_to_volume_plane->setObjectName(QString::fromUtf8("actionRotate_to_volume_plane"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/SlicerRotateToPixelSpace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_to_volume_plane->setIcon(icon1);
        actionLabelMapOutline = new QAction(qMRMLSliceControllerWidget);
        actionLabelMapOutline->setObjectName(QString::fromUtf8("actionLabelMapOutline"));
        actionLabelMapOutline->setCheckable(true);
        actionLabelMapOutline->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/SlicesLabelNoOutline.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/SlicesLabelOutline.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLabelMapOutline->setIcon(icon2);
        actionShow_reformat_widget = new QAction(qMRMLSliceControllerWidget);
        actionShow_reformat_widget->setObjectName(QString::fromUtf8("actionShow_reformat_widget"));
        actionShow_reformat_widget->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/SliceWidgetOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/Icons/SliceWidgetOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionShow_reformat_widget->setIcon(icon3);
        actionEnable_slab_reconstruction_widget = new QAction(qMRMLSliceControllerWidget);
        actionEnable_slab_reconstruction_widget->setObjectName(QString::fromUtf8("actionEnable_slab_reconstruction_widget"));
        actionEnable_slab_reconstruction_widget->setCheckable(true);
        actionSlabReconstructionInteractive = new QAction(qMRMLSliceControllerWidget);
        actionSlabReconstructionInteractive->setObjectName(QString::fromUtf8("actionSlabReconstructionInteractive"));
        actionSlabReconstructionInteractive->setCheckable(true);
        actionOrientationMarkerTypeCube = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerTypeCube->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeCube"));
        actionOrientationMarkerTypeCube->setCheckable(true);
        actionOrientationMarkerTypeHuman = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerTypeHuman->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeHuman"));
        actionOrientationMarkerTypeHuman->setCheckable(true);
        actionOrientationMarkerTypeAxes = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerTypeAxes->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeAxes"));
        actionOrientationMarkerTypeAxes->setCheckable(true);
        actionCompositingAlpha_blend = new QAction(qMRMLSliceControllerWidget);
        actionCompositingAlpha_blend->setObjectName(QString::fromUtf8("actionCompositingAlpha_blend"));
        actionCompositingAlpha_blend->setCheckable(true);
        actionCompositingReverse_alpha_blend = new QAction(qMRMLSliceControllerWidget);
        actionCompositingReverse_alpha_blend->setObjectName(QString::fromUtf8("actionCompositingReverse_alpha_blend"));
        actionCompositingReverse_alpha_blend->setCheckable(true);
        actionCompositingAdd = new QAction(qMRMLSliceControllerWidget);
        actionCompositingAdd->setObjectName(QString::fromUtf8("actionCompositingAdd"));
        actionCompositingAdd->setCheckable(true);
        actionCompositingSubtract = new QAction(qMRMLSliceControllerWidget);
        actionCompositingSubtract->setObjectName(QString::fromUtf8("actionCompositingSubtract"));
        actionCompositingSubtract->setCheckable(true);
        actionSliceSpacingModeAutomatic = new QAction(qMRMLSliceControllerWidget);
        actionSliceSpacingModeAutomatic->setObjectName(QString::fromUtf8("actionSliceSpacingModeAutomatic"));
        actionSliceSpacingModeAutomatic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/SlicerManualSliceSpacing.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/Icons/SlicerAutomaticSliceSpacing.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSliceSpacingModeAutomatic->setIcon(icon4);
        actionSliceModelModeVolumes = new QAction(qMRMLSliceControllerWidget);
        actionSliceModelModeVolumes->setObjectName(QString::fromUtf8("actionSliceModelModeVolumes"));
        actionSliceModelModeVolumes->setCheckable(true);
        actionSliceModelMode2D = new QAction(qMRMLSliceControllerWidget);
        actionSliceModelMode2D->setObjectName(QString::fromUtf8("actionSliceModelMode2D"));
        actionSliceModelMode2D->setCheckable(true);
        actionSliceModelMode2D_Volumes = new QAction(qMRMLSliceControllerWidget);
        actionSliceModelMode2D_Volumes->setObjectName(QString::fromUtf8("actionSliceModelMode2D_Volumes"));
        actionSliceModelMode2D_Volumes->setCheckable(true);
        actionSliceModelModeVolumes_2D = new QAction(qMRMLSliceControllerWidget);
        actionSliceModelModeVolumes_2D->setObjectName(QString::fromUtf8("actionSliceModelModeVolumes_2D"));
        actionSliceModelModeVolumes_2D->setCheckable(true);
        actionLightbox1x1_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x1_view->setObjectName(QString::fromUtf8("actionLightbox1x1_view"));
        actionLightbox1x1_view->setCheckable(true);
        actionLightbox1x2_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x2_view->setObjectName(QString::fromUtf8("actionLightbox1x2_view"));
        actionLightbox1x2_view->setCheckable(true);
        actionLightbox1x3_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x3_view->setObjectName(QString::fromUtf8("actionLightbox1x3_view"));
        actionLightbox1x3_view->setCheckable(true);
        actionLightbox1x4_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x4_view->setObjectName(QString::fromUtf8("actionLightbox1x4_view"));
        actionLightbox1x4_view->setCheckable(true);
        actionLightbox1x6_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x6_view->setObjectName(QString::fromUtf8("actionLightbox1x6_view"));
        actionLightbox1x6_view->setCheckable(true);
        actionLightbox1x8_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox1x8_view->setObjectName(QString::fromUtf8("actionLightbox1x8_view"));
        actionLightbox1x8_view->setCheckable(true);
        actionLightbox2x2_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox2x2_view->setObjectName(QString::fromUtf8("actionLightbox2x2_view"));
        actionLightbox2x2_view->setCheckable(true);
        actionLightbox3x3_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox3x3_view->setObjectName(QString::fromUtf8("actionLightbox3x3_view"));
        actionLightbox3x3_view->setCheckable(true);
        actionLightbox6x6_view = new QAction(qMRMLSliceControllerWidget);
        actionLightbox6x6_view->setObjectName(QString::fromUtf8("actionLightbox6x6_view"));
        actionLightbox6x6_view->setCheckable(true);
        actionAdjustDisplayForeground_volume = new QAction(qMRMLSliceControllerWidget);
        actionAdjustDisplayForeground_volume->setObjectName(QString::fromUtf8("actionAdjustDisplayForeground_volume"));
        actionAdjustDisplayForeground_volume->setCheckable(true);
        actionAdjustDisplayBackground_volume = new QAction(qMRMLSliceControllerWidget);
        actionAdjustDisplayBackground_volume->setObjectName(QString::fromUtf8("actionAdjustDisplayBackground_volume"));
        actionAdjustDisplayBackground_volume->setCheckable(true);
        actionAdjustDisplayLabel_map_volume = new QAction(qMRMLSliceControllerWidget);
        actionAdjustDisplayLabel_map_volume->setObjectName(QString::fromUtf8("actionAdjustDisplayLabel_map_volume"));
        actionAdjustDisplayLabel_map_volume->setCheckable(true);
        actionForegroundInterpolation = new QAction(qMRMLSliceControllerWidget);
        actionForegroundInterpolation->setObjectName(QString::fromUtf8("actionForegroundInterpolation"));
        actionForegroundInterpolation->setCheckable(true);
        actionForegroundInterpolation->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/SliceInterpolationOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/Icons/SliceInterpolationOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionForegroundInterpolation->setIcon(icon5);
        actionBackgroundInterpolation = new QAction(qMRMLSliceControllerWidget);
        actionBackgroundInterpolation->setObjectName(QString::fromUtf8("actionBackgroundInterpolation"));
        actionBackgroundInterpolation->setCheckable(true);
        actionBackgroundInterpolation->setEnabled(false);
        actionBackgroundInterpolation->setIcon(icon5);
        actionLabelMapVisibility = new QAction(qMRMLSliceControllerWidget);
        actionLabelMapVisibility->setObjectName(QString::fromUtf8("actionLabelMapVisibility"));
        actionLabelMapVisibility->setCheckable(true);
        actionLabelMapVisibility->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLabelMapVisibility->setIcon(icon6);
        actionForegroundVisibility = new QAction(qMRMLSliceControllerWidget);
        actionForegroundVisibility->setObjectName(QString::fromUtf8("actionForegroundVisibility"));
        actionForegroundVisibility->setCheckable(true);
        actionForegroundVisibility->setEnabled(false);
        actionForegroundVisibility->setIcon(icon6);
        actionBackgroundVisibility = new QAction(qMRMLSliceControllerWidget);
        actionBackgroundVisibility->setObjectName(QString::fromUtf8("actionBackgroundVisibility"));
        actionBackgroundVisibility->setCheckable(true);
        actionBackgroundVisibility->setEnabled(false);
        actionBackgroundVisibility->setIcon(icon6);
        actionShow_in_3D = new QAction(qMRMLSliceControllerWidget);
        actionShow_in_3D->setObjectName(QString::fromUtf8("actionShow_in_3D"));
        actionShow_in_3D->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionShow_in_3D->setIcon(icon7);
        actionLockNormalToCamera = new QAction(qMRMLSliceControllerWidget);
        actionLockNormalToCamera->setObjectName(QString::fromUtf8("actionLockNormalToCamera"));
        actionLockNormalToCamera->setCheckable(true);
        actionOrientationMarkerTypeNone = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerTypeNone->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeNone"));
        actionOrientationMarkerTypeNone->setCheckable(true);
        actionOrientationMarkerSizeSmall = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerSizeSmall->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeSmall"));
        actionOrientationMarkerSizeSmall->setCheckable(true);
        actionOrientationMarkerSizeMedium = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerSizeMedium->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeMedium"));
        actionOrientationMarkerSizeMedium->setCheckable(true);
        actionOrientationMarkerSizeLarge = new QAction(qMRMLSliceControllerWidget);
        actionOrientationMarkerSizeLarge->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeLarge"));
        actionOrientationMarkerSizeLarge->setCheckable(true);
        actionRulerTypeNone = new QAction(qMRMLSliceControllerWidget);
        actionRulerTypeNone->setObjectName(QString::fromUtf8("actionRulerTypeNone"));
        actionRulerTypeNone->setCheckable(true);
        actionRulerTypeThin = new QAction(qMRMLSliceControllerWidget);
        actionRulerTypeThin->setObjectName(QString::fromUtf8("actionRulerTypeThin"));
        actionRulerTypeThin->setCheckable(true);
        actionRulerTypeThick = new QAction(qMRMLSliceControllerWidget);
        actionRulerTypeThick->setObjectName(QString::fromUtf8("actionRulerTypeThick"));
        actionRulerTypeThick->setCheckable(true);
        actionRulerColorWhite = new QAction(qMRMLSliceControllerWidget);
        actionRulerColorWhite->setObjectName(QString::fromUtf8("actionRulerColorWhite"));
        actionRulerColorWhite->setCheckable(true);
        actionRulerColorBlack = new QAction(qMRMLSliceControllerWidget);
        actionRulerColorBlack->setObjectName(QString::fromUtf8("actionRulerColorBlack"));
        actionRulerColorBlack->setCheckable(true);
        actionRulerColorYellow = new QAction(qMRMLSliceControllerWidget);
        actionRulerColorYellow->setObjectName(QString::fromUtf8("actionRulerColorYellow"));
        actionRulerColorYellow->setCheckable(true);
        actionSlabReconstructionMax = new QAction(qMRMLSliceControllerWidget);
        actionSlabReconstructionMax->setObjectName(QString::fromUtf8("actionSlabReconstructionMax"));
        actionSlabReconstructionMax->setCheckable(true);
        actionSlabReconstructionMin = new QAction(qMRMLSliceControllerWidget);
        actionSlabReconstructionMin->setObjectName(QString::fromUtf8("actionSlabReconstructionMin"));
        actionSlabReconstructionMin->setCheckable(true);
        actionSlabReconstructionMean = new QAction(qMRMLSliceControllerWidget);
        actionSlabReconstructionMean->setObjectName(QString::fromUtf8("actionSlabReconstructionMean"));
        actionSlabReconstructionMean->setCheckable(true);
        actionSlabReconstructionSum = new QAction(qMRMLSliceControllerWidget);
        actionSlabReconstructionSum->setObjectName(QString::fromUtf8("actionSlabReconstructionSum"));
        actionSlabReconstructionSum->setCheckable(true);
        actionSegmentationOutlineFill = new QAction(qMRMLSliceControllerWidget);
        actionSegmentationOutlineFill->setObjectName(QString::fromUtf8("actionSegmentationOutlineFill"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/SlicesLabelOutlineAndFill.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSegmentationOutlineFill->setIcon(icon8);
        actionSegmentationVisibility = new QAction(qMRMLSliceControllerWidget);
        actionSegmentationVisibility->setObjectName(QString::fromUtf8("actionSegmentationVisibility"));
        actionSegmentationVisibility->setCheckable(true);
        actionSegmentationVisibility->setEnabled(false);
        actionSegmentationVisibility->setIcon(icon6);
        gridLayout = new QGridLayout(qMRMLSliceControllerWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LabelMapVisibilityButton = new QToolButton(qMRMLSliceControllerWidget);
        LabelMapVisibilityButton->setObjectName(QString::fromUtf8("LabelMapVisibilityButton"));
        LabelMapVisibilityButton->setEnabled(false);
        LabelMapVisibilityButton->setPopupMode(QToolButton::MenuButtonPopup);
        LabelMapVisibilityButton->setAutoRaise(true);

        gridLayout->addWidget(LabelMapVisibilityButton, 2, 1, 1, 1);

        LabelMapComboBox = new qMRMLNodeComboBox(qMRMLSliceControllerWidget);
        LabelMapComboBox->setObjectName(QString::fromUtf8("LabelMapComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(LabelMapComboBox->sizePolicy().hasHeightForWidth());
        LabelMapComboBox->setSizePolicy(sizePolicy);
        LabelMapComboBox->setMinimumSize(QSize(65, 0));
        LabelMapComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLLabelMapVolumeNode"));
        LabelMapComboBox->setNoneEnabled(true);
        LabelMapComboBox->setAddEnabled(false);
        LabelMapComboBox->setRemoveEnabled(false);
        LabelMapComboBox->setEditEnabled(true);
        LabelMapComboBox->setRenameEnabled(true);

        gridLayout->addWidget(LabelMapComboBox, 2, 4, 1, 1);

        SegmentationOutlineButton = new QToolButton(qMRMLSliceControllerWidget);
        SegmentationOutlineButton->setObjectName(QString::fromUtf8("SegmentationOutlineButton"));
        SegmentationOutlineButton->setEnabled(false);
        SegmentationOutlineButton->setAutoRaise(true);

        gridLayout->addWidget(SegmentationOutlineButton, 1, 3, 1, 1);

        SegmentationVisibilityButton = new QToolButton(qMRMLSliceControllerWidget);
        SegmentationVisibilityButton->setObjectName(QString::fromUtf8("SegmentationVisibilityButton"));
        SegmentationVisibilityButton->setEnabled(false);
        SegmentationVisibilityButton->setPopupMode(QToolButton::MenuButtonPopup);
        SegmentationVisibilityButton->setAutoRaise(true);

        gridLayout->addWidget(SegmentationVisibilityButton, 1, 1, 1, 1);

        LabelMapOutlineButton = new QToolButton(qMRMLSliceControllerWidget);
        LabelMapOutlineButton->setObjectName(QString::fromUtf8("LabelMapOutlineButton"));
        LabelMapOutlineButton->setEnabled(false);
        LabelMapOutlineButton->setAutoRaise(true);

        gridLayout->addWidget(LabelMapOutlineButton, 2, 3, 1, 1);

        ForegroundOpacitySlider = new ctkSliderWidget(qMRMLSliceControllerWidget);
        ForegroundOpacitySlider->setObjectName(QString::fromUtf8("ForegroundOpacitySlider"));
        ForegroundOpacitySlider->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ForegroundOpacitySlider->sizePolicy().hasHeightForWidth());
        ForegroundOpacitySlider->setSizePolicy(sizePolicy1);
        ForegroundOpacitySlider->setSingleStep(0.100000000000000);
        ForegroundOpacitySlider->setPageStep(1.000000000000000);
        ForegroundOpacitySlider->setMaximum(1.000000000000000);
        ForegroundOpacitySlider->setValue(1.000000000000000);
        ForegroundOpacitySlider->setPopupSlider(false);

        gridLayout->addWidget(ForegroundOpacitySlider, 3, 1, 2, 1);

        LabelMapOpacitySlider = new ctkSliderWidget(qMRMLSliceControllerWidget);
        LabelMapOpacitySlider->setObjectName(QString::fromUtf8("LabelMapOpacitySlider"));
        LabelMapOpacitySlider->setEnabled(false);
        sizePolicy1.setHeightForWidth(LabelMapOpacitySlider->sizePolicy().hasHeightForWidth());
        LabelMapOpacitySlider->setSizePolicy(sizePolicy1);
        LabelMapOpacitySlider->setSingleStep(0.100000000000000);
        LabelMapOpacitySlider->setPageStep(1.000000000000000);
        LabelMapOpacitySlider->setMaximum(1.000000000000000);

        gridLayout->addWidget(LabelMapOpacitySlider, 2, 2, 1, 1);

        ForegroundComboBox = new qMRMLNodeComboBox(qMRMLSliceControllerWidget);
        ForegroundComboBox->setObjectName(QString::fromUtf8("ForegroundComboBox"));
        sizePolicy.setHeightForWidth(ForegroundComboBox->sizePolicy().hasHeightForWidth());
        ForegroundComboBox->setSizePolicy(sizePolicy);
        ForegroundComboBox->setMinimumSize(QSize(65, 0));
        ForegroundComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        ForegroundComboBox->setNoneEnabled(true);
        ForegroundComboBox->setAddEnabled(false);
        ForegroundComboBox->setRemoveEnabled(false);
        ForegroundComboBox->setEditEnabled(true);
        ForegroundComboBox->setRenameEnabled(true);

        gridLayout->addWidget(ForegroundComboBox, 3, 4, 1, 1);

        ForegroundInterpolationButton = new QToolButton(qMRMLSliceControllerWidget);
        ForegroundInterpolationButton->setObjectName(QString::fromUtf8("ForegroundInterpolationButton"));
        ForegroundInterpolationButton->setEnabled(false);
        ForegroundInterpolationButton->setAutoRaise(true);

        gridLayout->addWidget(ForegroundInterpolationButton, 3, 3, 1, 1);

        SegmentationOpacitySlider = new ctkSliderWidget(qMRMLSliceControllerWidget);
        SegmentationOpacitySlider->setObjectName(QString::fromUtf8("SegmentationOpacitySlider"));
        SegmentationOpacitySlider->setEnabled(false);
        sizePolicy1.setHeightForWidth(SegmentationOpacitySlider->sizePolicy().hasHeightForWidth());
        SegmentationOpacitySlider->setSizePolicy(sizePolicy1);
        SegmentationOpacitySlider->setSingleStep(0.100000000000000);
        SegmentationOpacitySlider->setPageStep(1.000000000000000);
        SegmentationOpacitySlider->setMaximum(1.000000000000000);

        gridLayout->addWidget(SegmentationOpacitySlider, 1, 2, 1, 1);

        SegmentSelectorWidget = new qMRMLSegmentSelectorWidget(qMRMLSliceControllerWidget);
        SegmentSelectorWidget->setObjectName(QString::fromUtf8("SegmentSelectorWidget"));
        sizePolicy.setHeightForWidth(SegmentSelectorWidget->sizePolicy().hasHeightForWidth());
        SegmentSelectorWidget->setSizePolicy(sizePolicy);
        SegmentSelectorWidget->setMinimumSize(QSize(65, 0));
        SegmentSelectorWidget->setProperty("editEnabled", QVariant(true));
        SegmentSelectorWidget->setProperty("multiSelection", QVariant(true));
        SegmentSelectorWidget->setProperty("horizontalLayout", QVariant(true));
        SegmentSelectorWidget->setProperty("selectNodeUponCreation", QVariant(true));

        gridLayout->addWidget(SegmentSelectorWidget, 1, 4, 1, 1);

        BackgroundOpacitySlider = new ctkSliderWidget(qMRMLSliceControllerWidget);
        BackgroundOpacitySlider->setObjectName(QString::fromUtf8("BackgroundOpacitySlider"));
        BackgroundOpacitySlider->setEnabled(false);
        sizePolicy1.setHeightForWidth(BackgroundOpacitySlider->sizePolicy().hasHeightForWidth());
        BackgroundOpacitySlider->setSizePolicy(sizePolicy1);
        BackgroundOpacitySlider->setSingleStep(0.100000000000000);
        BackgroundOpacitySlider->setPageStep(1.000000000000000);
        BackgroundOpacitySlider->setMaximum(1.000000000000000);
        BackgroundOpacitySlider->setValue(1.000000000000000);
        BackgroundOpacitySlider->setPopupSlider(true);

        gridLayout->addWidget(BackgroundOpacitySlider, 4, 2, 1, 1);

        BackgroundInterpolationButton = new QToolButton(qMRMLSliceControllerWidget);
        BackgroundInterpolationButton->setObjectName(QString::fromUtf8("BackgroundInterpolationButton"));
        BackgroundInterpolationButton->setEnabled(false);
        BackgroundInterpolationButton->setPopupMode(QToolButton::DelayedPopup);
        BackgroundInterpolationButton->setAutoRaise(true);

        gridLayout->addWidget(BackgroundInterpolationButton, 4, 3, 1, 1);

        BackgroundComboBox = new qMRMLNodeComboBox(qMRMLSliceControllerWidget);
        BackgroundComboBox->setObjectName(QString::fromUtf8("BackgroundComboBox"));
        sizePolicy.setHeightForWidth(BackgroundComboBox->sizePolicy().hasHeightForWidth());
        BackgroundComboBox->setSizePolicy(sizePolicy);
        BackgroundComboBox->setMinimumSize(QSize(65, 0));
        BackgroundComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        BackgroundComboBox->setNoneEnabled(true);
        BackgroundComboBox->setAddEnabled(false);
        BackgroundComboBox->setRemoveEnabled(false);
        BackgroundComboBox->setEditEnabled(true);
        BackgroundComboBox->setRenameEnabled(true);

        gridLayout->addWidget(BackgroundComboBox, 4, 4, 1, 1);

        LabelMapIconLabel = new QLabel(qMRMLSliceControllerWidget);
        LabelMapIconLabel->setObjectName(QString::fromUtf8("LabelMapIconLabel"));
        LabelMapIconLabel->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LabelMapIconLabel->sizePolicy().hasHeightForWidth());
        LabelMapIconLabel->setSizePolicy(sizePolicy2);
        LabelMapIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/SliceViewerLB.png")));

        gridLayout->addWidget(LabelMapIconLabel, 2, 0, 1, 1);

        ForegroundIconLabel = new QLabel(qMRMLSliceControllerWidget);
        ForegroundIconLabel->setObjectName(QString::fromUtf8("ForegroundIconLabel"));
        ForegroundIconLabel->setEnabled(false);
        sizePolicy2.setHeightForWidth(ForegroundIconLabel->sizePolicy().hasHeightForWidth());
        ForegroundIconLabel->setSizePolicy(sizePolicy2);
        ForegroundIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/SliceViewerFG.png")));

        gridLayout->addWidget(ForegroundIconLabel, 3, 0, 1, 1);

        BackgroundIconLabel = new QLabel(qMRMLSliceControllerWidget);
        BackgroundIconLabel->setObjectName(QString::fromUtf8("BackgroundIconLabel"));
        BackgroundIconLabel->setEnabled(false);
        sizePolicy2.setHeightForWidth(BackgroundIconLabel->sizePolicy().hasHeightForWidth());
        BackgroundIconLabel->setSizePolicy(sizePolicy2);
        BackgroundIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/SliceViewerBG.png")));

        gridLayout->addWidget(BackgroundIconLabel, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MoreButton = new ctkExpandButton(qMRMLSliceControllerWidget);
        MoreButton->setObjectName(QString::fromUtf8("MoreButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(MoreButton->sizePolicy().hasHeightForWidth());
        MoreButton->setSizePolicy(sizePolicy3);
        MoreButton->setChecked(true);
        MoreButton->setMirrorOnExpand(true);

        horizontalLayout->addWidget(MoreButton);

        SliceFrame = new QFrame(qMRMLSliceControllerWidget);
        SliceFrame->setObjectName(QString::fromUtf8("SliceFrame"));
        horizontalLayout_2 = new QHBoxLayout(SliceFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SliceLinkButton = new QToolButton(SliceFrame);
        SliceLinkButton->setObjectName(QString::fromUtf8("SliceLinkButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/LinkOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/Icons/LinkOn.png"), QSize(), QIcon::Normal, QIcon::On);
        SliceLinkButton->setIcon(icon9);
        SliceLinkButton->setCheckable(true);
        SliceLinkButton->setChecked(false);
        SliceLinkButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceLinkButton);

        SliceVisibilityButton = new QToolButton(SliceFrame);
        SliceVisibilityButton->setObjectName(QString::fromUtf8("SliceVisibilityButton"));
        SliceVisibilityButton->setCheckable(true);
        SliceVisibilityButton->setChecked(false);
        SliceVisibilityButton->setPopupMode(QToolButton::MenuButtonPopup);
        SliceVisibilityButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceVisibilityButton);

        SliceOrientationSelector = new ctkComboBox(SliceFrame);
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->setObjectName(QString::fromUtf8("SliceOrientationSelector"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Ignored);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SliceOrientationSelector->sizePolicy().hasHeightForWidth());
        SliceOrientationSelector->setSizePolicy(sizePolicy4);
        SliceOrientationSelector->setMinimumSize(QSize(65, 0));
        SliceOrientationSelector->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(SliceOrientationSelector);

        LightBoxToolButton = new QToolButton(SliceFrame);
        LightBoxToolButton->setObjectName(QString::fromUtf8("LightBoxToolButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/LayoutLightboxView.png"), QSize(), QIcon::Normal, QIcon::Off);
        LightBoxToolButton->setIcon(icon10);
        LightBoxToolButton->setPopupMode(QToolButton::InstantPopup);
        LightBoxToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(LightBoxToolButton);

        ShowReformatWidgetToolButton = new QToolButton(SliceFrame);
        ShowReformatWidgetToolButton->setObjectName(QString::fromUtf8("ShowReformatWidgetToolButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/SliceWidgetOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/Icons/SliceWidgetOff.png"), QSize(), QIcon::Normal, QIcon::On);
        ShowReformatWidgetToolButton->setIcon(icon11);
        ShowReformatWidgetToolButton->setCheckable(true);
        ShowReformatWidgetToolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(ShowReformatWidgetToolButton);

        SliceCompositeButton = new QToolButton(SliceFrame);
        SliceCompositeButton->setObjectName(QString::fromUtf8("SliceCompositeButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/SlicesComposite.png"), QSize(), QIcon::Normal, QIcon::Off);
        SliceCompositeButton->setIcon(icon12);
        SliceCompositeButton->setPopupMode(QToolButton::InstantPopup);
        SliceCompositeButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceCompositeButton);

        SliceSpacingButton = new QToolButton(SliceFrame);
        SliceSpacingButton->setObjectName(QString::fromUtf8("SliceSpacingButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/SlicerAutomaticSliceSpacing.png"), QSize(), QIcon::Normal, QIcon::Off);
        SliceSpacingButton->setIcon(icon13);
        SliceSpacingButton->setPopupMode(QToolButton::InstantPopup);
        SliceSpacingButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceSpacingButton);

        SliceRotateToVolumePlaneButton = new QToolButton(SliceFrame);
        SliceRotateToVolumePlaneButton->setObjectName(QString::fromUtf8("SliceRotateToVolumePlaneButton"));
        SliceRotateToVolumePlaneButton->setIcon(icon1);
        SliceRotateToVolumePlaneButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceRotateToVolumePlaneButton);

        OrientationMarkerButton = new QToolButton(SliceFrame);
        OrientationMarkerButton->setObjectName(QString::fromUtf8("OrientationMarkerButton"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/OrientationMarker.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrientationMarkerButton->setIcon(icon14);
        OrientationMarkerButton->setPopupMode(QToolButton::InstantPopup);
        OrientationMarkerButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(OrientationMarkerButton);

        RulerButton = new QToolButton(SliceFrame);
        RulerButton->setObjectName(QString::fromUtf8("RulerButton"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/Ruler.png"), QSize(), QIcon::Normal, QIcon::Off);
        RulerButton->setIcon(icon15);
        RulerButton->setPopupMode(QToolButton::InstantPopup);
        RulerButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(RulerButton);

        EnableSlabReconstructionButton = new QToolButton(SliceFrame);
        EnableSlabReconstructionButton->setObjectName(QString::fromUtf8("EnableSlabReconstructionButton"));
        EnableSlabReconstructionButton->setPopupMode(QToolButton::InstantPopup);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icons/SlabReconstruction.png"), QSize(), QIcon::Normal, QIcon::Off);
        EnableSlabReconstructionButton->setIcon(icon16);
        EnableSlabReconstructionButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(EnableSlabReconstructionButton);

        SliceMoreOptionButton = new QToolButton(SliceFrame);
        SliceMoreOptionButton->setObjectName(QString::fromUtf8("SliceMoreOptionButton"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Icons/SliceMoreOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        SliceMoreOptionButton->setIcon(icon17);
        SliceMoreOptionButton->setPopupMode(QToolButton::InstantPopup);
        SliceMoreOptionButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(SliceMoreOptionButton);

        DynamicSpacer = new ctkDynamicSpacer(SliceFrame);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setActiveSizePolicy(sizePolicy5);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setInactiveSizePolicy(sizePolicy6);
        DynamicSpacer->setActive(true);

        horizontalLayout_2->addWidget(DynamicSpacer);


        horizontalLayout->addWidget(SliceFrame);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        SegmentationIconLabel = new QLabel(qMRMLSliceControllerWidget);
        SegmentationIconLabel->setObjectName(QString::fromUtf8("SegmentationIconLabel"));
        SegmentationIconLabel->setEnabled(false);
        sizePolicy2.setHeightForWidth(SegmentationIconLabel->sizePolicy().hasHeightForWidth());
        SegmentationIconLabel->setSizePolicy(sizePolicy2);
        SegmentationIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Icons/SliceViewerSEG.png")));

        gridLayout->addWidget(SegmentationIconLabel, 1, 0, 1, 1);


        retranslateUi(qMRMLSliceControllerWidget);
        QObject::connect(LabelMapComboBox, SIGNAL(currentNodeChanged(bool)), LabelMapIconLabel, SLOT(setEnabled(bool)));
        QObject::connect(ForegroundComboBox, SIGNAL(currentNodeChanged(bool)), ForegroundIconLabel, SLOT(setEnabled(bool)));
        QObject::connect(BackgroundComboBox, SIGNAL(currentNodeChanged(bool)), BackgroundIconLabel, SLOT(setEnabled(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), BackgroundComboBox, SLOT(hide()));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LightBoxToolButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), ShowReformatWidgetToolButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SliceCompositeButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SliceSpacingButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SliceRotateToVolumePlaneButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SegmentationIconLabel, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LabelMapIconLabel, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), ForegroundIconLabel, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), BackgroundIconLabel, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SegmentationVisibilityButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SegmentationOpacitySlider, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LabelMapVisibilityButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LabelMapOpacitySlider, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), ForegroundOpacitySlider, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), BackgroundOpacitySlider, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SegmentationOutlineButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LabelMapOutlineButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), ForegroundInterpolationButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), BackgroundInterpolationButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), SegmentSelectorWidget, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), LabelMapComboBox, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), ForegroundComboBox, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), DynamicSpacer, SLOT(setActive(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), OrientationMarkerButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), RulerButton, SLOT(setVisible(bool)));
        QObject::connect(MoreButton, SIGNAL(toggled(bool)), EnableSlabReconstructionButton, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qMRMLSliceControllerWidget);
    } // setupUi

    void retranslateUi(ctkPopupWidget *qMRMLSliceControllerWidget)
    {
        qMRMLSliceControllerWidget->setWindowTitle(QCoreApplication::translate("qMRMLSliceControllerWidget", "Slice Controller", nullptr));
        actionHotLinked->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Hot linked", nullptr));
#if QT_CONFIG(tooltip)
        actionHotLinked->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set linking behavior to hot linked controls. When on, Slice interactions affect other slices immediately. When off, Slice interactions affect other slices after the interaction completes.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFit_to_window->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Fit to window", nullptr));
#if QT_CONFIG(tooltip)
        actionFit_to_window->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Reset field of view. Adjusts the slice view's field of view to match the extent of lowest volume layer (background, then foreground, then label).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRotate_to_volume_plane->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Rotate to volume plane", nullptr));
#if QT_CONFIG(tooltip)
        actionRotate_to_volume_plane->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Rotate to volume plane", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLabelMapOutline->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Hide labelmap outlines", nullptr));
#if QT_CONFIG(tooltip)
        actionLabelMapOutline->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle between showing label map volume with regions outlined or filled.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_reformat_widget->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show reformat widget", nullptr));
        actionEnable_slab_reconstruction_widget->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Enable Thick Slab Reconstruction", nullptr));
        actionSlabReconstructionInteractive->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Interactive", nullptr));
        actionOrientationMarkerTypeCube->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Cube", nullptr));
        actionOrientationMarkerTypeHuman->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Human", nullptr));
        actionOrientationMarkerTypeAxes->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Axes", nullptr));
        actionCompositingAlpha_blend->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Alpha blend", nullptr));
        actionCompositingReverse_alpha_blend->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Reverse alpha blend", nullptr));
        actionCompositingAdd->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Add", nullptr));
        actionCompositingSubtract->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Subtract", nullptr));
        actionSliceSpacingModeAutomatic->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Automatic", nullptr));
        actionSliceModelModeVolumes->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "FOV, Spacing match Volumes", nullptr));
        actionSliceModelMode2D->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "FOV, Spacing match 2D", nullptr));
        actionSliceModelMode2D_Volumes->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "FOV matches 2D, Spacing matches Volumes", nullptr));
        actionSliceModelModeVolumes_2D->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "FOV matches Volumes, Spacing matches 2D View", nullptr));
        actionLightbox1x1_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x1 view", nullptr));
        actionLightbox1x2_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x2 view", nullptr));
        actionLightbox1x3_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x3 view", nullptr));
        actionLightbox1x4_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x4 view", nullptr));
        actionLightbox1x6_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x6 view", nullptr));
        actionLightbox1x8_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "1x8 view", nullptr));
        actionLightbox2x2_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "2x2 view", nullptr));
        actionLightbox3x3_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "3x3 view", nullptr));
        actionLightbox6x6_view->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "6x6 view", nullptr));
        actionAdjustDisplayForeground_volume->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Foreground volume", nullptr));
        actionAdjustDisplayBackground_volume->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Background volume", nullptr));
        actionAdjustDisplayLabel_map_volume->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Label map volume", nullptr));
        actionForegroundInterpolation->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Interpolate foreground", nullptr));
        actionBackgroundInterpolation->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Interpolate background", nullptr));
        actionLabelMapVisibility->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show LabelMap", nullptr));
#if QT_CONFIG(tooltip)
        actionLabelMapVisibility->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle labelmap visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        actionForegroundVisibility->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show Foreground", nullptr));
#if QT_CONFIG(tooltip)
        actionForegroundVisibility->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle foreground visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBackgroundVisibility->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show Background", nullptr));
#if QT_CONFIG(tooltip)
        actionBackgroundVisibility->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle background visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_in_3D->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show in 3D", nullptr));
#if QT_CONFIG(tooltip)
        actionShow_in_3D->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle slice visibility in 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLockNormalToCamera->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Lock Normal To Camera", nullptr));
#if QT_CONFIG(tooltip)
        actionLockNormalToCamera->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Lock reformat widget's normal to the camera one. ", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerTypeNone->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "No orientation marker", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerTypeNone->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Hide orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeSmall->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Small", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeSmall->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set orientation marker size to small", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeMedium->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Medium", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeMedium->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set orientation marker size to small to medium", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeLarge->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Large", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeLarge->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set orientation marker size to large", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeNone->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "No ruler", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeNone->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Hide ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeThin->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Thin", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeThin->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show thin ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeThick->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Thick", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeThick->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show thick ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerColorWhite->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "White ruler", nullptr));
        actionRulerColorBlack->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Black ruler", nullptr));
        actionRulerColorYellow->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Yellow ruler", nullptr));
        actionSlabReconstructionMax->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Max", nullptr));
#if QT_CONFIG(tooltip)
        actionSlabReconstructionMax->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set slab reconstruction type to Max", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlabReconstructionMin->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Min", nullptr));
#if QT_CONFIG(tooltip)
        actionSlabReconstructionMin->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set slab reconstruction type to Min", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlabReconstructionMean->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Mean", nullptr));
#if QT_CONFIG(tooltip)
        actionSlabReconstructionMean->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set slab reconstruction type to Mean", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlabReconstructionSum->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Sum", nullptr));
#if QT_CONFIG(tooltip)
        actionSlabReconstructionSum->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Set slab reconstruction type to Sum", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSegmentationOutlineFill->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle segmentation outline/fill", nullptr));
#if QT_CONFIG(tooltip)
        actionSegmentationOutlineFill->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle between segmentation outline only, outline and fill, and fill only states", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSegmentationVisibility->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show Segmentation", nullptr));
#if QT_CONFIG(tooltip)
        actionSegmentationVisibility->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle segmentation visibility", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LabelMapComboBox->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Select the label map", nullptr));
#endif // QT_CONFIG(tooltip)
        SegmentationOutlineButton->setText(QString());
        SegmentationVisibilityButton->setText(QString());
#if QT_CONFIG(tooltip)
        ForegroundComboBox->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Select the foreground", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BackgroundComboBox->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Select the background", nullptr));
#endif // QT_CONFIG(tooltip)
        LabelMapIconLabel->setText(QString());
        ForegroundIconLabel->setText(QString());
        BackgroundIconLabel->setText(QString());
#if QT_CONFIG(tooltip)
        SliceLinkButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Link slice views. Synchronizes properties of all slice views in the same view group.", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceLinkButton->setText(QString());
#if QT_CONFIG(tooltip)
        SliceVisibilityButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Toggle slice visibility in the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceOrientationSelector->setItemText(0, QCoreApplication::translate("qMRMLSliceControllerWidget", "Axial", nullptr));
        SliceOrientationSelector->setItemText(1, QCoreApplication::translate("qMRMLSliceControllerWidget", "Sagittal", nullptr));
        SliceOrientationSelector->setItemText(2, QCoreApplication::translate("qMRMLSliceControllerWidget", "Coronal", nullptr));
        SliceOrientationSelector->setItemText(3, QCoreApplication::translate("qMRMLSliceControllerWidget", "Reformat", nullptr));

#if QT_CONFIG(tooltip)
        SliceOrientationSelector->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Slice orientation (Axial, Sagittal, Coronal, Reformat).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LightBoxToolButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Lightbox view.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ShowReformatWidgetToolButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show reformat widget in 3D view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SliceSpacingButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Slice spacing may be set automatically or manually by the user or context", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceSpacingButton->setText(QString());
#if QT_CONFIG(tooltip)
        OrientationMarkerButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Show orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        RulerButton->setText(QCoreApplication::translate("qMRMLSliceControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        EnableSlabReconstructionButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Enable Thick Slab Reconstruction (TSR). TSR is used to merge contiguous slices within a certain range.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SliceMoreOptionButton->setToolTip(QCoreApplication::translate("qMRMLSliceControllerWidget", "Advanced options", nullptr));
#endif // QT_CONFIG(tooltip)
        SegmentationIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLSliceControllerWidget: public Ui_qMRMLSliceControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSLICECONTROLLERWIDGET_H
