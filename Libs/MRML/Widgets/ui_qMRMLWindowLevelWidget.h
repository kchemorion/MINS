/********************************************************************************
** Form generated from reading UI file 'qMRMLWindowLevelWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLWINDOWLEVELWIDGET_H
#define UI_QMRMLWINDOWLEVELWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ctkDoubleRangeSlider.h"
#include "ctkDoubleSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLWindowLevelWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *AutoManualComboBox;
    QHBoxLayout *horizontalLayout;
    ctkDoubleSpinBox *WindowSpinBox;
    ctkDoubleSpinBox *MinSpinBox;
    ctkDoubleRangeSlider *WindowLevelRangeSlider;
    ctkDoubleSpinBox *MaxSpinBox;
    ctkDoubleSpinBox *LevelSpinBox;
    QToolButton *RangeButton;

    void setupUi(QWidget *qMRMLWindowLevelWidget)
    {
        if (qMRMLWindowLevelWidget->objectName().isEmpty())
            qMRMLWindowLevelWidget->setObjectName(QString::fromUtf8("qMRMLWindowLevelWidget"));
        qMRMLWindowLevelWidget->resize(300, 61);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLWindowLevelWidget->sizePolicy().hasHeightForWidth());
        qMRMLWindowLevelWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qMRMLWindowLevelWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(qMRMLWindowLevelWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        AutoManualComboBox = new QComboBox(qMRMLWindowLevelWidget);
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->addItem(QString());
        AutoManualComboBox->setObjectName(QString::fromUtf8("AutoManualComboBox"));

        gridLayout->addWidget(AutoManualComboBox, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        WindowSpinBox = new ctkDoubleSpinBox(qMRMLWindowLevelWidget);
        WindowSpinBox->setObjectName(QString::fromUtf8("WindowSpinBox"));
        WindowSpinBox->setDecimals(2);
        WindowSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);

        horizontalLayout->addWidget(WindowSpinBox);

        MinSpinBox = new ctkDoubleSpinBox(qMRMLWindowLevelWidget);
        MinSpinBox->setObjectName(QString::fromUtf8("MinSpinBox"));
        MinSpinBox->setDecimals(2);
        MinSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);

        horizontalLayout->addWidget(MinSpinBox);

        WindowLevelRangeSlider = new ctkDoubleRangeSlider(qMRMLWindowLevelWidget);
        WindowLevelRangeSlider->setObjectName(QString::fromUtf8("WindowLevelRangeSlider"));
        WindowLevelRangeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(WindowLevelRangeSlider);

        MaxSpinBox = new ctkDoubleSpinBox(qMRMLWindowLevelWidget);
        MaxSpinBox->setObjectName(QString::fromUtf8("MaxSpinBox"));
        MaxSpinBox->setDecimals(2);
        MaxSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);

        horizontalLayout->addWidget(MaxSpinBox);

        LevelSpinBox = new ctkDoubleSpinBox(qMRMLWindowLevelWidget);
        LevelSpinBox->setObjectName(QString::fromUtf8("LevelSpinBox"));
        LevelSpinBox->setDecimals(2);
        LevelSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);

        horizontalLayout->addWidget(LevelSpinBox);

        RangeButton = new QToolButton(qMRMLWindowLevelWidget);
        RangeButton->setObjectName(QString::fromUtf8("RangeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":Icons/SliceMoreOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        RangeButton->setIcon(icon);
        RangeButton->setCheckable(true);

        horizontalLayout->addWidget(RangeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(qMRMLWindowLevelWidget);

        QMetaObject::connectSlotsByName(qMRMLWindowLevelWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLWindowLevelWidget)
    {
        qMRMLWindowLevelWidget->setWindowTitle(QCoreApplication::translate("qMRMLWindowLevelWidget", "Window Level", nullptr));
        label->setText(QCoreApplication::translate("qMRMLWindowLevelWidget", "Window/Level:", nullptr));
        AutoManualComboBox->setItemText(0, QCoreApplication::translate("qMRMLWindowLevelWidget", "Auto", nullptr));
        AutoManualComboBox->setItemText(1, QCoreApplication::translate("qMRMLWindowLevelWidget", "Manual", nullptr));
        AutoManualComboBox->setItemText(2, QCoreApplication::translate("qMRMLWindowLevelWidget", "Manual Min/Max", nullptr));

        WindowSpinBox->setPrefix(QCoreApplication::translate("qMRMLWindowLevelWidget", "W: ", nullptr));
        LevelSpinBox->setPrefix(QCoreApplication::translate("qMRMLWindowLevelWidget", "L: ", nullptr));
        RangeButton->setText(QCoreApplication::translate("qMRMLWindowLevelWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLWindowLevelWidget: public Ui_qMRMLWindowLevelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLWINDOWLEVELWIDGET_H
