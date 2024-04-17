/********************************************************************************
** Form generated from reading UI file 'qSlicerNodeWriterOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERNODEWRITEROPTIONSWIDGET_H
#define UI_QSLICERNODEWRITEROPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qSlicerNodeWriterOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *UseCompressionCheckBox;
    QComboBox *CompressionParameterSelector;

    void setupUi(QWidget *qSlicerNodeWriterOptionsWidget)
    {
        if (qSlicerNodeWriterOptionsWidget->objectName().isEmpty())
            qSlicerNodeWriterOptionsWidget->setObjectName(QString::fromUtf8("qSlicerNodeWriterOptionsWidget"));
        qSlicerNodeWriterOptionsWidget->resize(145, 17);
        horizontalLayout = new QHBoxLayout(qSlicerNodeWriterOptionsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        UseCompressionCheckBox = new QCheckBox(qSlicerNodeWriterOptionsWidget);
        UseCompressionCheckBox->setObjectName(QString::fromUtf8("UseCompressionCheckBox"));

        horizontalLayout->addWidget(UseCompressionCheckBox);

        CompressionParameterSelector = new QComboBox(qSlicerNodeWriterOptionsWidget);
        CompressionParameterSelector->setObjectName(QString::fromUtf8("CompressionParameterSelector"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CompressionParameterSelector->sizePolicy().hasHeightForWidth());
        CompressionParameterSelector->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(CompressionParameterSelector);


        retranslateUi(qSlicerNodeWriterOptionsWidget);

        QMetaObject::connectSlotsByName(qSlicerNodeWriterOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *qSlicerNodeWriterOptionsWidget)
    {
        qSlicerNodeWriterOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerNodeWriterOptionsWidget", "Node Writer Options", nullptr));
        UseCompressionCheckBox->setText(QCoreApplication::translate("qSlicerNodeWriterOptionsWidget", "Compress", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerNodeWriterOptionsWidget: public Ui_qSlicerNodeWriterOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERNODEWRITEROPTIONSWIDGET_H
