/********************************************************************************
** Form generated from reading UI file 'qMRMLSequenceBrowserSeekWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEQUENCEBROWSERSEEKWIDGET_H
#define UI_QMRMLSEQUENCEBROWSERSEEKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLSequenceBrowserSeekWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_IndexName;
    QSlider *slider_IndexValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_IndexValue;
    QLabel *label_IndexUnit;

    void setupUi(QWidget *qMRMLSequenceBrowserSeekWidget)
    {
        if (qMRMLSequenceBrowserSeekWidget->objectName().isEmpty())
            qMRMLSequenceBrowserSeekWidget->setObjectName(QString::fromUtf8("qMRMLSequenceBrowserSeekWidget"));
        qMRMLSequenceBrowserSeekWidget->resize(334, 42);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSequenceBrowserSeekWidget->sizePolicy().hasHeightForWidth());
        qMRMLSequenceBrowserSeekWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(qMRMLSequenceBrowserSeekWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_IndexName = new QLabel(qMRMLSequenceBrowserSeekWidget);
        label_IndexName->setObjectName(QString::fromUtf8("label_IndexName"));

        horizontalLayout->addWidget(label_IndexName);

        slider_IndexValue = new QSlider(qMRMLSequenceBrowserSeekWidget);
        slider_IndexValue->setObjectName(QString::fromUtf8("slider_IndexValue"));
        slider_IndexValue->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_IndexValue);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        label_IndexValue = new QLabel(qMRMLSequenceBrowserSeekWidget);
        label_IndexValue->setObjectName(QString::fromUtf8("label_IndexValue"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_IndexValue->sizePolicy().hasHeightForWidth());
        label_IndexValue->setSizePolicy(sizePolicy1);
        label_IndexValue->setMinimumSize(QSize(30, 0));
        label_IndexValue->setText(QString::fromUtf8("-"));
        label_IndexValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_IndexValue);

        label_IndexUnit = new QLabel(qMRMLSequenceBrowserSeekWidget);
        label_IndexUnit->setObjectName(QString::fromUtf8("label_IndexUnit"));
        label_IndexUnit->setText(QString::fromUtf8("-"));

        horizontalLayout_2->addWidget(label_IndexUnit);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(qMRMLSequenceBrowserSeekWidget);

        QMetaObject::connectSlotsByName(qMRMLSequenceBrowserSeekWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSequenceBrowserSeekWidget)
    {
        qMRMLSequenceBrowserSeekWidget->setWindowTitle(QCoreApplication::translate("qMRMLSequenceBrowserSeekWidget", "qMRMLSequenceBrowserSeekWidget", nullptr));
        label_IndexName->setText(QCoreApplication::translate("qMRMLSequenceBrowserSeekWidget", "Index name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSequenceBrowserSeekWidget: public Ui_qMRMLSequenceBrowserSeekWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEQUENCEBROWSERSEEKWIDGET_H
