/********************************************************************************
** Form generated from reading UI file 'qSlicerVolumeRenderingSettingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERVOLUMERENDERINGSETTINGSPANEL_H
#define UI_QSLICERVOLUMERENDERINGSETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "ctkSettingsPanel.h"
#include "ctkSliderWidget.h"
#include "qSlicerGPUMemoryComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerVolumeRenderingSettingsPanel
{
public:
    QFormLayout *formLayout;
    QLabel *RenderingMethodLabel;
    QComboBox *RenderingMethodComboBox;
    QLabel *QualityControlLabel;
    QLabel *GPUMemoryLabel;
    qSlicerGPUMemoryComboBox *GPUMemoryComboBox;
    QComboBox *QualityControlComboBox;
    QLabel *InteractiveSpeedLabel;
    ctkSliderWidget *InteractiveSpeedSlider;
    QLabel *SurfaceSmoothingLabel;
    QCheckBox *SurfaceSmoothingCheckBox;
    QLabel *FramerateLabel_2;
    QCheckBox *AutoReleaseGraphicsResourcesCheckBox;

    void setupUi(ctkSettingsPanel *qSlicerVolumeRenderingSettingsPanel)
    {
        if (qSlicerVolumeRenderingSettingsPanel->objectName().isEmpty())
            qSlicerVolumeRenderingSettingsPanel->setObjectName(QString::fromUtf8("qSlicerVolumeRenderingSettingsPanel"));
        qSlicerVolumeRenderingSettingsPanel->resize(345, 156);
        formLayout = new QFormLayout(qSlicerVolumeRenderingSettingsPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        RenderingMethodLabel = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        RenderingMethodLabel->setObjectName(QString::fromUtf8("RenderingMethodLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, RenderingMethodLabel);

        RenderingMethodComboBox = new QComboBox(qSlicerVolumeRenderingSettingsPanel);
        RenderingMethodComboBox->setObjectName(QString::fromUtf8("RenderingMethodComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, RenderingMethodComboBox);

        QualityControlLabel = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        QualityControlLabel->setObjectName(QString::fromUtf8("QualityControlLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, QualityControlLabel);

        GPUMemoryLabel = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        GPUMemoryLabel->setObjectName(QString::fromUtf8("GPUMemoryLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, GPUMemoryLabel);

        GPUMemoryComboBox = new qSlicerGPUMemoryComboBox(qSlicerVolumeRenderingSettingsPanel);
        GPUMemoryComboBox->setObjectName(QString::fromUtf8("GPUMemoryComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, GPUMemoryComboBox);

        QualityControlComboBox = new QComboBox(qSlicerVolumeRenderingSettingsPanel);
        QualityControlComboBox->setObjectName(QString::fromUtf8("QualityControlComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, QualityControlComboBox);

        InteractiveSpeedLabel = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        InteractiveSpeedLabel->setObjectName(QString::fromUtf8("InteractiveSpeedLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, InteractiveSpeedLabel);

        InteractiveSpeedSlider = new ctkSliderWidget(qSlicerVolumeRenderingSettingsPanel);
        InteractiveSpeedSlider->setObjectName(QString::fromUtf8("InteractiveSpeedSlider"));
        InteractiveSpeedSlider->setDecimals(0);
        InteractiveSpeedSlider->setMinimum(1.000000000000000);
        InteractiveSpeedSlider->setMaximum(100.000000000000000);
        InteractiveSpeedSlider->setValue(8.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, InteractiveSpeedSlider);

        SurfaceSmoothingLabel = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        SurfaceSmoothingLabel->setObjectName(QString::fromUtf8("SurfaceSmoothingLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, SurfaceSmoothingLabel);

        SurfaceSmoothingCheckBox = new QCheckBox(qSlicerVolumeRenderingSettingsPanel);
        SurfaceSmoothingCheckBox->setObjectName(QString::fromUtf8("SurfaceSmoothingCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, SurfaceSmoothingCheckBox);

        FramerateLabel_2 = new QLabel(qSlicerVolumeRenderingSettingsPanel);
        FramerateLabel_2->setObjectName(QString::fromUtf8("FramerateLabel_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, FramerateLabel_2);

        AutoReleaseGraphicsResourcesCheckBox = new QCheckBox(qSlicerVolumeRenderingSettingsPanel);
        AutoReleaseGraphicsResourcesCheckBox->setObjectName(QString::fromUtf8("AutoReleaseGraphicsResourcesCheckBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, AutoReleaseGraphicsResourcesCheckBox);


        retranslateUi(qSlicerVolumeRenderingSettingsPanel);

        GPUMemoryComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(qSlicerVolumeRenderingSettingsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerVolumeRenderingSettingsPanel)
    {
        qSlicerVolumeRenderingSettingsPanel->setWindowTitle(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Volume Rendering Settings", nullptr));
        RenderingMethodLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Default rendering method:", nullptr));
#if QT_CONFIG(tooltip)
        RenderingMethodComboBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Default rendering method", nullptr));
#endif // QT_CONFIG(tooltip)
        QualityControlLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Default quality:", nullptr));
        GPUMemoryLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "GPU memory size:", nullptr));
#if QT_CONFIG(tooltip)
        GPUMemoryComboBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Amount of memory allocated for volume rendering on the graphic card", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QualityControlComboBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Quality control method to def", nullptr));
#endif // QT_CONFIG(tooltip)
        InteractiveSpeedLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Default interactive speed:", nullptr));
        InteractiveSpeedSlider->setSuffix(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", " fps", nullptr));
        SurfaceSmoothingLabel->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Default surface smoothing:", nullptr));
#if QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Reduce wood grain artifact to make surfaces appear smoother.", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setText(QString());
        FramerateLabel_2->setText(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Auto-release resources:", nullptr));
#if QT_CONFIG(tooltip)
        AutoReleaseGraphicsResourcesCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumeRenderingSettingsPanel", "Immediately unload volumes from graphics memory when not visible. Reduces memory usage but makes toggling volume visibility slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoReleaseGraphicsResourcesCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerVolumeRenderingSettingsPanel: public Ui_qSlicerVolumeRenderingSettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERVOLUMERENDERINGSETTINGSPANEL_H
