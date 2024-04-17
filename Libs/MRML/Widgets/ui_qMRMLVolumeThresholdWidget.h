/********************************************************************************
** Form generated from reading UI file 'qMRMLVolumeThresholdWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLVOLUMETHRESHOLDWIDGET_H
#define UI_QMRMLVOLUMETHRESHOLDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ctkRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLVolumeThresholdWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *ThresholdLabel;
    QComboBox *AutoManualComboBox;
    QHBoxLayout *horizontalLayout;
    ctkRangeWidget *VolumeThresholdRangeWidget;
    QToolButton *RangeButton;

    void setupUi(QWidget *qMRMLVolumeThresholdWidget)
    {
        if (qMRMLVolumeThresholdWidget->objectName().isEmpty())
            qMRMLVolumeThresholdWidget->setObjectName(QString::fromUtf8("qMRMLVolumeThresholdWidget"));
        qMRMLVolumeThresholdWidget->resize(300, 61);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLVolumeThresholdWidget->sizePolicy().hasHeightForWidth());
        qMRMLVolumeThresholdWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qMRMLVolumeThresholdWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ThresholdLabel = new QLabel(qMRMLVolumeThresholdWidget);
        ThresholdLabel->setObjectName(QString::fromUtf8("ThresholdLabel"));

        gridLayout->addWidget(ThresholdLabel, 0, 0, 1, 1);

        AutoManualComboBox = new QComboBox(qMRMLVolumeThresholdWidget);
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->setObjectName(QString::fromUtf8("AutoManualComboBox"));

        gridLayout->addWidget(AutoManualComboBox, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        VolumeThresholdRangeWidget = new ctkRangeWidget(qMRMLVolumeThresholdWidget);
        VolumeThresholdRangeWidget->setObjectName(QString::fromUtf8("VolumeThresholdRangeWidget"));

        horizontalLayout->addWidget(VolumeThresholdRangeWidget);

        RangeButton = new QToolButton(qMRMLVolumeThresholdWidget);
        RangeButton->setObjectName(QString::fromUtf8("RangeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":Icons/SliceMoreOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        RangeButton->setIcon(icon);
        RangeButton->setCheckable(true);

        horizontalLayout->addWidget(RangeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(qMRMLVolumeThresholdWidget);

        QMetaObject::connectSlotsByName(qMRMLVolumeThresholdWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLVolumeThresholdWidget)
    {
        qMRMLVolumeThresholdWidget->setWindowTitle(QCoreApplication::translate("qMRMLVolumeThresholdWidget", "Volume Thresholding", nullptr));
        ThresholdLabel->setText(QCoreApplication::translate("qMRMLVolumeThresholdWidget", "Threshold: ", nullptr));
        AutoManualComboBox->setItemText(0, QCoreApplication::translate("qMRMLVolumeThresholdWidget", "Auto", nullptr));
        AutoManualComboBox->setItemText(1, QCoreApplication::translate("qMRMLVolumeThresholdWidget", "Manual", nullptr));
        AutoManualComboBox->setItemText(2, QCoreApplication::translate("qMRMLVolumeThresholdWidget", "Off", nullptr));

        RangeButton->setText(QCoreApplication::translate("qMRMLVolumeThresholdWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLVolumeThresholdWidget: public Ui_qMRMLVolumeThresholdWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLVOLUMETHRESHOLDWIDGET_H
