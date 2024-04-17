/********************************************************************************
** Form generated from reading UI file 'qMRMLUnitWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLUNITWIDGET_H
#define UI_QMRMLUNITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include "ctkDoubleSpinBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLUnitWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *PresetLabel;
    qMRMLNodeComboBox *PresetNodeComboBox;
    QLabel *PrefixLabel;
    QLineEdit *PrefixLineEdit;
    QLabel *SuffixLabel;
    QLineEdit *SuffixLineEdit;
    QLabel *MaximumValueLabel;
    ctkDoubleSpinBox *MaximumSpinBox;
    QLabel *PrecisionLabel;
    QSpinBox *PrecisionSpinBox;
    QLabel *MinimumValueLabel;
    ctkDoubleSpinBox *MinimumSpinBox;
    QLabel *NameLabel;
    QLineEdit *NameLineEdit;
    QFrame *SeparationLine;
    QLabel *QuantityLabel;
    QLineEdit *QuantityLineEdit;
    QLabel *CoefficientLabel;
    ctkDoubleSpinBox *CoefficientSpinBox;
    QLabel *OffsetLabel;
    ctkDoubleSpinBox *OffsetSpinBox;

    void setupUi(qMRMLWidget *qMRMLUnitWidget)
    {
        if (qMRMLUnitWidget->objectName().isEmpty())
            qMRMLUnitWidget->setObjectName(QString::fromUtf8("qMRMLUnitWidget"));
        qMRMLUnitWidget->resize(296, 283);
        gridLayout = new QGridLayout(qMRMLUnitWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PresetLabel = new QLabel(qMRMLUnitWidget);
        PresetLabel->setObjectName(QString::fromUtf8("PresetLabel"));

        gridLayout->addWidget(PresetLabel, 1, 0, 1, 1);

        PresetNodeComboBox = new qMRMLNodeComboBox(qMRMLUnitWidget);
        PresetNodeComboBox->setObjectName(QString::fromUtf8("PresetNodeComboBox"));
        PresetNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLUnitNode"));
        PresetNodeComboBox->setShowHidden(true);
        PresetNodeComboBox->setNoneEnabled(true);
        PresetNodeComboBox->setAddEnabled(false);
        PresetNodeComboBox->setRemoveEnabled(false);
        PresetNodeComboBox->setSelectNodeUponCreation(false);

        gridLayout->addWidget(PresetNodeComboBox, 1, 1, 1, 1);

        PrefixLabel = new QLabel(qMRMLUnitWidget);
        PrefixLabel->setObjectName(QString::fromUtf8("PrefixLabel"));

        gridLayout->addWidget(PrefixLabel, 5, 0, 1, 1);

        PrefixLineEdit = new QLineEdit(qMRMLUnitWidget);
        PrefixLineEdit->setObjectName(QString::fromUtf8("PrefixLineEdit"));

        gridLayout->addWidget(PrefixLineEdit, 5, 1, 1, 1);

        SuffixLabel = new QLabel(qMRMLUnitWidget);
        SuffixLabel->setObjectName(QString::fromUtf8("SuffixLabel"));

        gridLayout->addWidget(SuffixLabel, 6, 0, 1, 1);

        SuffixLineEdit = new QLineEdit(qMRMLUnitWidget);
        SuffixLineEdit->setObjectName(QString::fromUtf8("SuffixLineEdit"));

        gridLayout->addWidget(SuffixLineEdit, 6, 1, 1, 1);

        MaximumValueLabel = new QLabel(qMRMLUnitWidget);
        MaximumValueLabel->setObjectName(QString::fromUtf8("MaximumValueLabel"));
        MaximumValueLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(MaximumValueLabel, 9, 0, 1, 1);

        MaximumSpinBox = new ctkDoubleSpinBox(qMRMLUnitWidget);
        MaximumSpinBox->setObjectName(QString::fromUtf8("MaximumSpinBox"));
        MaximumSpinBox->setDecimals(3);
        MaximumSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::InsertDecimals);
        MaximumSpinBox->setMinimum(-10000.000000000000000);
        MaximumSpinBox->setMaximum(10000.000000000000000);

        gridLayout->addWidget(MaximumSpinBox, 9, 1, 1, 1);

        PrecisionLabel = new QLabel(qMRMLUnitWidget);
        PrecisionLabel->setObjectName(QString::fromUtf8("PrecisionLabel"));

        gridLayout->addWidget(PrecisionLabel, 7, 0, 1, 1);

        PrecisionSpinBox = new QSpinBox(qMRMLUnitWidget);
        PrecisionSpinBox->setObjectName(QString::fromUtf8("PrecisionSpinBox"));
        PrecisionSpinBox->setMinimum(0);
        PrecisionSpinBox->setMaximum(16);
        PrecisionSpinBox->setValue(3);

        gridLayout->addWidget(PrecisionSpinBox, 7, 1, 1, 1);

        MinimumValueLabel = new QLabel(qMRMLUnitWidget);
        MinimumValueLabel->setObjectName(QString::fromUtf8("MinimumValueLabel"));

        gridLayout->addWidget(MinimumValueLabel, 8, 0, 1, 1);

        MinimumSpinBox = new ctkDoubleSpinBox(qMRMLUnitWidget);
        MinimumSpinBox->setObjectName(QString::fromUtf8("MinimumSpinBox"));
        MinimumSpinBox->setDecimals(3);
        MinimumSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::InsertDecimals);
        MinimumSpinBox->setMinimum(-10000.000000000000000);
        MinimumSpinBox->setMaximum(10000.000000000000000);

        gridLayout->addWidget(MinimumSpinBox, 8, 1, 1, 1);

        NameLabel = new QLabel(qMRMLUnitWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        gridLayout->addWidget(NameLabel, 3, 0, 1, 1);

        NameLineEdit = new QLineEdit(qMRMLUnitWidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        gridLayout->addWidget(NameLineEdit, 3, 1, 1, 1);

        SeparationLine = new QFrame(qMRMLUnitWidget);
        SeparationLine->setObjectName(QString::fromUtf8("SeparationLine"));
        SeparationLine->setFrameShape(QFrame::HLine);
        SeparationLine->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(SeparationLine, 2, 0, 1, 2);

        QuantityLabel = new QLabel(qMRMLUnitWidget);
        QuantityLabel->setObjectName(QString::fromUtf8("QuantityLabel"));

        gridLayout->addWidget(QuantityLabel, 4, 0, 1, 1);

        QuantityLineEdit = new QLineEdit(qMRMLUnitWidget);
        QuantityLineEdit->setObjectName(QString::fromUtf8("QuantityLineEdit"));
        QuantityLineEdit->setEnabled(false);

        gridLayout->addWidget(QuantityLineEdit, 4, 1, 1, 1);

        CoefficientLabel = new QLabel(qMRMLUnitWidget);
        CoefficientLabel->setObjectName(QString::fromUtf8("CoefficientLabel"));

        gridLayout->addWidget(CoefficientLabel, 10, 0, 1, 1);

        CoefficientSpinBox = new ctkDoubleSpinBox(qMRMLUnitWidget);
        CoefficientSpinBox->setObjectName(QString::fromUtf8("CoefficientSpinBox"));
        CoefficientSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue|ctkDoubleSpinBox::InsertDecimals);
        CoefficientSpinBox->setMinimum(-10000.000000000000000);
        CoefficientSpinBox->setMaximum(10000.000000000000000);
        CoefficientSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(CoefficientSpinBox, 10, 1, 1, 1);

        OffsetLabel = new QLabel(qMRMLUnitWidget);
        OffsetLabel->setObjectName(QString::fromUtf8("OffsetLabel"));

        gridLayout->addWidget(OffsetLabel, 11, 0, 1, 1);

        OffsetSpinBox = new ctkDoubleSpinBox(qMRMLUnitWidget);
        OffsetSpinBox->setObjectName(QString::fromUtf8("OffsetSpinBox"));
        OffsetSpinBox->setDecimals(0);
        OffsetSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue|ctkDoubleSpinBox::InsertDecimals);
        OffsetSpinBox->setMinimum(-10000.000000000000000);
        OffsetSpinBox->setMaximum(10000.000000000000000);

        gridLayout->addWidget(OffsetSpinBox, 11, 1, 1, 1);


        retranslateUi(qMRMLUnitWidget);

        QMetaObject::connectSlotsByName(qMRMLUnitWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLUnitWidget)
    {
        qMRMLUnitWidget->setWindowTitle(QCoreApplication::translate("qMRMLUnitWidget", "UnitWidget", nullptr));
        PresetLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Preset", nullptr));
        PresetNodeComboBox->setBaseName(QString());
        PresetNodeComboBox->setNoneDisplay(QCoreApplication::translate("qMRMLUnitWidget", "Select a preset", nullptr));
        PrefixLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Prefix", nullptr));
#if QT_CONFIG(tooltip)
        PrefixLineEdit->setToolTip(QCoreApplication::translate("qMRMLUnitWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Set the prefix of the unit.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The unit prefix will be displayed in the application before the unit's value. For example, the prefix &quot;</span><span style=\" font-size:8pt; font-weight:600;\">$</span><span style=\" font-size:8pt;\">&quot; could be used before an unit.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        SuffixLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Suffix", nullptr));
#if QT_CONFIG(tooltip)
        SuffixLineEdit->setToolTip(QCoreApplication::translate("qMRMLUnitWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Set the suffix of the unit. For example, the suffix for the unit </span><span style=\" font-size:8pt; font-weight:600;\">Meter</span><span style=\" font-size:8pt;\"> should probably be </span><span style=\" font-size:8pt; font-weight:600;\">m</span><span style=\" font-size:8pt;\">.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MaximumValueLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Maximum", nullptr));
#if QT_CONFIG(tooltip)
        MaximumSpinBox->setToolTip(QCoreApplication::translate("qMRMLUnitWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Set the maximum value possible for the unit.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">For example, a speed unit (in </span><span style=\" font-size:8pt; font-weight:600;\">m.s</span><span style=\" font-size:8pt; font-weight:600; vertical-align:super;\">-1</span><span style=\" font-size:8pt;\">) should probably have a maximum of 3e6. </span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PrecisionLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Precision", nullptr));
#if QT_CONFIG(tooltip)
        PrecisionSpinBox->setToolTip(QCoreApplication::translate("qMRMLUnitWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Set the precision (i.e. number of significant digits) of the unit.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This is used by the GUI to determine how many digits one can input for the current unit. For example, with a </span><span style=\" font-size:8pt; font-weight:600;\">Precision</span><span style=\" font-size:8pt;\"> of 3 the 1.0123 will be rounded to 1.112.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        MinimumValueLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Minimum", nullptr));
#if QT_CONFIG(tooltip)
        MinimumSpinBox->setToolTip(QCoreApplication::translate("qMRMLUnitWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the minimum value possible for the unit.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For example, a temperature unit (in <span style=\" font-weight:600;\">Kelvin</span>) should probably have a minimum of 0. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        NameLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Name", nullptr));
        QuantityLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Quantity", nullptr));
        CoefficientLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Coefficient", nullptr));
        OffsetLabel->setText(QCoreApplication::translate("qMRMLUnitWidget", "Offset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLUnitWidget: public Ui_qMRMLUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLUNITWIDGET_H
