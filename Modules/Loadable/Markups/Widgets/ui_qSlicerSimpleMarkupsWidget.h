/********************************************************************************
** Form generated from reading UI file 'qSlicerSimpleMarkupsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSIMPLEMARKUPSWIDGET_H
#define UI_QSLICERSIMPLEMARKUPSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "qMRMLNodeComboBox.h"
#include "qSlicerMarkupsPlaceWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSimpleMarkupsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    qMRMLNodeComboBox *MarkupsNodeComboBox;
    qSlicerMarkupsPlaceWidget *MarkupsPlaceWidget;
    QTableWidget *MarkupsControlPointsTableWidget;

    void setupUi(qSlicerWidget *qSlicerSimpleMarkupsWidget)
    {
        if (qSlicerSimpleMarkupsWidget->objectName().isEmpty())
            qSlicerSimpleMarkupsWidget->setObjectName(QString::fromUtf8("qSlicerSimpleMarkupsWidget"));
        qSlicerSimpleMarkupsWidget->resize(731, 195);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerSimpleMarkupsWidget->sizePolicy().hasHeightForWidth());
        qSlicerSimpleMarkupsWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(qSlicerSimpleMarkupsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        MarkupsNodeComboBox = new qMRMLNodeComboBox(qSlicerSimpleMarkupsWidget);
        MarkupsNodeComboBox->setObjectName(QString::fromUtf8("MarkupsNodeComboBox"));
        MarkupsNodeComboBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MarkupsNodeComboBox->sizePolicy().hasHeightForWidth());
        MarkupsNodeComboBox->setSizePolicy(sizePolicy1);
        MarkupsNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLMarkupsFiducialNode"));
        MarkupsNodeComboBox->setShowHidden(true);
        MarkupsNodeComboBox->setNoneEnabled(true);
        MarkupsNodeComboBox->setAddEnabled(true);
        MarkupsNodeComboBox->setRemoveEnabled(true);
        MarkupsNodeComboBox->setEditEnabled(false);
        MarkupsNodeComboBox->setRenameEnabled(true);

        horizontalLayout->addWidget(MarkupsNodeComboBox);

        MarkupsPlaceWidget = new qSlicerMarkupsPlaceWidget(qSlicerSimpleMarkupsWidget);
        MarkupsPlaceWidget->setObjectName(QString::fromUtf8("MarkupsPlaceWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MarkupsPlaceWidget->sizePolicy().hasHeightForWidth());
        MarkupsPlaceWidget->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(MarkupsPlaceWidget);


        verticalLayout->addLayout(horizontalLayout);

        MarkupsControlPointsTableWidget = new QTableWidget(qSlicerSimpleMarkupsWidget);
        MarkupsControlPointsTableWidget->setObjectName(QString::fromUtf8("MarkupsControlPointsTableWidget"));

        verticalLayout->addWidget(MarkupsControlPointsTableWidget);


        retranslateUi(qSlicerSimpleMarkupsWidget);
        QObject::connect(qSlicerSimpleMarkupsWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MarkupsNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSimpleMarkupsWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MarkupsPlaceWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerSimpleMarkupsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSimpleMarkupsWidget)
    {
        qSlicerSimpleMarkupsWidget->setWindowTitle(QCoreApplication::translate("qSlicerSimpleMarkupsWidget", "Markup Control Points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSimpleMarkupsWidget: public Ui_qSlicerSimpleMarkupsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSIMPLEMARKUPSWIDGET_H
