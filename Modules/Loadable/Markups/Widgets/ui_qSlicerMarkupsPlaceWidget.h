/********************************************************************************
** Form generated from reading UI file 'qSlicerMarkupsPlaceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMARKUPSPLACEWIDGET_H
#define UI_QSLICERMARKUPSPLACEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include "ctkColorPickerButton.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerMarkupsPlaceWidget
{
public:
    QAction *ActionPlacePersistentPoint;
    QAction *ActionDeleteAll;
    QAction *ActionUnsetLast;
    QAction *ActionUnsetAll;
    QAction *ActionVisibility;
    QAction *ActionLocked;
    QAction *ActionFixedNumberOfControlPoints;
    QHBoxLayout *horizontalLayout;
    ctkColorPickerButton *ColorButton;
    QToolButton *PlaceButton;
    QToolButton *DeleteButton;
    QToolButton *MoreButton;

    void setupUi(qSlicerWidget *qSlicerMarkupsPlaceWidget)
    {
        if (qSlicerMarkupsPlaceWidget->objectName().isEmpty())
            qSlicerMarkupsPlaceWidget->setObjectName(QString::fromUtf8("qSlicerMarkupsPlaceWidget"));
        qSlicerMarkupsPlaceWidget->resize(151, 30);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerMarkupsPlaceWidget->sizePolicy().hasHeightForWidth());
        qSlicerMarkupsPlaceWidget->setSizePolicy(sizePolicy);
        ActionPlacePersistentPoint = new QAction(qSlicerMarkupsPlaceWidget);
        ActionPlacePersistentPoint->setObjectName(QString::fromUtf8("ActionPlacePersistentPoint"));
        ActionPlacePersistentPoint->setCheckable(true);
        ActionDeleteAll = new QAction(qSlicerMarkupsPlaceWidget);
        ActionDeleteAll->setObjectName(QString::fromUtf8("ActionDeleteAll"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/MarkupsDeleteAllRows.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionDeleteAll->setIcon(icon);
        ActionUnsetLast = new QAction(qSlicerMarkupsPlaceWidget);
        ActionUnsetLast->setObjectName(QString::fromUtf8("ActionUnsetLast"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/MarkupsUnset.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionUnsetLast->setIcon(icon1);
        ActionUnsetAll = new QAction(qSlicerMarkupsPlaceWidget);
        ActionUnsetAll->setObjectName(QString::fromUtf8("ActionUnsetAll"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/MarkupsUnsetAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionUnsetAll->setIcon(icon2);
        ActionVisibility = new QAction(qSlicerMarkupsPlaceWidget);
        ActionVisibility->setObjectName(QString::fromUtf8("ActionVisibility"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Small/SlicerInvisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/Icons/Small/SlicerVisible.png"), QSize(), QIcon::Normal, QIcon::On);
        ActionVisibility->setIcon(icon3);
        ActionLocked = new QAction(qSlicerMarkupsPlaceWidget);
        ActionLocked->setObjectName(QString::fromUtf8("ActionLocked"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Small/SlicerUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/Icons/Small/SlicerLock.png"), QSize(), QIcon::Normal, QIcon::On);
        ActionLocked->setIcon(icon4);
        ActionFixedNumberOfControlPoints = new QAction(qSlicerMarkupsPlaceWidget);
        ActionFixedNumberOfControlPoints->setObjectName(QString::fromUtf8("ActionFixedNumberOfControlPoints"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Small/SlicerPointNumberUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/Icons/Small/SlicerPointNumberLock.png"), QSize(), QIcon::Normal, QIcon::On);
        ActionFixedNumberOfControlPoints->setIcon(icon5);
        horizontalLayout = new QHBoxLayout(qSlicerMarkupsPlaceWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ColorButton = new ctkColorPickerButton(qSlicerMarkupsPlaceWidget);
        ColorButton->setObjectName(QString::fromUtf8("ColorButton"));
        sizePolicy.setHeightForWidth(ColorButton->sizePolicy().hasHeightForWidth());
        ColorButton->setSizePolicy(sizePolicy);
        ColorButton->setCheckable(true);
        ColorButton->setDisplayColorName(false);

        horizontalLayout->addWidget(ColorButton);

        PlaceButton = new QToolButton(qSlicerMarkupsPlaceWidget);
        PlaceButton->setObjectName(QString::fromUtf8("PlaceButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PlaceButton->sizePolicy().hasHeightForWidth());
        PlaceButton->setSizePolicy(sizePolicy1);
        PlaceButton->setPopupMode(QToolButton::MenuButtonPopup);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/MarkupsFiducialMouseModePlace.png"), QSize(), QIcon::Normal, QIcon::Off);
        PlaceButton->setIcon(icon6);
        PlaceButton->setCheckable(true);

        horizontalLayout->addWidget(PlaceButton);

        DeleteButton = new QToolButton(qSlicerMarkupsPlaceWidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        sizePolicy1.setHeightForWidth(DeleteButton->sizePolicy().hasHeightForWidth());
        DeleteButton->setSizePolicy(sizePolicy1);
        DeleteButton->setPopupMode(QToolButton::MenuButtonPopup);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/MarkupsDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteButton->setIcon(icon7);

        horizontalLayout->addWidget(DeleteButton);

        MoreButton = new QToolButton(qSlicerMarkupsPlaceWidget);
        MoreButton->setObjectName(QString::fromUtf8("MoreButton"));
        sizePolicy1.setHeightForWidth(MoreButton->sizePolicy().hasHeightForWidth());
        MoreButton->setSizePolicy(sizePolicy1);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/SliceMoreOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        MoreButton->setIcon(icon8);
        MoreButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(MoreButton);


        retranslateUi(qSlicerMarkupsPlaceWidget);

        QMetaObject::connectSlotsByName(qSlicerMarkupsPlaceWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerMarkupsPlaceWidget)
    {
        qSlicerMarkupsPlaceWidget->setWindowTitle(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Place markups", nullptr));
        ActionPlacePersistentPoint->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Place multiple control points", nullptr));
#if QT_CONFIG(tooltip)
        ActionPlacePersistentPoint->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Place multiple control points", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionDeleteAll->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Delete all control points", nullptr));
#if QT_CONFIG(tooltip)
        ActionDeleteAll->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Delete all control points in the list", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionUnsetLast->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Clear last control point position", nullptr));
#if QT_CONFIG(tooltip)
        ActionUnsetLast->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Clear the position of the last control point placed (the control point will not be deleted).", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionUnsetAll->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Clear all control point positions", nullptr));
#if QT_CONFIG(tooltip)
        ActionUnsetAll->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Clear the position of all control points in the list (the control points will not be deleted).", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionVisibility->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Visibility", nullptr));
#if QT_CONFIG(tooltip)
        ActionVisibility->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Toggle markup visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionLocked->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Locked", nullptr));
#if QT_CONFIG(tooltip)
        ActionLocked->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Toggle control point positions lock", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionFixedNumberOfControlPoints->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Control point number locked", nullptr));
#if QT_CONFIG(tooltip)
        ActionFixedNumberOfControlPoints->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Toggle control point number lock. If locked then it is not possible to add or delete control points. Instead of deleting, position control points can be unset.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ColorButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Select the display color.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PlaceButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Place a control point", nullptr));
#endif // QT_CONFIG(tooltip)
        PlaceButton->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        DeleteButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Delete last added control point", nullptr));
#endif // QT_CONFIG(tooltip)
        DeleteButton->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        MoreButton->setToolTip(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "Click for more options", nullptr));
#endif // QT_CONFIG(tooltip)
        MoreButton->setText(QCoreApplication::translate("qSlicerMarkupsPlaceWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerMarkupsPlaceWidget: public Ui_qSlicerMarkupsPlaceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMARKUPSPLACEWIDGET_H
