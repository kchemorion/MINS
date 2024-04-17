/********************************************************************************
** Form generated from reading UI file 'qSlicerCamerasModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERCAMERASMODULEWIDGET_H
#define UI_QSLICERCAMERASMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "ctkCollapsibleButton.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerCamerasModuleWidget
{
public:
    QGridLayout *gridLayout;
    ctkCollapsibleButton *CameraCollapsibleWidget;
    QGridLayout *gridLayout_2;
    QLabel *ViewNodeLabel;
    qMRMLNodeComboBox *ViewNodeSelector;
    QLabel *CameraNodeLabel;
    qMRMLNodeComboBox *CameraNodeSelector;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerCamerasModuleWidget)
    {
        if (qSlicerCamerasModuleWidget->objectName().isEmpty())
            qSlicerCamerasModuleWidget->setObjectName(QString::fromUtf8("qSlicerCamerasModuleWidget"));
        qSlicerCamerasModuleWidget->resize(304, 106);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Cameras.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerCamerasModuleWidget->setWindowIcon(icon);
        gridLayout = new QGridLayout(qSlicerCamerasModuleWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CameraCollapsibleWidget = new ctkCollapsibleButton(qSlicerCamerasModuleWidget);
        CameraCollapsibleWidget->setObjectName(QString::fromUtf8("CameraCollapsibleWidget"));
        CameraCollapsibleWidget->setContentsFrameShape(QFrame::StyledPanel);
        gridLayout_2 = new QGridLayout(CameraCollapsibleWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ViewNodeLabel = new QLabel(CameraCollapsibleWidget);
        ViewNodeLabel->setObjectName(QString::fromUtf8("ViewNodeLabel"));

        gridLayout_2->addWidget(ViewNodeLabel, 0, 0, 1, 1);

        ViewNodeSelector = new qMRMLNodeComboBox(CameraCollapsibleWidget);
        ViewNodeSelector->setObjectName(QString::fromUtf8("ViewNodeSelector"));
        ViewNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLViewNode"));
        ViewNodeSelector->setShowHidden(true);
        ViewNodeSelector->setAddEnabled(false);
        ViewNodeSelector->setRemoveEnabled(false);
        ViewNodeSelector->setRenameEnabled(true);

        gridLayout_2->addWidget(ViewNodeSelector, 0, 1, 1, 1);

        CameraNodeLabel = new QLabel(CameraCollapsibleWidget);
        CameraNodeLabel->setObjectName(QString::fromUtf8("CameraNodeLabel"));

        gridLayout_2->addWidget(CameraNodeLabel, 1, 0, 1, 1);

        CameraNodeSelector = new qMRMLNodeComboBox(CameraCollapsibleWidget);
        CameraNodeSelector->setObjectName(QString::fromUtf8("CameraNodeSelector"));
        CameraNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLCameraNode"));

        gridLayout_2->addWidget(CameraNodeSelector, 1, 1, 1, 1);


        gridLayout->addWidget(CameraCollapsibleWidget, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(qSlicerCamerasModuleWidget);
        QObject::connect(qSlicerCamerasModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ViewNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerCamerasModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), CameraNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerCamerasModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerCamerasModuleWidget)
    {
        qSlicerCamerasModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerCamerasModuleWidget", "Cameras", nullptr));
        CameraCollapsibleWidget->setText(QCoreApplication::translate("qSlicerCamerasModuleWidget", "Camera", nullptr));
        ViewNodeLabel->setText(QCoreApplication::translate("qSlicerCamerasModuleWidget", "View:", nullptr));
        CameraNodeLabel->setText(QCoreApplication::translate("qSlicerCamerasModuleWidget", "Camera:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerCamerasModuleWidget: public Ui_qSlicerCamerasModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERCAMERASMODULEWIDGET_H
