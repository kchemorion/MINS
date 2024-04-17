/********************************************************************************
** Form generated from reading UI file 'qMRMLScalarsDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSCALARSDISPLAYWIDGET_H
#define UI_QMRMLSCALARSDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "ctkRangeWidget.h"
#include "ctkVTKDataSetArrayComboBox.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLRangeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLScalarsDisplayWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *ScalarsVisibilityLabel;
    QCheckBox *ScalarsVisibilityCheckBox;
    QLabel *ActiveScalarLabel;
    ctkVTKDataSetArrayComboBox *ActiveScalarComboBox;
    QLabel *ScalarsColorTableLabel;
    qMRMLColorTableComboBox *ScalarsColorNodeComboBox;
    QLabel *ScalarRangeModeLabel;
    QComboBox *DisplayedScalarRangeModeComboBox;
    QLabel *DisplayedScalarRangeLabel;
    qMRMLRangeWidget *DisplayedScalarRangeWidget;
    QLabel *ThresholdLabel;
    QCheckBox *ThresholdCheckBox;
    ctkRangeWidget *ThresholdRangeWidget;

    void setupUi(QWidget *qMRMLScalarsDisplayWidget)
    {
        if (qMRMLScalarsDisplayWidget->objectName().isEmpty())
            qMRMLScalarsDisplayWidget->setObjectName(QString::fromUtf8("qMRMLScalarsDisplayWidget"));
        qMRMLScalarsDisplayWidget->resize(270, 165);
        gridLayout = new QGridLayout(qMRMLScalarsDisplayWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ScalarsVisibilityLabel = new QLabel(qMRMLScalarsDisplayWidget);
        ScalarsVisibilityLabel->setObjectName(QString::fromUtf8("ScalarsVisibilityLabel"));

        gridLayout->addWidget(ScalarsVisibilityLabel, 0, 0, 1, 1);

        ScalarsVisibilityCheckBox = new QCheckBox(qMRMLScalarsDisplayWidget);
        ScalarsVisibilityCheckBox->setObjectName(QString::fromUtf8("ScalarsVisibilityCheckBox"));

        gridLayout->addWidget(ScalarsVisibilityCheckBox, 0, 1, 1, 1);

        ActiveScalarLabel = new QLabel(qMRMLScalarsDisplayWidget);
        ActiveScalarLabel->setObjectName(QString::fromUtf8("ActiveScalarLabel"));

        gridLayout->addWidget(ActiveScalarLabel, 1, 0, 1, 1);

        ActiveScalarComboBox = new ctkVTKDataSetArrayComboBox(qMRMLScalarsDisplayWidget);
        ActiveScalarComboBox->setObjectName(QString::fromUtf8("ActiveScalarComboBox"));

        gridLayout->addWidget(ActiveScalarComboBox, 1, 1, 1, 2);

        ScalarsColorTableLabel = new QLabel(qMRMLScalarsDisplayWidget);
        ScalarsColorTableLabel->setObjectName(QString::fromUtf8("ScalarsColorTableLabel"));

        gridLayout->addWidget(ScalarsColorTableLabel, 2, 0, 1, 1);

        ScalarsColorNodeComboBox = new qMRMLColorTableComboBox(qMRMLScalarsDisplayWidget);
        ScalarsColorNodeComboBox->setObjectName(QString::fromUtf8("ScalarsColorNodeComboBox"));

        gridLayout->addWidget(ScalarsColorNodeComboBox, 2, 1, 1, 2);

        ScalarRangeModeLabel = new QLabel(qMRMLScalarsDisplayWidget);
        ScalarRangeModeLabel->setObjectName(QString::fromUtf8("ScalarRangeModeLabel"));

        gridLayout->addWidget(ScalarRangeModeLabel, 3, 0, 1, 1);

        DisplayedScalarRangeModeComboBox = new QComboBox(qMRMLScalarsDisplayWidget);
        DisplayedScalarRangeModeComboBox->addItem(QString());
        DisplayedScalarRangeModeComboBox->addItem(QString());
        DisplayedScalarRangeModeComboBox->addItem(QString());
        DisplayedScalarRangeModeComboBox->addItem(QString());
        DisplayedScalarRangeModeComboBox->addItem(QString());
        DisplayedScalarRangeModeComboBox->setObjectName(QString::fromUtf8("DisplayedScalarRangeModeComboBox"));

        gridLayout->addWidget(DisplayedScalarRangeModeComboBox, 3, 1, 1, 2);

        DisplayedScalarRangeLabel = new QLabel(qMRMLScalarsDisplayWidget);
        DisplayedScalarRangeLabel->setObjectName(QString::fromUtf8("DisplayedScalarRangeLabel"));

        gridLayout->addWidget(DisplayedScalarRangeLabel, 4, 0, 1, 1);

        DisplayedScalarRangeWidget = new qMRMLRangeWidget(qMRMLScalarsDisplayWidget);
        DisplayedScalarRangeWidget->setObjectName(QString::fromUtf8("DisplayedScalarRangeWidget"));

        gridLayout->addWidget(DisplayedScalarRangeWidget, 4, 1, 1, 2);

        ThresholdLabel = new QLabel(qMRMLScalarsDisplayWidget);
        ThresholdLabel->setObjectName(QString::fromUtf8("ThresholdLabel"));

        gridLayout->addWidget(ThresholdLabel, 5, 0, 1, 1);

        ThresholdCheckBox = new QCheckBox(qMRMLScalarsDisplayWidget);
        ThresholdCheckBox->setObjectName(QString::fromUtf8("ThresholdCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThresholdCheckBox->sizePolicy().hasHeightForWidth());
        ThresholdCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ThresholdCheckBox, 5, 1, 1, 1);

        ThresholdRangeWidget = new ctkRangeWidget(qMRMLScalarsDisplayWidget);
        ThresholdRangeWidget->setObjectName(QString::fromUtf8("ThresholdRangeWidget"));

        gridLayout->addWidget(ThresholdRangeWidget, 5, 2, 1, 1);


        retranslateUi(qMRMLScalarsDisplayWidget);

        DisplayedScalarRangeModeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(qMRMLScalarsDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLScalarsDisplayWidget)
    {
        qMRMLScalarsDisplayWidget->setWindowTitle(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Scalars Display", nullptr));
        ScalarsVisibilityLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Visibility:", nullptr));
        ScalarsVisibilityCheckBox->setText(QString());
        ActiveScalarLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Active Scalar:", nullptr));
        ScalarsColorTableLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Color Table:", nullptr));
        ScalarRangeModeLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Scalar Range Mode:", nullptr));
        DisplayedScalarRangeModeComboBox->setItemText(0, QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Manual", nullptr));
        DisplayedScalarRangeModeComboBox->setItemText(1, QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Data scalar range (auto)", nullptr));
        DisplayedScalarRangeModeComboBox->setItemText(2, QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Color table (LUT)", nullptr));
        DisplayedScalarRangeModeComboBox->setItemText(3, QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Data type", nullptr));
        DisplayedScalarRangeModeComboBox->setItemText(4, QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Direct color mapping", nullptr));

#if QT_CONFIG(tooltip)
        DisplayedScalarRangeModeComboBox->setToolTip(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Set the scalar range mode flag. Data (auto) updates the Display Scalar Range from the scalar range of the data. Direct color mapping option bypasses lookup table and uses scalar values as RGB color.", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayedScalarRangeLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Displayed Range:", nullptr));
#if QT_CONFIG(tooltip)
        DisplayedScalarRangeWidget->setToolTip(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Set the display scalar range, used when the Display option is selected.", nullptr));
#endif // QT_CONFIG(tooltip)
        ThresholdLabel->setText(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Threshold:", nullptr));
#if QT_CONFIG(tooltip)
        ThresholdCheckBox->setToolTip(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Apply thresholding to your displayed model based on its scalar values. Some cells normals might be flipped, in which case you\n"
"should set \"backface\" and \"frontface\" to OFF in the Representation options to visualize all cells.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ThresholdRangeWidget->setToolTip(QCoreApplication::translate("qMRMLScalarsDisplayWidget", "Range used to threshold scalar values.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLScalarsDisplayWidget: public Ui_qMRMLScalarsDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSCALARSDISPLAYWIDGET_H
