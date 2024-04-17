/********************************************************************************
** Form generated from reading UI file 'qSlicerVolumesIOOptionsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERVOLUMESIOOPTIONSWIDGET_H
#define UI_QSLICERVOLUMESIOOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerVolumesIOOptionsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *NameLineEdit;
    QCheckBox *LabelMapCheckBox;
    QCheckBox *SingleFileCheckBox;
    QCheckBox *CenteredCheckBox;
    QCheckBox *OrientationCheckBox;
    QCheckBox *ShowCheckBox;
    qMRMLColorTableComboBox *ColorTableComboBox;

    void setupUi(qSlicerWidget *qSlicerVolumesIOOptionsWidget)
    {
        if (qSlicerVolumesIOOptionsWidget->objectName().isEmpty())
            qSlicerVolumesIOOptionsWidget->setObjectName(QString::fromUtf8("qSlicerVolumesIOOptionsWidget"));
        qSlicerVolumesIOOptionsWidget->resize(552, 27);
        horizontalLayout = new QHBoxLayout(qSlicerVolumesIOOptionsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NameLineEdit = new QLineEdit(qSlicerVolumesIOOptionsWidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NameLineEdit->sizePolicy().hasHeightForWidth());
        NameLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(NameLineEdit);

        LabelMapCheckBox = new QCheckBox(qSlicerVolumesIOOptionsWidget);
        LabelMapCheckBox->setObjectName(QString::fromUtf8("LabelMapCheckBox"));

        horizontalLayout->addWidget(LabelMapCheckBox);

        SingleFileCheckBox = new QCheckBox(qSlicerVolumesIOOptionsWidget);
        SingleFileCheckBox->setObjectName(QString::fromUtf8("SingleFileCheckBox"));

        horizontalLayout->addWidget(SingleFileCheckBox);

        CenteredCheckBox = new QCheckBox(qSlicerVolumesIOOptionsWidget);
        CenteredCheckBox->setObjectName(QString::fromUtf8("CenteredCheckBox"));

        horizontalLayout->addWidget(CenteredCheckBox);

        OrientationCheckBox = new QCheckBox(qSlicerVolumesIOOptionsWidget);
        OrientationCheckBox->setObjectName(QString::fromUtf8("OrientationCheckBox"));

        horizontalLayout->addWidget(OrientationCheckBox);

        ShowCheckBox = new QCheckBox(qSlicerVolumesIOOptionsWidget);
        ShowCheckBox->setObjectName(QString::fromUtf8("ShowCheckBox"));
        ShowCheckBox->setChecked(true);

        horizontalLayout->addWidget(ShowCheckBox);

        ColorTableComboBox = new qMRMLColorTableComboBox(qSlicerVolumesIOOptionsWidget);
        ColorTableComboBox->setObjectName(QString::fromUtf8("ColorTableComboBox"));
        ColorTableComboBox->setEnabled(true);
        ColorTableComboBox->setAddEnabled(false);
        ColorTableComboBox->setRemoveEnabled(false);

        horizontalLayout->addWidget(ColorTableComboBox);


        retranslateUi(qSlicerVolumesIOOptionsWidget);
        QObject::connect(qSlicerVolumesIOOptionsWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerVolumesIOOptionsWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerVolumesIOOptionsWidget)
    {
        qSlicerVolumesIOOptionsWidget->setWindowTitle(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Volume Options", nullptr));
        LabelMapCheckBox->setText(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "LabelMap", nullptr));
#if QT_CONFIG(tooltip)
        LabelMapCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Load the volume as a labelmap (each voxel value representing a segmented structure).", nullptr));
#endif // QT_CONFIG(tooltip)
        SingleFileCheckBox->setText(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Single File", nullptr));
#if QT_CONFIG(tooltip)
        SingleFileCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Only load the selected file. The application will not attempt to look for similar files that can make up the complete volume.", nullptr));
#endif // QT_CONFIG(tooltip)
        CenteredCheckBox->setText(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Centered", nullptr));
#if QT_CONFIG(tooltip)
        CenteredCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Ignore image position information that is specified in the image header.", nullptr));
#endif // QT_CONFIG(tooltip)
        OrientationCheckBox->setText(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Ignore Orientation", nullptr));
#if QT_CONFIG(tooltip)
        OrientationCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Ignore axis orientation information that is specified in the image header.", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowCheckBox->setText(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Show", nullptr));
#if QT_CONFIG(tooltip)
        ShowCheckBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Show volume in slice viewers after loading is completed.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ColorTableComboBox->setToolTip(QCoreApplication::translate("qSlicerVolumesIOOptionsWidget", "Color table node used to display this volume.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerVolumesIOOptionsWidget: public Ui_qSlicerVolumesIOOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERVOLUMESIOOPTIONSWIDGET_H
