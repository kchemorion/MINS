/********************************************************************************
** Form generated from reading UI file 'qMRMLTransformSliders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTRANSFORMSLIDERS_H
#define UI_QMRMLTRANSFORMSLIDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleGroupBox.h"
#include "ctkDoubleSpinBox.h"
#include "ctkSliderWidget.h"
#include "qMRMLLinearTransformSlider.h"
#include "qMRMLSliderWidget.h"
#include "qMRMLSpinBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLTransformSliders
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleGroupBox *SlidersGroupBox;
    QGridLayout *gridLayout;
    QLabel *LRLabel;
    qMRMLLinearTransformSlider *LRSlider;
    QLabel *PALabel;
    qMRMLLinearTransformSlider *PASlider;
    QLabel *ISLabel;
    qMRMLLinearTransformSlider *ISSlider;
    QWidget *MinMaxWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *MinLabel;
    qMRMLSpinBox *MinValueSpinBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *MaxLabel;
    qMRMLSpinBox *MaxValueSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(qMRMLWidget *qMRMLTransformSliders)
    {
        if (qMRMLTransformSliders->objectName().isEmpty())
            qMRMLTransformSliders->setObjectName(QString::fromUtf8("qMRMLTransformSliders"));
        qMRMLTransformSliders->resize(216, 143);
        verticalLayout = new QVBoxLayout(qMRMLTransformSliders);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SlidersGroupBox = new ctkCollapsibleGroupBox(qMRMLTransformSliders);
        SlidersGroupBox->setObjectName(QString::fromUtf8("SlidersGroupBox"));
        gridLayout = new QGridLayout(SlidersGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LRLabel = new QLabel(SlidersGroupBox);
        LRLabel->setObjectName(QString::fromUtf8("LRLabel"));

        gridLayout->addWidget(LRLabel, 0, 0, 1, 1);

        LRSlider = new qMRMLLinearTransformSlider(SlidersGroupBox);
        LRSlider->setObjectName(QString::fromUtf8("LRSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LRSlider->sizePolicy().hasHeightForWidth());
        LRSlider->setSizePolicy(sizePolicy);
        LRSlider->setMinimum(-200.000000000000000);
        LRSlider->setMaximum(200.000000000000000);
        LRSlider->setSynchronizeSiblings(ctkSliderWidget::NoSynchronize);

        gridLayout->addWidget(LRSlider, 0, 1, 1, 1);

        PALabel = new QLabel(SlidersGroupBox);
        PALabel->setObjectName(QString::fromUtf8("PALabel"));

        gridLayout->addWidget(PALabel, 1, 0, 1, 1);

        PASlider = new qMRMLLinearTransformSlider(SlidersGroupBox);
        PASlider->setObjectName(QString::fromUtf8("PASlider"));
        sizePolicy.setHeightForWidth(PASlider->sizePolicy().hasHeightForWidth());
        PASlider->setSizePolicy(sizePolicy);
        PASlider->setMinimum(-200.000000000000000);
        PASlider->setMaximum(200.000000000000000);
        PASlider->setSynchronizeSiblings(ctkSliderWidget::NoSynchronize);
        PASlider->setTypeOfTransform(qMRMLLinearTransformSlider::TRANSLATION_PA);

        gridLayout->addWidget(PASlider, 1, 1, 1, 1);

        ISLabel = new QLabel(SlidersGroupBox);
        ISLabel->setObjectName(QString::fromUtf8("ISLabel"));

        gridLayout->addWidget(ISLabel, 2, 0, 1, 1);

        ISSlider = new qMRMLLinearTransformSlider(SlidersGroupBox);
        ISSlider->setObjectName(QString::fromUtf8("ISSlider"));
        sizePolicy.setHeightForWidth(ISSlider->sizePolicy().hasHeightForWidth());
        ISSlider->setSizePolicy(sizePolicy);
        ISSlider->setMinimum(-200.000000000000000);
        ISSlider->setMaximum(200.000000000000000);
        ISSlider->setSynchronizeSiblings(ctkSliderWidget::NoSynchronize);
        ISSlider->setTypeOfTransform(qMRMLLinearTransformSlider::TRANSLATION_IS);

        gridLayout->addWidget(ISSlider, 2, 1, 1, 1);

        MinMaxWidget = new QWidget(SlidersGroupBox);
        MinMaxWidget->setObjectName(QString::fromUtf8("MinMaxWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MinMaxWidget->sizePolicy().hasHeightForWidth());
        MinMaxWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(MinMaxWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MinLabel = new QLabel(MinMaxWidget);
        MinLabel->setObjectName(QString::fromUtf8("MinLabel"));

        horizontalLayout_2->addWidget(MinLabel);

        MinValueSpinBox = new qMRMLSpinBox(MinMaxWidget);
        MinValueSpinBox->setObjectName(QString::fromUtf8("MinValueSpinBox"));
        sizePolicy.setHeightForWidth(MinValueSpinBox->sizePolicy().hasHeightForWidth());
        MinValueSpinBox->setSizePolicy(sizePolicy);
        MinValueSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);
        MinValueSpinBox->setMinimum(-1000000000.000000000000000);
        MinValueSpinBox->setValue(-200.000000000000000);
        MinValueSpinBox->setQuantity(QString::fromUtf8("length"));
        MinValueSpinBox->setUnitAwareProperties(qMRMLSpinBox::Precision|qMRMLSpinBox::Prefix|qMRMLSpinBox::Scaling|qMRMLSpinBox::Suffix);

        horizontalLayout_2->addWidget(MinValueSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MaxLabel = new QLabel(MinMaxWidget);
        MaxLabel->setObjectName(QString::fromUtf8("MaxLabel"));

        horizontalLayout->addWidget(MaxLabel);

        MaxValueSpinBox = new qMRMLSpinBox(MinMaxWidget);
        MaxValueSpinBox->setObjectName(QString::fromUtf8("MaxValueSpinBox"));
        sizePolicy.setHeightForWidth(MaxValueSpinBox->sizePolicy().hasHeightForWidth());
        MaxValueSpinBox->setSizePolicy(sizePolicy);
        MaxValueSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);
        MaxValueSpinBox->setMinimum(-1000000000.000000000000000);
        MaxValueSpinBox->setMaximum(1000000000.000000000000000);
        MaxValueSpinBox->setValue(200.000000000000000);
        MaxValueSpinBox->setQuantity(QString::fromUtf8("length"));
        MaxValueSpinBox->setUnitAwareProperties(qMRMLSpinBox::Precision|qMRMLSpinBox::Prefix|qMRMLSpinBox::Scaling|qMRMLSpinBox::Suffix);

        horizontalLayout->addWidget(MaxValueSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addWidget(MinMaxWidget, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);


        verticalLayout->addWidget(SlidersGroupBox);


        retranslateUi(qMRMLTransformSliders);
        QObject::connect(MinValueSpinBox, SIGNAL(decimalsChanged(int)), MaxValueSpinBox, SLOT(setDecimals(int)));
        QObject::connect(MaxValueSpinBox, SIGNAL(decimalsChanged(int)), LRSlider, SLOT(setDecimals(int)));
        QObject::connect(LRSlider, SIGNAL(decimalsChanged(int)), MinValueSpinBox, SLOT(setDecimals(int)));
        QObject::connect(qMRMLTransformSliders, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), LRSlider, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformSliders, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PASlider, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformSliders, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ISSlider, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformSliders, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MaxValueSpinBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLTransformSliders, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MinValueSpinBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLTransformSliders);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLTransformSliders)
    {
        qMRMLTransformSliders->setWindowTitle(QCoreApplication::translate("qMRMLTransformSliders", "Transform", nullptr));
        SlidersGroupBox->setTitle(QCoreApplication::translate("qMRMLTransformSliders", "Translation", nullptr));
#if QT_CONFIG(tooltip)
        LRLabel->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "Left-Right", nullptr));
#endif // QT_CONFIG(tooltip)
        LRLabel->setText(QCoreApplication::translate("qMRMLTransformSliders", "LR", nullptr));
#if QT_CONFIG(tooltip)
        LRSlider->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "L<-->R", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PALabel->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "Posterior-Anterior", nullptr));
#endif // QT_CONFIG(tooltip)
        PALabel->setText(QCoreApplication::translate("qMRMLTransformSliders", "PA", nullptr));
#if QT_CONFIG(tooltip)
        PASlider->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "P<-->A", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ISLabel->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "Inferior-Superior", nullptr));
#endif // QT_CONFIG(tooltip)
        ISLabel->setText(QCoreApplication::translate("qMRMLTransformSliders", "IS", nullptr));
#if QT_CONFIG(tooltip)
        ISSlider->setToolTip(QCoreApplication::translate("qMRMLTransformSliders", "I<-->S", nullptr));
#endif // QT_CONFIG(tooltip)
        MinLabel->setText(QCoreApplication::translate("qMRMLTransformSliders", "Min", nullptr));
        MaxLabel->setText(QCoreApplication::translate("qMRMLTransformSliders", "Max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLTransformSliders: public Ui_qMRMLTransformSliders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTRANSFORMSLIDERS_H
