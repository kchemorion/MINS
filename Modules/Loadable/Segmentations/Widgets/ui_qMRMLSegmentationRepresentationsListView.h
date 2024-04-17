/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentationRepresentationsListView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTATIONREPRESENTATIONSLISTVIEW_H
#define UI_QMRMLSEGMENTATIONREPRESENTATIONSLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentationRepresentationsListView
{
public:
    QGridLayout *gridLayout;
    QLabel *RepresentationsListMessageLabel;
    QListWidget *RepresentationsList;

    void setupUi(QWidget *qMRMLSegmentationRepresentationsListView)
    {
        if (qMRMLSegmentationRepresentationsListView->objectName().isEmpty())
            qMRMLSegmentationRepresentationsListView->setObjectName(QString::fromUtf8("qMRMLSegmentationRepresentationsListView"));
        qMRMLSegmentationRepresentationsListView->resize(328, 75);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLSegmentationRepresentationsListView->sizePolicy().hasHeightForWidth());
        qMRMLSegmentationRepresentationsListView->setSizePolicy(sizePolicy);
        qMRMLSegmentationRepresentationsListView->setMinimumSize(QSize(0, 75));
        gridLayout = new QGridLayout(qMRMLSegmentationRepresentationsListView);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RepresentationsListMessageLabel = new QLabel(qMRMLSegmentationRepresentationsListView);
        RepresentationsListMessageLabel->setObjectName(QString::fromUtf8("RepresentationsListMessageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(RepresentationsListMessageLabel->sizePolicy().hasHeightForWidth());
        RepresentationsListMessageLabel->setSizePolicy(sizePolicy1);
        RepresentationsListMessageLabel->setMinimumSize(QSize(0, 13));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        RepresentationsListMessageLabel->setFont(font);

        gridLayout->addWidget(RepresentationsListMessageLabel, 0, 0, 1, 1);

        RepresentationsList = new QListWidget(qMRMLSegmentationRepresentationsListView);
        RepresentationsList->setObjectName(QString::fromUtf8("RepresentationsList"));

        gridLayout->addWidget(RepresentationsList, 1, 0, 1, 1);


        retranslateUi(qMRMLSegmentationRepresentationsListView);

        QMetaObject::connectSlotsByName(qMRMLSegmentationRepresentationsListView);
    } // setupUi

    void retranslateUi(QWidget *qMRMLSegmentationRepresentationsListView)
    {
        qMRMLSegmentationRepresentationsListView->setWindowTitle(QCoreApplication::translate("qMRMLSegmentationRepresentationsListView", "qMRMLSegmentationRepresentationsListView", nullptr));
        RepresentationsListMessageLabel->setText(QCoreApplication::translate("qMRMLSegmentationRepresentationsListView", "No node selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentationRepresentationsListView: public Ui_qMRMLSegmentationRepresentationsListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTATIONREPRESENTATIONSLISTVIEW_H
