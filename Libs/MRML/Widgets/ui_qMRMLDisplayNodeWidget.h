/********************************************************************************
** Form generated from reading UI file 'qMRMLDisplayNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLDISPLAYNODEWIDGET_H
#define UI_QMRMLDISPLAYNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "ctkSliderWidget.h"
#include "ctkVTKPropertyWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLDisplayNodeViewComboBox.h"
#include "qMRMLNodeComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLDisplayNodeWidget
{
public:
    QFormLayout *formLayout;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QFormLayout *formLayout_2;
    QLabel *VisibilityLabel;
    QCheckBox *VisibilityCheckBox;
    QLabel *SelectedLabel;
    QCheckBox *SelectedCheckBox;
    QLabel *ClippingLabel;
    QCheckBox *ClippingCheckBox;
    QLabel *SliceIntersectionVisibilityLabel;
    QCheckBox *SliceIntersectionVisibilityCheckBox;
    QLabel *SliceIntersectionThicknessLabel;
    QSpinBox *SliceIntersectionThicknessSpinBox;
    QLabel *SliceIntersectionOpacityLabel;
    ctkSliderWidget *SliceIntersectionOpacitySlider;
    qMRMLDisplayNodeViewComboBox *DisplayNodeViewComboBox;
    QLabel *DisplayNodeViewLabel;
    QLabel *ThreeDVisibilityLabel;
    QCheckBox *ThreeDVisibilityCheckBox;
    ctkVTKPropertyWidget *PropertyWidget;

    void setupUi(QWidget *qMRMLDisplayNodeWidget)
    {
        if (qMRMLDisplayNodeWidget->objectName().isEmpty())
            qMRMLDisplayNodeWidget->setObjectName(QString::fromUtf8("qMRMLDisplayNodeWidget"));
        qMRMLDisplayNodeWidget->resize(333, 422);
        formLayout = new QFormLayout(qMRMLDisplayNodeWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        CollapsibleGroupBox = new ctkCollapsibleGroupBox(qMRMLDisplayNodeWidget);
        CollapsibleGroupBox->setObjectName(QString::fromUtf8("CollapsibleGroupBox"));
        formLayout_2 = new QFormLayout(CollapsibleGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        VisibilityLabel = new QLabel(CollapsibleGroupBox);
        VisibilityLabel->setObjectName(QString::fromUtf8("VisibilityLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, VisibilityLabel);

        VisibilityCheckBox = new QCheckBox(CollapsibleGroupBox);
        VisibilityCheckBox->setObjectName(QString::fromUtf8("VisibilityCheckBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, VisibilityCheckBox);

        SelectedLabel = new QLabel(CollapsibleGroupBox);
        SelectedLabel->setObjectName(QString::fromUtf8("SelectedLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, SelectedLabel);

        SelectedCheckBox = new QCheckBox(CollapsibleGroupBox);
        SelectedCheckBox->setObjectName(QString::fromUtf8("SelectedCheckBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, SelectedCheckBox);

        ClippingLabel = new QLabel(CollapsibleGroupBox);
        ClippingLabel->setObjectName(QString::fromUtf8("ClippingLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, ClippingLabel);

        ClippingCheckBox = new QCheckBox(CollapsibleGroupBox);
        ClippingCheckBox->setObjectName(QString::fromUtf8("ClippingCheckBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, ClippingCheckBox);

        SliceIntersectionVisibilityLabel = new QLabel(CollapsibleGroupBox);
        SliceIntersectionVisibilityLabel->setObjectName(QString::fromUtf8("SliceIntersectionVisibilityLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, SliceIntersectionVisibilityLabel);

        SliceIntersectionVisibilityCheckBox = new QCheckBox(CollapsibleGroupBox);
        SliceIntersectionVisibilityCheckBox->setObjectName(QString::fromUtf8("SliceIntersectionVisibilityCheckBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, SliceIntersectionVisibilityCheckBox);

        SliceIntersectionThicknessLabel = new QLabel(CollapsibleGroupBox);
        SliceIntersectionThicknessLabel->setObjectName(QString::fromUtf8("SliceIntersectionThicknessLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, SliceIntersectionThicknessLabel);

        SliceIntersectionThicknessSpinBox = new QSpinBox(CollapsibleGroupBox);
        SliceIntersectionThicknessSpinBox->setObjectName(QString::fromUtf8("SliceIntersectionThicknessSpinBox"));
        SliceIntersectionThicknessSpinBox->setMinimum(0);
        SliceIntersectionThicknessSpinBox->setMaximum(10);
        SliceIntersectionThicknessSpinBox->setSingleStep(1);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, SliceIntersectionThicknessSpinBox);

        SliceIntersectionOpacityLabel = new QLabel(CollapsibleGroupBox);
        SliceIntersectionOpacityLabel->setObjectName(QString::fromUtf8("SliceIntersectionOpacityLabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, SliceIntersectionOpacityLabel);

        SliceIntersectionOpacitySlider = new ctkSliderWidget(CollapsibleGroupBox);
        SliceIntersectionOpacitySlider->setObjectName(QString::fromUtf8("SliceIntersectionOpacitySlider"));
        SliceIntersectionOpacitySlider->setMinimum(0.000000000000000);
        SliceIntersectionOpacitySlider->setMaximum(1.000000000000000);
        SliceIntersectionOpacitySlider->setValue(1.000000000000000);
        SliceIntersectionOpacitySlider->setProperty("SingleStep", QVariant(0.010000000000000));
        SliceIntersectionOpacitySlider->setProperty("Decimals", QVariant(2));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, SliceIntersectionOpacitySlider);

        DisplayNodeViewComboBox = new qMRMLDisplayNodeViewComboBox(CollapsibleGroupBox);
        DisplayNodeViewComboBox->setObjectName(QString::fromUtf8("DisplayNodeViewComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, DisplayNodeViewComboBox);

        DisplayNodeViewLabel = new QLabel(CollapsibleGroupBox);
        DisplayNodeViewLabel->setObjectName(QString::fromUtf8("DisplayNodeViewLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, DisplayNodeViewLabel);

        ThreeDVisibilityLabel = new QLabel(CollapsibleGroupBox);
        ThreeDVisibilityLabel->setObjectName(QString::fromUtf8("ThreeDVisibilityLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, ThreeDVisibilityLabel);

        ThreeDVisibilityCheckBox = new QCheckBox(CollapsibleGroupBox);
        ThreeDVisibilityCheckBox->setObjectName(QString::fromUtf8("ThreeDVisibilityCheckBox"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, ThreeDVisibilityCheckBox);


        formLayout->setWidget(0, QFormLayout::SpanningRole, CollapsibleGroupBox);

        PropertyWidget = new ctkVTKPropertyWidget(qMRMLDisplayNodeWidget);
        PropertyWidget->setObjectName(QString::fromUtf8("PropertyWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, PropertyWidget);

#if QT_CONFIG(shortcut)
        VisibilityLabel->setBuddy(VisibilityCheckBox);
        SelectedLabel->setBuddy(SelectedCheckBox);
        ClippingLabel->setBuddy(ClippingCheckBox);
        SliceIntersectionVisibilityLabel->setBuddy(SliceIntersectionVisibilityCheckBox);
        SliceIntersectionThicknessLabel->setBuddy(SliceIntersectionThicknessSpinBox);
        SliceIntersectionOpacityLabel->setBuddy(SliceIntersectionOpacitySlider);
#endif // QT_CONFIG(shortcut)

        retranslateUi(qMRMLDisplayNodeWidget);

        QMetaObject::connectSlotsByName(qMRMLDisplayNodeWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLDisplayNodeWidget)
    {
        qMRMLDisplayNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Display Properties", nullptr));
        CollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Visibility", nullptr));
        VisibilityLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "&Visibility:", nullptr));
        VisibilityCheckBox->setText(QString());
        SelectedLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "&Selected:", nullptr));
        SelectedCheckBox->setText(QString());
        ClippingLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "&Clip:", nullptr));
        ClippingCheckBox->setText(QString());
        SliceIntersectionVisibilityLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Slice &Intersections Visibility:", nullptr));
        SliceIntersectionVisibilityCheckBox->setText(QString());
        SliceIntersectionThicknessLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Slice Intersections &Thickness:", nullptr));
        SliceIntersectionThicknessSpinBox->setSuffix(QCoreApplication::translate("qMRMLDisplayNodeWidget", " px", nullptr));
        SliceIntersectionOpacityLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Slice Intersections Opacity:", nullptr));
#if QT_CONFIG(tooltip)
        DisplayNodeViewComboBox->setToolTip(QCoreApplication::translate("qMRMLDisplayNodeWidget", "Select views in which to show this node. All unchecked shows in all 3D and 2D views.", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayNodeViewLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "View:", nullptr));
        ThreeDVisibilityLabel->setText(QCoreApplication::translate("qMRMLDisplayNodeWidget", "3D Visibility:", nullptr));
        ThreeDVisibilityCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLDisplayNodeWidget: public Ui_qMRMLDisplayNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLDISPLAYNODEWIDGET_H
