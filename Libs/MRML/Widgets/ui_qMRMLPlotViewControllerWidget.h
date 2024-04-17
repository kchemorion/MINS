/********************************************************************************
** Form generated from reading UI file 'qMRMLPlotViewControllerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLPLOTVIEWCONTROLLERWIDGET_H
#define UI_QMRMLPLOTVIEWCONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "ctkPopupWidget.h"
#include "qMRMLCheckableNodeComboBox.h"
#include "qMRMLNodeComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLPlotViewControllerWidget
{
public:
    QAction *actionShow_Grid;
    QAction *actionShow_Legend;
    QAction *actionFit_to_window;
    QGridLayout *gridLayout_2;
    QGridLayout *contentLayout;
    QHBoxLayout *hboxLayout;
    qMRMLNodeComboBox *plotChartComboBox;
    QPushButton *exportPushButton;
    qMRMLCheckableNodeComboBox *plotSeriesComboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *plotTypeComboBox;
    QLabel *label_4;
    QComboBox *interactionModeComboBox;

    void setupUi(ctkPopupWidget *qMRMLPlotViewControllerWidget)
    {
        if (qMRMLPlotViewControllerWidget->objectName().isEmpty())
            qMRMLPlotViewControllerWidget->setObjectName(QString::fromUtf8("qMRMLPlotViewControllerWidget"));
        qMRMLPlotViewControllerWidget->resize(308, 118);
        actionShow_Grid = new QAction(qMRMLPlotViewControllerWidget);
        actionShow_Grid->setObjectName(QString::fromUtf8("actionShow_Grid"));
        actionShow_Grid->setCheckable(true);
        actionShow_Legend = new QAction(qMRMLPlotViewControllerWidget);
        actionShow_Legend->setObjectName(QString::fromUtf8("actionShow_Legend"));
        actionShow_Legend->setCheckable(true);
        actionFit_to_window = new QAction(qMRMLPlotViewControllerWidget);
        actionFit_to_window->setObjectName(QString::fromUtf8("actionFit_to_window"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SlicesFitToWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFit_to_window->setIcon(icon);
        gridLayout_2 = new QGridLayout(qMRMLPlotViewControllerWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        contentLayout = new QGridLayout();
        contentLayout->setObjectName(QString::fromUtf8("contentLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        plotChartComboBox = new qMRMLNodeComboBox(qMRMLPlotViewControllerWidget);
        plotChartComboBox->setObjectName(QString::fromUtf8("plotChartComboBox"));
        plotChartComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLPlotChartNode"));
        plotChartComboBox->setNoneEnabled(false);
        plotChartComboBox->setAddEnabled(true);
        plotChartComboBox->setRemoveEnabled(true);
        plotChartComboBox->setRenameEnabled(true);
        plotChartComboBox->setEditEnabled(true);

        hboxLayout->addWidget(plotChartComboBox);

        exportPushButton = new QPushButton(qMRMLPlotViewControllerWidget);
        exportPushButton->setObjectName(QString::fromUtf8("exportPushButton"));

        hboxLayout->addWidget(exportPushButton);


        contentLayout->addLayout(hboxLayout, 0, 1, 1, 1);

        plotSeriesComboBox = new qMRMLCheckableNodeComboBox(qMRMLPlotViewControllerWidget);
        plotSeriesComboBox->setObjectName(QString::fromUtf8("plotSeriesComboBox"));
        plotSeriesComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLPlotSeriesNode"));
        plotSeriesComboBox->setNoneEnabled(false);
        plotSeriesComboBox->setAddEnabled(true);
        plotSeriesComboBox->setRemoveEnabled(true);
        plotSeriesComboBox->setEditEnabled(false);
        plotSeriesComboBox->setRenameEnabled(true);

        contentLayout->addWidget(plotSeriesComboBox, 1, 1, 1, 1);

        label = new QLabel(qMRMLPlotViewControllerWidget);
        label->setObjectName(QString::fromUtf8("label"));

        contentLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(qMRMLPlotViewControllerWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        contentLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(qMRMLPlotViewControllerWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        contentLayout->addWidget(label_3, 2, 0, 1, 1);

        plotTypeComboBox = new QComboBox(qMRMLPlotViewControllerWidget);
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->addItem(QString());
        plotTypeComboBox->setObjectName(QString::fromUtf8("plotTypeComboBox"));

        contentLayout->addWidget(plotTypeComboBox, 2, 1, 1, 1);

        label_4 = new QLabel(qMRMLPlotViewControllerWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        contentLayout->addWidget(label_4, 3, 0, 1, 1);

        interactionModeComboBox = new QComboBox(qMRMLPlotViewControllerWidget);
        interactionModeComboBox->addItem(QString());
        interactionModeComboBox->addItem(QString());
        interactionModeComboBox->addItem(QString());
        interactionModeComboBox->addItem(QString());
        interactionModeComboBox->setObjectName(QString::fromUtf8("interactionModeComboBox"));

        contentLayout->addWidget(interactionModeComboBox, 3, 1, 1, 1);


        gridLayout_2->addLayout(contentLayout, 1, 0, 1, 1);


        retranslateUi(qMRMLPlotViewControllerWidget);

        plotTypeComboBox->setCurrentIndex(0);
        interactionModeComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qMRMLPlotViewControllerWidget);
    } // setupUi

    void retranslateUi(ctkPopupWidget *qMRMLPlotViewControllerWidget)
    {
        qMRMLPlotViewControllerWidget->setWindowTitle(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Plot View Controller", nullptr));
        actionShow_Grid->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        actionShow_Grid->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Show grid", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_Legend->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Legend", nullptr));
#if QT_CONFIG(tooltip)
        actionShow_Legend->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Show legend", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFit_to_window->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Fit_to_window", nullptr));
#if QT_CONFIG(tooltip)
        actionFit_to_window->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Adjust the Plot Viewer's field of view to match the extent of the Plot axes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        plotChartComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Select the PlotChartNode which handles the general Properties of the Plot and allow to select multiple PlotSeriesNodes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exportPushButton->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Export plot to SVG file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportPushButton->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Export...", nullptr));
#if QT_CONFIG(tooltip)
        plotSeriesComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Add/Remove plots data series to/from the current chart.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Plot chart:", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Plot data series:", nullptr));
        label_3->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Plot type:", nullptr));
        plotTypeComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "line", nullptr));
        plotTypeComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "bar", nullptr));
        plotTypeComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "scatter", nullptr));
        plotTypeComboBox->setItemText(3, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "scatter bar", nullptr));

#if QT_CONFIG(tooltip)
        plotTypeComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "This combobox allows to change the Type for all the active PlotSeriesNodes. If a value is chosen, all the PlotSeriesNodes referenced by the PlotChartNode will be updated with the new value. ", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Interaction mode:", nullptr));
        interactionModeComboBox->setItemText(0, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "pan view", nullptr));
        interactionModeComboBox->setItemText(1, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "select points", nullptr));
        interactionModeComboBox->setItemText(2, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "free-hand select points", nullptr));
        interactionModeComboBox->setItemText(3, QCoreApplication::translate("qMRMLPlotViewControllerWidget", "move points", nullptr));

#if QT_CONFIG(tooltip)
        interactionModeComboBox->setToolTip(QCoreApplication::translate("qMRMLPlotViewControllerWidget", "Action performed on mouse left-click and drag.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLPlotViewControllerWidget: public Ui_qMRMLPlotViewControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLPLOTVIEWCONTROLLERWIDGET_H
