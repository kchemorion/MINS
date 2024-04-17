/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentsTableView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTSTABLEVIEW_H
#define UI_QMRMLSEGMENTSTABLEVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "ctkSearchBox.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentsTableView
{
public:
    QGridLayout *gridLayout;
    QLabel *SegmentsTableMessageLabel;
    QTableView *SegmentsTable;
    QWidget *FilterBar;
    QHBoxLayout *horizontalLayout;
    ctkSearchBox *FilterLineEdit;
    QPushButton *ShowNotStartedButton;
    QPushButton *ShowInProgressButton;
    QPushButton *ShowCompletedButton;
    QPushButton *ShowFlaggedButton;

    void setupUi(QWidget *qMRMLSegmentsTableView)
    {
        if (qMRMLSegmentsTableView->objectName().isEmpty())
            qMRMLSegmentsTableView->setObjectName(QString::fromUtf8("qMRMLSegmentsTableView"));
        qMRMLSegmentsTableView->resize(249, 247);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSegmentsTableView->sizePolicy().hasHeightForWidth());
        qMRMLSegmentsTableView->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qMRMLSegmentsTableView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        SegmentsTableMessageLabel = new QLabel(qMRMLSegmentsTableView);
        SegmentsTableMessageLabel->setObjectName(QString::fromUtf8("SegmentsTableMessageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SegmentsTableMessageLabel->sizePolicy().hasHeightForWidth());
        SegmentsTableMessageLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        SegmentsTableMessageLabel->setFont(font);

        gridLayout->addWidget(SegmentsTableMessageLabel, 0, 0, 1, 1);

        SegmentsTable = new QTableView(qMRMLSegmentsTableView);
        SegmentsTable->setObjectName(QString::fromUtf8("SegmentsTable"));
        SegmentsTable->setEnabled(true);
        SegmentsTable->setMinimumSize(QSize(0, 75));
        SegmentsTable->setAlternatingRowColors(true);
        SegmentsTable->setIconSize(QSize(16, 16));
        SegmentsTable->setSortingEnabled(false);
        SegmentsTable->setProperty("columnCount", QVariant(6));
        SegmentsTable->horizontalHeader()->setDefaultSectionSize(48);
        SegmentsTable->horizontalHeader()->setStretchLastSection(true);
        SegmentsTable->verticalHeader()->setVisible(false);

        gridLayout->addWidget(SegmentsTable, 3, 0, 1, 1);

        FilterBar = new QWidget(qMRMLSegmentsTableView);
        FilterBar->setObjectName(QString::fromUtf8("FilterBar"));
        sizePolicy1.setHeightForWidth(FilterBar->sizePolicy().hasHeightForWidth());
        FilterBar->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(FilterBar);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FilterLineEdit = new ctkSearchBox(FilterBar);
        FilterLineEdit->setObjectName(QString::fromUtf8("FilterLineEdit"));
        FilterLineEdit->setShowSearchIcon(true);

        horizontalLayout->addWidget(FilterLineEdit);

        ShowNotStartedButton = new QPushButton(FilterBar);
        ShowNotStartedButton->setObjectName(QString::fromUtf8("ShowNotStartedButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/NotStarted.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowNotStartedButton->setIcon(icon);
        ShowNotStartedButton->setIconSize(QSize(16, 16));
        ShowNotStartedButton->setCheckable(true);

        horizontalLayout->addWidget(ShowNotStartedButton);

        ShowInProgressButton = new QPushButton(FilterBar);
        ShowInProgressButton->setObjectName(QString::fromUtf8("ShowInProgressButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/InProgress.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowInProgressButton->setIcon(icon1);
        ShowInProgressButton->setIconSize(QSize(16, 16));
        ShowInProgressButton->setCheckable(true);

        horizontalLayout->addWidget(ShowInProgressButton);

        ShowCompletedButton = new QPushButton(FilterBar);
        ShowCompletedButton->setObjectName(QString::fromUtf8("ShowCompletedButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Completed.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowCompletedButton->setIcon(icon2);
        ShowCompletedButton->setIconSize(QSize(16, 16));
        ShowCompletedButton->setCheckable(true);

        horizontalLayout->addWidget(ShowCompletedButton);

        ShowFlaggedButton = new QPushButton(FilterBar);
        ShowFlaggedButton->setObjectName(QString::fromUtf8("ShowFlaggedButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Flagged.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowFlaggedButton->setIcon(icon3);
        ShowFlaggedButton->setIconSize(QSize(16, 16));
        ShowFlaggedButton->setCheckable(true);

        horizontalLayout->addWidget(ShowFlaggedButton);


        gridLayout->addWidget(FilterBar, 1, 0, 1, 1);


        retranslateUi(qMRMLSegmentsTableView);

        QMetaObject::connectSlotsByName(qMRMLSegmentsTableView);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSegmentsTableView)
    {
        qMRMLSegmentsTableView->setWindowTitle(QCoreApplication::translate("qMRMLSegmentsTableView", "qMRMLSegmentsTableView", nullptr));
        SegmentsTableMessageLabel->setText(QCoreApplication::translate("qMRMLSegmentsTableView", "No node selected", nullptr));
        FilterLineEdit->setPlaceholderText(QCoreApplication::translate("qMRMLSegmentsTableView", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        ShowNotStartedButton->setToolTip(QCoreApplication::translate("qMRMLSegmentsTableView", "Show/Hide not started segments", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowNotStartedButton->setText(QString());
#if QT_CONFIG(tooltip)
        ShowInProgressButton->setToolTip(QCoreApplication::translate("qMRMLSegmentsTableView", "Show/Hide in progress segments", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowInProgressButton->setText(QString());
#if QT_CONFIG(tooltip)
        ShowCompletedButton->setToolTip(QCoreApplication::translate("qMRMLSegmentsTableView", "Show/Hide completed segments", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowCompletedButton->setText(QString());
#if QT_CONFIG(tooltip)
        ShowFlaggedButton->setToolTip(QCoreApplication::translate("qMRMLSegmentsTableView", "Show/Hide flagged segments", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowFlaggedButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentsTableView: public Ui_qMRMLSegmentsTableView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTSTABLEVIEW_H
