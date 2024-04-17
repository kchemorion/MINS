/********************************************************************************
** Form generated from reading UI file 'qSlicerVolumesModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERVOLUMESMODULEWIDGET_H
#define UI_QSLICERVOLUMESMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "qMRMLColorLegendDisplayNodeWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLVolumeInfoWidget.h"
#include "qMRMLWidget.h"
#include "qSlicerVolumeDisplayWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerVolumesModuleWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *ActiveVolumeLabel;
    qMRMLNodeComboBox *ActiveVolumeNodeSelector;
    ctkCollapsibleButton *InfoCollapsibleButton;
    QVBoxLayout *verticalLayout;
    qMRMLVolumeInfoWidget *MRMLVolumeInfoWidget;
    QFrame *ConvertVolumeFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ConvertVolumeLabel;
    QSpacerItem *horizontalSpacer;
    qMRMLNodeComboBox *ConvertVolumeTargetSelector;
    QPushButton *ConvertVolumeButton;
    ctkCollapsibleButton *DisplayCollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    qSlicerVolumeDisplayWidget *VolumeDisplayWidget;
    ctkCollapsibleButton *ColorLegendCollapsibleButton;
    QGridLayout *gridLayout_2;
    qMRMLColorLegendDisplayNodeWidget *ColorLegendDisplayNodeWidget;
    QSpacerItem *verticalSpacer_2;

    void setupUi(qSlicerWidget *qSlicerVolumesModuleWidget)
    {
        if (qSlicerVolumesModuleWidget->objectName().isEmpty())
            qSlicerVolumesModuleWidget->setObjectName(QString::fromUtf8("qSlicerVolumesModuleWidget"));
        qSlicerVolumesModuleWidget->setEnabled(true);
        qSlicerVolumesModuleWidget->resize(247, 288);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Volumes.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerVolumesModuleWidget->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(qSlicerVolumesModuleWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ActiveVolumeLabel = new QLabel(qSlicerVolumesModuleWidget);
        ActiveVolumeLabel->setObjectName(QString::fromUtf8("ActiveVolumeLabel"));

        horizontalLayout->addWidget(ActiveVolumeLabel);

        ActiveVolumeNodeSelector = new qMRMLNodeComboBox(qSlicerVolumesModuleWidget);
        ActiveVolumeNodeSelector->setObjectName(QString::fromUtf8("ActiveVolumeNodeSelector"));
        ActiveVolumeNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        ActiveVolumeNodeSelector->setAddEnabled(false);
        ActiveVolumeNodeSelector->setRenameEnabled(true);

        horizontalLayout->addWidget(ActiveVolumeNodeSelector);


        verticalLayout_2->addLayout(horizontalLayout);

        InfoCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumesModuleWidget);
        InfoCollapsibleButton->setObjectName(QString::fromUtf8("InfoCollapsibleButton"));
        InfoCollapsibleButton->setChecked(false);
        verticalLayout = new QVBoxLayout(InfoCollapsibleButton);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MRMLVolumeInfoWidget = new qMRMLVolumeInfoWidget(InfoCollapsibleButton);
        MRMLVolumeInfoWidget->setObjectName(QString::fromUtf8("MRMLVolumeInfoWidget"));

        verticalLayout->addWidget(MRMLVolumeInfoWidget);

        ConvertVolumeFrame = new QFrame(InfoCollapsibleButton);
        ConvertVolumeFrame->setObjectName(QString::fromUtf8("ConvertVolumeFrame"));
        ConvertVolumeFrame->setFrameShape(QFrame::NoFrame);
        ConvertVolumeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(ConvertVolumeFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ConvertVolumeLabel = new QLabel(ConvertVolumeFrame);
        ConvertVolumeLabel->setObjectName(QString::fromUtf8("ConvertVolumeLabel"));

        horizontalLayout_2->addWidget(ConvertVolumeLabel);

        horizontalSpacer = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ConvertVolumeTargetSelector = new qMRMLNodeComboBox(ConvertVolumeFrame);
        ConvertVolumeTargetSelector->setObjectName(QString::fromUtf8("ConvertVolumeTargetSelector"));
        ConvertVolumeTargetSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLLabelMapVolumeNode"));
        ConvertVolumeTargetSelector->setNoneEnabled(true);
        ConvertVolumeTargetSelector->setRenameEnabled(true);

        horizontalLayout_2->addWidget(ConvertVolumeTargetSelector);

        ConvertVolumeButton = new QPushButton(ConvertVolumeFrame);
        ConvertVolumeButton->setObjectName(QString::fromUtf8("ConvertVolumeButton"));

        horizontalLayout_2->addWidget(ConvertVolumeButton);


        verticalLayout->addWidget(ConvertVolumeFrame);


        verticalLayout_2->addWidget(InfoCollapsibleButton);

        DisplayCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumesModuleWidget);
        DisplayCollapsibleButton->setObjectName(QString::fromUtf8("DisplayCollapsibleButton"));
        DisplayCollapsibleButton->setCollapsed(false);
        verticalLayout_3 = new QVBoxLayout(DisplayCollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        VolumeDisplayWidget = new qSlicerVolumeDisplayWidget(DisplayCollapsibleButton);
        VolumeDisplayWidget->setObjectName(QString::fromUtf8("VolumeDisplayWidget"));

        verticalLayout_3->addWidget(VolumeDisplayWidget);


        verticalLayout_2->addWidget(DisplayCollapsibleButton);

        ColorLegendCollapsibleButton = new ctkCollapsibleButton(qSlicerVolumesModuleWidget);
        ColorLegendCollapsibleButton->setObjectName(QString::fromUtf8("ColorLegendCollapsibleButton"));
        ColorLegendCollapsibleButton->setEnabled(true);
        ColorLegendCollapsibleButton->setChecked(false);
        ColorLegendCollapsibleButton->setCollapsed(true);
        gridLayout_2 = new QGridLayout(ColorLegendCollapsibleButton);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ColorLegendDisplayNodeWidget = new qMRMLColorLegendDisplayNodeWidget(ColorLegendCollapsibleButton);
        ColorLegendDisplayNodeWidget->setObjectName(QString::fromUtf8("ColorLegendDisplayNodeWidget"));
        ColorLegendDisplayNodeWidget->setEnabled(false);

        gridLayout_2->addWidget(ColorLegendDisplayNodeWidget, 0, 0, 1, 1);


        verticalLayout_2->addWidget(ColorLegendCollapsibleButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(qSlicerVolumesModuleWidget);
        QObject::connect(qSlicerVolumesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLVolumeInfoWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ActiveVolumeNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ConvertVolumeTargetSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerVolumesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorLegendDisplayNodeWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerVolumesModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerVolumesModuleWidget)
    {
        qSlicerVolumesModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Volumes", nullptr));
        ActiveVolumeLabel->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Active Volume: ", nullptr));
        InfoCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Volume Information", nullptr));
        ConvertVolumeLabel->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Convert to LabelMap:", nullptr));
        ConvertVolumeTargetSelector->setNoneDisplay(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Replace current node", nullptr));
        ConvertVolumeButton->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Convert", nullptr));
        DisplayCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Display", nullptr));
        ColorLegendCollapsibleButton->setText(QCoreApplication::translate("qSlicerVolumesModuleWidget", "Color Legend", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerVolumesModuleWidget: public Ui_qSlicerVolumesModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERVOLUMESMODULEWIDGET_H
