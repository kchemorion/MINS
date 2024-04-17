/********************************************************************************
** Form generated from reading UI file 'qMRMLColorPickerWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLCOLORPICKERWIDGET_H
#define UI_QMRMLCOLORPICKERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "ctkSearchBox.h"
#include "qMRMLColorListView.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLColorPickerWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *ColorTableLabel;
    qMRMLColorTableComboBox *ColorTableComboBox;
    qMRMLColorListView *MRMLColorListView;
    ctkSearchBox *SearchBox;

    void setupUi(qMRMLWidget *qMRMLColorPickerWidget)
    {
        if (qMRMLColorPickerWidget->objectName().isEmpty())
            qMRMLColorPickerWidget->setObjectName(QString::fromUtf8("qMRMLColorPickerWidget"));
        qMRMLColorPickerWidget->resize(336, 190);
        gridLayout = new QGridLayout(qMRMLColorPickerWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ColorTableLabel = new QLabel(qMRMLColorPickerWidget);
        ColorTableLabel->setObjectName(QString::fromUtf8("ColorTableLabel"));

        gridLayout->addWidget(ColorTableLabel, 0, 0, 1, 1);

        ColorTableComboBox = new qMRMLColorTableComboBox(qMRMLColorPickerWidget);
        ColorTableComboBox->setObjectName(QString::fromUtf8("ColorTableComboBox"));

        gridLayout->addWidget(ColorTableComboBox, 0, 1, 1, 1);

        MRMLColorListView = new qMRMLColorListView(qMRMLColorPickerWidget);
        MRMLColorListView->setObjectName(QString::fromUtf8("MRMLColorListView"));
        MRMLColorListView->setMovement(QListView::Free);
        MRMLColorListView->setFlow(QListView::LeftToRight);
        MRMLColorListView->setProperty("isWrapping", QVariant(true));
        MRMLColorListView->setResizeMode(QListView::Adjust);
        MRMLColorListView->setUniformItemSizes(false);

        gridLayout->addWidget(MRMLColorListView, 2, 0, 1, 2);

        SearchBox = new ctkSearchBox(qMRMLColorPickerWidget);
        SearchBox->setObjectName(QString::fromUtf8("SearchBox"));

        gridLayout->addWidget(SearchBox, 4, 1, 1, 1);


        retranslateUi(qMRMLColorPickerWidget);
        QObject::connect(ColorTableComboBox, SIGNAL(currentNodeChanged(vtkMRMLNode*)), MRMLColorListView, SLOT(setMRMLColorNode(vtkMRMLNode*)));
        QObject::connect(qMRMLColorPickerWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLColorPickerWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLColorPickerWidget)
    {
        qMRMLColorPickerWidget->setWindowTitle(QCoreApplication::translate("qMRMLColorPickerWidget", "Color Picker", nullptr));
        ColorTableLabel->setText(QCoreApplication::translate("qMRMLColorPickerWidget", "Color node:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLColorPickerWidget: public Ui_qMRMLColorPickerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLCOLORPICKERWIDGET_H
