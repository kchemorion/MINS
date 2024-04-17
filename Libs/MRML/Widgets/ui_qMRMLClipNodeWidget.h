/********************************************************************************
** Form generated from reading UI file 'qMRMLClipNodeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLCLIPNODEWIDGET_H
#define UI_QMRMLCLIPNODEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLClipNodeWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *ClippingTypeLabel;
    QRadioButton *UnionRadioButton;
    QRadioButton *IntersectionRadioButton;
    QCheckBox *RedSliceClippingCheckBox;
    QRadioButton *RedPositiveRadioButton;
    QRadioButton *RedNegativeRadioButton;
    QCheckBox *YellowSliceClippingCheckBox;
    QRadioButton *YellowPositiveRadioButton;
    QRadioButton *YellowNegativeRadioButton;
    QCheckBox *GreenSliceClippingCheckBox;
    QRadioButton *GreenPositiveRadioButton;
    QRadioButton *GreenNegativeRadioButton;
    QCheckBox *WholeCellClippingCheckBox;

    void setupUi(QWidget *qMRMLClipNodeWidget)
    {
        if (qMRMLClipNodeWidget->objectName().isEmpty())
            qMRMLClipNodeWidget->setObjectName(QString::fromUtf8("qMRMLClipNodeWidget"));
        qMRMLClipNodeWidget->resize(404, 134);
        gridLayout = new QGridLayout(qMRMLClipNodeWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ClippingTypeLabel = new QLabel(qMRMLClipNodeWidget);
        ClippingTypeLabel->setObjectName(QString::fromUtf8("ClippingTypeLabel"));

        gridLayout->addWidget(ClippingTypeLabel, 0, 0, 1, 1);

        UnionRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        UnionRadioButton->setObjectName(QString::fromUtf8("UnionRadioButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/ClippingUnion.png"), QSize(), QIcon::Normal, QIcon::Off);
        UnionRadioButton->setIcon(icon);
        UnionRadioButton->setChecked(true);

        gridLayout->addWidget(UnionRadioButton, 0, 1, 1, 1);

        IntersectionRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        IntersectionRadioButton->setObjectName(QString::fromUtf8("IntersectionRadioButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ClippingIntersection.png"), QSize(), QIcon::Normal, QIcon::Off);
        IntersectionRadioButton->setIcon(icon1);

        gridLayout->addWidget(IntersectionRadioButton, 0, 2, 1, 1);

        RedSliceClippingCheckBox = new QCheckBox(qMRMLClipNodeWidget);
        RedSliceClippingCheckBox->setObjectName(QString::fromUtf8("RedSliceClippingCheckBox"));

        gridLayout->addWidget(RedSliceClippingCheckBox, 1, 0, 1, 1);

        RedPositiveRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        RedPositiveRadioButton->setObjectName(QString::fromUtf8("RedPositiveRadioButton"));
        RedPositiveRadioButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/RedSpacePositive.png"), QSize(), QIcon::Normal, QIcon::Off);
        RedPositiveRadioButton->setIcon(icon2);

        gridLayout->addWidget(RedPositiveRadioButton, 1, 1, 1, 1);

        RedNegativeRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        RedNegativeRadioButton->setObjectName(QString::fromUtf8("RedNegativeRadioButton"));
        RedNegativeRadioButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/RedSpaceNegative.png"), QSize(), QIcon::Normal, QIcon::Off);
        RedNegativeRadioButton->setIcon(icon3);

        gridLayout->addWidget(RedNegativeRadioButton, 1, 2, 1, 1);

        YellowSliceClippingCheckBox = new QCheckBox(qMRMLClipNodeWidget);
        YellowSliceClippingCheckBox->setObjectName(QString::fromUtf8("YellowSliceClippingCheckBox"));

        gridLayout->addWidget(YellowSliceClippingCheckBox, 2, 0, 1, 1);

        YellowPositiveRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        YellowPositiveRadioButton->setObjectName(QString::fromUtf8("YellowPositiveRadioButton"));
        YellowPositiveRadioButton->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/YellowSpacePositive.png"), QSize(), QIcon::Normal, QIcon::Off);
        YellowPositiveRadioButton->setIcon(icon4);

        gridLayout->addWidget(YellowPositiveRadioButton, 2, 1, 1, 1);

        YellowNegativeRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        YellowNegativeRadioButton->setObjectName(QString::fromUtf8("YellowNegativeRadioButton"));
        YellowNegativeRadioButton->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/YellowSpaceNegative.png"), QSize(), QIcon::Normal, QIcon::Off);
        YellowNegativeRadioButton->setIcon(icon5);

        gridLayout->addWidget(YellowNegativeRadioButton, 2, 2, 1, 1);

        GreenSliceClippingCheckBox = new QCheckBox(qMRMLClipNodeWidget);
        GreenSliceClippingCheckBox->setObjectName(QString::fromUtf8("GreenSliceClippingCheckBox"));

        gridLayout->addWidget(GreenSliceClippingCheckBox, 3, 0, 1, 1);

        GreenPositiveRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        GreenPositiveRadioButton->setObjectName(QString::fromUtf8("GreenPositiveRadioButton"));
        GreenPositiveRadioButton->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/GreenSpacePositive.png"), QSize(), QIcon::Normal, QIcon::Off);
        GreenPositiveRadioButton->setIcon(icon6);

        gridLayout->addWidget(GreenPositiveRadioButton, 3, 1, 1, 1);

        GreenNegativeRadioButton = new QRadioButton(qMRMLClipNodeWidget);
        GreenNegativeRadioButton->setObjectName(QString::fromUtf8("GreenNegativeRadioButton"));
        GreenNegativeRadioButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/GreenSpaceNegative.png"), QSize(), QIcon::Normal, QIcon::Off);
        GreenNegativeRadioButton->setIcon(icon7);

        gridLayout->addWidget(GreenNegativeRadioButton, 3, 2, 1, 1);

        WholeCellClippingCheckBox = new QCheckBox(qMRMLClipNodeWidget);
        WholeCellClippingCheckBox->setObjectName(QString::fromUtf8("WholeCellClippingCheckBox"));
        WholeCellClippingCheckBox->setChecked(false);

        gridLayout->addWidget(WholeCellClippingCheckBox, 4, 0, 1, 1);


        retranslateUi(qMRMLClipNodeWidget);
        QObject::connect(RedSliceClippingCheckBox, SIGNAL(toggled(bool)), RedPositiveRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(RedSliceClippingCheckBox, SIGNAL(toggled(bool)), RedNegativeRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(YellowSliceClippingCheckBox, SIGNAL(toggled(bool)), YellowPositiveRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(YellowSliceClippingCheckBox, SIGNAL(toggled(bool)), YellowNegativeRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(GreenSliceClippingCheckBox, SIGNAL(toggled(bool)), GreenPositiveRadioButton, SLOT(setEnabled(bool)));
        QObject::connect(GreenSliceClippingCheckBox, SIGNAL(toggled(bool)), GreenNegativeRadioButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(qMRMLClipNodeWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLClipNodeWidget)
    {
        qMRMLClipNodeWidget->setWindowTitle(QCoreApplication::translate("qMRMLClipNodeWidget", "Clip", nullptr));
        ClippingTypeLabel->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Clipping Type:", nullptr));
#if QT_CONFIG(tooltip)
        ClippingTypeLabel->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "When more than one slice plane is used, this option controls if it's the union or intersection of the positive and/or negative spaces that is used to clip the model. The parts of the model inside the selected space is kept, parts outside of the selection are clipped away.", nullptr));
#endif // QT_CONFIG(tooltip)
        UnionRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Union", nullptr));
#if QT_CONFIG(tooltip)
        UnionRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Use the union of the positive and/or negative spaces defined by the slice planes to clip the model.", nullptr));
#endif // QT_CONFIG(tooltip)
        IntersectionRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Intersection", nullptr));
#if QT_CONFIG(tooltip)
        IntersectionRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Use the intersection of the positive and/or negative spaces defined by the slice planes to clip the model.", nullptr));
#endif // QT_CONFIG(tooltip)
        RedSliceClippingCheckBox->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Red Slice Clipping:", nullptr));
#if QT_CONFIG(tooltip)
        RedSliceClippingCheckBox->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Use the positive or negative space defined by the Red slice plane to clip the model. Positive side is toward the Superior, negative is toward the Inferior. Keeps the part of the model in the selected space, clips away the rest.", nullptr));
#endif // QT_CONFIG(tooltip)
        RedPositiveRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Positive", nullptr));
#if QT_CONFIG(tooltip)
        RedPositiveRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside the positive space, toward the Superior (head), defined by the Red slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        RedNegativeRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Negative", nullptr));
#if QT_CONFIG(tooltip)
        RedNegativeRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside of the negative space, toward the Inferior (feet), defined by the Red slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        YellowSliceClippingCheckBox->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Yellow Slice Clipping:", nullptr));
#if QT_CONFIG(tooltip)
        YellowSliceClippingCheckBox->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Use the positive or negative space defined by the Yellow slice plane to clip the model. Positive side is toward the Right, negative is toward the Left. Keeps the part of the model in the selected space, clips away the rest.", nullptr));
#endif // QT_CONFIG(tooltip)
        YellowPositiveRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Positive", nullptr));
#if QT_CONFIG(tooltip)
        YellowPositiveRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside of the positive space, toward the Right, defined by the Yellow slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        YellowNegativeRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Negative", nullptr));
#if QT_CONFIG(tooltip)
        YellowNegativeRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside of the negative space, toward the Left, defined by the Yellow slice plane .", nullptr));
#endif // QT_CONFIG(tooltip)
        GreenSliceClippingCheckBox->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Green Slice Clipping:", nullptr));
#if QT_CONFIG(tooltip)
        GreenSliceClippingCheckBox->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Use the positive or negative space defined by the Green slice plane to clip the model. Positive side is toward the Anterior, negative is toward the Posterior. Keeps the part of the model in the selected space, clips away the rest.", nullptr));
#endif // QT_CONFIG(tooltip)
        GreenPositiveRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Positive", nullptr));
#if QT_CONFIG(tooltip)
        GreenPositiveRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside of the positive space, toward the Anterior (front), defined by the Green slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        GreenNegativeRadioButton->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Negative", nullptr));
#if QT_CONFIG(tooltip)
        GreenNegativeRadioButton->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep the parts of the model that are inside of the negative space, toward the Posterior (back), defined by the Green slice plane.", nullptr));
#endif // QT_CONFIG(tooltip)
        WholeCellClippingCheckBox->setText(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep only whole cells when clipping", nullptr));
#if QT_CONFIG(tooltip)
        WholeCellClippingCheckBox->setToolTip(QCoreApplication::translate("qMRMLClipNodeWidget", "Keep only whole cells when clipping", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLClipNodeWidget: public Ui_qMRMLClipNodeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLCLIPNODEWIDGET_H
