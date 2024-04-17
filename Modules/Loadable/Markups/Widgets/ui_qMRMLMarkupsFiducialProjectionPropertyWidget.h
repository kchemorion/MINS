/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsFiducialProjectionPropertyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSFIDUCIALPROJECTIONPROPERTYWIDGET_H
#define UI_QMRMLMARKUPSFIDUCIALPROJECTIONPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "ctkCheckBox.h"
#include "ctkColorPickerButton.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsFiducialProjectionPropertyWidget
{
public:
    QFormLayout *formLayout;
    QLabel *point2DProjectionLabel;
    QLabel *pointProjectionColorLabel;
    ctkColorPickerButton *pointProjectionColorPickerButton;
    QLabel *pointOutlinedBehindSlicePlaneLabel;
    QCheckBox *pointOutlinedBehindSlicePlaneCheckBox;
    QLabel *pointUseFiducialColorLabel;
    QCheckBox *pointUseFiducialColorCheckBox;
    QHBoxLayout *horizontalLayout;
    ctkCheckBox *point2DProjectionCheckBox;
    QLabel *projectionOpacityLabel;
    ctkSliderWidget *projectionOpacitySliderWidget;

    void setupUi(QWidget *qMRMLMarkupsFiducialProjectionPropertyWidget)
    {
        if (qMRMLMarkupsFiducialProjectionPropertyWidget->objectName().isEmpty())
            qMRMLMarkupsFiducialProjectionPropertyWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsFiducialProjectionPropertyWidget"));
        qMRMLMarkupsFiducialProjectionPropertyWidget->resize(280, 102);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLMarkupsFiducialProjectionPropertyWidget->sizePolicy().hasHeightForWidth());
        qMRMLMarkupsFiducialProjectionPropertyWidget->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(qMRMLMarkupsFiducialProjectionPropertyWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(-1, 0, 5, 0);
        point2DProjectionLabel = new QLabel(qMRMLMarkupsFiducialProjectionPropertyWidget);
        point2DProjectionLabel->setObjectName(QString::fromUtf8("point2DProjectionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, point2DProjectionLabel);

        pointProjectionColorLabel = new QLabel(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointProjectionColorLabel->setObjectName(QString::fromUtf8("pointProjectionColorLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pointProjectionColorLabel);

        pointProjectionColorPickerButton = new ctkColorPickerButton(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointProjectionColorPickerButton->setObjectName(QString::fromUtf8("pointProjectionColorPickerButton"));
        pointProjectionColorPickerButton->setMinimumSize(QSize(0, 0));
        pointProjectionColorPickerButton->setColor(QColor(255, 255, 255));
        pointProjectionColorPickerButton->setDisplayColorName(false);
        pointProjectionColorPickerButton->setDialogOptions(ctkColorPickerButton::UseCTKColorDialog);

        formLayout->setWidget(3, QFormLayout::FieldRole, pointProjectionColorPickerButton);

        pointOutlinedBehindSlicePlaneLabel = new QLabel(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointOutlinedBehindSlicePlaneLabel->setObjectName(QString::fromUtf8("pointOutlinedBehindSlicePlaneLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pointOutlinedBehindSlicePlaneLabel);

        pointOutlinedBehindSlicePlaneCheckBox = new QCheckBox(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointOutlinedBehindSlicePlaneCheckBox->setObjectName(QString::fromUtf8("pointOutlinedBehindSlicePlaneCheckBox"));
        pointOutlinedBehindSlicePlaneCheckBox->setChecked(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, pointOutlinedBehindSlicePlaneCheckBox);

        pointUseFiducialColorLabel = new QLabel(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointUseFiducialColorLabel->setObjectName(QString::fromUtf8("pointUseFiducialColorLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pointUseFiducialColorLabel);

        pointUseFiducialColorCheckBox = new QCheckBox(qMRMLMarkupsFiducialProjectionPropertyWidget);
        pointUseFiducialColorCheckBox->setObjectName(QString::fromUtf8("pointUseFiducialColorCheckBox"));
        pointUseFiducialColorCheckBox->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, pointUseFiducialColorCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        point2DProjectionCheckBox = new ctkCheckBox(qMRMLMarkupsFiducialProjectionPropertyWidget);
        point2DProjectionCheckBox->setObjectName(QString::fromUtf8("point2DProjectionCheckBox"));
        point2DProjectionCheckBox->setIndicatorIconSize(QSize(23, 23));

        horizontalLayout->addWidget(point2DProjectionCheckBox);

        projectionOpacityLabel = new QLabel(qMRMLMarkupsFiducialProjectionPropertyWidget);
        projectionOpacityLabel->setObjectName(QString::fromUtf8("projectionOpacityLabel"));

        horizontalLayout->addWidget(projectionOpacityLabel);

        projectionOpacitySliderWidget = new ctkSliderWidget(qMRMLMarkupsFiducialProjectionPropertyWidget);
        projectionOpacitySliderWidget->setObjectName(QString::fromUtf8("projectionOpacitySliderWidget"));
        projectionOpacitySliderWidget->setSingleStep(0.100000000000000);
        projectionOpacitySliderWidget->setMaximum(1.000000000000000);
        projectionOpacitySliderWidget->setValue(0.600000000000000);

        horizontalLayout->addWidget(projectionOpacitySliderWidget);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(qMRMLMarkupsFiducialProjectionPropertyWidget);

        QMetaObject::connectSlotsByName(qMRMLMarkupsFiducialProjectionPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLMarkupsFiducialProjectionPropertyWidget)
    {
        qMRMLMarkupsFiducialProjectionPropertyWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "qMRMLMarkupsFiducialProjectionPropertyWidget", nullptr));
#if QT_CONFIG(tooltip)
        point2DProjectionLabel->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "If enabled then all control points will be displayed in 2D viewers, by projecting them to the slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        point2DProjectionLabel->setText(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Projection Visibility:", nullptr));
#if QT_CONFIG(tooltip)
        pointProjectionColorLabel->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Color of the projected control points on 2D viewers", nullptr));
#endif // QT_CONFIG(tooltip)
        pointProjectionColorLabel->setText(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Projection Color:", nullptr));
#if QT_CONFIG(tooltip)
        pointProjectionColorPickerButton->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Color of the projected control points on 2D viewers. Only used if \"Use Markup Color\" is not checked, otherwise the projection uses the selected or unselected markup color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pointOutlinedBehindSlicePlaneLabel->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Projected control points are displayed filled (opacity = Projection Opacity) when above the slice plane, outlined when behind, and with full opacity when in the plane. Outline isn't used for some glyphs (Dash2D, Cross2D, Starburst).", nullptr));
#endif // QT_CONFIG(tooltip)
        pointOutlinedBehindSlicePlaneLabel->setText(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Outlined Behind Slice Plane:", nullptr));
#if QT_CONFIG(tooltip)
        pointOutlinedBehindSlicePlaneCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Projected control points are displayed filled (opacity = Projection Opacity) when above the slice plane, outlined when behind, and with full opacity when in the plane. Outline isn't used for some glyphs (Dash2D, Cross2D, Starburst).", nullptr));
#endif // QT_CONFIG(tooltip)
        pointOutlinedBehindSlicePlaneCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        pointUseFiducialColorLabel->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Use the same color as the markup", nullptr));
#endif // QT_CONFIG(tooltip)
        pointUseFiducialColorLabel->setText(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Use Markup Color:", nullptr));
#if QT_CONFIG(tooltip)
        pointUseFiducialColorCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Use the same color as the markup", nullptr));
#endif // QT_CONFIG(tooltip)
        pointUseFiducialColorCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        point2DProjectionCheckBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "If enabled then all control points will be displayed in 2D viewers, by projecting them to the slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        projectionOpacityLabel->setText(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "Opacity:", nullptr));
#if QT_CONFIG(tooltip)
        projectionOpacitySliderWidget->setToolTip(QCoreApplication::translate("qMRMLMarkupsFiducialProjectionPropertyWidget", "The opacity of the projection.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsFiducialProjectionPropertyWidget: public Ui_qMRMLMarkupsFiducialProjectionPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSFIDUCIALPROJECTIONPROPERTYWIDGET_H
