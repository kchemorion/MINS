/********************************************************************************
** Form generated from reading UI file 'qSlicerDiffusionTensorVolumeDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDIFFUSIONTENSORVOLUMEDISPLAYWIDGET_H
#define UI_QSLICERDIFFUSIONTENSORVOLUMEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleGroupBox.h"
#include "qMRMLScalarInvariantComboBox.h"
#include "qSlicerDTISliceDisplayWidget.h"
#include "qSlicerScalarVolumeDisplayWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerDiffusionTensorVolumeDisplayWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_2;
    QFormLayout *formLayout;
    QLabel *ScalarInvariantLabel;
    qMRMLScalarInvariantComboBox *ScalarInvariantComboBox;
    qSlicerScalarVolumeDisplayWidget *ScalarVolumeDisplayWidget;
    ctkCollapsibleGroupBox *GlyphsOnSlicesDisplayCollapsibleGroupBox;
    QFormLayout *formLayout_4;
    QLabel *GlyphVisibilityLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *RedSliceCheckBox;
    QCheckBox *YellowSliceCheckBox;
    QCheckBox *GreenSliceCheckBox;
    qSlicerDTISliceDisplayWidget *DTISliceDisplayWidget;

    void setupUi(qSlicerWidget *qSlicerDiffusionTensorVolumeDisplayWidget)
    {
        if (qSlicerDiffusionTensorVolumeDisplayWidget->objectName().isEmpty())
            qSlicerDiffusionTensorVolumeDisplayWidget->setObjectName(QString::fromUtf8("qSlicerDiffusionTensorVolumeDisplayWidget"));
        qSlicerDiffusionTensorVolumeDisplayWidget->resize(271, 121);
        verticalLayout = new QVBoxLayout(qSlicerDiffusionTensorVolumeDisplayWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        CollapsibleGroupBox_2 = new ctkCollapsibleGroupBox(qSlicerDiffusionTensorVolumeDisplayWidget);
        CollapsibleGroupBox_2->setObjectName(QString::fromUtf8("CollapsibleGroupBox_2"));
        formLayout = new QFormLayout(CollapsibleGroupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ScalarInvariantLabel = new QLabel(CollapsibleGroupBox_2);
        ScalarInvariantLabel->setObjectName(QString::fromUtf8("ScalarInvariantLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ScalarInvariantLabel);

        ScalarInvariantComboBox = new qMRMLScalarInvariantComboBox(CollapsibleGroupBox_2);
        ScalarInvariantComboBox->setObjectName(QString::fromUtf8("ScalarInvariantComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ScalarInvariantComboBox);

        ScalarVolumeDisplayWidget = new qSlicerScalarVolumeDisplayWidget(CollapsibleGroupBox_2);
        ScalarVolumeDisplayWidget->setObjectName(QString::fromUtf8("ScalarVolumeDisplayWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, ScalarVolumeDisplayWidget);


        verticalLayout->addWidget(CollapsibleGroupBox_2);

        GlyphsOnSlicesDisplayCollapsibleGroupBox = new ctkCollapsibleGroupBox(qSlicerDiffusionTensorVolumeDisplayWidget);
        GlyphsOnSlicesDisplayCollapsibleGroupBox->setObjectName(QString::fromUtf8("GlyphsOnSlicesDisplayCollapsibleGroupBox"));
        formLayout_4 = new QFormLayout(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        GlyphVisibilityLabel = new QLabel(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        GlyphVisibilityLabel->setObjectName(QString::fromUtf8("GlyphVisibilityLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, GlyphVisibilityLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RedSliceCheckBox = new QCheckBox(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        RedSliceCheckBox->setObjectName(QString::fromUtf8("RedSliceCheckBox"));

        horizontalLayout->addWidget(RedSliceCheckBox);

        YellowSliceCheckBox = new QCheckBox(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        YellowSliceCheckBox->setObjectName(QString::fromUtf8("YellowSliceCheckBox"));

        horizontalLayout->addWidget(YellowSliceCheckBox);

        GreenSliceCheckBox = new QCheckBox(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        GreenSliceCheckBox->setObjectName(QString::fromUtf8("GreenSliceCheckBox"));

        horizontalLayout->addWidget(GreenSliceCheckBox);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        DTISliceDisplayWidget = new qSlicerDTISliceDisplayWidget(GlyphsOnSlicesDisplayCollapsibleGroupBox);
        DTISliceDisplayWidget->setObjectName(QString::fromUtf8("DTISliceDisplayWidget"));

        formLayout_4->setWidget(1, QFormLayout::SpanningRole, DTISliceDisplayWidget);


        verticalLayout->addWidget(GlyphsOnSlicesDisplayCollapsibleGroupBox);


        retranslateUi(qSlicerDiffusionTensorVolumeDisplayWidget);
        QObject::connect(qSlicerDiffusionTensorVolumeDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ScalarVolumeDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerDiffusionTensorVolumeDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), DTISliceDisplayWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerDiffusionTensorVolumeDisplayWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerDiffusionTensorVolumeDisplayWidget)
    {
        qSlicerDiffusionTensorVolumeDisplayWidget->setWindowTitle(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Tensor Display Properties", nullptr));
        CollapsibleGroupBox_2->setTitle(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Scalar Display", nullptr));
        ScalarInvariantLabel->setText(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Scalar Mode:", nullptr));
        GlyphsOnSlicesDisplayCollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Glyphs on Slices Display", nullptr));
        GlyphVisibilityLabel->setText(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Slice Visibility:", nullptr));
        RedSliceCheckBox->setText(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Red", nullptr));
        YellowSliceCheckBox->setText(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Yellow", nullptr));
        GreenSliceCheckBox->setText(QCoreApplication::translate("qSlicerDiffusionTensorVolumeDisplayWidget", "Green", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerDiffusionTensorVolumeDisplayWidget: public Ui_qSlicerDiffusionTensorVolumeDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDIFFUSIONTENSORVOLUMEDISPLAYWIDGET_H
