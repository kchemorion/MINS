/********************************************************************************
** Form generated from reading UI file 'qMRMLThreeDViewControllerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTHREEDVIEWCONTROLLERWIDGET_H
#define UI_QMRMLTHREEDVIEWCONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ctkAxesWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLThreeDViewControllerWidget
{
public:
    QAction *actionNoStereo;
    QAction *actionSwitchToRedBlueStereo;
    QAction *actionSwitchToAnaglyphStereo;
    QAction *actionSwitchToQuadBufferStereo;
    QAction *actionSwitchToInterlacedStereo;
    QAction *actionSet3DAxisVisible;
    QAction *actionSet3DAxisLabelVisible;
    QAction *actionSetLightBlueBackground;
    QAction *actionSetBlackBackground;
    QAction *actionSetWhiteBackground;
    QAction *actionCenter;
    QAction *actionUseDepthPeeling;
    QAction *actionSetFPSVisible;
    QAction *actionSwitchToUserDefinedStereo_1;
    QAction *actionSwitchToUserDefinedStereo_2;
    QAction *actionSwitchToUserDefinedStereo_3;
    QAction *actionOrientationMarkerTypeNone;
    QAction *actionOrientationMarkerTypeCube;
    QAction *actionOrientationMarkerTypeHuman;
    QAction *actionOrientationMarkerTypeAxes;
    QAction *actionOrientationMarkerSizeSmall;
    QAction *actionOrientationMarkerSizeMedium;
    QAction *actionOrientationMarkerSizeLarge;
    QAction *actionRulerTypeNone;
    QAction *actionRulerTypeThin;
    QAction *actionRulerTypeThick;
    QAction *actionRulerColorWhite;
    QAction *actionRulerColorBlack;
    QAction *actionRulerColorYellow;
    QHBoxLayout *horizontalLayout;
    ctkAxesWidget *AxesWidget;
    QGridLayout *gridLayout;
    QToolButton *ZoomOutButton;
    QToolButton *SpinButton;
    QToolButton *RockButton;
    QToolButton *VisibilityButton;
    QToolButton *OrientationMarkerButton;
    QToolButton *ZoomInButton;
    QToolButton *MoreToolButton;
    QToolButton *StereoButton;
    QToolButton *RulerButton;
    QToolButton *OrthoButton;
    QToolButton *CenterButton;
    QToolButton *ViewLinkButton;

    void setupUi(QWidget *qMRMLThreeDViewControllerWidget)
    {
        if (qMRMLThreeDViewControllerWidget->objectName().isEmpty())
            qMRMLThreeDViewControllerWidget->setObjectName(QString::fromUtf8("qMRMLThreeDViewControllerWidget"));
        qMRMLThreeDViewControllerWidget->resize(226, 80);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLThreeDViewControllerWidget->sizePolicy().hasHeightForWidth());
        qMRMLThreeDViewControllerWidget->setSizePolicy(sizePolicy);
        actionNoStereo = new QAction(qMRMLThreeDViewControllerWidget);
        actionNoStereo->setObjectName(QString::fromUtf8("actionNoStereo"));
        actionNoStereo->setCheckable(true);
        actionNoStereo->setChecked(true);
        actionSwitchToRedBlueStereo = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToRedBlueStereo->setObjectName(QString::fromUtf8("actionSwitchToRedBlueStereo"));
        actionSwitchToRedBlueStereo->setCheckable(true);
        actionSwitchToAnaglyphStereo = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToAnaglyphStereo->setObjectName(QString::fromUtf8("actionSwitchToAnaglyphStereo"));
        actionSwitchToAnaglyphStereo->setCheckable(true);
        actionSwitchToQuadBufferStereo = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToQuadBufferStereo->setObjectName(QString::fromUtf8("actionSwitchToQuadBufferStereo"));
        actionSwitchToQuadBufferStereo->setCheckable(true);
        actionSwitchToInterlacedStereo = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToInterlacedStereo->setObjectName(QString::fromUtf8("actionSwitchToInterlacedStereo"));
        actionSwitchToInterlacedStereo->setCheckable(true);
        actionSet3DAxisVisible = new QAction(qMRMLThreeDViewControllerWidget);
        actionSet3DAxisVisible->setObjectName(QString::fromUtf8("actionSet3DAxisVisible"));
        actionSet3DAxisVisible->setCheckable(true);
        actionSet3DAxisVisible->setChecked(true);
        actionSet3DAxisLabelVisible = new QAction(qMRMLThreeDViewControllerWidget);
        actionSet3DAxisLabelVisible->setObjectName(QString::fromUtf8("actionSet3DAxisLabelVisible"));
        actionSet3DAxisLabelVisible->setCheckable(true);
        actionSet3DAxisLabelVisible->setChecked(true);
        actionSetLightBlueBackground = new QAction(qMRMLThreeDViewControllerWidget);
        actionSetLightBlueBackground->setObjectName(QString::fromUtf8("actionSetLightBlueBackground"));
        actionSetLightBlueBackground->setCheckable(true);
        actionSetLightBlueBackground->setChecked(true);
        actionSetBlackBackground = new QAction(qMRMLThreeDViewControllerWidget);
        actionSetBlackBackground->setObjectName(QString::fromUtf8("actionSetBlackBackground"));
        actionSetBlackBackground->setCheckable(true);
        actionSetWhiteBackground = new QAction(qMRMLThreeDViewControllerWidget);
        actionSetWhiteBackground->setObjectName(QString::fromUtf8("actionSetWhiteBackground"));
        actionSetWhiteBackground->setCheckable(true);
        actionCenter = new QAction(qMRMLThreeDViewControllerWidget);
        actionCenter->setObjectName(QString::fromUtf8("actionCenter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ViewCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter->setIcon(icon);
        actionUseDepthPeeling = new QAction(qMRMLThreeDViewControllerWidget);
        actionUseDepthPeeling->setObjectName(QString::fromUtf8("actionUseDepthPeeling"));
        actionUseDepthPeeling->setCheckable(true);
        actionSetFPSVisible = new QAction(qMRMLThreeDViewControllerWidget);
        actionSetFPSVisible->setObjectName(QString::fromUtf8("actionSetFPSVisible"));
        actionSetFPSVisible->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ViewFPS.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetFPSVisible->setIcon(icon1);
        actionSwitchToUserDefinedStereo_1 = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToUserDefinedStereo_1->setObjectName(QString::fromUtf8("actionSwitchToUserDefinedStereo_1"));
        actionSwitchToUserDefinedStereo_1->setCheckable(true);
        actionSwitchToUserDefinedStereo_2 = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToUserDefinedStereo_2->setObjectName(QString::fromUtf8("actionSwitchToUserDefinedStereo_2"));
        actionSwitchToUserDefinedStereo_2->setCheckable(true);
        actionSwitchToUserDefinedStereo_3 = new QAction(qMRMLThreeDViewControllerWidget);
        actionSwitchToUserDefinedStereo_3->setObjectName(QString::fromUtf8("actionSwitchToUserDefinedStereo_3"));
        actionSwitchToUserDefinedStereo_3->setCheckable(true);
        actionOrientationMarkerTypeNone = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerTypeNone->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeNone"));
        actionOrientationMarkerTypeNone->setCheckable(true);
        actionOrientationMarkerTypeCube = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerTypeCube->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeCube"));
        actionOrientationMarkerTypeCube->setCheckable(true);
        actionOrientationMarkerTypeHuman = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerTypeHuman->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeHuman"));
        actionOrientationMarkerTypeHuman->setCheckable(true);
        actionOrientationMarkerTypeAxes = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerTypeAxes->setObjectName(QString::fromUtf8("actionOrientationMarkerTypeAxes"));
        actionOrientationMarkerTypeAxes->setCheckable(true);
        actionOrientationMarkerSizeSmall = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerSizeSmall->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeSmall"));
        actionOrientationMarkerSizeSmall->setCheckable(true);
        actionOrientationMarkerSizeMedium = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerSizeMedium->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeMedium"));
        actionOrientationMarkerSizeMedium->setCheckable(true);
        actionOrientationMarkerSizeLarge = new QAction(qMRMLThreeDViewControllerWidget);
        actionOrientationMarkerSizeLarge->setObjectName(QString::fromUtf8("actionOrientationMarkerSizeLarge"));
        actionOrientationMarkerSizeLarge->setCheckable(true);
        actionRulerTypeNone = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerTypeNone->setObjectName(QString::fromUtf8("actionRulerTypeNone"));
        actionRulerTypeNone->setCheckable(true);
        actionRulerTypeThin = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerTypeThin->setObjectName(QString::fromUtf8("actionRulerTypeThin"));
        actionRulerTypeThin->setCheckable(true);
        actionRulerTypeThick = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerTypeThick->setObjectName(QString::fromUtf8("actionRulerTypeThick"));
        actionRulerTypeThick->setCheckable(true);
        actionRulerColorWhite = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerColorWhite->setObjectName(QString::fromUtf8("actionRulerColorWhite"));
        actionRulerColorWhite->setCheckable(true);
        actionRulerColorBlack = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerColorBlack->setObjectName(QString::fromUtf8("actionRulerColorBlack"));
        actionRulerColorBlack->setCheckable(true);
        actionRulerColorYellow = new QAction(qMRMLThreeDViewControllerWidget);
        actionRulerColorYellow->setObjectName(QString::fromUtf8("actionRulerColorYellow"));
        actionRulerColorYellow->setCheckable(true);
        horizontalLayout = new QHBoxLayout(qMRMLThreeDViewControllerWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AxesWidget = new ctkAxesWidget(qMRMLThreeDViewControllerWidget);
        AxesWidget->setObjectName(QString::fromUtf8("AxesWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AxesWidget->sizePolicy().hasHeightForWidth());
        AxesWidget->setSizePolicy(sizePolicy1);
        AxesWidget->setAutoReset(true);

        horizontalLayout->addWidget(AxesWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ZoomOutButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        ZoomOutButton->setObjectName(QString::fromUtf8("ZoomOutButton"));
        ZoomOutButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/ViewZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomOutButton->setIcon(icon2);
        ZoomOutButton->setAutoRepeat(true);

        gridLayout->addWidget(ZoomOutButton, 2, 0, 1, 1);

        SpinButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        SpinButton->setObjectName(QString::fromUtf8("SpinButton"));
        SpinButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/ViewSpin.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpinButton->setIcon(icon3);
        SpinButton->setCheckable(true);

        gridLayout->addWidget(SpinButton, 1, 1, 1, 1);

        RockButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        RockButton->setObjectName(QString::fromUtf8("RockButton"));
        RockButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/ViewRock.png"), QSize(), QIcon::Normal, QIcon::Off);
        RockButton->setIcon(icon4);
        RockButton->setCheckable(true);

        gridLayout->addWidget(RockButton, 2, 1, 1, 1);

        VisibilityButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        VisibilityButton->setObjectName(QString::fromUtf8("VisibilityButton"));
        VisibilityButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        VisibilityButton->setIcon(icon5);
        VisibilityButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(VisibilityButton, 2, 2, 1, 1);

        OrientationMarkerButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        OrientationMarkerButton->setObjectName(QString::fromUtf8("OrientationMarkerButton"));
        OrientationMarkerButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/OrientationMarker.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrientationMarkerButton->setIcon(icon6);
        OrientationMarkerButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(OrientationMarkerButton, 1, 2, 1, 1);

        ZoomInButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        ZoomInButton->setObjectName(QString::fromUtf8("ZoomInButton"));
        ZoomInButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/ViewZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZoomInButton->setIcon(icon7);
        ZoomInButton->setAutoRepeat(true);

        gridLayout->addWidget(ZoomInButton, 1, 0, 1, 1);

        MoreToolButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        MoreToolButton->setObjectName(QString::fromUtf8("MoreToolButton"));
        MoreToolButton->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/SliceMoreOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        MoreToolButton->setIcon(icon8);
        MoreToolButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(MoreToolButton, 2, 3, 1, 1);

        StereoButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        StereoButton->setObjectName(QString::fromUtf8("StereoButton"));
        StereoButton->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/ViewStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        StereoButton->setIcon(icon9);
        StereoButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(StereoButton, 1, 3, 1, 1);

        RulerButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        RulerButton->setObjectName(QString::fromUtf8("RulerButton"));
        RulerButton->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/Ruler.png"), QSize(), QIcon::Normal, QIcon::Off);
        RulerButton->setIcon(icon10);
        RulerButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout->addWidget(RulerButton, 0, 3, 1, 1);

        OrthoButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        OrthoButton->setObjectName(QString::fromUtf8("OrthoButton"));
        OrthoButton->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/ViewPerspective.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/Icons/ViewOrtho.png"), QSize(), QIcon::Normal, QIcon::On);
        OrthoButton->setIcon(icon11);
        OrthoButton->setCheckable(true);

        gridLayout->addWidget(OrthoButton, 0, 2, 1, 1);

        CenterButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        CenterButton->setObjectName(QString::fromUtf8("CenterButton"));
        CenterButton->setEnabled(false);

        gridLayout->addWidget(CenterButton, 0, 1, 1, 1);

        ViewLinkButton = new QToolButton(qMRMLThreeDViewControllerWidget);
        ViewLinkButton->setObjectName(QString::fromUtf8("ViewLinkButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/LinkOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon12.addFile(QString::fromUtf8(":/Icons/LinkOn.png"), QSize(), QIcon::Normal, QIcon::On);
        ViewLinkButton->setIcon(icon12);
        ViewLinkButton->setCheckable(true);
        ViewLinkButton->setChecked(false);
        ViewLinkButton->setAutoRaise(false);

        gridLayout->addWidget(ViewLinkButton, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(qMRMLThreeDViewControllerWidget);

        QMetaObject::connectSlotsByName(qMRMLThreeDViewControllerWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLThreeDViewControllerWidget)
    {
        qMRMLThreeDViewControllerWidget->setWindowTitle(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "3D View Controller", nullptr));
        actionNoStereo->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "No Stereo", nullptr));
        actionSwitchToRedBlueStereo->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Red/blue", nullptr));
        actionSwitchToAnaglyphStereo->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Anaglyph", nullptr));
        actionSwitchToQuadBufferStereo->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "QuadBuffer", nullptr));
        actionSwitchToInterlacedStereo->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Interlaced", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchToInterlacedStereo->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Switch to Interlaced stereo mode", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSet3DAxisVisible->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "3D cube", nullptr));
        actionSet3DAxisLabelVisible->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "3D axis label", nullptr));
        actionSetLightBlueBackground->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Light blue background", nullptr));
#if QT_CONFIG(tooltip)
        actionSetLightBlueBackground->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Set light blue background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetBlackBackground->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Black background", nullptr));
#if QT_CONFIG(tooltip)
        actionSetBlackBackground->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Set black background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetWhiteBackground->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "White background", nullptr));
#if QT_CONFIG(tooltip)
        actionSetWhiteBackground->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Set white background", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCenter->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Center", nullptr));
#if QT_CONFIG(tooltip)
        actionCenter->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Center view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUseDepthPeeling->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Use depth peeling", nullptr));
#if QT_CONFIG(tooltip)
        actionUseDepthPeeling->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Depth peeling is used to render transparent surface models in order", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetFPSVisible->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show/Hide frames per second (FPS)", nullptr));
        actionSwitchToUserDefinedStereo_1->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "User Defined 1", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchToUserDefinedStereo_1->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Switch to user defined stereo mode 1", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSwitchToUserDefinedStereo_2->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "User Defined 2", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchToUserDefinedStereo_2->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Switch to user defined stereo mode 2", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSwitchToUserDefinedStereo_3->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "User Defined 3", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchToUserDefinedStereo_3->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Switch to user defined stereo mode 3", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerTypeNone->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "No orientation marker", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerTypeNone->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Hide orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerTypeCube->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Cube", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerTypeCube->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show cube orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerTypeHuman->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Human", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerTypeHuman->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show human-shaped orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerTypeAxes->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Axes", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerTypeAxes->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show axes orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeSmall->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Small", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeSmall->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Small orientation marker size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeMedium->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Medium", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeMedium->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Medium orientation marker size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOrientationMarkerSizeLarge->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Large", nullptr));
#if QT_CONFIG(tooltip)
        actionOrientationMarkerSizeLarge->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Large orientation marker size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeNone->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "No ruler", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeNone->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Hide ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeThin->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Thin", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeThin->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show thin ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerTypeThick->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Thick", nullptr));
#if QT_CONFIG(tooltip)
        actionRulerTypeThick->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show thick ruler", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRulerColorWhite->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "White ruler", nullptr));
        actionRulerColorBlack->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Black ruler", nullptr));
        actionRulerColorYellow->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Yellow ruler", nullptr));
#if QT_CONFIG(tooltip)
        ZoomOutButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Zoom out of the scene by a small amount.", nullptr));
#endif // QT_CONFIG(tooltip)
        ZoomOutButton->setText(QString());
#if QT_CONFIG(tooltip)
        SpinButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Spin the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        SpinButton->setText(QString());
#if QT_CONFIG(tooltip)
        RockButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Rock the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        RockButton->setText(QString());
#if QT_CONFIG(tooltip)
        VisibilityButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Toggle visibility of elements in the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        VisibilityButton->setText(QString());
#if QT_CONFIG(tooltip)
        OrientationMarkerButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Orientation marker", nullptr));
#endif // QT_CONFIG(tooltip)
        OrientationMarkerButton->setText(QString());
#if QT_CONFIG(tooltip)
        ZoomInButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Zoom in on the scene by a small amount.", nullptr));
#endif // QT_CONFIG(tooltip)
        ZoomInButton->setText(QString());
        MoreToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        StereoButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Select among stereo viewing options (3DSlicer must be started with stereo enabled to use these features).", nullptr));
#endif // QT_CONFIG(tooltip)
        StereoButton->setText(QString());
#if QT_CONFIG(tooltip)
        RulerButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Show ruler. Only available in orthographic projection mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        RulerButton->setText(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        OrthoButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Toggle between orthographic and perspective rendering in the 3D view.", nullptr));
#endif // QT_CONFIG(tooltip)
        OrthoButton->setText(QString());
#if QT_CONFIG(tooltip)
        CenterButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Center view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ViewLinkButton->setToolTip(QCoreApplication::translate("qMRMLThreeDViewControllerWidget", "Link 3D views. Synchronizes properties of all 3D views in the same view group.", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewLinkButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLThreeDViewControllerWidget: public Ui_qMRMLThreeDViewControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTHREEDVIEWCONTROLLERWIDGET_H
