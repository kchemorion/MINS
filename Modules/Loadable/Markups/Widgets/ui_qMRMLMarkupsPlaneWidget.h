/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsPlaneWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSPLANEWIDGET_H
#define UI_QMRMLMARKUPSPLANEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkDoubleSpinBox.h"
#include "ctkSliderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsPlaneWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *planeSettingsCollapseButton;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_10;
    QComboBox *planeTypeComboBox;
    QLabel *label;
    QComboBox *planeSizeModeComboBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    ctkDoubleSpinBox *sizeXSpinBox;
    QLabel *label_4;
    ctkDoubleSpinBox *sizeYSpinBox;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QLabel *label_9;
    ctkDoubleSpinBox *boundsXMinSpinBox;
    ctkDoubleSpinBox *boundsXMaxSpinBox;
    QLabel *label_8;
    QLabel *label_12;
    ctkDoubleSpinBox *boundsYMinSpinBox;
    ctkDoubleSpinBox *boundsYMaxSpinBox;
    QLabel *label_13;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *normalVisibilityCheckBox;
    QLabel *label_6;
    ctkSliderWidget *normalOpacitySlider;

    void setupUi(QWidget *qMRMLMarkupsPlaneWidget)
    {
        if (qMRMLMarkupsPlaneWidget->objectName().isEmpty())
            qMRMLMarkupsPlaneWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsPlaneWidget"));
        qMRMLMarkupsPlaneWidget->resize(362, 201);
        verticalLayout = new QVBoxLayout(qMRMLMarkupsPlaneWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        planeSettingsCollapseButton = new ctkCollapsibleButton(qMRMLMarkupsPlaneWidget);
        planeSettingsCollapseButton->setObjectName(QString::fromUtf8("planeSettingsCollapseButton"));
        planeSettingsCollapseButton->setCollapsed(false);
        verticalLayout_2 = new QVBoxLayout(planeSettingsCollapseButton);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 9);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_10 = new QLabel(planeSettingsCollapseButton);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        planeTypeComboBox = new QComboBox(planeSettingsCollapseButton);
        planeTypeComboBox->setObjectName(QString::fromUtf8("planeTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, planeTypeComboBox);

        label = new QLabel(planeSettingsCollapseButton);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        planeSizeModeComboBox = new QComboBox(planeSettingsCollapseButton);
        planeSizeModeComboBox->setObjectName(QString::fromUtf8("planeSizeModeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, planeSizeModeComboBox);

        label_2 = new QLabel(planeSettingsCollapseButton);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(planeSettingsCollapseButton);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        sizeXSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        sizeXSpinBox->setObjectName(QString::fromUtf8("sizeXSpinBox"));
        sizeXSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout->addWidget(sizeXSpinBox);

        label_4 = new QLabel(planeSettingsCollapseButton);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_4);

        sizeYSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        sizeYSpinBox->setObjectName(QString::fromUtf8("sizeYSpinBox"));
        sizeYSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout->addWidget(sizeYSpinBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_7 = new QLabel(planeSettingsCollapseButton);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(planeSettingsCollapseButton);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        boundsXMinSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        boundsXMinSpinBox->setObjectName(QString::fromUtf8("boundsXMinSpinBox"));
        boundsXMinSpinBox->setMinimum(-1000000000.000000000000000);
        boundsXMinSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(boundsXMinSpinBox, 0, 1, 1, 1);

        boundsXMaxSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        boundsXMaxSpinBox->setObjectName(QString::fromUtf8("boundsXMaxSpinBox"));
        boundsXMaxSpinBox->setMinimum(-1000000000.000000000000000);
        boundsXMaxSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(boundsXMaxSpinBox, 0, 3, 1, 1);

        label_8 = new QLabel(planeSettingsCollapseButton);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_12 = new QLabel(planeSettingsCollapseButton);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        boundsYMinSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        boundsYMinSpinBox->setObjectName(QString::fromUtf8("boundsYMinSpinBox"));
        boundsYMinSpinBox->setMinimum(-1000000000.000000000000000);
        boundsYMinSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(boundsYMinSpinBox, 1, 1, 1, 1);

        boundsYMaxSpinBox = new ctkDoubleSpinBox(planeSettingsCollapseButton);
        boundsYMaxSpinBox->setObjectName(QString::fromUtf8("boundsYMaxSpinBox"));
        boundsYMaxSpinBox->setMinimum(-1000000000.000000000000000);
        boundsYMaxSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(boundsYMaxSpinBox, 1, 3, 1, 1);

        label_13 = new QLabel(planeSettingsCollapseButton);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_13, 1, 2, 1, 1);


        formLayout->setLayout(3, QFormLayout::FieldRole, gridLayout);

        label_5 = new QLabel(planeSettingsCollapseButton);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        normalVisibilityCheckBox = new QCheckBox(planeSettingsCollapseButton);
        normalVisibilityCheckBox->setObjectName(QString::fromUtf8("normalVisibilityCheckBox"));

        horizontalLayout_2->addWidget(normalVisibilityCheckBox);

        label_6 = new QLabel(planeSettingsCollapseButton);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        normalOpacitySlider = new ctkSliderWidget(planeSettingsCollapseButton);
        normalOpacitySlider->setObjectName(QString::fromUtf8("normalOpacitySlider"));
        normalOpacitySlider->setSingleStep(0.010000000000000);
        normalOpacitySlider->setPageStep(0.100000000000000);
        normalOpacitySlider->setMaximum(1.000000000000000);
        normalOpacitySlider->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(normalOpacitySlider);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(planeSettingsCollapseButton);


        retranslateUi(qMRMLMarkupsPlaneWidget);

        QMetaObject::connectSlotsByName(qMRMLMarkupsPlaneWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLMarkupsPlaneWidget)
    {
        qMRMLMarkupsPlaneWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Plane Properties", nullptr));
        planeSettingsCollapseButton->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Plane settings", nullptr));
        label_10->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Type", nullptr));
        label->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Size mode:", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Size:", nullptr));
        label_3->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "X:", nullptr));
        label_4->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Y:", nullptr));
        label_7->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Bounds:", nullptr));
        label_9->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "X max:", nullptr));
        label_8->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "X min:", nullptr));
        label_12->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Y min:", nullptr));
        label_13->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Y max:", nullptr));
        label_5->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Normal:", nullptr));
        normalVisibilityCheckBox->setText(QString());
        label_6->setText(QCoreApplication::translate("qMRMLMarkupsPlaneWidget", "Opacity:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsPlaneWidget: public Ui_qMRMLMarkupsPlaneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSPLANEWIDGET_H
