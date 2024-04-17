/********************************************************************************
** Form generated from reading UI file 'qSlicerCPURayCastVolumeRenderingPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERCPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H
#define UI_QSLICERCPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerCPURayCastVolumeRenderingPropertiesWidget
{
public:
    QFormLayout *formLayout;
    QLabel *RenderingTechniqueLabel;
    QComboBox *RenderingTechniqueComboBox;

    void setupUi(QWidget *qSlicerCPURayCastVolumeRenderingPropertiesWidget)
    {
        if (qSlicerCPURayCastVolumeRenderingPropertiesWidget->objectName().isEmpty())
            qSlicerCPURayCastVolumeRenderingPropertiesWidget->setObjectName(QString::fromUtf8("qSlicerCPURayCastVolumeRenderingPropertiesWidget"));
        qSlicerCPURayCastVolumeRenderingPropertiesWidget->resize(236, 44);
        formLayout = new QFormLayout(qSlicerCPURayCastVolumeRenderingPropertiesWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        RenderingTechniqueLabel = new QLabel(qSlicerCPURayCastVolumeRenderingPropertiesWidget);
        RenderingTechniqueLabel->setObjectName(QString::fromUtf8("RenderingTechniqueLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, RenderingTechniqueLabel);

        RenderingTechniqueComboBox = new QComboBox(qSlicerCPURayCastVolumeRenderingPropertiesWidget);
        RenderingTechniqueComboBox->setObjectName(QString::fromUtf8("RenderingTechniqueComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, RenderingTechniqueComboBox);


        retranslateUi(qSlicerCPURayCastVolumeRenderingPropertiesWidget);

        QMetaObject::connectSlotsByName(qSlicerCPURayCastVolumeRenderingPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerCPURayCastVolumeRenderingPropertiesWidget)
    {
        qSlicerCPURayCastVolumeRenderingPropertiesWidget->setWindowTitle(QCoreApplication::translate("qSlicerCPURayCastVolumeRenderingPropertiesWidget", "GPU RayCast", nullptr));
        RenderingTechniqueLabel->setText(QCoreApplication::translate("qSlicerCPURayCastVolumeRenderingPropertiesWidget", "Technique:", nullptr));
#if QT_CONFIG(tooltip)
        RenderingTechniqueComboBox->setToolTip(QCoreApplication::translate("qSlicerCPURayCastVolumeRenderingPropertiesWidget", "Select ray casting technique for the views where the current volume is visible", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerCPURayCastVolumeRenderingPropertiesWidget: public Ui_qSlicerCPURayCastVolumeRenderingPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERCPURAYCASTVOLUMERENDERINGPROPERTIESWIDGET_H
