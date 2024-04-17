/********************************************************************************
** Form generated from reading UI file 'qMRMLSequenceBrowserPlayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEQUENCEBROWSERPLAYWIDGET_H
#define UI_QMRMLSEQUENCEBROWSERPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLSequenceBrowserPlayWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_VcrFirst;
    QPushButton *pushButton_VcrPrevious;
    QPushButton *pushButton_VcrPlayPause;
    QPushButton *pushButton_VcrNext;
    QPushButton *pushButton_VcrLast;
    QDoubleSpinBox *doubleSpinBox_VcrPlaybackRate;
    QPushButton *pushButton_VcrLoop;
    QPushButton *pushButton_VcrRecord;
    QPushButton *pushButton_Snapshot;

    void setupUi(QWidget *qMRMLSequenceBrowserPlayWidget)
    {
        if (qMRMLSequenceBrowserPlayWidget->objectName().isEmpty())
            qMRMLSequenceBrowserPlayWidget->setObjectName(QString::fromUtf8("qMRMLSequenceBrowserPlayWidget"));
        qMRMLSequenceBrowserPlayWidget->resize(662, 82);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSequenceBrowserPlayWidget->sizePolicy().hasHeightForWidth());
        qMRMLSequenceBrowserPlayWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(qMRMLSequenceBrowserPlayWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_VcrFirst = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrFirst->setObjectName(QString::fromUtf8("pushButton_VcrFirst"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/pqVcrFirst24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrFirst->setIcon(icon);

        horizontalLayout->addWidget(pushButton_VcrFirst);

        pushButton_VcrPrevious = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrPrevious->setObjectName(QString::fromUtf8("pushButton_VcrPrevious"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/pqVcrBack24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrPrevious->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_VcrPrevious);

        pushButton_VcrPlayPause = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrPlayPause->setObjectName(QString::fromUtf8("pushButton_VcrPlayPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/pqVcrPlay24.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/pqVcrPause24.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_VcrPlayPause->setIcon(icon2);
        pushButton_VcrPlayPause->setCheckable(true);

        horizontalLayout->addWidget(pushButton_VcrPlayPause);

        pushButton_VcrNext = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrNext->setObjectName(QString::fromUtf8("pushButton_VcrNext"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/pqVcrForward24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrNext->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_VcrNext);

        pushButton_VcrLast = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrLast->setObjectName(QString::fromUtf8("pushButton_VcrLast"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/pqVcrLast24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrLast->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_VcrLast);

        doubleSpinBox_VcrPlaybackRate = new QDoubleSpinBox(qMRMLSequenceBrowserPlayWidget);
        doubleSpinBox_VcrPlaybackRate->setObjectName(QString::fromUtf8("doubleSpinBox_VcrPlaybackRate"));
        doubleSpinBox_VcrPlaybackRate->setDecimals(1);
        doubleSpinBox_VcrPlaybackRate->setMinimum(0.000000000000000);
        doubleSpinBox_VcrPlaybackRate->setMaximum(1000.000000000000000);
        doubleSpinBox_VcrPlaybackRate->setSingleStep(5.000000000000000);
        doubleSpinBox_VcrPlaybackRate->setValue(100.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_VcrPlaybackRate);

        pushButton_VcrLoop = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrLoop->setObjectName(QString::fromUtf8("pushButton_VcrLoop"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/pqVcrLoop24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrLoop->setIcon(icon5);
        pushButton_VcrLoop->setCheckable(true);

        horizontalLayout->addWidget(pushButton_VcrLoop);

        pushButton_VcrRecord = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_VcrRecord->setObjectName(QString::fromUtf8("pushButton_VcrRecord"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/VcrRecord16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_VcrRecord->setIcon(icon6);
        pushButton_VcrRecord->setCheckable(true);

        horizontalLayout->addWidget(pushButton_VcrRecord);

        pushButton_Snapshot = new QPushButton(qMRMLSequenceBrowserPlayWidget);
        pushButton_Snapshot->setObjectName(QString::fromUtf8("pushButton_Snapshot"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/pqCamera24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Snapshot->setIcon(icon7);

        horizontalLayout->addWidget(pushButton_Snapshot);

        QWidget::setTabOrder(pushButton_VcrFirst, pushButton_VcrPrevious);
        QWidget::setTabOrder(pushButton_VcrPrevious, pushButton_VcrPlayPause);
        QWidget::setTabOrder(pushButton_VcrPlayPause, pushButton_VcrNext);
        QWidget::setTabOrder(pushButton_VcrNext, pushButton_VcrLast);
        QWidget::setTabOrder(pushButton_VcrLast, doubleSpinBox_VcrPlaybackRate);
        QWidget::setTabOrder(doubleSpinBox_VcrPlaybackRate, pushButton_VcrLoop);

        retranslateUi(qMRMLSequenceBrowserPlayWidget);

        QMetaObject::connectSlotsByName(qMRMLSequenceBrowserPlayWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSequenceBrowserPlayWidget)
    {
        qMRMLSequenceBrowserPlayWidget->setWindowTitle(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "qMRMLSequenceBrowserPlayWidget", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_VcrFirst->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "First frame", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrFirst->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_VcrPrevious->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Previous frame", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrPrevious->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_VcrPlayPause->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Play/Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrPlayPause->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_VcrNext->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Next frame", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrNext->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_VcrLast->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Last frame", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrLast->setText(QString());
        doubleSpinBox_VcrPlaybackRate->setSuffix(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "fps", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_VcrLoop->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Loop playback", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrLoop->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_VcrRecord->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Record proxy nodes modifications continuously", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_VcrRecord->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Snapshot->setToolTip(QCoreApplication::translate("qMRMLSequenceBrowserPlayWidget", "Record snapshot of current state of all proxy nodes", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Snapshot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLSequenceBrowserPlayWidget: public Ui_qMRMLSequenceBrowserPlayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEQUENCEBROWSERPLAYWIDGET_H
