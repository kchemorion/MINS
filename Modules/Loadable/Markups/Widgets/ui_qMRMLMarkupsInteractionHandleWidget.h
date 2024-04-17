/********************************************************************************
** Form generated from reading UI file 'qMRMLMarkupsInteractionHandleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMARKUPSINTERACTIONHANDLEWIDGET_H
#define UI_QMRMLMARKUPSINTERACTIONHANDLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "ctkSliderWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLMarkupsInteractionHandleWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *translationEnableLabel;
    QLabel *yLabel;
    QCheckBox *translateYCheckBox;
    QCheckBox *scaleZCheckBox;
    QCheckBox *rotateZCheckBox;
    QCheckBox *scaleXCheckBox;
    QLabel *xLabel;
    QLabel *zLabel;
    QCheckBox *scaleVisibilityCheckBox;
    QLabel *label_2;
    QPushButton *moreOptionsCheckBox;
    QCheckBox *overallVisibilityCheckBox;
    QCheckBox *scaleViewPlaneCheckBox;
    ctkSliderWidget *interactionHandleScaleSlider;
    QCheckBox *rotateYCheckBox;
    QLabel *label;
    QCheckBox *translateZCheckBox;
    QCheckBox *translateVisibilityCheckBox;
    QLabel *viewPlaneLabel;
    QCheckBox *translateViewPlaneCheckBox;
    QCheckBox *rotateXCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *scaleEnableLabel;
    QCheckBox *translateXCheckBox;
    QLabel *rotateEnableLabel;
    QCheckBox *rotateVisibilityCheckBox;
    QCheckBox *scaleYCheckBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(qMRMLWidget *qMRMLMarkupsInteractionHandleWidget)
    {
        if (qMRMLMarkupsInteractionHandleWidget->objectName().isEmpty())
            qMRMLMarkupsInteractionHandleWidget->setObjectName(QString::fromUtf8("qMRMLMarkupsInteractionHandleWidget"));
        qMRMLMarkupsInteractionHandleWidget->resize(370, 115);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLMarkupsInteractionHandleWidget->sizePolicy().hasHeightForWidth());
        qMRMLMarkupsInteractionHandleWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qMRMLMarkupsInteractionHandleWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        translationEnableLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        translationEnableLabel->setObjectName(QString::fromUtf8("translationEnableLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(translationEnableLabel->sizePolicy().hasHeightForWidth());
        translationEnableLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(translationEnableLabel, 1, 2, 1, 1);

        yLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(yLabel->sizePolicy().hasHeightForWidth());
        yLabel->setSizePolicy(sizePolicy2);
        yLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(yLabel, 0, 6, 1, 1);

        translateYCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        translateYCheckBox->setObjectName(QString::fromUtf8("translateYCheckBox"));

        gridLayout->addWidget(translateYCheckBox, 1, 6, 1, 1, Qt::AlignHCenter);

        scaleZCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        scaleZCheckBox->setObjectName(QString::fromUtf8("scaleZCheckBox"));

        gridLayout->addWidget(scaleZCheckBox, 5, 7, 1, 1, Qt::AlignHCenter);

        rotateZCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        rotateZCheckBox->setObjectName(QString::fromUtf8("rotateZCheckBox"));

        gridLayout->addWidget(rotateZCheckBox, 3, 7, 1, 1, Qt::AlignHCenter);

        scaleXCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        scaleXCheckBox->setObjectName(QString::fromUtf8("scaleXCheckBox"));

        gridLayout->addWidget(scaleXCheckBox, 5, 5, 1, 1, Qt::AlignHCenter);

        xLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        sizePolicy2.setHeightForWidth(xLabel->sizePolicy().hasHeightForWidth());
        xLabel->setSizePolicy(sizePolicy2);
        xLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(xLabel, 0, 5, 1, 1);

        zLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        sizePolicy2.setHeightForWidth(zLabel->sizePolicy().hasHeightForWidth());
        zLabel->setSizePolicy(sizePolicy2);
        zLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(zLabel, 0, 7, 1, 1);

        scaleVisibilityCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        scaleVisibilityCheckBox->setObjectName(QString::fromUtf8("scaleVisibilityCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scaleVisibilityCheckBox->sizePolicy().hasHeightForWidth());
        scaleVisibilityCheckBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(scaleVisibilityCheckBox, 5, 3, 1, 1);

        label_2 = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 13, 0, 1, 1);

        moreOptionsCheckBox = new QPushButton(qMRMLMarkupsInteractionHandleWidget);
        moreOptionsCheckBox->setObjectName(QString::fromUtf8("moreOptionsCheckBox"));
        sizePolicy3.setHeightForWidth(moreOptionsCheckBox->sizePolicy().hasHeightForWidth());
        moreOptionsCheckBox->setSizePolicy(sizePolicy3);
        moreOptionsCheckBox->setCheckable(true);

        gridLayout->addWidget(moreOptionsCheckBox, 0, 10, 1, 1);

        overallVisibilityCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        overallVisibilityCheckBox->setObjectName(QString::fromUtf8("overallVisibilityCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(overallVisibilityCheckBox->sizePolicy().hasHeightForWidth());
        overallVisibilityCheckBox->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(overallVisibilityCheckBox, 0, 2, 1, 1);

        scaleViewPlaneCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        scaleViewPlaneCheckBox->setObjectName(QString::fromUtf8("scaleViewPlaneCheckBox"));

        gridLayout->addWidget(scaleViewPlaneCheckBox, 5, 8, 1, 1, Qt::AlignHCenter);

        interactionHandleScaleSlider = new ctkSliderWidget(qMRMLMarkupsInteractionHandleWidget);
        interactionHandleScaleSlider->setObjectName(QString::fromUtf8("interactionHandleScaleSlider"));
        interactionHandleScaleSlider->setSingleStep(0.100000000000000);
        interactionHandleScaleSlider->setMaximum(20.000000000000000);

        gridLayout->addWidget(interactionHandleScaleSlider, 13, 2, 1, 9);

        rotateYCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        rotateYCheckBox->setObjectName(QString::fromUtf8("rotateYCheckBox"));

        gridLayout->addWidget(rotateYCheckBox, 3, 6, 1, 1, Qt::AlignHCenter);

        label = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        translateZCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        translateZCheckBox->setObjectName(QString::fromUtf8("translateZCheckBox"));

        gridLayout->addWidget(translateZCheckBox, 1, 7, 1, 1, Qt::AlignHCenter);

        translateVisibilityCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        translateVisibilityCheckBox->setObjectName(QString::fromUtf8("translateVisibilityCheckBox"));
        sizePolicy3.setHeightForWidth(translateVisibilityCheckBox->sizePolicy().hasHeightForWidth());
        translateVisibilityCheckBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(translateVisibilityCheckBox, 1, 3, 1, 1);

        viewPlaneLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        viewPlaneLabel->setObjectName(QString::fromUtf8("viewPlaneLabel"));
        sizePolicy2.setHeightForWidth(viewPlaneLabel->sizePolicy().hasHeightForWidth());
        viewPlaneLabel->setSizePolicy(sizePolicy2);
        viewPlaneLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(viewPlaneLabel, 0, 8, 1, 1);

        translateViewPlaneCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        translateViewPlaneCheckBox->setObjectName(QString::fromUtf8("translateViewPlaneCheckBox"));

        gridLayout->addWidget(translateViewPlaneCheckBox, 1, 8, 1, 1, Qt::AlignHCenter);

        rotateXCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        rotateXCheckBox->setObjectName(QString::fromUtf8("rotateXCheckBox"));

        gridLayout->addWidget(rotateXCheckBox, 3, 5, 1, 1, Qt::AlignHCenter);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 4, 1, 1);

        scaleEnableLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        scaleEnableLabel->setObjectName(QString::fromUtf8("scaleEnableLabel"));
        sizePolicy1.setHeightForWidth(scaleEnableLabel->sizePolicy().hasHeightForWidth());
        scaleEnableLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(scaleEnableLabel, 5, 2, 1, 1);

        translateXCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        translateXCheckBox->setObjectName(QString::fromUtf8("translateXCheckBox"));
        translateXCheckBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(translateXCheckBox, 1, 5, 1, 1, Qt::AlignHCenter);

        rotateEnableLabel = new QLabel(qMRMLMarkupsInteractionHandleWidget);
        rotateEnableLabel->setObjectName(QString::fromUtf8("rotateEnableLabel"));
        sizePolicy1.setHeightForWidth(rotateEnableLabel->sizePolicy().hasHeightForWidth());
        rotateEnableLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(rotateEnableLabel, 3, 2, 1, 1);

        rotateVisibilityCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        rotateVisibilityCheckBox->setObjectName(QString::fromUtf8("rotateVisibilityCheckBox"));
        sizePolicy3.setHeightForWidth(rotateVisibilityCheckBox->sizePolicy().hasHeightForWidth());
        rotateVisibilityCheckBox->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(rotateVisibilityCheckBox, 3, 3, 1, 1);

        scaleYCheckBox = new QCheckBox(qMRMLMarkupsInteractionHandleWidget);
        scaleYCheckBox->setObjectName(QString::fromUtf8("scaleYCheckBox"));

        gridLayout->addWidget(scaleYCheckBox, 5, 6, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 9, 1, 1);


        retranslateUi(qMRMLMarkupsInteractionHandleWidget);
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), translateXCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), scaleViewPlaneCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), scaleZCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), scaleYCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), scaleXCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), rotateZCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), rotateYCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), rotateXCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), translateViewPlaneCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), translateZCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), translateYCheckBox, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), xLabel, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), yLabel, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), zLabel, SLOT(setVisible(bool)));
        QObject::connect(moreOptionsCheckBox, SIGNAL(toggled(bool)), viewPlaneLabel, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qMRMLMarkupsInteractionHandleWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLMarkupsInteractionHandleWidget)
    {
        qMRMLMarkupsInteractionHandleWidget->setWindowTitle(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Interaction Handles", nullptr));
        translationEnableLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Enable translation:", nullptr));
        yLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Y", nullptr));
        translateYCheckBox->setText(QString());
        scaleZCheckBox->setText(QString());
        rotateZCheckBox->setText(QString());
        scaleXCheckBox->setText(QString());
        xLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "X", nullptr));
        zLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Z", nullptr));
        scaleVisibilityCheckBox->setText(QString());
        label_2->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Size:", nullptr));
        moreOptionsCheckBox->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "More options...", nullptr));
        overallVisibilityCheckBox->setText(QString());
        scaleViewPlaneCheckBox->setText(QString());
        interactionHandleScaleSlider->setSuffix(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", " %", nullptr));
        rotateYCheckBox->setText(QString());
        label->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Visibility:", nullptr));
        translateZCheckBox->setText(QString());
        translateVisibilityCheckBox->setText(QString());
        viewPlaneLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "View plane", nullptr));
        translateViewPlaneCheckBox->setText(QString());
        rotateXCheckBox->setText(QString());
        scaleEnableLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Enable scaling:", nullptr));
        translateXCheckBox->setText(QString());
        rotateEnableLabel->setText(QCoreApplication::translate("qMRMLMarkupsInteractionHandleWidget", "Enable rotation:", nullptr));
        rotateVisibilityCheckBox->setText(QString());
        scaleYCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLMarkupsInteractionHandleWidget: public Ui_qMRMLMarkupsInteractionHandleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMARKUPSINTERACTIONHANDLEWIDGET_H
