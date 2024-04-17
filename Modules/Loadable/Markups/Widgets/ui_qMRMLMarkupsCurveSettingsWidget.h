/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsCurveSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSCURVESETTINGSWIDGET_H
#define UI_QMRMLMARKUPSCURVESETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkDoubleSpinBox.h"
#include "ctkSliderWidget.h"
#include "qMRMLNodeComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsCurveSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *curveSettingsCollapseButton;
    QVBoxLayout *verticalLayout_5;
    QWidget *curveSettingsWidget;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *curveTypeComboBox;
    QLabel *label_4;
    qMRMLNodeComboBox *modelNodeSelector;
    ctkCollapsibleGroupBox *surfaceCurveCollapsibleButton;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *scalarFunctionWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *scalarFunctionPrefixLabel;
    QLineEdit *scalarFunctionLineEdit;
    QLabel *scalarFunctionSuffixLabel;
    QComboBox *costFunctionComboBox;
    ctkCollapsibleGroupBox *CurveSettingsAdvancedOptionCollapsibleGroupBox;
    QGridLayout *CurveSettingsAdvancedOptionGridLayout;
    QLabel *projectCurveMaxSearchRadiusLabel;
    ctkSliderWidget *projectCurveMaxSearchRadiusSliderWidget;
    ctkCollapsibleButton *resampleCurveCollapsibleButton;
    QGridLayout *gridLayout1;
    QLabel *resampleCurveOutputNodeLabel;
    QLabel *resampleCurveNumerOfOutputPointsLabel;
    ctkDoubleSpinBox *resampleCurveNumerOfOutputPointsSpinBox;
    qMRMLNodeComboBox *resampleCurveOutputNodeSelector;
    QPushButton *resampleCurveButton;

    void setupUi(QWidget *qMRMLMarkupsCurveSettingsWidget)
    {
        if (qMRMLMarkupsCurveSettingsWidget->objectName().isEmpty())
            qMRMLMarkupsCurveSettingsWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsCurveSettingsWidget"));
        qMRMLMarkupsCurveSettingsWidget->resize(680, 647);
        verticalLayout = new QVBoxLayout(qMRMLMarkupsCurveSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        curveSettingsCollapseButton = new ctkCollapsibleButton(qMRMLMarkupsCurveSettingsWidget);
        curveSettingsCollapseButton->setObjectName(QString::fromUtf8("curveSettingsCollapseButton"));
        curveSettingsCollapseButton->setProperty("collapsed", QVariant(true));
        verticalLayout_5 = new QVBoxLayout(curveSettingsCollapseButton);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        curveSettingsWidget = new QWidget(curveSettingsCollapseButton);
        curveSettingsWidget->setObjectName(QString::fromUtf8("curveSettingsWidget"));
        verticalLayout_6 = new QVBoxLayout(curveSettingsWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, 9, 9, 9);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_7 = new QLabel(curveSettingsWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        curveTypeComboBox = new QComboBox(curveSettingsWidget);
        curveTypeComboBox->setObjectName(QString::fromUtf8("curveTypeComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, curveTypeComboBox);

        label_4 = new QLabel(curveSettingsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        modelNodeSelector = new qMRMLNodeComboBox(curveSettingsWidget);
        modelNodeSelector->setObjectName(QString::fromUtf8("modelNodeSelector"));
        modelNodeSelector->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLModelNode")));
        modelNodeSelector->setProperty("noneEnabled", QVariant(true));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, modelNodeSelector);


        verticalLayout_6->addLayout(formLayout_3);

        surfaceCurveCollapsibleButton = new ctkCollapsibleGroupBox(curveSettingsWidget);
        surfaceCurveCollapsibleButton->setObjectName(QString::fromUtf8("surfaceCurveCollapsibleButton"));
        surfaceCurveCollapsibleButton->setProperty("collapsed", QVariant(false));
        formLayout_2 = new QFormLayout(surfaceCurveCollapsibleButton);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_5 = new QLabel(surfaceCurveCollapsibleButton);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(surfaceCurveCollapsibleButton);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        scalarFunctionWidget = new QWidget(surfaceCurveCollapsibleButton);
        scalarFunctionWidget->setObjectName(QString::fromUtf8("scalarFunctionWidget"));
        scalarFunctionWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(scalarFunctionWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        scalarFunctionPrefixLabel = new QLabel(scalarFunctionWidget);
        scalarFunctionPrefixLabel->setObjectName(QString::fromUtf8("scalarFunctionPrefixLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scalarFunctionPrefixLabel->sizePolicy().hasHeightForWidth());
        scalarFunctionPrefixLabel->setSizePolicy(sizePolicy);
        scalarFunctionPrefixLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(scalarFunctionPrefixLabel);

        scalarFunctionLineEdit = new QLineEdit(scalarFunctionWidget);
        scalarFunctionLineEdit->setObjectName(QString::fromUtf8("scalarFunctionLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scalarFunctionLineEdit->sizePolicy().hasHeightForWidth());
        scalarFunctionLineEdit->setSizePolicy(sizePolicy1);
        scalarFunctionLineEdit->setSizeIncrement(QSize(0, 0));

        horizontalLayout_3->addWidget(scalarFunctionLineEdit);

        scalarFunctionSuffixLabel = new QLabel(scalarFunctionWidget);
        scalarFunctionSuffixLabel->setObjectName(QString::fromUtf8("scalarFunctionSuffixLabel"));
        sizePolicy.setHeightForWidth(scalarFunctionSuffixLabel->sizePolicy().hasHeightForWidth());
        scalarFunctionSuffixLabel->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(scalarFunctionSuffixLabel);


        formLayout_2->setWidget(1, QFormLayout::FieldRole, scalarFunctionWidget);

        costFunctionComboBox = new QComboBox(surfaceCurveCollapsibleButton);
        costFunctionComboBox->setObjectName(QString::fromUtf8("costFunctionComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, costFunctionComboBox);


        verticalLayout_6->addWidget(surfaceCurveCollapsibleButton);

        CurveSettingsAdvancedOptionCollapsibleGroupBox = new ctkCollapsibleGroupBox(curveSettingsWidget);
        CurveSettingsAdvancedOptionCollapsibleGroupBox->setObjectName(QString::fromUtf8("CurveSettingsAdvancedOptionCollapsibleGroupBox"));
        CurveSettingsAdvancedOptionCollapsibleGroupBox->setChecked(false);
        CurveSettingsAdvancedOptionCollapsibleGroupBox->setProperty("collapsed", QVariant(true));
        CurveSettingsAdvancedOptionCollapsibleGroupBox->setProperty("collapsedHeight", QVariant(7));
        CurveSettingsAdvancedOptionGridLayout = new QGridLayout(CurveSettingsAdvancedOptionCollapsibleGroupBox);
        CurveSettingsAdvancedOptionGridLayout->setObjectName(QString::fromUtf8("CurveSettingsAdvancedOptionGridLayout"));
        projectCurveMaxSearchRadiusLabel = new QLabel(CurveSettingsAdvancedOptionCollapsibleGroupBox);
        projectCurveMaxSearchRadiusLabel->setObjectName(QString::fromUtf8("projectCurveMaxSearchRadiusLabel"));

        CurveSettingsAdvancedOptionGridLayout->addWidget(projectCurveMaxSearchRadiusLabel, 0, 0, 1, 1);

        projectCurveMaxSearchRadiusSliderWidget = new ctkSliderWidget(CurveSettingsAdvancedOptionCollapsibleGroupBox);
        projectCurveMaxSearchRadiusSliderWidget->setObjectName(QString::fromUtf8("projectCurveMaxSearchRadiusSliderWidget"));
        projectCurveMaxSearchRadiusSliderWidget->setProperty("singleStep", QVariant(0.100000000000000));
        projectCurveMaxSearchRadiusSliderWidget->setProperty("minimum", QVariant(0.000000000000000));
        projectCurveMaxSearchRadiusSliderWidget->setProperty("maximum", QVariant(100.000000000000000));
        projectCurveMaxSearchRadiusSliderWidget->setProperty("value", QVariant(25.000000000000000));

        CurveSettingsAdvancedOptionGridLayout->addWidget(projectCurveMaxSearchRadiusSliderWidget, 0, 1, 1, 1);


        verticalLayout_6->addWidget(CurveSettingsAdvancedOptionCollapsibleGroupBox);


        verticalLayout_5->addWidget(curveSettingsWidget);


        verticalLayout->addWidget(curveSettingsCollapseButton);

        resampleCurveCollapsibleButton = new ctkCollapsibleButton(qMRMLMarkupsCurveSettingsWidget);
        resampleCurveCollapsibleButton->setObjectName(QString::fromUtf8("resampleCurveCollapsibleButton"));
        resampleCurveCollapsibleButton->setProperty("collapsed", QVariant(true));
        gridLayout1 = new QGridLayout(resampleCurveCollapsibleButton);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        resampleCurveOutputNodeLabel = new QLabel(resampleCurveCollapsibleButton);
        resampleCurveOutputNodeLabel->setObjectName(QString::fromUtf8("resampleCurveOutputNodeLabel"));

        gridLayout1->addWidget(resampleCurveOutputNodeLabel, 0, 0, 1, 1);

        resampleCurveNumerOfOutputPointsLabel = new QLabel(resampleCurveCollapsibleButton);
        resampleCurveNumerOfOutputPointsLabel->setObjectName(QString::fromUtf8("resampleCurveNumerOfOutputPointsLabel"));

        gridLayout1->addWidget(resampleCurveNumerOfOutputPointsLabel, 1, 0, 1, 1);

        resampleCurveNumerOfOutputPointsSpinBox = new ctkDoubleSpinBox(resampleCurveCollapsibleButton);
        resampleCurveNumerOfOutputPointsSpinBox->setObjectName(QString::fromUtf8("resampleCurveNumerOfOutputPointsSpinBox"));
        resampleCurveNumerOfOutputPointsSpinBox->setFocusPolicy(Qt::TabFocus);
        resampleCurveNumerOfOutputPointsSpinBox->setProperty("decimals", QVariant(0));
        resampleCurveNumerOfOutputPointsSpinBox->setProperty("minimum", QVariant(0.000000000000000));
        resampleCurveNumerOfOutputPointsSpinBox->setProperty("maximum", QVariant(1000000.000000000000000));
        resampleCurveNumerOfOutputPointsSpinBox->setProperty("singleStep", QVariant(1.000000000000000));
        resampleCurveNumerOfOutputPointsSpinBox->setProperty("value", QVariant(20.000000000000000));

        gridLayout1->addWidget(resampleCurveNumerOfOutputPointsSpinBox, 1, 1, 1, 1);

        resampleCurveOutputNodeSelector = new qMRMLNodeComboBox(resampleCurveCollapsibleButton);
        resampleCurveOutputNodeSelector->setObjectName(QString::fromUtf8("resampleCurveOutputNodeSelector"));
        resampleCurveOutputNodeSelector->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLMarkupsCurveNode")));
        resampleCurveOutputNodeSelector->setProperty("noneEnabled", QVariant(true));
        resampleCurveOutputNodeSelector->setProperty("addEnabled", QVariant(true));
        resampleCurveOutputNodeSelector->setProperty("removeEnabled", QVariant(true));
        resampleCurveOutputNodeSelector->setProperty("renameEnabled", QVariant(true));
        resampleCurveOutputNodeSelector->setProperty("selectNodeUponCreation", QVariant(true));

        gridLayout1->addWidget(resampleCurveOutputNodeSelector, 0, 1, 1, 1);

        resampleCurveButton = new QPushButton(resampleCurveCollapsibleButton);
        resampleCurveButton->setObjectName(QString::fromUtf8("resampleCurveButton"));

        gridLayout1->addWidget(resampleCurveButton, 4, 0, 1, 3);


        verticalLayout->addWidget(resampleCurveCollapsibleButton);


        retranslateUi(qMRMLMarkupsCurveSettingsWidget);

        QMetaObject::connectSlotsByName(qMRMLMarkupsCurveSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLMarkupsCurveSettingsWidget)
    {
        qMRMLMarkupsCurveSettingsWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Curve Settings", nullptr));
        curveSettingsCollapseButton->setProperty("text", QVariant(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Curve Settings", nullptr)));
        label_7->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Curve Type:", nullptr));
        label_4->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Constrain to Model:", nullptr));
        surfaceCurveCollapsibleButton->setTitle(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Surface", nullptr));
        label_5->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Cost function:", nullptr));
        label_6->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Distance weighting function:", nullptr));
        scalarFunctionPrefixLabel->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "distance / (", nullptr));
#if QT_CONFIG(tooltip)
        scalarFunctionLineEdit->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "<html><head/><body><p align=\"justify\">Function used to calculate scalar weights for pathfinding. The currently active point scalar can be accessed using the &quot;activeScalar&quot; variable name. All other scalars can be accessed as variables provided that they don't contain any illegal characters (&quot;./* etc.).</p><p>Example functions: &quot;activeScalar*activeScalar&quot;, &quot;exp(activeScalar)&quot;, &quot;1.0-activeScalar&quot;, &quot;scalarA*scalarB&quot;</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        scalarFunctionLineEdit->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "activeScalar", nullptr));
        scalarFunctionSuffixLabel->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", ")^2", nullptr));
        CurveSettingsAdvancedOptionCollapsibleGroupBox->setTitle(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Advanced", nullptr));
        projectCurveMaxSearchRadiusLabel->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Maximum projection distance:", nullptr));
#if QT_CONFIG(tooltip)
        projectCurveMaxSearchRadiusSliderWidget->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Select the maximum projection distance as percentage of bounding box size.", nullptr));
#endif // QT_CONFIG(tooltip)
        projectCurveMaxSearchRadiusSliderWidget->setProperty("suffix", QVariant(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", " %", nullptr)));
#if QT_CONFIG(tooltip)
        resampleCurveCollapsibleButton->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Resample a curve with the number of points specified.", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleCurveCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Resample", nullptr)));
        resampleCurveOutputNodeLabel->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Output node: ", nullptr));
#if QT_CONFIG(tooltip)
        resampleCurveNumerOfOutputPointsLabel->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Select the number of points on the resampled curve. ", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleCurveNumerOfOutputPointsLabel->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Number of resampled points: ", nullptr));
#if QT_CONFIG(tooltip)
        resampleCurveNumerOfOutputPointsSpinBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "The active curve will be resamples with the number of points specified.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resampleCurveOutputNodeSelector->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Select a node to store the resampled curve ", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleCurveOutputNodeSelector->setProperty("noneDisplay", QVariant(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "(Overwrite current node)", nullptr)));
#if QT_CONFIG(tooltip)
        resampleCurveButton->setToolTip(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Resamples the active curve with the number of points specified.", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleCurveButton->setText(QCoreApplication::translate("qMRMLMarkupsCurveSettingsWidget", "Resample curve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsCurveSettingsWidget: public Ui_qMRMLMarkupsCurveSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSCURVESETTINGSWIDGET_H
