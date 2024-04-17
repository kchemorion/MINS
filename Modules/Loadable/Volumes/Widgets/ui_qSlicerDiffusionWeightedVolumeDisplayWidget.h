/********************************************************************************
** Form generated from reading UI file 'qSlicerDiffusionWeightedVolumeDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDIFFUSIONWEIGHTEDVOLUMEDISPLAYWIDGET_H
#define UI_QSLICERDIFFUSIONWEIGHTEDVOLUMEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleGroupBox.h"
#include "qSlicerScalarVolumeDisplayWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerDiffusionWeightedVolumeDisplayWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleGroupBox *ScalarDisplayGroupBox;
    QFormLayout *formLayout;
    QLabel *DWIComponentLabel;
    qSlicerScalarVolumeDisplayWidget *ScalarVolumeDisplayWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *DWIComponentSlider;
    QSpinBox *DWIComponentSpinBox;

    void setupUi(qSlicerWidget *qSlicerDiffusionWeightedVolumeDisplayWidget)
    {
        if (qSlicerDiffusionWeightedVolumeDisplayWidget->objectName().isEmpty())
            qSlicerDiffusionWeightedVolumeDisplayWidget->setObjectName(QString::fromUtf8("qSlicerDiffusionWeightedVolumeDisplayWidget"));
        qSlicerDiffusionWeightedVolumeDisplayWidget->resize(222, 59);
        verticalLayout = new QVBoxLayout(qSlicerDiffusionWeightedVolumeDisplayWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ScalarDisplayGroupBox = new ctkCollapsibleGroupBox(qSlicerDiffusionWeightedVolumeDisplayWidget);
        ScalarDisplayGroupBox->setObjectName(QString::fromUtf8("ScalarDisplayGroupBox"));
        formLayout = new QFormLayout(ScalarDisplayGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        DWIComponentLabel = new QLabel(ScalarDisplayGroupBox);
        DWIComponentLabel->setObjectName(QString::fromUtf8("DWIComponentLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, DWIComponentLabel);

        ScalarVolumeDisplayWidget = new qSlicerScalarVolumeDisplayWidget(ScalarDisplayGroupBox);
        ScalarVolumeDisplayWidget->setObjectName(QString::fromUtf8("ScalarVolumeDisplayWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, ScalarVolumeDisplayWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        DWIComponentSlider = new QSlider(ScalarDisplayGroupBox);
        DWIComponentSlider->setObjectName(QString::fromUtf8("DWIComponentSlider"));
        DWIComponentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(DWIComponentSlider);

        DWIComponentSpinBox = new QSpinBox(ScalarDisplayGroupBox);
        DWIComponentSpinBox->setObjectName(QString::fromUtf8("DWIComponentSpinBox"));

        horizontalLayout->addWidget(DWIComponentSpinBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(ScalarDisplayGroupBox);


        retranslateUi(qSlicerDiffusionWeightedVolumeDisplayWidget);
        QObject::connect(DWIComponentSlider, SIGNAL(valueChanged(int)), DWIComponentSpinBox, SLOT(setValue(int)));
        QObject::connect(DWIComponentSpinBox, SIGNAL(valueChanged(int)), DWIComponentSlider, SLOT(setValue(int)));
        QObject::connect(qSlicerDiffusionWeightedVolumeDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ScalarVolumeDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerDiffusionWeightedVolumeDisplayWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerDiffusionWeightedVolumeDisplayWidget)
    {
        qSlicerDiffusionWeightedVolumeDisplayWidget->setWindowTitle(QCoreApplication::translate("qSlicerDiffusionWeightedVolumeDisplayWidget", "DWI Display Properties", nullptr));
        ScalarDisplayGroupBox->setTitle(QCoreApplication::translate("qSlicerDiffusionWeightedVolumeDisplayWidget", "Scalar Display", nullptr));
        DWIComponentLabel->setText(QCoreApplication::translate("qSlicerDiffusionWeightedVolumeDisplayWidget", "DWI Component:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerDiffusionWeightedVolumeDisplayWidget: public Ui_qSlicerDiffusionWeightedVolumeDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDIFFUSIONWEIGHTEDVOLUMEDISPLAYWIDGET_H
