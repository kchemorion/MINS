/********************************************************************************
** Form generated from reading UI file 'qSlicerPlotsModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERPLOTSMODULEWIDGET_H
#define UI_QSLICERPLOTSMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkPushButton.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLPlotChartPropertiesWidget.h"
#include "qMRMLPlotSeriesPropertiesWidget.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerPlotsModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *PlotsTabWidget;
    QWidget *charts;
    QFormLayout *formLayout_2;
    QLabel *PlotChartLabel;
    QHBoxLayout *horizontalLayout_3;
    qMRMLNodeComboBox *PlotChartNodeSelector;
    QPushButton *ShowChartButton;
    qMRMLPlotChartPropertiesWidget *PlotChartPropertiesWidget;
    QWidget *series;
    QFormLayout *formLayout;
    QLabel *PlotDataSeriesLabel;
    qMRMLNodeComboBox *PlotSeriesNodeSelector;
    qMRMLPlotSeriesPropertiesWidget *PlotSeriesPropertiesWidget;
    ctkPushButton *copyPlotSeriesNodePushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *BottomSpacer;

    void setupUi(qSlicerWidget *qSlicerPlotsModuleWidget)
    {
        if (qSlicerPlotsModuleWidget->objectName().isEmpty())
            qSlicerPlotsModuleWidget->setObjectName(QString::fromUtf8("qSlicerPlotsModuleWidget"));
        qSlicerPlotsModuleWidget->resize(349, 434);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerPlotsModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerPlotsModuleWidget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Plots.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerPlotsModuleWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qSlicerPlotsModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        PlotsTabWidget = new QTabWidget(qSlicerPlotsModuleWidget);
        PlotsTabWidget->setObjectName(QString::fromUtf8("PlotsTabWidget"));
        charts = new QWidget();
        charts->setObjectName(QString::fromUtf8("charts"));
        formLayout_2 = new QFormLayout(charts);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        PlotChartLabel = new QLabel(charts);
        PlotChartLabel->setObjectName(QString::fromUtf8("PlotChartLabel"));
        PlotChartLabel->setMinimumSize(QSize(0, 27));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, PlotChartLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        PlotChartNodeSelector = new qMRMLNodeComboBox(charts);
        PlotChartNodeSelector->setObjectName(QString::fromUtf8("PlotChartNodeSelector"));
        PlotChartNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLPlotChartNode"));
        PlotChartNodeSelector->setRenameEnabled(true);

        horizontalLayout_3->addWidget(PlotChartNodeSelector);

        ShowChartButton = new QPushButton(charts);
        ShowChartButton->setObjectName(QString::fromUtf8("ShowChartButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ShowChartButton->sizePolicy().hasHeightForWidth());
        ShowChartButton->setSizePolicy(sizePolicy1);
        ShowChartButton->setMinimumSize(QSize(30, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Medium/SlicerVisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowChartButton->setIcon(icon1);

        horizontalLayout_3->addWidget(ShowChartButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        PlotChartPropertiesWidget = new qMRMLPlotChartPropertiesWidget(charts);
        PlotChartPropertiesWidget->setObjectName(QString::fromUtf8("PlotChartPropertiesWidget"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, PlotChartPropertiesWidget);

        PlotsTabWidget->addTab(charts, QString());
        series = new QWidget();
        series->setObjectName(QString::fromUtf8("series"));
        formLayout = new QFormLayout(series);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        PlotDataSeriesLabel = new QLabel(series);
        PlotDataSeriesLabel->setObjectName(QString::fromUtf8("PlotDataSeriesLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, PlotDataSeriesLabel);

        PlotSeriesNodeSelector = new qMRMLNodeComboBox(series);
        PlotSeriesNodeSelector->setObjectName(QString::fromUtf8("PlotSeriesNodeSelector"));
        PlotSeriesNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLPlotSeriesNode"));
        PlotSeriesNodeSelector->setRenameEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, PlotSeriesNodeSelector);

        PlotSeriesPropertiesWidget = new qMRMLPlotSeriesPropertiesWidget(series);
        PlotSeriesPropertiesWidget->setObjectName(QString::fromUtf8("PlotSeriesPropertiesWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, PlotSeriesPropertiesWidget);

        copyPlotSeriesNodePushButton = new ctkPushButton(series);
        copyPlotSeriesNodePushButton->setObjectName(QString::fromUtf8("copyPlotSeriesNodePushButton"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, copyPlotSeriesNodePushButton);

        PlotsTabWidget->addTab(series, QString());

        verticalLayout->addWidget(PlotsTabWidget);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        BottomSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(BottomSpacer);


        retranslateUi(qSlicerPlotsModuleWidget);
        QObject::connect(PlotChartNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), PlotChartPropertiesWidget, SLOT(setMRMLPlotChartNode(vtkMRMLNode*)));
        QObject::connect(qSlicerPlotsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PlotChartNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerPlotsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PlotSeriesPropertiesWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerPlotsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PlotSeriesNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(PlotSeriesNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), PlotSeriesPropertiesWidget, SLOT(setMRMLPlotSeriesNode(vtkMRMLNode*)));
        QObject::connect(PlotChartNodeSelector, SIGNAL(currentNodeChanged(bool)), ShowChartButton, SLOT(setEnabled(bool)));
        QObject::connect(qSlicerPlotsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), PlotChartPropertiesWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        PlotsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerPlotsModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerPlotsModuleWidget)
    {
        qSlicerPlotsModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerPlotsModuleWidget", "Plots", nullptr));
        PlotChartLabel->setText(QCoreApplication::translate("qSlicerPlotsModuleWidget", "Chart:", nullptr));
#if QT_CONFIG(tooltip)
        ShowChartButton->setToolTip(QCoreApplication::translate("qSlicerPlotsModuleWidget", "Allow plot editing", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowChartButton->setText(QString());
        PlotsTabWidget->setTabText(PlotsTabWidget->indexOf(charts), QCoreApplication::translate("qSlicerPlotsModuleWidget", "Charts", nullptr));
        PlotDataSeriesLabel->setText(QCoreApplication::translate("qSlicerPlotsModuleWidget", "Data series:", nullptr));
        copyPlotSeriesNodePushButton->setText(QCoreApplication::translate("qSlicerPlotsModuleWidget", "Clone data series", nullptr));
        PlotsTabWidget->setTabText(PlotsTabWidget->indexOf(series), QCoreApplication::translate("qSlicerPlotsModuleWidget", "Series", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerPlotsModuleWidget: public Ui_qSlicerPlotsModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERPLOTSMODULEWIDGET_H
