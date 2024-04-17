/********************************************************************************
** Form generated from reading UI file 'qSlicerGPURayCastVolumeRenderingPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERGPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H
#define UI_QSLICERGPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerGPURayCastVolumeRenderingPropertiesWidget
{
public:
    QFormLayout *formLayout;
    QLabel *RenderingTechniqueLabel;
    QComboBox *RenderingTechniqueComboBox;
    QLabel *SurfaceSmoothingLabel;
    QCheckBox *SurfaceSmoothingCheckBox;

    void setupUi(QWidget *qSlicerGPURayCastVolumeRenderingPropertiesWidget)
    {
        if (qSlicerGPURayCastVolumeRenderingPropertiesWidget->objectName().isEmpty())
            qSlicerGPURayCastVolumeRenderingPropertiesWidget->setObjectName(QString::fromUtf8("qSlicerGPURayCastVolumeRenderingPropertiesWidget"));
        qSlicerGPURayCastVolumeRenderingPropertiesWidget->resize(236, 44);
        formLayout = new QFormLayout(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        RenderingTechniqueLabel = new QLabel(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
        RenderingTechniqueLabel->setObjectName(QString::fromUtf8("RenderingTechniqueLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, RenderingTechniqueLabel);

        RenderingTechniqueComboBox = new QComboBox(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
        RenderingTechniqueComboBox->setObjectName(QString::fromUtf8("RenderingTechniqueComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, RenderingTechniqueComboBox);

        SurfaceSmoothingLabel = new QLabel(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
        SurfaceSmoothingLabel->setObjectName(QString::fromUtf8("SurfaceSmoothingLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, SurfaceSmoothingLabel);

        SurfaceSmoothingCheckBox = new QCheckBox(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
        SurfaceSmoothingCheckBox->setObjectName(QString::fromUtf8("SurfaceSmoothingCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, SurfaceSmoothingCheckBox);


        retranslateUi(qSlicerGPURayCastVolumeRenderingPropertiesWidget);

        QMetaObject::connectSlotsByName(qSlicerGPURayCastVolumeRenderingPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerGPURayCastVolumeRenderingPropertiesWidget)
    {
        qSlicerGPURayCastVolumeRenderingPropertiesWidget->setWindowTitle(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "GPU RayCast", nullptr));
        RenderingTechniqueLabel->setText(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "Technique:", nullptr));
#if QT_CONFIG(tooltip)
        RenderingTechniqueComboBox->setToolTip(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "Select ray casting technique for the views where the current volume is visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setToolTip(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "Option for removing wood-grain artifacts by applying random noise to raycasting", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setText(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "Surface smoothing:", nullptr));
#if QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setToolTip(QCoreApplication::translate("qSlicerGPURayCastVolumeRenderingPropertiesWidget", "Option for removing wood-grain artifacts by applying random noise to raycasting", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerGPURayCastVolumeRenderingPropertiesWidget: public Ui_qSlicerGPURayCastVolumeRenderingPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERGPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H
