/********************************************************************************
** Form generated from reading UI file 'qMRMLSliceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSLICEWIDGET_H
#define UI_QMRMLSLICEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include "qMRMLSliceControllerWidget.h"
#include "qMRMLSliceVerticalControllerWidget.h"
#include "qMRMLSliceView.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSliceWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    qMRMLSliceControllerWidget *SliceController;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    qMRMLSliceView *SliceView;
    qMRMLSliceVerticalControllerWidget *SliceVerticalController;

    void setupUi(qMRMLWidget *qMRMLSliceWidget)
    {
        if (qMRMLSliceWidget->objectName().isEmpty())
            qMRMLSliceWidget->setObjectName(QString::fromUtf8("qMRMLSliceWidget"));
        qMRMLSliceWidget->resize(595, 351);
        verticalLayout_2 = new QVBoxLayout(qMRMLSliceWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SliceController = new qMRMLSliceControllerWidget(qMRMLSliceWidget);
        SliceController->setObjectName(QString::fromUtf8("SliceController"));
        SliceController->setShowSliceOffsetSlider(true);

        verticalLayout_2->addWidget(SliceController);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(qMRMLSliceWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SliceView = new qMRMLSliceView(frame);
        SliceView->setObjectName(QString::fromUtf8("SliceView"));
        SliceView->setProperty("renderEnabled", QVariant(true));

        verticalLayout->addWidget(SliceView);


        horizontalLayout->addWidget(frame);

        SliceVerticalController = new qMRMLSliceVerticalControllerWidget(qMRMLSliceWidget);
        SliceVerticalController->setObjectName(QString::fromUtf8("SliceVerticalController"));
        SliceVerticalController->setShowSliceOffsetSlider(false);

        horizontalLayout->addWidget(SliceVerticalController);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(qMRMLSliceWidget);
        QObject::connect(qMRMLSliceWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SliceController, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSliceWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SliceView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSliceWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SliceVerticalController, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLSliceWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSliceWidget)
    {
        qMRMLSliceWidget->setWindowTitle(QCoreApplication::translate("qMRMLSliceWidget", "qMRMLSliceWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSliceWidget: public Ui_qMRMLSliceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSLICEWIDGET_H
