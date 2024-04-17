/********************************************************************************
** Form generated from reading UI file 'qSlicerMultiVolumeRenderingPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMULTIVOLUMERENDERINGPROPERTIESWIDGET_H
#define UI_QSLICERMULTIVOLUMERENDERINGPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerMultiVolumeRenderingPropertiesWidget
{
public:
    QFormLayout *formLayout;
    QLabel *RenderingTechniqueLabel;
    QComboBox *RenderingTechniqueComboBox;
    QLabel *SurfaceSmoothingLabel;
    QCheckBox *SurfaceSmoothingCheckBox;

    void setupUi(QWidget *qSlicerMultiVolumeRenderingPropertiesWidget)
    {
        if (qSlicerMultiVolumeRenderingPropertiesWidget->objectName().isEmpty())
            qSlicerMultiVolumeRenderingPropertiesWidget->setObjectName(QString::fromUtf8("qSlicerMultiVolumeRenderingPropertiesWidget"));
        qSlicerMultiVolumeRenderingPropertiesWidget->resize(236, 44);
        formLayout = new QFormLayout(qSlicerMultiVolumeRenderingPropertiesWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        RenderingTechniqueLabel = new QLabel(qSlicerMultiVolumeRenderingPropertiesWidget);
        RenderingTechniqueLabel->setObjectName(QString::fromUtf8("RenderingTechniqueLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, RenderingTechniqueLabel);

        RenderingTechniqueComboBox = new QComboBox(qSlicerMultiVolumeRenderingPropertiesWidget);
        RenderingTechniqueComboBox->setObjectName(QString::fromUtf8("RenderingTechniqueComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, RenderingTechniqueComboBox);

        SurfaceSmoothingLabel = new QLabel(qSlicerMultiVolumeRenderingPropertiesWidget);
        SurfaceSmoothingLabel->setObjectName(QString::fromUtf8("SurfaceSmoothingLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, SurfaceSmoothingLabel);

        SurfaceSmoothingCheckBox = new QCheckBox(qSlicerMultiVolumeRenderingPropertiesWidget);
        SurfaceSmoothingCheckBox->setObjectName(QString::fromUtf8("SurfaceSmoothingCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, SurfaceSmoothingCheckBox);


        retranslateUi(qSlicerMultiVolumeRenderingPropertiesWidget);

        QMetaObject::connectSlotsByName(qSlicerMultiVolumeRenderingPropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerMultiVolumeRenderingPropertiesWidget)
    {
        qSlicerMultiVolumeRenderingPropertiesWidget->setWindowTitle(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "MultiVolume GPU RayCast", nullptr));
        RenderingTechniqueLabel->setText(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "Technique:", nullptr));
#if QT_CONFIG(tooltip)
        RenderingTechniqueComboBox->setToolTip(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "Select ray casting technique for the views where the current volume is visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setToolTip(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "Option for removing wood-grain artifacts by applying random noise to raycasting", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setText(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "Surface smoothing:", nullptr));
#if QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setToolTip(QCoreApplication::translate("qSlicerMultiVolumeRenderingPropertiesWidget", "Option for removing wood-grain artifacts by applying random noise to raycasting", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerMultiVolumeRenderingPropertiesWidget: public Ui_qSlicerMultiVolumeRenderingPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMULTIVOLUMERENDERINGPROPERTIESWIDGET_H
