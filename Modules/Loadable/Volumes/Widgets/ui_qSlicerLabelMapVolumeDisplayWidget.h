/********************************************************************************
** Form generated from reading UI file 'qSlicerLabelMapVolumeDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERLABELMAPVOLUMEDISPLAYWIDGET_H
#define UI_QSLICERLABELMAPVOLUMEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerLabelMapVolumeDisplayWidget
{
public:
    QGridLayout *gridLayout;
    QSpinBox *SliceIntersectionThicknessSpinBox;
    qMRMLColorTableComboBox *ColorTableComboBox;
    QLabel *LookupTableLabel;
    QLabel *SliceIntersectionThicknessLabel;

    void setupUi(qSlicerWidget *qSlicerLabelMapVolumeDisplayWidget)
    {
        if (qSlicerLabelMapVolumeDisplayWidget->objectName().isEmpty())
            qSlicerLabelMapVolumeDisplayWidget->setObjectName(QString::fromUtf8("qSlicerLabelMapVolumeDisplayWidget"));
        qSlicerLabelMapVolumeDisplayWidget->resize(231, 50);
        gridLayout = new QGridLayout(qSlicerLabelMapVolumeDisplayWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SliceIntersectionThicknessSpinBox = new QSpinBox(qSlicerLabelMapVolumeDisplayWidget);
        SliceIntersectionThicknessSpinBox->setObjectName(QString::fromUtf8("SliceIntersectionThicknessSpinBox"));
        SliceIntersectionThicknessSpinBox->setMinimum(1);
        SliceIntersectionThicknessSpinBox->setMaximum(20);
        SliceIntersectionThicknessSpinBox->setSingleStep(1);
        SliceIntersectionThicknessSpinBox->setValue(3);

        gridLayout->addWidget(SliceIntersectionThicknessSpinBox, 1, 1, 1, 1);

        ColorTableComboBox = new qMRMLColorTableComboBox(qSlicerLabelMapVolumeDisplayWidget);
        ColorTableComboBox->setObjectName(QString::fromUtf8("ColorTableComboBox"));
        ColorTableComboBox->setAddEnabled(false);
        ColorTableComboBox->setRemoveEnabled(false);

        gridLayout->addWidget(ColorTableComboBox, 0, 1, 1, 1);

        LookupTableLabel = new QLabel(qSlicerLabelMapVolumeDisplayWidget);
        LookupTableLabel->setObjectName(QString::fromUtf8("LookupTableLabel"));

        gridLayout->addWidget(LookupTableLabel, 0, 0, 1, 1);

        SliceIntersectionThicknessLabel = new QLabel(qSlicerLabelMapVolumeDisplayWidget);
        SliceIntersectionThicknessLabel->setObjectName(QString::fromUtf8("SliceIntersectionThicknessLabel"));

        gridLayout->addWidget(SliceIntersectionThicknessLabel, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        SliceIntersectionThicknessLabel->setBuddy(SliceIntersectionThicknessSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(qSlicerLabelMapVolumeDisplayWidget);
        QObject::connect(qSlicerLabelMapVolumeDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerLabelMapVolumeDisplayWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerLabelMapVolumeDisplayWidget)
    {
        qSlicerLabelMapVolumeDisplayWidget->setWindowTitle(QCoreApplication::translate("qSlicerLabelMapVolumeDisplayWidget", "Labelmap Volume Display Properties", nullptr));
#if QT_CONFIG(tooltip)
        SliceIntersectionThicknessSpinBox->setToolTip(QCoreApplication::translate("qSlicerLabelMapVolumeDisplayWidget", "When displaying the label map with the outline/not filled option, this controls the width of the outline.", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceIntersectionThicknessSpinBox->setSuffix(QCoreApplication::translate("qSlicerLabelMapVolumeDisplayWidget", " px", nullptr));
        LookupTableLabel->setText(QCoreApplication::translate("qSlicerLabelMapVolumeDisplayWidget", "Lookup Table:", nullptr));
        SliceIntersectionThicknessLabel->setText(QCoreApplication::translate("qSlicerLabelMapVolumeDisplayWidget", "Label Outline &Thickness:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerLabelMapVolumeDisplayWidget: public Ui_qSlicerLabelMapVolumeDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERLABELMAPVOLUMEDISPLAYWIDGET_H
