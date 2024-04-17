/********************************************************************************
** Form generated from reading UI file 'qMRMLSettingsUnitWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSETTINGSUNITWIDGET_H
#define UI_QMRMLSETTINGSUNITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qMRMLNodeComboBox.h"
#include "qMRMLUnitWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSettingsUnitWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *UnitLabel;
    qMRMLNodeComboBox *UnitNodeComboBox;
    qMRMLUnitWidget *UnitInfoWidget;

    void setupUi(QWidget *qMRMLSettingsUnitWidget)
    {
        if (qMRMLSettingsUnitWidget->objectName().isEmpty())
            qMRMLSettingsUnitWidget->setObjectName(QString::fromUtf8("qMRMLSettingsUnitWidget"));
        qMRMLSettingsUnitWidget->resize(121, 97);
        gridLayout = new QGridLayout(qMRMLSettingsUnitWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        UnitLabel = new QLabel(qMRMLSettingsUnitWidget);
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));

        gridLayout->addWidget(UnitLabel, 0, 0, 1, 1);

        UnitNodeComboBox = new qMRMLNodeComboBox(qMRMLSettingsUnitWidget);
        UnitNodeComboBox->setObjectName(QString::fromUtf8("UnitNodeComboBox"));
        UnitNodeComboBox->setEnabled(true);
        UnitNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLUnitNode"));
        UnitNodeComboBox->setShowHidden(true);
        UnitNodeComboBox->setAddEnabled(true);
        UnitNodeComboBox->setRemoveEnabled(true);
        UnitNodeComboBox->setRenameEnabled(true);

        gridLayout->addWidget(UnitNodeComboBox, 0, 1, 1, 1);

        UnitInfoWidget = new qMRMLUnitWidget(qMRMLSettingsUnitWidget);
        UnitInfoWidget->setObjectName(QString::fromUtf8("UnitInfoWidget"));

        gridLayout->addWidget(UnitInfoWidget, 1, 0, 1, 2);


        retranslateUi(qMRMLSettingsUnitWidget);

        QMetaObject::connectSlotsByName(qMRMLSettingsUnitWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSettingsUnitWidget)
    {
        qMRMLSettingsUnitWidget->setWindowTitle(QCoreApplication::translate("qMRMLSettingsUnitWidget", "Unit Settings", nullptr));
        UnitLabel->setText(QCoreApplication::translate("qMRMLSettingsUnitWidget", "Unit:", nullptr));
#if QT_CONFIG(tooltip)
        UnitNodeComboBox->setToolTip(QCoreApplication::translate("qMRMLSettingsUnitWidget", "Select the current unit node to modify.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLSettingsUnitWidget: public Ui_qMRMLSettingsUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSETTINGSUNITWIDGET_H
