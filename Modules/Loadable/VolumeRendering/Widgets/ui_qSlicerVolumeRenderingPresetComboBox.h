/********************************************************************************
** Form generated from reading UI file 'qSlicerVolumeRenderingPresetComboBox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERVOLUMERENDERINGPRESETCOMBOBOX_H
#define UI_QSLICERVOLUMERENDERINGPRESETCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "ctkDoubleSlider.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerPresetComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerVolumeRenderingPresetComboBox
{
public:
    QFormLayout *formLayout_2;
    QLabel *PresetsLabel;
    qSlicerPresetComboBox *PresetComboBox;
    QLabel *label;
    ctkDoubleSlider *PresetOffsetSlider;

    void setupUi(qSlicerWidget *qSlicerVolumeRenderingPresetComboBox)
    {
        if (qSlicerVolumeRenderingPresetComboBox->objectName().isEmpty())
            qSlicerVolumeRenderingPresetComboBox->setObjectName(QString::fromUtf8("qSlicerVolumeRenderingPresetComboBox"));
        qSlicerVolumeRenderingPresetComboBox->resize(456, 51);
        formLayout_2 = new QFormLayout(qSlicerVolumeRenderingPresetComboBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        PresetsLabel = new QLabel(qSlicerVolumeRenderingPresetComboBox);
        PresetsLabel->setObjectName(QString::fromUtf8("PresetsLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, PresetsLabel);

        PresetComboBox = new qSlicerPresetComboBox(qSlicerVolumeRenderingPresetComboBox);
        PresetComboBox->setObjectName(QString::fromUtf8("PresetComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, PresetComboBox);

        label = new QLabel(qSlicerVolumeRenderingPresetComboBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        PresetOffsetSlider = new ctkDoubleSlider(qSlicerVolumeRenderingPresetComboBox);
        PresetOffsetSlider->setObjectName(QString::fromUtf8("PresetOffsetSlider"));
        PresetOffsetSlider->setValue(0.500000000000000);
        PresetOffsetSlider->setSingleStep(0.100000000000000);
        PresetOffsetSlider->setPageStep(0.100000000000000);
        PresetOffsetSlider->setMaximum(1.000000000000000);
        PresetOffsetSlider->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, PresetOffsetSlider);


        retranslateUi(qSlicerVolumeRenderingPresetComboBox);
        QObject::connect(qSlicerVolumeRenderingPresetComboBox, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PresetComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerVolumeRenderingPresetComboBox);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerVolumeRenderingPresetComboBox)
    {
        qSlicerVolumeRenderingPresetComboBox->setWindowTitle(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "Volume Rendering Presets", nullptr));
        PresetsLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "Preset:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "Shift transfer functions", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "Shift:", nullptr));
#if QT_CONFIG(tooltip)
        PresetOffsetSlider->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "Shift transfer functions", nullptr));
#endif // QT_CONFIG(tooltip)
        PresetOffsetSlider->setHandleToolTip(QCoreApplication::translate("qSlicerVolumeRenderingPresetComboBox", "%1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerVolumeRenderingPresetComboBox: public Ui_qSlicerVolumeRenderingPresetComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERVOLUMERENDERINGPRESETCOMBOBOX_H
