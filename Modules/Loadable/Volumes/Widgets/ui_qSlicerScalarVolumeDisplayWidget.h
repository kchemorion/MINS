/********************************************************************************
** Form generated from reading UI file 'qSlicerScalarVolumeDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSCALARVOLUMEDISPLAYWIDGET_H
#define UI_QSLICERSCALARVOLUMEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleGroupBox.h"
#include "ctkTransferFunctionView.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLVolumeThresholdWidget.h"
#include "qMRMLWindowLevelWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerScalarVolumeDisplayWidget
{
public:
    QFormLayout *formLayout;
    QGroupBox *PresetsGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *LookupTableLabel;
    qMRMLColorTableComboBox *ColorTableComboBox;
    QLabel *InterpolateLabel;
    QCheckBox *InterpolateCheckbox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    qMRMLWindowLevelWidget *MRMLWindowLevelWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    qMRMLVolumeThresholdWidget *MRMLVolumeThresholdWidget;
    ctkCollapsibleGroupBox *HistogramGroupBox;
    QGridLayout *gridLayout_2;
    ctkTransferFunctionView *TransferFunctionView;

    void setupUi(qSlicerWidget *qSlicerScalarVolumeDisplayWidget)
    {
        if (qSlicerScalarVolumeDisplayWidget->objectName().isEmpty())
            qSlicerScalarVolumeDisplayWidget->setObjectName(QString::fromUtf8("qSlicerScalarVolumeDisplayWidget"));
        qSlicerScalarVolumeDisplayWidget->resize(302, 224);
        formLayout = new QFormLayout(qSlicerScalarVolumeDisplayWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        PresetsGroupBox = new QGroupBox(qSlicerScalarVolumeDisplayWidget);
        PresetsGroupBox->setObjectName(QString::fromUtf8("PresetsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PresetsGroupBox->sizePolicy().hasHeightForWidth());
        PresetsGroupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(PresetsGroupBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, PresetsGroupBox);

        LookupTableLabel = new QLabel(qSlicerScalarVolumeDisplayWidget);
        LookupTableLabel->setObjectName(QString::fromUtf8("LookupTableLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, LookupTableLabel);

        ColorTableComboBox = new qMRMLColorTableComboBox(qSlicerScalarVolumeDisplayWidget);
        ColorTableComboBox->setObjectName(QString::fromUtf8("ColorTableComboBox"));
        ColorTableComboBox->setShowChildNodeTypes(true);
        ColorTableComboBox->setAddEnabled(false);
        ColorTableComboBox->setRemoveEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, ColorTableComboBox);

        InterpolateLabel = new QLabel(qSlicerScalarVolumeDisplayWidget);
        InterpolateLabel->setObjectName(QString::fromUtf8("InterpolateLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, InterpolateLabel);

        InterpolateCheckbox = new QCheckBox(qSlicerScalarVolumeDisplayWidget);
        InterpolateCheckbox->setObjectName(QString::fromUtf8("InterpolateCheckbox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, InterpolateCheckbox);

        groupBox = new QGroupBox(qSlicerScalarVolumeDisplayWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        MRMLWindowLevelWidget = new qMRMLWindowLevelWidget(groupBox);
        MRMLWindowLevelWidget->setObjectName(QString::fromUtf8("MRMLWindowLevelWidget"));

        verticalLayout->addWidget(MRMLWindowLevelWidget);


        formLayout->setWidget(3, QFormLayout::SpanningRole, groupBox);

        groupBox_2 = new QGroupBox(qSlicerScalarVolumeDisplayWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        MRMLVolumeThresholdWidget = new qMRMLVolumeThresholdWidget(groupBox_2);
        MRMLVolumeThresholdWidget->setObjectName(QString::fromUtf8("MRMLVolumeThresholdWidget"));

        verticalLayout_2->addWidget(MRMLVolumeThresholdWidget);


        formLayout->setWidget(4, QFormLayout::SpanningRole, groupBox_2);

        HistogramGroupBox = new ctkCollapsibleGroupBox(qSlicerScalarVolumeDisplayWidget);
        HistogramGroupBox->setObjectName(QString::fromUtf8("HistogramGroupBox"));
        HistogramGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(HistogramGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 6, 0, 0);
        TransferFunctionView = new ctkTransferFunctionView(HistogramGroupBox);
        TransferFunctionView->setObjectName(QString::fromUtf8("TransferFunctionView"));
        sizePolicy.setHeightForWidth(TransferFunctionView->sizePolicy().hasHeightForWidth());
        TransferFunctionView->setSizePolicy(sizePolicy);
        TransferFunctionView->setMinimumSize(QSize(0, 100));

        gridLayout_2->addWidget(TransferFunctionView, 0, 0, 1, 1);


        formLayout->setWidget(5, QFormLayout::SpanningRole, HistogramGroupBox);


        retranslateUi(qSlicerScalarVolumeDisplayWidget);
        QObject::connect(qSlicerScalarVolumeDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerScalarVolumeDisplayWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerScalarVolumeDisplayWidget)
    {
        qSlicerScalarVolumeDisplayWidget->setWindowTitle(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Scalar Volume Display", nullptr));
        PresetsGroupBox->setTitle(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Presets:", nullptr));
        LookupTableLabel->setText(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Lookup Table:", nullptr));
#if QT_CONFIG(tooltip)
        ColorTableComboBox->setToolTip(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Select the color mapping for scalar volumes to colors.", nullptr));
#endif // QT_CONFIG(tooltip)
        InterpolateLabel->setText(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Interpolate:", nullptr));
#if QT_CONFIG(tooltip)
        InterpolateCheckbox->setToolTip(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "When checked, slice views will display linearly interpolated slices through input volumes. Unchecked indicates nearest neighbor resampling.", nullptr));
#endif // QT_CONFIG(tooltip)
        InterpolateCheckbox->setText(QString());
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
#if QT_CONFIG(tooltip)
        HistogramGroupBox->setToolTip(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Shows the number of pixels (y axis) vs the image intensity (x axis) over a background of the current window/level and threshold mapping.", nullptr));
#endif // QT_CONFIG(tooltip)
        HistogramGroupBox->setTitle(QCoreApplication::translate("qSlicerScalarVolumeDisplayWidget", "Histogram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerScalarVolumeDisplayWidget: public Ui_qSlicerScalarVolumeDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSCALARVOLUMEDISPLAYWIDGET_H
