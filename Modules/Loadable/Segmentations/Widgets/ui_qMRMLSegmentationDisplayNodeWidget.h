/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentationDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTATIONDISPLAYNODEWIDGET_H
#define UI_QMRMLSEGMENTATIONDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "ctkCollapsibleGroupBox.h"
#include "ctkSliderWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentationDisplayNodeWidget
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_Visible;
    QLabel *label_Visible;
    QLabel *label_OverallOpacity;
    ctkSliderWidget *SliderWidget_Opacity;
    QFrame *frame_VisibilityOpacity;
    QGridLayout *gridLayout_7;
    QLabel *label_SliceFill;
    QLabel *label_SliceOutline;
    QLabel *label_3D;
    QLabel *label_Opacity;
    ctkSliderWidget *SliderWidget_OpacitySliceOutline;
    ctkSliderWidget *SliderWidget_OpacitySliceFill;
    ctkSliderWidget *SliderWidget_Opacity3D;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_VisibilitySliceFill;
    QLabel *label_Visibility;
    QCheckBox *checkBox_VisibilitySliceOutline;
    QCheckBox *checkBox_Visibility3D;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_Advanced;
    QGridLayout *gridLayout;
    qMRMLDisplayNodeViewComboBox *DisplayNodeViewComboBox;
    QLabel *label_Views;
    QSpinBox *spinBox_SliceIntersectionThickness;
    QLabel *label_Representation2D;
    QComboBox *comboBox_DisplayedRepresentation3D;
    QLabel *label_Representation3D;
    QComboBox *comboBox_DisplayedRepresentation2D;
    QLabel *label_SliceIntersectionThickness;
    QGroupBox *groupBox_SelectedSegment;
    QGridLayout *gridLayout_3;
    QLabel *label_SliceOutline_SelectedSegment;
    QCheckBox *checkBox_VisibilitySliceFill_SelectedSegment;
    QLabel *label_SliceFill_SelectedSegment;
    QCheckBox *checkBox_VisibilitySliceOutline_SelectedSegment;
    QLabel *label_Visibility_SelectedSegment;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_Visibility3D_SelectedSegment;
    QLabel *label_3D_SelectedSegment;
    ctkSliderWidget *SliderWidget_OpacitySliceFill_SelectedSegment;
    ctkSliderWidget *SliderWidget_OpacitySliceOutline_SelectedSegment;
    ctkSliderWidget *SliderWidget_Opacity3D_SelectedSegment;
    QLabel *label_Opacity_SelectedSegment;

    void setupUi(qMRMLWidget *qMRMLSegmentationDisplayNodeWidget)
    {
        if (qMRMLSegmentationDisplayNodeWidget->objectName().isEmpty())
            qMRMLSegmentationDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLSegmentationDisplayNodeWidget"));
        qMRMLSegmentationDisplayNodeWidget->resize(306, 162);
        gridLayout_2 = new QGridLayout(qMRMLSegmentationDisplayNodeWidget);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        checkBox_Visible = new QCheckBox(qMRMLSegmentationDisplayNodeWidget);
        checkBox_Visible->setObjectName(QString::fromUtf8("checkBox_Visible"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox_Visible->sizePolicy().hasHeightForWidth());
        checkBox_Visible->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkBox_Visible, 0, 1, 1, 1);

        label_Visible = new QLabel(qMRMLSegmentationDisplayNodeWidget);
        label_Visible->setObjectName(QString::fromUtf8("label_Visible"));

        gridLayout_2->addWidget(label_Visible, 0, 0, 1, 1);

        label_OverallOpacity = new QLabel(qMRMLSegmentationDisplayNodeWidget);
        label_OverallOpacity->setObjectName(QString::fromUtf8("label_OverallOpacity"));

        gridLayout_2->addWidget(label_OverallOpacity, 0, 2, 1, 1);

        SliderWidget_Opacity = new ctkSliderWidget(qMRMLSegmentationDisplayNodeWidget);
        SliderWidget_Opacity->setObjectName(QString::fromUtf8("SliderWidget_Opacity"));
        SliderWidget_Opacity->setSingleStep(0.050000000000000);
        SliderWidget_Opacity->setPageStep(0.100000000000000);
        SliderWidget_Opacity->setMaximum(1.000000000000000);
        SliderWidget_Opacity->setValue(1.000000000000000);

        gridLayout_2->addWidget(SliderWidget_Opacity, 0, 3, 1, 1);

        frame_VisibilityOpacity = new QFrame(qMRMLSegmentationDisplayNodeWidget);
        frame_VisibilityOpacity->setObjectName(QString::fromUtf8("frame_VisibilityOpacity"));
        frame_VisibilityOpacity->setFrameShape(QFrame::StyledPanel);
        gridLayout_7 = new QGridLayout(frame_VisibilityOpacity);
        gridLayout_7->setSpacing(4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(4, 4, 4, 4);
        label_SliceFill = new QLabel(frame_VisibilityOpacity);
        label_SliceFill->setObjectName(QString::fromUtf8("label_SliceFill"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(label_SliceFill->sizePolicy().hasHeightForWidth());
        label_SliceFill->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_SliceFill, 2, 0, 1, 1);

        label_SliceOutline = new QLabel(frame_VisibilityOpacity);
        label_SliceOutline->setObjectName(QString::fromUtf8("label_SliceOutline"));
        sizePolicy1.setHeightForWidth(label_SliceOutline->sizePolicy().hasHeightForWidth());
        label_SliceOutline->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_SliceOutline, 3, 0, 1, 1);

        label_3D = new QLabel(frame_VisibilityOpacity);
        label_3D->setObjectName(QString::fromUtf8("label_3D"));

        gridLayout_7->addWidget(label_3D, 4, 0, 1, 1);

        label_Opacity = new QLabel(frame_VisibilityOpacity);
        label_Opacity->setObjectName(QString::fromUtf8("label_Opacity"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_Opacity->sizePolicy().hasHeightForWidth());
        label_Opacity->setSizePolicy(sizePolicy2);
        label_Opacity->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_Opacity, 1, 3, 1, 1);

        SliderWidget_OpacitySliceOutline = new ctkSliderWidget(frame_VisibilityOpacity);
        SliderWidget_OpacitySliceOutline->setObjectName(QString::fromUtf8("SliderWidget_OpacitySliceOutline"));
        SliderWidget_OpacitySliceOutline->setSingleStep(0.050000000000000);
        SliderWidget_OpacitySliceOutline->setPageStep(0.100000000000000);
        SliderWidget_OpacitySliceOutline->setMaximum(1.000000000000000);
        SliderWidget_OpacitySliceOutline->setValue(1.000000000000000);

        gridLayout_7->addWidget(SliderWidget_OpacitySliceOutline, 3, 3, 1, 1);

        SliderWidget_OpacitySliceFill = new ctkSliderWidget(frame_VisibilityOpacity);
        SliderWidget_OpacitySliceFill->setObjectName(QString::fromUtf8("SliderWidget_OpacitySliceFill"));
        SliderWidget_OpacitySliceFill->setSingleStep(0.050000000000000);
        SliderWidget_OpacitySliceFill->setPageStep(0.100000000000000);
        SliderWidget_OpacitySliceFill->setMaximum(1.000000000000000);
        SliderWidget_OpacitySliceFill->setValue(0.500000000000000);

        gridLayout_7->addWidget(SliderWidget_OpacitySliceFill, 2, 3, 1, 1);

        SliderWidget_Opacity3D = new ctkSliderWidget(frame_VisibilityOpacity);
        SliderWidget_Opacity3D->setObjectName(QString::fromUtf8("SliderWidget_Opacity3D"));
        SliderWidget_Opacity3D->setSingleStep(0.050000000000000);
        SliderWidget_Opacity3D->setPageStep(0.100000000000000);
        SliderWidget_Opacity3D->setMaximum(1.000000000000000);
        SliderWidget_Opacity3D->setValue(1.000000000000000);

        gridLayout_7->addWidget(SliderWidget_Opacity3D, 4, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 2, 1, 1, 1);

        checkBox_VisibilitySliceFill = new QCheckBox(frame_VisibilityOpacity);
        checkBox_VisibilitySliceFill->setObjectName(QString::fromUtf8("checkBox_VisibilitySliceFill"));

        gridLayout_7->addWidget(checkBox_VisibilitySliceFill, 2, 2, 1, 1);

        label_Visibility = new QLabel(frame_VisibilityOpacity);
        label_Visibility->setObjectName(QString::fromUtf8("label_Visibility"));
        sizePolicy2.setHeightForWidth(label_Visibility->sizePolicy().hasHeightForWidth());
        label_Visibility->setSizePolicy(sizePolicy2);
        label_Visibility->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_Visibility, 1, 1, 1, 2);

        checkBox_VisibilitySliceOutline = new QCheckBox(frame_VisibilityOpacity);
        checkBox_VisibilitySliceOutline->setObjectName(QString::fromUtf8("checkBox_VisibilitySliceOutline"));

        gridLayout_7->addWidget(checkBox_VisibilitySliceOutline, 3, 2, 1, 1);

        checkBox_Visibility3D = new QCheckBox(frame_VisibilityOpacity);
        checkBox_Visibility3D->setObjectName(QString::fromUtf8("checkBox_Visibility3D"));

        gridLayout_7->addWidget(checkBox_Visibility3D, 4, 2, 1, 1);


        gridLayout_2->addWidget(frame_VisibilityOpacity, 2, 0, 1, 4);

        CollapsibleGroupBox_Advanced = new ctkCollapsibleGroupBox(qMRMLSegmentationDisplayNodeWidget);
        CollapsibleGroupBox_Advanced->setObjectName(QString::fromUtf8("CollapsibleGroupBox_Advanced"));
        CollapsibleGroupBox_Advanced->setChecked(false);
        CollapsibleGroupBox_Advanced->setCollapsed(true);
        gridLayout = new QGridLayout(CollapsibleGroupBox_Advanced);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        DisplayNodeViewComboBox = new qMRMLDisplayNodeViewComboBox(CollapsibleGroupBox_Advanced);
        DisplayNodeViewComboBox->setObjectName(QString::fromUtf8("DisplayNodeViewComboBox"));

        gridLayout->addWidget(DisplayNodeViewComboBox, 0, 1, 1, 1);

        label_Views = new QLabel(CollapsibleGroupBox_Advanced);
        label_Views->setObjectName(QString::fromUtf8("label_Views"));

        gridLayout->addWidget(label_Views, 0, 0, 1, 1);

        spinBox_SliceIntersectionThickness = new QSpinBox(CollapsibleGroupBox_Advanced);
        spinBox_SliceIntersectionThickness->setObjectName(QString::fromUtf8("spinBox_SliceIntersectionThickness"));
        spinBox_SliceIntersectionThickness->setMaximum(10);

        gridLayout->addWidget(spinBox_SliceIntersectionThickness, 1, 1, 1, 1);

        label_Representation2D = new QLabel(CollapsibleGroupBox_Advanced);
        label_Representation2D->setObjectName(QString::fromUtf8("label_Representation2D"));

        gridLayout->addWidget(label_Representation2D, 3, 0, 1, 1);

        comboBox_DisplayedRepresentation3D = new QComboBox(CollapsibleGroupBox_Advanced);
        comboBox_DisplayedRepresentation3D->setObjectName(QString::fromUtf8("comboBox_DisplayedRepresentation3D"));

        gridLayout->addWidget(comboBox_DisplayedRepresentation3D, 2, 1, 1, 1);

        label_Representation3D = new QLabel(CollapsibleGroupBox_Advanced);
        label_Representation3D->setObjectName(QString::fromUtf8("label_Representation3D"));

        gridLayout->addWidget(label_Representation3D, 2, 0, 1, 1);

        comboBox_DisplayedRepresentation2D = new QComboBox(CollapsibleGroupBox_Advanced);
        comboBox_DisplayedRepresentation2D->setObjectName(QString::fromUtf8("comboBox_DisplayedRepresentation2D"));

        gridLayout->addWidget(comboBox_DisplayedRepresentation2D, 3, 1, 1, 1);

        label_SliceIntersectionThickness = new QLabel(CollapsibleGroupBox_Advanced);
        label_SliceIntersectionThickness->setObjectName(QString::fromUtf8("label_SliceIntersectionThickness"));

        gridLayout->addWidget(label_SliceIntersectionThickness, 1, 0, 1, 1);

        groupBox_SelectedSegment = new QGroupBox(CollapsibleGroupBox_Advanced);
        groupBox_SelectedSegment->setObjectName(QString::fromUtf8("groupBox_SelectedSegment"));
        gridLayout_3 = new QGridLayout(groupBox_SelectedSegment);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        label_SliceOutline_SelectedSegment = new QLabel(groupBox_SelectedSegment);
        label_SliceOutline_SelectedSegment->setObjectName(QString::fromUtf8("label_SliceOutline_SelectedSegment"));

        gridLayout_3->addWidget(label_SliceOutline_SelectedSegment, 2, 0, 1, 1);

        checkBox_VisibilitySliceFill_SelectedSegment = new QCheckBox(groupBox_SelectedSegment);
        checkBox_VisibilitySliceFill_SelectedSegment->setObjectName(QString::fromUtf8("checkBox_VisibilitySliceFill_SelectedSegment"));

        gridLayout_3->addWidget(checkBox_VisibilitySliceFill_SelectedSegment, 1, 2, 1, 1);

        label_SliceFill_SelectedSegment = new QLabel(groupBox_SelectedSegment);
        label_SliceFill_SelectedSegment->setObjectName(QString::fromUtf8("label_SliceFill_SelectedSegment"));

        gridLayout_3->addWidget(label_SliceFill_SelectedSegment, 1, 0, 1, 1);

        checkBox_VisibilitySliceOutline_SelectedSegment = new QCheckBox(groupBox_SelectedSegment);
        checkBox_VisibilitySliceOutline_SelectedSegment->setObjectName(QString::fromUtf8("checkBox_VisibilitySliceOutline_SelectedSegment"));

        gridLayout_3->addWidget(checkBox_VisibilitySliceOutline_SelectedSegment, 2, 2, 1, 1);

        label_Visibility_SelectedSegment = new QLabel(groupBox_SelectedSegment);
        label_Visibility_SelectedSegment->setObjectName(QString::fromUtf8("label_Visibility_SelectedSegment"));
        sizePolicy2.setHeightForWidth(label_Visibility_SelectedSegment->sizePolicy().hasHeightForWidth());
        label_Visibility_SelectedSegment->setSizePolicy(sizePolicy2);
        label_Visibility_SelectedSegment->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Visibility_SelectedSegment, 0, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        checkBox_Visibility3D_SelectedSegment = new QCheckBox(groupBox_SelectedSegment);
        checkBox_Visibility3D_SelectedSegment->setObjectName(QString::fromUtf8("checkBox_Visibility3D_SelectedSegment"));

        gridLayout_3->addWidget(checkBox_Visibility3D_SelectedSegment, 3, 2, 1, 1);

        label_3D_SelectedSegment = new QLabel(groupBox_SelectedSegment);
        label_3D_SelectedSegment->setObjectName(QString::fromUtf8("label_3D_SelectedSegment"));

        gridLayout_3->addWidget(label_3D_SelectedSegment, 3, 0, 1, 1);

        SliderWidget_OpacitySliceFill_SelectedSegment = new ctkSliderWidget(groupBox_SelectedSegment);
        SliderWidget_OpacitySliceFill_SelectedSegment->setObjectName(QString::fromUtf8("SliderWidget_OpacitySliceFill_SelectedSegment"));
        SliderWidget_OpacitySliceFill_SelectedSegment->setSingleStep(0.050000000000000);
        SliderWidget_OpacitySliceFill_SelectedSegment->setPageStep(0.100000000000000);
        SliderWidget_OpacitySliceFill_SelectedSegment->setMaximum(1.000000000000000);
        SliderWidget_OpacitySliceFill_SelectedSegment->setValue(1.000000000000000);

        gridLayout_3->addWidget(SliderWidget_OpacitySliceFill_SelectedSegment, 1, 3, 1, 1);

        SliderWidget_OpacitySliceOutline_SelectedSegment = new ctkSliderWidget(groupBox_SelectedSegment);
        SliderWidget_OpacitySliceOutline_SelectedSegment->setObjectName(QString::fromUtf8("SliderWidget_OpacitySliceOutline_SelectedSegment"));
        SliderWidget_OpacitySliceOutline_SelectedSegment->setSingleStep(0.050000000000000);
        SliderWidget_OpacitySliceOutline_SelectedSegment->setPageStep(0.100000000000000);
        SliderWidget_OpacitySliceOutline_SelectedSegment->setMaximum(1.000000000000000);
        SliderWidget_OpacitySliceOutline_SelectedSegment->setValue(1.000000000000000);

        gridLayout_3->addWidget(SliderWidget_OpacitySliceOutline_SelectedSegment, 2, 3, 1, 1);

        SliderWidget_Opacity3D_SelectedSegment = new ctkSliderWidget(groupBox_SelectedSegment);
        SliderWidget_Opacity3D_SelectedSegment->setObjectName(QString::fromUtf8("SliderWidget_Opacity3D_SelectedSegment"));
        SliderWidget_Opacity3D_SelectedSegment->setSingleStep(0.050000000000000);
        SliderWidget_Opacity3D_SelectedSegment->setPageStep(0.100000000000000);
        SliderWidget_Opacity3D_SelectedSegment->setMaximum(1.000000000000000);
        SliderWidget_Opacity3D_SelectedSegment->setValue(1.000000000000000);

        gridLayout_3->addWidget(SliderWidget_Opacity3D_SelectedSegment, 3, 3, 1, 1);

        label_Opacity_SelectedSegment = new QLabel(groupBox_SelectedSegment);
        label_Opacity_SelectedSegment->setObjectName(QString::fromUtf8("label_Opacity_SelectedSegment"));
        sizePolicy2.setHeightForWidth(label_Opacity_SelectedSegment->sizePolicy().hasHeightForWidth());
        label_Opacity_SelectedSegment->setSizePolicy(sizePolicy2);
        label_Opacity_SelectedSegment->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Opacity_SelectedSegment, 0, 3, 1, 1);


        gridLayout->addWidget(groupBox_SelectedSegment, 4, 0, 1, 2);


        gridLayout_2->addWidget(CollapsibleGroupBox_Advanced, 3, 0, 1, 4);


        retranslateUi(qMRMLSegmentationDisplayNodeWidget);

        QMetaObject::connectSlotsByName(qMRMLSegmentationDisplayNodeWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSegmentationDisplayNodeWidget)
    {
        qMRMLSegmentationDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "qMRMLSegmentationDisplayNodeWidget", nullptr));
        checkBox_Visible->setText(QString());
        label_Visible->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Overall visibility:", nullptr));
        label_OverallOpacity->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Overall opacity:", nullptr));
        label_SliceFill->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Slice fill:", nullptr));
        label_SliceOutline->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Slice outline:", nullptr));
        label_3D->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "3D:", nullptr));
        label_Opacity->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Opacity", nullptr));
        checkBox_VisibilitySliceFill->setText(QString());
        label_Visibility->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Visibility", nullptr));
        checkBox_VisibilitySliceOutline->setText(QString());
        checkBox_Visibility3D->setText(QString());
        CollapsibleGroupBox_Advanced->setTitle(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Advanced", nullptr));
        label_Views->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Views:", nullptr));
        spinBox_SliceIntersectionThickness->setSuffix(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", " px", nullptr));
        label_Representation2D->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Representation in 2D views:", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_DisplayedRepresentation3D->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Representation that is shown in 3D (models only)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_Representation3D->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Representation that is shown as a model in 3D and as slice intersections in 2D if exists", nullptr));
#endif // QT_CONFIG(tooltip)
        label_Representation3D->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Representation in 3D views:", nullptr));
#if QT_CONFIG(tooltip)
        comboBox_DisplayedRepresentation2D->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Representation that is shown in the 2D slice views", nullptr));
#endif // QT_CONFIG(tooltip)
        label_SliceIntersectionThickness->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Slice intersection thickness:", nullptr));
        groupBox_SelectedSegment->setTitle(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Selected segment", nullptr));
        label_SliceOutline_SelectedSegment->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Slice outline:", nullptr));
        checkBox_VisibilitySliceFill_SelectedSegment->setText(QString());
        label_SliceFill_SelectedSegment->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Slice fill:", nullptr));
        checkBox_VisibilitySliceOutline_SelectedSegment->setText(QString());
        label_Visibility_SelectedSegment->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Visibility", nullptr));
        checkBox_Visibility3D_SelectedSegment->setText(QString());
        label_3D_SelectedSegment->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "3D:", nullptr));
#if QT_CONFIG(tooltip)
        SliderWidget_OpacitySliceFill_SelectedSegment->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Value relative to other segments. The final opacity depends both on the per-segment opacity and the overall opacity (above)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SliderWidget_OpacitySliceOutline_SelectedSegment->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Value relative to other segments. The final opacity depends both on the per-segment opacity and the overall opacity (above)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SliderWidget_Opacity3D_SelectedSegment->setToolTip(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Value relative to other segments. The final opacity depends both on the per-segment opacity and the overall opacity (above)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_Opacity_SelectedSegment->setText(QCoreApplication::translate("qMRMLSegmentationDisplayNodeWidget", "Opacity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentationDisplayNodeWidget: public Ui_qMRMLSegmentationDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTATIONDISPLAYNODEWIDGET_H
