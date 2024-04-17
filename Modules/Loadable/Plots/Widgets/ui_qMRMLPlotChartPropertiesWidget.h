/********************************************************************************
** Form generated from reading UI file 'qMRMLPlotChartPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLPLOTCHARTPROPERTIESWIDGET_H
#define UI_QMRMLPLOTCHARTPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "ctkDoubleSpinBox.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLPlotChartPropertiesWidget
{
public:
    QFormLayout *formLayout;
    QLabel *plotDataSeriesLabel;
    qMRMLCheckableNodeComboBox *plotSeriesComboBox;
    QLabel *chartTitleLabel;
    QLineEdit *titleLineEdit;
    QLabel *xAxisTitleLabel;
    QLineEdit *xAxisLabelLineEdit;
    QLabel *xAxisRangeLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *xAxisManualRangeCheckBox;
    ctkDoubleSpinBox *xAxisRangeMinDoubleSpinBox;
    ctkDoubleSpinBox *xAxisRangeMaxDoubleSpinBox;
    QLabel *yAxisRangeLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *yAxisManualRangeCheckBox;
    ctkDoubleSpinBox *yAxisRangeMinDoubleSpinBox;
    ctkDoubleSpinBox *yAxisRangeMaxDoubleSpinBox;
    QLabel *yAxisTitleLabel;
    QLineEdit *yAxisLabelLineEdit;
    QComboBox *fontTypeComboBox;
    QLabel *fontTypeLabel;
    QLabel *titleFontSizeLabel;
    ctkDoubleSpinBox *titleFontSizeDoubleSpinBox;
    QLabel *axisTitleFontSizeLabel;
    ctkDoubleSpinBox *axisTitleFontSizeDoubleSpinBox;
    QLabel *axisLabelFontSizeLabel;
    ctkDoubleSpinBox *axisLabelFontSizeDoubleSpinBox;
    QLabel *legendVisibleLabel;
    QCheckBox *legendVisibleCheckBox;
    QLabel *gridVisibleLabel;
    QLabel *legendFontSizeLabel;
    ctkDoubleSpinBox *legendFontSizeDoubleSpinBox;
    QLabel *logScaleLabel;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *xAxisLogScaleCheckBox;
    QCheckBox *yAxisLogScaleCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *gridVisibleCheckBox;

    void setupUi(qMRMLWidget *qMRMLPlotChartPropertiesWidget)
    {
        if (qMRMLPlotChartPropertiesWidget->objectName().isEmpty())
            qMRMLPlotChartPropertiesWidget->setObjectName(QString::fromUtf8("qMRMLPlotChartPropertiesWidget"));
        qMRMLPlotChartPropertiesWidget->resize(555, 584);
        formLayout = new QFormLayout(qMRMLPlotChartPropertiesWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        plotDataSeriesLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        plotDataSeriesLabel->setObjectName(QString::fromUtf8("plotDataSeriesLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, plotDataSeriesLabel);

        plotSeriesComboBox = new qMRMLCheckableNodeComboBox(qMRMLPlotChartPropertiesWidget);
        plotSeriesComboBox->setObjectName(QString::fromUtf8("plotSeriesComboBox"));
        plotSeriesComboBox->setFocusPolicy(Qt::TabFocus);
        plotSeriesComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLPlotSeriesNode"));
        plotSeriesComboBox->setNoneEnabled(false);
        plotSeriesComboBox->setAddEnabled(true);
        plotSeriesComboBox->setRemoveEnabled(true);
        plotSeriesComboBox->setEditEnabled(false);
        plotSeriesComboBox->setRenameEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, plotSeriesComboBox);

        chartTitleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        chartTitleLabel->setObjectName(QString::fromUtf8("chartTitleLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, chartTitleLabel);

        titleLineEdit = new QLineEdit(qMRMLPlotChartPropertiesWidget);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setDragEnabled(false);
        titleLineEdit->setReadOnly(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, titleLineEdit);

        xAxisTitleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        xAxisTitleLabel->setObjectName(QString::fromUtf8("xAxisTitleLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, xAxisTitleLabel);

        xAxisLabelLineEdit = new QLineEdit(qMRMLPlotChartPropertiesWidget);
        xAxisLabelLineEdit->setObjectName(QString::fromUtf8("xAxisLabelLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, xAxisLabelLineEdit);

        xAxisRangeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        xAxisRangeLabel->setObjectName(QString::fromUtf8("xAxisRangeLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, xAxisRangeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xAxisManualRangeCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        xAxisManualRangeCheckBox->setObjectName(QString::fromUtf8("xAxisManualRangeCheckBox"));

        horizontalLayout->addWidget(xAxisManualRangeCheckBox);

        xAxisRangeMinDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        xAxisRangeMinDoubleSpinBox->setObjectName(QString::fromUtf8("xAxisRangeMinDoubleSpinBox"));
        xAxisRangeMinDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xAxisRangeMinDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xAxisRangeMinDoubleSpinBox->setSizePolicy(sizePolicy);
        xAxisRangeMinDoubleSpinBox->setMinimum(-99999999.000000000000000);
        xAxisRangeMinDoubleSpinBox->setMaximum(99999999.000000000000000);

        horizontalLayout->addWidget(xAxisRangeMinDoubleSpinBox);

        xAxisRangeMaxDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        xAxisRangeMaxDoubleSpinBox->setObjectName(QString::fromUtf8("xAxisRangeMaxDoubleSpinBox"));
        xAxisRangeMaxDoubleSpinBox->setEnabled(false);
        sizePolicy.setHeightForWidth(xAxisRangeMaxDoubleSpinBox->sizePolicy().hasHeightForWidth());
        xAxisRangeMaxDoubleSpinBox->setSizePolicy(sizePolicy);
        xAxisRangeMaxDoubleSpinBox->setMinimum(-99999999.000000000000000);
        xAxisRangeMaxDoubleSpinBox->setMaximum(99999999.000000000000000);

        horizontalLayout->addWidget(xAxisRangeMaxDoubleSpinBox);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        yAxisRangeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        yAxisRangeLabel->setObjectName(QString::fromUtf8("yAxisRangeLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, yAxisRangeLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        yAxisManualRangeCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        yAxisManualRangeCheckBox->setObjectName(QString::fromUtf8("yAxisManualRangeCheckBox"));

        horizontalLayout_2->addWidget(yAxisManualRangeCheckBox);

        yAxisRangeMinDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        yAxisRangeMinDoubleSpinBox->setObjectName(QString::fromUtf8("yAxisRangeMinDoubleSpinBox"));
        yAxisRangeMinDoubleSpinBox->setEnabled(false);
        sizePolicy.setHeightForWidth(yAxisRangeMinDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yAxisRangeMinDoubleSpinBox->setSizePolicy(sizePolicy);
        yAxisRangeMinDoubleSpinBox->setMinimum(-99999999.000000000000000);
        yAxisRangeMinDoubleSpinBox->setMaximum(99999999.000000000000000);

        horizontalLayout_2->addWidget(yAxisRangeMinDoubleSpinBox);

        yAxisRangeMaxDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        yAxisRangeMaxDoubleSpinBox->setObjectName(QString::fromUtf8("yAxisRangeMaxDoubleSpinBox"));
        yAxisRangeMaxDoubleSpinBox->setEnabled(false);
        sizePolicy.setHeightForWidth(yAxisRangeMaxDoubleSpinBox->sizePolicy().hasHeightForWidth());
        yAxisRangeMaxDoubleSpinBox->setSizePolicy(sizePolicy);
        yAxisRangeMaxDoubleSpinBox->setMinimum(-99999999.000000000000000);
        yAxisRangeMaxDoubleSpinBox->setMaximum(99999999.000000000000000);

        horizontalLayout_2->addWidget(yAxisRangeMaxDoubleSpinBox);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_2);

        yAxisTitleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        yAxisTitleLabel->setObjectName(QString::fromUtf8("yAxisTitleLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, yAxisTitleLabel);

        yAxisLabelLineEdit = new QLineEdit(qMRMLPlotChartPropertiesWidget);
        yAxisLabelLineEdit->setObjectName(QString::fromUtf8("yAxisLabelLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, yAxisLabelLineEdit);

        fontTypeComboBox = new QComboBox(qMRMLPlotChartPropertiesWidget);
        fontTypeComboBox->addItem(QString());
        fontTypeComboBox->addItem(QString());
        fontTypeComboBox->addItem(QString());
        fontTypeComboBox->setObjectName(QString::fromUtf8("fontTypeComboBox"));

        formLayout->setWidget(9, QFormLayout::FieldRole, fontTypeComboBox);

        fontTypeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        fontTypeLabel->setObjectName(QString::fromUtf8("fontTypeLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, fontTypeLabel);

        titleFontSizeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        titleFontSizeLabel->setObjectName(QString::fromUtf8("titleFontSizeLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, titleFontSizeLabel);

        titleFontSizeDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        titleFontSizeDoubleSpinBox->setObjectName(QString::fromUtf8("titleFontSizeDoubleSpinBox"));
        titleFontSizeDoubleSpinBox->setValue(20.000000000000000);

        formLayout->setWidget(10, QFormLayout::FieldRole, titleFontSizeDoubleSpinBox);

        axisTitleFontSizeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        axisTitleFontSizeLabel->setObjectName(QString::fromUtf8("axisTitleFontSizeLabel"));

        formLayout->setWidget(12, QFormLayout::LabelRole, axisTitleFontSizeLabel);

        axisTitleFontSizeDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        axisTitleFontSizeDoubleSpinBox->setObjectName(QString::fromUtf8("axisTitleFontSizeDoubleSpinBox"));
        axisTitleFontSizeDoubleSpinBox->setValue(16.000000000000000);

        formLayout->setWidget(12, QFormLayout::FieldRole, axisTitleFontSizeDoubleSpinBox);

        axisLabelFontSizeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        axisLabelFontSizeLabel->setObjectName(QString::fromUtf8("axisLabelFontSizeLabel"));

        formLayout->setWidget(13, QFormLayout::LabelRole, axisLabelFontSizeLabel);

        axisLabelFontSizeDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        axisLabelFontSizeDoubleSpinBox->setObjectName(QString::fromUtf8("axisLabelFontSizeDoubleSpinBox"));
        axisLabelFontSizeDoubleSpinBox->setValue(12.000000000000000);

        formLayout->setWidget(13, QFormLayout::FieldRole, axisLabelFontSizeDoubleSpinBox);

        legendVisibleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        legendVisibleLabel->setObjectName(QString::fromUtf8("legendVisibleLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, legendVisibleLabel);

        legendVisibleCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        legendVisibleCheckBox->setObjectName(QString::fromUtf8("legendVisibleCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, legendVisibleCheckBox);

        gridVisibleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        gridVisibleLabel->setObjectName(QString::fromUtf8("gridVisibleLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, gridVisibleLabel);

        legendFontSizeLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        legendFontSizeLabel->setObjectName(QString::fromUtf8("legendFontSizeLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, legendFontSizeLabel);

        legendFontSizeDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotChartPropertiesWidget);
        legendFontSizeDoubleSpinBox->setObjectName(QString::fromUtf8("legendFontSizeDoubleSpinBox"));
        legendFontSizeDoubleSpinBox->setValue(16.000000000000000);

        formLayout->setWidget(11, QFormLayout::FieldRole, legendFontSizeDoubleSpinBox);

        logScaleLabel = new QLabel(qMRMLPlotChartPropertiesWidget);
        logScaleLabel->setObjectName(QString::fromUtf8("logScaleLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, logScaleLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        xAxisLogScaleCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        xAxisLogScaleCheckBox->setObjectName(QString::fromUtf8("xAxisLogScaleCheckBox"));

        horizontalLayout_3->addWidget(xAxisLogScaleCheckBox);

        yAxisLogScaleCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        yAxisLogScaleCheckBox->setObjectName(QString::fromUtf8("yAxisLogScaleCheckBox"));

        horizontalLayout_3->addWidget(yAxisLogScaleCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_3);

        gridVisibleCheckBox = new QCheckBox(qMRMLPlotChartPropertiesWidget);
        gridVisibleCheckBox->setObjectName(QString::fromUtf8("gridVisibleCheckBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, gridVisibleCheckBox);

        QWidget::setTabOrder(plotSeriesComboBox, titleLineEdit);
        QWidget::setTabOrder(titleLineEdit, xAxisLabelLineEdit);
        QWidget::setTabOrder(xAxisLabelLineEdit, xAxisManualRangeCheckBox);
        QWidget::setTabOrder(xAxisManualRangeCheckBox, yAxisManualRangeCheckBox);

        retranslateUi(qMRMLPlotChartPropertiesWidget);
        QObject::connect(xAxisManualRangeCheckBox, SIGNAL(toggled(bool)), xAxisRangeMinDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(xAxisManualRangeCheckBox, SIGNAL(toggled(bool)), xAxisRangeMaxDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(yAxisManualRangeCheckBox, SIGNAL(toggled(bool)), yAxisRangeMinDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(yAxisManualRangeCheckBox, SIGNAL(toggled(bool)), yAxisRangeMaxDoubleSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(qMRMLPlotChartPropertiesWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLPlotChartPropertiesWidget)
    {
        qMRMLPlotChartPropertiesWidget->setWindowTitle(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Plot Chart Properties", nullptr));
        plotDataSeriesLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Plot data series:", nullptr));
#if QT_CONFIG(tooltip)
        plotSeriesComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Add/Remove plots data series to/from the current chart.", nullptr));
#endif // QT_CONFIG(tooltip)
        chartTitleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Chart title:", nullptr));
#if QT_CONFIG(tooltip)
        titleLineEdit->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Enter a title for the chart.", nullptr));
#endif // QT_CONFIG(tooltip)
        titleLineEdit->setText(QString());
        xAxisTitleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "X axis title:", nullptr));
#if QT_CONFIG(tooltip)
        xAxisLabelLineEdit->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Enter a label for the X-axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        xAxisLabelLineEdit->setText(QString());
        xAxisRangeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "X axis range:", nullptr));
#if QT_CONFIG(tooltip)
        xAxisManualRangeCheckBox->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Enable manual setting of X axis range for all views of this chart", nullptr));
#endif // QT_CONFIG(tooltip)
        xAxisManualRangeCheckBox->setText(QString());
        yAxisRangeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Y axis range:", nullptr));
#if QT_CONFIG(tooltip)
        yAxisManualRangeCheckBox->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Enable manual setting of Y axis range for all views of this chart", nullptr));
#endif // QT_CONFIG(tooltip)
        yAxisManualRangeCheckBox->setText(QString());
        yAxisTitleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Y axis title:", nullptr));
#if QT_CONFIG(tooltip)
        yAxisLabelLineEdit->setToolTip(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Enter a label for the Y-axis.", nullptr));
#endif // QT_CONFIG(tooltip)
        yAxisLabelLineEdit->setText(QString());
        fontTypeComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Arial", nullptr));
        fontTypeComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Times", nullptr));
        fontTypeComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Courier", nullptr));

        fontTypeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Font Type:", nullptr));
        titleFontSizeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Chart title font size:", nullptr));
        axisTitleFontSizeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Axis title font size:", nullptr));
        axisLabelFontSizeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Axis label font size:", nullptr));
        legendVisibleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Legend visibility:", nullptr));
        legendVisibleCheckBox->setText(QString());
        gridVisibleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Grid visibility:", nullptr));
        legendFontSizeLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Legend font size:", nullptr));
        logScaleLabel->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Logarithmic scale:", nullptr));
        xAxisLogScaleCheckBox->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "X axis", nullptr));
        yAxisLogScaleCheckBox->setText(QCoreApplication::translate("qMRMLPlotChartPropertiesWidget", "Y axis", nullptr));
        gridVisibleCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLPlotChartPropertiesWidget: public Ui_qMRMLPlotChartPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLPLOTCHARTPROPERTIESWIDGET_H
