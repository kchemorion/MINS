/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsAngleMeasurementsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSANGLEMEASUREMENTSWIDGET_H
#define UI_QMRMLMARKUPSANGLEMEASUREMENTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkCoordinatesWidget.h"
#include "qMRMLCoordinatesWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsAngleMeasurementsWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *angleMeasurementModeCollapsibleButton;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QComboBox *angleMeasurementModeComboBox;
    QLabel *label_9;
    qMRMLCoordinatesWidget *rotationAxisCoordinatesWidget;

    void setupUi(QWidget *qMRMLMarkupsAngleMeasurementsWidget)
    {
        if (qMRMLMarkupsAngleMeasurementsWidget->objectName().isEmpty())
            qMRMLMarkupsAngleMeasurementsWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsAngleMeasurementsWidget"));
        qMRMLMarkupsAngleMeasurementsWidget->resize(431, 120);
        verticalLayout = new QVBoxLayout(qMRMLMarkupsAngleMeasurementsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        angleMeasurementModeCollapsibleButton = new ctkCollapsibleButton(qMRMLMarkupsAngleMeasurementsWidget);
        angleMeasurementModeCollapsibleButton->setObjectName(QString::fromUtf8("angleMeasurementModeCollapsibleButton"));
        angleMeasurementModeCollapsibleButton->setProperty("checked", QVariant(false));
        angleMeasurementModeCollapsibleButton->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(angleMeasurementModeCollapsibleButton);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, -1, 9, -1);
        label_8 = new QLabel(angleMeasurementModeCollapsibleButton);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        angleMeasurementModeComboBox = new QComboBox(angleMeasurementModeCollapsibleButton);
        angleMeasurementModeComboBox->addItem(QString());
        angleMeasurementModeComboBox->addItem(QString());
        angleMeasurementModeComboBox->addItem(QString());
        angleMeasurementModeComboBox->setObjectName(QString::fromUtf8("angleMeasurementModeComboBox"));

        gridLayout_2->addWidget(angleMeasurementModeComboBox, 0, 1, 1, 1);

        label_9 = new QLabel(angleMeasurementModeCollapsibleButton);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        rotationAxisCoordinatesWidget = new qMRMLCoordinatesWidget(angleMeasurementModeCollapsibleButton);
        rotationAxisCoordinatesWidget->setObjectName(QString::fromUtf8("rotationAxisCoordinatesWidget"));
        rotationAxisCoordinatesWidget->setProperty("minimum", QVariant(-1.000000000000000));
        rotationAxisCoordinatesWidget->setProperty("maximum", QVariant(1.000000000000000));

        gridLayout_2->addWidget(rotationAxisCoordinatesWidget, 1, 1, 1, 1);


        verticalLayout->addWidget(angleMeasurementModeCollapsibleButton);


        retranslateUi(qMRMLMarkupsAngleMeasurementsWidget);

        QMetaObject::connectSlotsByName(qMRMLMarkupsAngleMeasurementsWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLMarkupsAngleMeasurementsWidget)
    {
        qMRMLMarkupsAngleMeasurementsWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Angle Properties", nullptr));
        angleMeasurementModeCollapsibleButton->setProperty("text", QVariant(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Angle Settings", nullptr)));
        label_8->setText(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Measurement mode:", nullptr));
        angleMeasurementModeComboBox->setItemText(0, QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Minimal", nullptr));
        angleMeasurementModeComboBox->setItemText(1, QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Oriented signed", nullptr));
        angleMeasurementModeComboBox->setItemText(2, QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Oriented positive", nullptr));

#if QT_CONFIG(tooltip)
        angleMeasurementModeComboBox->setToolTip(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "<html><head/><body><p>- Minimal: minimal non-oriented angle, between [0..180)<br/>- Oriented signed: oriented angle [-180..180), using rotation axis in right-hand rule<br/>- Oriented positive: oriented angle [0..360), using rotation axis in right-hand rule</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Rotation axis:", nullptr));
#if QT_CONFIG(tooltip)
        rotationAxisCoordinatesWidget->setToolTip(QCoreApplication::translate("qMRMLMarkupsAngleMeasurementsWidget", "Rotation axis direction in RAS coordinate system. Used for defining direction in oriented angle modes using right hand rule.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsAngleMeasurementsWidget: public Ui_qMRMLMarkupsAngleMeasurementsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSANGLEMEASUREMENTSWIDGET_H
