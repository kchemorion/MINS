/********************************************************************************
** Form generated from reading UI file 'qMRMLTransformInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLTRANSFORMINFOWIDGET_H
#define UI_QMRMLTRANSFORMINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLTransformInfoWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *TransformToParentInfoTextBrowser;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *TransformFromParentInfoTextBrowser;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ViewerDisplacementVectorRAS;

    void setupUi(QWidget *qMRMLTransformInfoWidget)
    {
        if (qMRMLTransformInfoWidget->objectName().isEmpty())
            qMRMLTransformInfoWidget->setObjectName(QString::fromUtf8("qMRMLTransformInfoWidget"));
        qMRMLTransformInfoWidget->resize(331, 89);
        verticalLayout_2 = new QVBoxLayout(qMRMLTransformInfoWidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(qMRMLTransformInfoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        TransformToParentInfoTextBrowser = new QLabel(qMRMLTransformInfoWidget);
        TransformToParentInfoTextBrowser->setObjectName(QString::fromUtf8("TransformToParentInfoTextBrowser"));
        TransformToParentInfoTextBrowser->setWordWrap(true);

        horizontalLayout->addWidget(TransformToParentInfoTextBrowser);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(qMRMLTransformInfoWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        TransformFromParentInfoTextBrowser = new QLabel(qMRMLTransformInfoWidget);
        TransformFromParentInfoTextBrowser->setObjectName(QString::fromUtf8("TransformFromParentInfoTextBrowser"));

        horizontalLayout_2->addWidget(TransformFromParentInfoTextBrowser);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ViewerDisplacementVectorRAS = new QLabel(qMRMLTransformInfoWidget);
        ViewerDisplacementVectorRAS->setObjectName(QString::fromUtf8("ViewerDisplacementVectorRAS"));

        horizontalLayout_3->addWidget(ViewerDisplacementVectorRAS);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(qMRMLTransformInfoWidget);

        QMetaObject::connectSlotsByName(qMRMLTransformInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLTransformInfoWidget)
    {
        qMRMLTransformInfoWidget->setWindowTitle(QCoreApplication::translate("qMRMLTransformInfoWidget", "Transform Information", nullptr));
        label->setText(QCoreApplication::translate("qMRMLTransformInfoWidget", "Transform to parent:", nullptr));
        TransformToParentInfoTextBrowser->setText(QCoreApplication::translate("qMRMLTransformInfoWidget", "No information available.", nullptr));
        label_2->setText(QCoreApplication::translate("qMRMLTransformInfoWidget", "Transform from parent:", nullptr));
        TransformFromParentInfoTextBrowser->setText(QCoreApplication::translate("qMRMLTransformInfoWidget", "No information available.", nullptr));
        ViewerDisplacementVectorRAS->setText(QCoreApplication::translate("qMRMLTransformInfoWidget", "ViewerRAS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLTransformInfoWidget: public Ui_qMRMLTransformInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLTRANSFORMINFOWIDGET_H
