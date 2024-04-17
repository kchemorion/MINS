/********************************************************************************
** Form generated from reading UI file 'qSlicerSegmentationsIOOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSEGMENTATIONSIOOPTIONSWIDGET_H
#define UI_QSLICERSEGMENTATIONSIOOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSegmentationsIOOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *AutoOpacitiesCheckBox;
    QLabel *ColorLabel;
    qMRMLColorTableComboBox *ColorNodeSelector;

    void setupUi(qSlicerWidget *qSlicerSegmentationsIOOptionsWidget)
    {
        if (qSlicerSegmentationsIOOptionsWidget->objectName().isEmpty())
            qSlicerSegmentationsIOOptionsWidget->setObjectName(QString::fromUtf8("qSlicerSegmentationsIOOptionsWidget"));
        qSlicerSegmentationsIOOptionsWidget->resize(394, 22);
        horizontalLayout = new QHBoxLayout(qSlicerSegmentationsIOOptionsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AutoOpacitiesCheckBox = new QCheckBox(qSlicerSegmentationsIOOptionsWidget);
        AutoOpacitiesCheckBox->setObjectName(QString::fromUtf8("AutoOpacitiesCheckBox"));
        AutoOpacitiesCheckBox->setChecked(true);

        horizontalLayout->addWidget(AutoOpacitiesCheckBox);

        ColorLabel = new QLabel(qSlicerSegmentationsIOOptionsWidget);
        ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorLabel->sizePolicy().hasHeightForWidth());
        ColorLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ColorLabel);

        ColorNodeSelector = new qMRMLColorTableComboBox(qSlicerSegmentationsIOOptionsWidget);
        ColorNodeSelector->setObjectName(QString::fromUtf8("ColorNodeSelector"));
        ColorNodeSelector->setEnabled(true);
        ColorNodeSelector->setNoneEnabled(true);
        ColorNodeSelector->setAddEnabled(false);
        ColorNodeSelector->setRemoveEnabled(false);

        horizontalLayout->addWidget(ColorNodeSelector);


        retranslateUi(qSlicerSegmentationsIOOptionsWidget);
        QObject::connect(qSlicerSegmentationsIOOptionsWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerSegmentationsIOOptionsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSegmentationsIOOptionsWidget)
    {
        qSlicerSegmentationsIOOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "Segmentations Options", nullptr));
#if QT_CONFIG(tooltip)
        AutoOpacitiesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "Automatically set opacities of the segments based on which contains which, so that no segment obscures another", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoOpacitiesCheckBox->setText(QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "Automatic Segment Opacities", nullptr));
        ColorLabel->setText(QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "Color node:", nullptr));
#if QT_CONFIG(tooltip)
        ColorNodeSelector->setToolTip(QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "Color table node used to display this volume.", nullptr));
#endif // QT_CONFIG(tooltip)
        ColorNodeSelector->setNodeTypes(QStringList()
            << QCoreApplication::translate("qSlicerSegmentationsIOOptionsWidget", "vtkMRMLColorTableNode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSegmentationsIOOptionsWidget: public Ui_qSlicerSegmentationsIOOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSEGMENTATIONSIOOPTIONSWIDGET_H
