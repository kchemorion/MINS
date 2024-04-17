/********************************************************************************
** Form generated from reading UI file 'qMRMLModelInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLMODELINFOWIDGET_H
#define UI_QMRMLMODELINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkDoubleSpinBox.h"
#include "ctkExpandButton.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLModelInfoWidget
{
public:
    QFormLayout *formLayout;
    QLabel *MeshTypeLabel;
    QLineEdit *MeshTypeLineEdit;
    QLabel *SurfaceAreaLabel;
    ctkDoubleSpinBox *SurfaceAreaDoubleSpinBox;
    QLabel *VolumeAreaLabel;
    ctkDoubleSpinBox *VolumeAreaDoubleSpinBox;
    QLabel *NumberOfPointsLabel;
    QSpinBox *NumberOfPointsSpinBox;
    QLabel *NumberOfPointsScalarsLabel;
    QSpinBox *NumberOfPointsScalarsSpinBox;
    QLabel *NumberOfCellsScalarsLabel;
    QSpinBox *NumberOfCellsScalarsSpinBox;
    QLabel *FileNameLabel;
    QLineEdit *FileNameLineEdit;
    QVBoxLayout *verticalLayout;
    QSpinBox *NumberOfCellsSpinBox;
    ctkExpandButton *ExpandButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *NumberOfVertsValueLabel;
    QLabel *NumberOfVertsLabel;
    QLabel *NumberOfLinesValueLabel;
    QLabel *NumberOfLinesLabel;
    QLabel *NumberOfPolysValueLabel;
    QLabel *NumberOfStripsValueLabel;
    QLabel *NumberOfPolysLabel;
    QLabel *NumberOfStripsLabel;
    QLabel *MaxCellSizeLabel;
    QLabel *MaxCellSizeValueLabel;
    QLabel *NumberOfCellsLabel;

    void setupUi(QWidget *qMRMLModelInfoWidget)
    {
        if (qMRMLModelInfoWidget->objectName().isEmpty())
            qMRMLModelInfoWidget->setObjectName(QString::fromUtf8("qMRMLModelInfoWidget"));
        qMRMLModelInfoWidget->resize(390, 382);
        formLayout = new QFormLayout(qMRMLModelInfoWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        MeshTypeLabel = new QLabel(qMRMLModelInfoWidget);
        MeshTypeLabel->setObjectName(QString::fromUtf8("MeshTypeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, MeshTypeLabel);

        MeshTypeLineEdit = new QLineEdit(qMRMLModelInfoWidget);
        MeshTypeLineEdit->setObjectName(QString::fromUtf8("MeshTypeLineEdit"));
        MeshTypeLineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, MeshTypeLineEdit);

        SurfaceAreaLabel = new QLabel(qMRMLModelInfoWidget);
        SurfaceAreaLabel->setObjectName(QString::fromUtf8("SurfaceAreaLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, SurfaceAreaLabel);

        SurfaceAreaDoubleSpinBox = new ctkDoubleSpinBox(qMRMLModelInfoWidget);
        SurfaceAreaDoubleSpinBox->setObjectName(QString::fromUtf8("SurfaceAreaDoubleSpinBox"));
        SurfaceAreaDoubleSpinBox->setEnabled(false);
        SurfaceAreaDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, SurfaceAreaDoubleSpinBox);

        VolumeAreaLabel = new QLabel(qMRMLModelInfoWidget);
        VolumeAreaLabel->setObjectName(QString::fromUtf8("VolumeAreaLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, VolumeAreaLabel);

        VolumeAreaDoubleSpinBox = new ctkDoubleSpinBox(qMRMLModelInfoWidget);
        VolumeAreaDoubleSpinBox->setObjectName(QString::fromUtf8("VolumeAreaDoubleSpinBox"));
        VolumeAreaDoubleSpinBox->setEnabled(false);
        VolumeAreaDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, VolumeAreaDoubleSpinBox);

        NumberOfPointsLabel = new QLabel(qMRMLModelInfoWidget);
        NumberOfPointsLabel->setObjectName(QString::fromUtf8("NumberOfPointsLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, NumberOfPointsLabel);

        NumberOfPointsSpinBox = new QSpinBox(qMRMLModelInfoWidget);
        NumberOfPointsSpinBox->setObjectName(QString::fromUtf8("NumberOfPointsSpinBox"));
        NumberOfPointsSpinBox->setEnabled(false);
        NumberOfPointsSpinBox->setMaximum(1000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, NumberOfPointsSpinBox);

        NumberOfPointsScalarsLabel = new QLabel(qMRMLModelInfoWidget);
        NumberOfPointsScalarsLabel->setObjectName(QString::fromUtf8("NumberOfPointsScalarsLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, NumberOfPointsScalarsLabel);

        NumberOfPointsScalarsSpinBox = new QSpinBox(qMRMLModelInfoWidget);
        NumberOfPointsScalarsSpinBox->setObjectName(QString::fromUtf8("NumberOfPointsScalarsSpinBox"));
        NumberOfPointsScalarsSpinBox->setEnabled(false);
        NumberOfPointsScalarsSpinBox->setMaximum(1000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, NumberOfPointsScalarsSpinBox);

        NumberOfCellsScalarsLabel = new QLabel(qMRMLModelInfoWidget);
        NumberOfCellsScalarsLabel->setObjectName(QString::fromUtf8("NumberOfCellsScalarsLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, NumberOfCellsScalarsLabel);

        NumberOfCellsScalarsSpinBox = new QSpinBox(qMRMLModelInfoWidget);
        NumberOfCellsScalarsSpinBox->setObjectName(QString::fromUtf8("NumberOfCellsScalarsSpinBox"));
        NumberOfCellsScalarsSpinBox->setEnabled(false);
        NumberOfCellsScalarsSpinBox->setMaximum(1000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, NumberOfCellsScalarsSpinBox);

        FileNameLabel = new QLabel(qMRMLModelInfoWidget);
        FileNameLabel->setObjectName(QString::fromUtf8("FileNameLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, FileNameLabel);

        FileNameLineEdit = new QLineEdit(qMRMLModelInfoWidget);
        FileNameLineEdit->setObjectName(QString::fromUtf8("FileNameLineEdit"));
        FileNameLineEdit->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::FieldRole, FileNameLineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        NumberOfCellsSpinBox = new QSpinBox(qMRMLModelInfoWidget);
        NumberOfCellsSpinBox->setObjectName(QString::fromUtf8("NumberOfCellsSpinBox"));
        NumberOfCellsSpinBox->setEnabled(false);
        NumberOfCellsSpinBox->setMaximum(1000000000);

        verticalLayout->addWidget(NumberOfCellsSpinBox);

        ExpandButton = new ctkExpandButton(qMRMLModelInfoWidget);
        ExpandButton->setObjectName(QString::fromUtf8("ExpandButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExpandButton->sizePolicy().hasHeightForWidth());
        ExpandButton->setSizePolicy(sizePolicy);
        ExpandButton->setChecked(true);
        ExpandButton->setMirrorOnExpand(true);

        verticalLayout->addWidget(ExpandButton);

        widget = new QWidget(qMRMLModelInfoWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, 0);
        NumberOfVertsValueLabel = new QLabel(widget);
        NumberOfVertsValueLabel->setObjectName(QString::fromUtf8("NumberOfVertsValueLabel"));
        NumberOfVertsValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(NumberOfVertsValueLabel, 0, 0, 1, 1);

        NumberOfVertsLabel = new QLabel(widget);
        NumberOfVertsLabel->setObjectName(QString::fromUtf8("NumberOfVertsLabel"));

        gridLayout_2->addWidget(NumberOfVertsLabel, 0, 1, 1, 1);

        NumberOfLinesValueLabel = new QLabel(widget);
        NumberOfLinesValueLabel->setObjectName(QString::fromUtf8("NumberOfLinesValueLabel"));
        NumberOfLinesValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(NumberOfLinesValueLabel, 1, 0, 1, 1);

        NumberOfLinesLabel = new QLabel(widget);
        NumberOfLinesLabel->setObjectName(QString::fromUtf8("NumberOfLinesLabel"));

        gridLayout_2->addWidget(NumberOfLinesLabel, 1, 1, 1, 1);

        NumberOfPolysValueLabel = new QLabel(widget);
        NumberOfPolysValueLabel->setObjectName(QString::fromUtf8("NumberOfPolysValueLabel"));
        NumberOfPolysValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(NumberOfPolysValueLabel, 0, 2, 1, 1);

        NumberOfStripsValueLabel = new QLabel(widget);
        NumberOfStripsValueLabel->setObjectName(QString::fromUtf8("NumberOfStripsValueLabel"));
        NumberOfStripsValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(NumberOfStripsValueLabel, 1, 2, 1, 1);

        NumberOfPolysLabel = new QLabel(widget);
        NumberOfPolysLabel->setObjectName(QString::fromUtf8("NumberOfPolysLabel"));

        gridLayout_2->addWidget(NumberOfPolysLabel, 0, 3, 1, 1);

        NumberOfStripsLabel = new QLabel(widget);
        NumberOfStripsLabel->setObjectName(QString::fromUtf8("NumberOfStripsLabel"));

        gridLayout_2->addWidget(NumberOfStripsLabel, 1, 3, 1, 1);

        MaxCellSizeLabel = new QLabel(widget);
        MaxCellSizeLabel->setObjectName(QString::fromUtf8("MaxCellSizeLabel"));

        gridLayout_2->addWidget(MaxCellSizeLabel, 2, 2, 1, 2);

        MaxCellSizeValueLabel = new QLabel(widget);
        MaxCellSizeValueLabel->setObjectName(QString::fromUtf8("MaxCellSizeValueLabel"));
        MaxCellSizeValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(MaxCellSizeValueLabel, 2, 1, 1, 1);


        verticalLayout->addWidget(widget);


        formLayout->setLayout(4, QFormLayout::FieldRole, verticalLayout);

        NumberOfCellsLabel = new QLabel(qMRMLModelInfoWidget);
        NumberOfCellsLabel->setObjectName(QString::fromUtf8("NumberOfCellsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, NumberOfCellsLabel);


        retranslateUi(qMRMLModelInfoWidget);
        QObject::connect(ExpandButton, SIGNAL(toggled(bool)), widget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qMRMLModelInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *qMRMLModelInfoWidget)
    {
        qMRMLModelInfoWidget->setWindowTitle(QCoreApplication::translate("qMRMLModelInfoWidget", "Model Information", nullptr));
        MeshTypeLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Mesh Type:", nullptr));
        SurfaceAreaLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Surface Area:", nullptr));
        SurfaceAreaDoubleSpinBox->setSuffix(QCoreApplication::translate("qMRMLModelInfoWidget", "mm^2", nullptr));
        VolumeAreaLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Volume:", nullptr));
        VolumeAreaDoubleSpinBox->setSuffix(QCoreApplication::translate("qMRMLModelInfoWidget", "mm^3", nullptr));
        NumberOfPointsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Number of Points:", nullptr));
        NumberOfPointsScalarsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Number of Points Scalars:", nullptr));
        NumberOfCellsScalarsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Number of Cells Scalars:", nullptr));
        FileNameLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Filename:", nullptr));
        NumberOfVertsValueLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "0", nullptr));
        NumberOfVertsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Verts", nullptr));
        NumberOfLinesValueLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "0", nullptr));
        NumberOfLinesLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Lines", nullptr));
        NumberOfPolysValueLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "0", nullptr));
        NumberOfStripsValueLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "0", nullptr));
        NumberOfPolysLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Polys", nullptr));
        NumberOfStripsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Strips", nullptr));
        MaxCellSizeLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Max cell size", nullptr));
        MaxCellSizeValueLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "0", nullptr));
        NumberOfCellsLabel->setText(QCoreApplication::translate("qMRMLModelInfoWidget", "Number of Cells:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLModelInfoWidget: public Ui_qMRMLModelInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLMODELINFOWIDGET_H
