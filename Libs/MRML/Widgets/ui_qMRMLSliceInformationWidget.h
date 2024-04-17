/********************************************************************************
** Form generated from reading UI file 'qMRMLSliceInformationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSLICEINFORMATIONWIDGET_H
#define UI_QMRMLSLICEINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include "ctkCoordinatesWidget.h"
#include "ctkDoubleSpinBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSliceInformationWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *LayoutNameLineEdit;
    QLabel *label_3;
    QComboBox *SliceOrientationSelector;
    QLabel *label_4;
    QToolButton *SliceVisibilityToggle;
    QLabel *label_5;
    QToolButton *WidgetVisibilityToggle;
    QLabel *label_6;
    ctkCoordinatesWidget *DimensionWidget;
    QLabel *label_7;
    ctkCoordinatesWidget *FieldOfViewWidget;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *LightboxLayoutRowsSpinBox;
    QSpinBox *LightboxLayoutColumnsSpinBox;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *AutomaticSliceSpacingRadioButton;
    QRadioButton *PrescribedSliceSpacingRadioButton;
    QLabel *label_10;
    ctkDoubleSpinBox *PrescribedSpacingSpinBox;
    QLabel *label_11;
    QSpinBox *ViewGroupSpinBox;

    void setupUi(qMRMLWidget *qMRMLSliceInformationWidget)
    {
        if (qMRMLSliceInformationWidget->objectName().isEmpty())
            qMRMLSliceInformationWidget->setObjectName(QString::fromUtf8("qMRMLSliceInformationWidget"));
        qMRMLSliceInformationWidget->resize(471, 312);
        formLayout = new QFormLayout(qMRMLSliceInformationWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(qMRMLSliceInformationWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        LayoutNameLineEdit = new QLineEdit(qMRMLSliceInformationWidget);
        LayoutNameLineEdit->setObjectName(QString::fromUtf8("LayoutNameLineEdit"));
        LayoutNameLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, LayoutNameLineEdit);

        label_3 = new QLabel(qMRMLSliceInformationWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        SliceOrientationSelector = new QComboBox(qMRMLSliceInformationWidget);
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->addItem(QString());
        SliceOrientationSelector->setObjectName(QString::fromUtf8("SliceOrientationSelector"));

        formLayout->setWidget(2, QFormLayout::FieldRole, SliceOrientationSelector);

        label_4 = new QLabel(qMRMLSliceInformationWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        SliceVisibilityToggle = new QToolButton(qMRMLSliceInformationWidget);
        SliceVisibilityToggle->setObjectName(QString::fromUtf8("SliceVisibilityToggle"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/VisibleOn.png"), QSize(), QIcon::Normal, QIcon::On);
        SliceVisibilityToggle->setIcon(icon);
        SliceVisibilityToggle->setIconSize(QSize(20, 20));
        SliceVisibilityToggle->setCheckable(true);
        SliceVisibilityToggle->setChecked(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, SliceVisibilityToggle);

        label_5 = new QLabel(qMRMLSliceInformationWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        WidgetVisibilityToggle = new QToolButton(qMRMLSliceInformationWidget);
        WidgetVisibilityToggle->setObjectName(QString::fromUtf8("WidgetVisibilityToggle"));
        WidgetVisibilityToggle->setIcon(icon);
        WidgetVisibilityToggle->setIconSize(QSize(20, 20));
        WidgetVisibilityToggle->setCheckable(true);
        WidgetVisibilityToggle->setChecked(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, WidgetVisibilityToggle);

        label_6 = new QLabel(qMRMLSliceInformationWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        DimensionWidget = new ctkCoordinatesWidget(qMRMLSliceInformationWidget);
        DimensionWidget->setObjectName(QString::fromUtf8("DimensionWidget"));
        DimensionWidget->setEnabled(false);
        DimensionWidget->setDecimals(0);
        DimensionWidget->setMinimum(0.000000000000000);
        DimensionWidget->setMaximum(1000000.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, DimensionWidget);

        label_7 = new QLabel(qMRMLSliceInformationWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        FieldOfViewWidget = new ctkCoordinatesWidget(qMRMLSliceInformationWidget);
        FieldOfViewWidget->setObjectName(QString::fromUtf8("FieldOfViewWidget"));
        FieldOfViewWidget->setEnabled(false);
        FieldOfViewWidget->setMinimum(0.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, FieldOfViewWidget);

        label_8 = new QLabel(qMRMLSliceInformationWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        LightboxLayoutRowsSpinBox = new QSpinBox(qMRMLSliceInformationWidget);
        LightboxLayoutRowsSpinBox->setObjectName(QString::fromUtf8("LightboxLayoutRowsSpinBox"));
        LightboxLayoutRowsSpinBox->setMinimum(1);
        LightboxLayoutRowsSpinBox->setMaximum(6);

        horizontalLayout_5->addWidget(LightboxLayoutRowsSpinBox);

        LightboxLayoutColumnsSpinBox = new QSpinBox(qMRMLSliceInformationWidget);
        LightboxLayoutColumnsSpinBox->setObjectName(QString::fromUtf8("LightboxLayoutColumnsSpinBox"));
        LightboxLayoutColumnsSpinBox->setMinimum(1);
        LightboxLayoutColumnsSpinBox->setMaximum(6);

        horizontalLayout_5->addWidget(LightboxLayoutColumnsSpinBox);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_5);

        label_9 = new QLabel(qMRMLSliceInformationWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        AutomaticSliceSpacingRadioButton = new QRadioButton(qMRMLSliceInformationWidget);
        AutomaticSliceSpacingRadioButton->setObjectName(QString::fromUtf8("AutomaticSliceSpacingRadioButton"));
        AutomaticSliceSpacingRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(AutomaticSliceSpacingRadioButton);

        PrescribedSliceSpacingRadioButton = new QRadioButton(qMRMLSliceInformationWidget);
        PrescribedSliceSpacingRadioButton->setObjectName(QString::fromUtf8("PrescribedSliceSpacingRadioButton"));

        horizontalLayout_4->addWidget(PrescribedSliceSpacingRadioButton);


        formLayout->setLayout(9, QFormLayout::FieldRole, horizontalLayout_4);

        label_10 = new QLabel(qMRMLSliceInformationWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_10);

        PrescribedSpacingSpinBox = new ctkDoubleSpinBox(qMRMLSliceInformationWidget);
        PrescribedSpacingSpinBox->setObjectName(QString::fromUtf8("PrescribedSpacingSpinBox"));
        PrescribedSpacingSpinBox->setEnabled(false);
        PrescribedSpacingSpinBox->setDecimals(1);
        PrescribedSpacingSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(10, QFormLayout::FieldRole, PrescribedSpacingSpinBox);

        label_11 = new QLabel(qMRMLSliceInformationWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        ViewGroupSpinBox = new QSpinBox(qMRMLSliceInformationWidget);
        ViewGroupSpinBox->setObjectName(QString::fromUtf8("ViewGroupSpinBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, ViewGroupSpinBox);


        retranslateUi(qMRMLSliceInformationWidget);
        QObject::connect(PrescribedSliceSpacingRadioButton, SIGNAL(toggled(bool)), label_10, SLOT(setEnabled(bool)));
        QObject::connect(PrescribedSliceSpacingRadioButton, SIGNAL(toggled(bool)), PrescribedSpacingSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(qMRMLSliceInformationWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSliceInformationWidget)
    {
        qMRMLSliceInformationWidget->setWindowTitle(QCoreApplication::translate("qMRMLSliceInformationWidget", "Slice Information", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Layout Name:", nullptr));
#if QT_CONFIG(tooltip)
        LayoutNameLineEdit->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Name of the slice", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Orientation:", nullptr));
        SliceOrientationSelector->setItemText(0, QCoreApplication::translate("qMRMLSliceInformationWidget", "Axial", nullptr));
        SliceOrientationSelector->setItemText(1, QCoreApplication::translate("qMRMLSliceInformationWidget", "Sagittal", nullptr));
        SliceOrientationSelector->setItemText(2, QCoreApplication::translate("qMRMLSliceInformationWidget", "Coronal", nullptr));
        SliceOrientationSelector->setItemText(3, QCoreApplication::translate("qMRMLSliceInformationWidget", "Reformat", nullptr));

#if QT_CONFIG(tooltip)
        SliceOrientationSelector->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Slice orientation (Axial, Sagittal, Coronal, Reformat)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Slice visibility:", nullptr));
#if QT_CONFIG(tooltip)
        SliceVisibilityToggle->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Toggle the visibility of the slice in the 3D scene", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceVisibilityToggle->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "...", nullptr));
        label_5->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Widget visibility:", nullptr));
#if QT_CONFIG(tooltip)
        WidgetVisibilityToggle->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Toggle the visibility of the reformat widget in the 3D scene", nullptr));
#endif // QT_CONFIG(tooltip)
        WidgetVisibilityToggle->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Dimension of the slice.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Dimension:", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Field of view of slice", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Field of view:", nullptr));
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Layout of the lightbox (rows, columns)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Lightbox layout:", nullptr));
#if QT_CONFIG(tooltip)
        LightboxLayoutRowsSpinBox->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Number of rows in the lightbox", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        LightboxLayoutColumnsSpinBox->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Number of columns in the lightbox", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Slice spacing may be set automatically or manually by the user or context", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Slice spacing mode:", nullptr));
        AutomaticSliceSpacingRadioButton->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Automatic", nullptr));
        PrescribedSliceSpacingRadioButton->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Manual", nullptr));
        label_10->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "Manual spacing:", nullptr));
#if QT_CONFIG(tooltip)
        PrescribedSpacingSpinBox->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Manual spacing is used when slice spacing is set manually by the user or context", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("qMRMLSliceInformationWidget", "View group:", nullptr));
#if QT_CONFIG(tooltip)
        ViewGroupSpinBox->setToolTip(QCoreApplication::translate("qMRMLSliceInformationWidget", "Navigation and linked properties are synchronized in views that has the same group index.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLSliceInformationWidget: public Ui_qMRMLSliceInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSLICEINFORMATIONWIDGET_H
