/********************************************************************************
** Form generated from reading UI file 'qSlicerUnitsSettingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERUNITSSETTINGSPANEL_H
#define UI_QSLICERUNITSSETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerUnitsSettingsPanel
{
public:
    QGridLayout *GridLayout;
    QLabel *WarningLabel;
    QCheckBox *ShowAllCheckBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *QuantitiesLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(ctkSettingsPanel *qSlicerUnitsSettingsPanel)
    {
        if (qSlicerUnitsSettingsPanel->objectName().isEmpty())
            qSlicerUnitsSettingsPanel->setObjectName(QString::fromUtf8("qSlicerUnitsSettingsPanel"));
        qSlicerUnitsSettingsPanel->resize(645, 469);
        GridLayout = new QGridLayout(qSlicerUnitsSettingsPanel);
        GridLayout->setObjectName(QString::fromUtf8("GridLayout"));
        WarningLabel = new QLabel(qSlicerUnitsSettingsPanel);
        WarningLabel->setObjectName(QString::fromUtf8("WarningLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarningLabel->sizePolicy().hasHeightForWidth());
        WarningLabel->setSizePolicy(sizePolicy);

        GridLayout->addWidget(WarningLabel, 0, 0, 1, 1);

        ShowAllCheckBox = new QCheckBox(qSlicerUnitsSettingsPanel);
        ShowAllCheckBox->setObjectName(QString::fromUtf8("ShowAllCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ShowAllCheckBox->sizePolicy().hasHeightForWidth());
        ShowAllCheckBox->setSizePolicy(sizePolicy1);
        ShowAllCheckBox->setChecked(true);

        GridLayout->addWidget(ShowAllCheckBox, 0, 1, 1, 1);

        scrollArea = new QScrollArea(qSlicerUnitsSettingsPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(0, 350));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 629, 346));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        QuantitiesLayout = new QVBoxLayout();
        QuantitiesLayout->setObjectName(QString::fromUtf8("QuantitiesLayout"));

        verticalLayout->addLayout(QuantitiesLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        GridLayout->addWidget(scrollArea, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        GridLayout->addItem(verticalSpacer, 2, 0, 1, 2);


        retranslateUi(qSlicerUnitsSettingsPanel);
        QObject::connect(ShowAllCheckBox, SIGNAL(toggled(bool)), WarningLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qSlicerUnitsSettingsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerUnitsSettingsPanel)
    {
        qSlicerUnitsSettingsPanel->setWindowTitle(QCoreApplication::translate("qSlicerUnitsSettingsPanel", "Units Settings", nullptr));
        WarningLabel->setText(QCoreApplication::translate("qSlicerUnitsSettingsPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">Warning:</span> Changing the properties of the unit only change the display, not the value !</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        ShowAllCheckBox->setToolTip(QCoreApplication::translate("qSlicerUnitsSettingsPanel", "Show all the units' properties.\n"
"This should only used by advanced users who understand the consequences of changing a unit's property.", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowAllCheckBox->setText(QCoreApplication::translate("qSlicerUnitsSettingsPanel", "Show advanced options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerUnitsSettingsPanel: public Ui_qSlicerUnitsSettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERUNITSSETTINGSPANEL_H
