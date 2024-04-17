/********************************************************************************
** Form generated from reading UI file 'qMRMLPlotSeriesPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLPLOTSERIESPROPERTIESWIDGET_H
#define UI_QMRMLPLOTSERIESPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "ctkColorPickerButton.h"
#include "ctkDoubleSpinBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLPlotSeriesPropertiesWidget
{
public:
    QFormLayout *formLayout;
    QLabel *InputTableLabel;
    qMRMLNodeComboBox *inputTableComboBox;
    QLabel *plotTypeLabel;
    QComboBox *plotTypeComboBox;
    QLabel *xAxisLabel;
    QComboBox *xAxisComboBox;
    QLabel *yAxisLabel;
    QComboBox *yAxisComboBox;
    QComboBox *labelsComboBox;
    QComboBox *markersStyleComboBox;
    ctkDoubleSpinBox *markersSizeDoubleSpinBox;
    QComboBox *lineStyleComboBox;
    ctkDoubleSpinBox *lineWidthDoubleSpinBox;
    ctkColorPickerButton *plotSeriesColorPickerButton;
    QLabel *labelsLabel;
    QLabel *markerStyleLabel;
    QLabel *markersSizeLabel;
    QLabel *lineStyleLabel;
    QLabel *lineWidthLabel;
    QLabel *plotSeriesColorLabel;

    void setupUi(qMRMLWidget *qMRMLPlotSeriesPropertiesWidget)
    {
        if (qMRMLPlotSeriesPropertiesWidget->objectName().isEmpty())
            qMRMLPlotSeriesPropertiesWidget->setObjectName(QString::fromUtf8("qMRMLPlotSeriesPropertiesWidget"));
        qMRMLPlotSeriesPropertiesWidget->resize(169, 324);
        formLayout = new QFormLayout(qMRMLPlotSeriesPropertiesWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        InputTableLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        InputTableLabel->setObjectName(QString::fromUtf8("InputTableLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, InputTableLabel);

        inputTableComboBox = new qMRMLNodeComboBox(qMRMLPlotSeriesPropertiesWidget);
        inputTableComboBox->setObjectName(QString::fromUtf8("inputTableComboBox"));
        inputTableComboBox->setEnabled(true);
        inputTableComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTableNode"));
        inputTableComboBox->setShowHidden(true);
        inputTableComboBox->setNoneEnabled(false);
        inputTableComboBox->setAddEnabled(true);
        inputTableComboBox->setRemoveEnabled(true);
        inputTableComboBox->setEditEnabled(true);
        inputTableComboBox->setRenameEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, inputTableComboBox);

        plotTypeLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        plotTypeLabel->setObjectName(QString::fromUtf8("plotTypeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, plotTypeLabel);

        plotTypeComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->setObjectName(QString::fromUtf8("plotTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, plotTypeComboBox);

        xAxisLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        xAxisLabel->setObjectName(QString::fromUtf8("xAxisLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, xAxisLabel);

        xAxisComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        xAxisComboBox->setObjectName(QString::fromUtf8("xAxisComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, xAxisComboBox);

        yAxisLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        yAxisLabel->setObjectName(QString::fromUtf8("yAxisLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, yAxisLabel);

        yAxisComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        yAxisComboBox->setObjectName(QString::fromUtf8("yAxisComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, yAxisComboBox);

        labelsComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        labelsComboBox->setObjectName(QString::fromUtf8("labelsComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelsComboBox);

        markersStyleComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->addItem(QString());
        markersStyleComboBox->setObjectName(QString::fromUtf8("markersStyleComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, markersStyleComboBox);

        markersSizeDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotSeriesPropertiesWidget);
        markersSizeDoubleSpinBox->setObjectName(QString::fromUtf8("markersSizeDoubleSpinBox"));
        markersSizeDoubleSpinBox->setValue(10.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, markersSizeDoubleSpinBox);

        lineStyleComboBox = new QComboBox(qMRMLPlotSeriesPropertiesWidget);
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->addItem(QString());
        lineStyleComboBox->setObjectName(QString::fromUtf8("lineStyleComboBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineStyleComboBox);

        lineWidthDoubleSpinBox = new ctkDoubleSpinBox(qMRMLPlotSeriesPropertiesWidget);
        lineWidthDoubleSpinBox->setObjectName(QString::fromUtf8("lineWidthDoubleSpinBox"));
        lineWidthDoubleSpinBox->setValue(4.000000000000000);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineWidthDoubleSpinBox);

        plotSeriesColorPickerButton = new ctkColorPickerButton(qMRMLPlotSeriesPropertiesWidget);
        plotSeriesColorPickerButton->setObjectName(QString::fromUtf8("plotSeriesColorPickerButton"));
        plotSeriesColorPickerButton->setAutoDefault(false);
        plotSeriesColorPickerButton->setFlat(false);
        plotSeriesColorPickerButton->setColor(QColor(85, 170, 255));
        plotSeriesColorPickerButton->setDisplayColorName(false);

        formLayout->setWidget(9, QFormLayout::FieldRole, plotSeriesColorPickerButton);

        labelsLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        labelsLabel->setObjectName(QString::fromUtf8("labelsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelsLabel);

        markerStyleLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        markerStyleLabel->setObjectName(QString::fromUtf8("markerStyleLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, markerStyleLabel);

        markersSizeLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        markersSizeLabel->setObjectName(QString::fromUtf8("markersSizeLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, markersSizeLabel);

        lineStyleLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        lineStyleLabel->setObjectName(QString::fromUtf8("lineStyleLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, lineStyleLabel);

        lineWidthLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        lineWidthLabel->setObjectName(QString::fromUtf8("lineWidthLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, lineWidthLabel);

        plotSeriesColorLabel = new QLabel(qMRMLPlotSeriesPropertiesWidget);
        plotSeriesColorLabel->setObjectName(QString::fromUtf8("plotSeriesColorLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, plotSeriesColorLabel);


        retranslateUi(qMRMLPlotSeriesPropertiesWidget);
        QObject::connect(qMRMLPlotSeriesPropertiesWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), inputTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        markersStyleComboBox->setCurrentIndex(0);
        plotSeriesColorPickerButton->setDefault(false);


        QMetaObject::connectSlotsByName(qMRMLPlotSeriesPropertiesWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLPlotSeriesPropertiesWidget)
    {
        qMRMLPlotSeriesPropertiesWidget->setWindowTitle(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Plot Series Properties", nullptr));
        InputTableLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Input Table:", nullptr));
#if QT_CONFIG(tooltip)
        inputTableComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        plotTypeLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Plot Type:", nullptr));
        plotTypeComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "line", nullptr));
        plotTypeComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "bar", nullptr));
        plotTypeComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "scatter", nullptr));
        plotTypeComboBox->setItemText(3, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "scatter bar", nullptr));

#if QT_CONFIG(tooltip)
        plotTypeComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        xAxisLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "X Axis Column:", nullptr));
#if QT_CONFIG(tooltip)
        xAxisComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        yAxisLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Y Axis Column:", nullptr));
#if QT_CONFIG(tooltip)
        yAxisComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelsComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "This column contains a label for each data point. Label is displayed in the tooltip when the mouse hovers over a data point in the plot view.", nullptr));
#endif // QT_CONFIG(tooltip)
        markersStyleComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "none", nullptr));
        markersStyleComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "cross", nullptr));
        markersStyleComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "plus", nullptr));
        markersStyleComboBox->setItemText(3, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "square", nullptr));
        markersStyleComboBox->setItemText(4, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "circle", nullptr));
        markersStyleComboBox->setItemText(5, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "diamond", nullptr));

#if QT_CONFIG(tooltip)
        markersStyleComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineStyleComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "none", nullptr));
        lineStyleComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "solid", nullptr));
        lineStyleComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "dash", nullptr));
        lineStyleComboBox->setItemText(3, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "dot", nullptr));
        lineStyleComboBox->setItemText(4, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "dash-dot", nullptr));
        lineStyleComboBox->setItemText(5, QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "dash-dot-dot", nullptr));

#if QT_CONFIG(tooltip)
        lineStyleComboBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelsLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Labels Column:", nullptr));
        markerStyleLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Markers Style:", nullptr));
        markersSizeLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Markers Size:", nullptr));
        lineStyleLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Line Style:", nullptr));
        lineWidthLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Line Width:", nullptr));
        plotSeriesColorLabel->setText(QCoreApplication::translate("qMRMLPlotSeriesPropertiesWidget", "Color:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLPlotSeriesPropertiesWidget: public Ui_qMRMLPlotSeriesPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLPLOTSERIESPROPERTIESWIDGET_H
