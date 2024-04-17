/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentationGeometryWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTATIONGEOMETRYWIDGET_H
#define UI_QMRMLSEGMENTATIONGEOMETRYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCoordinatesWidget.h"
#include "ctkDoubleSpinBox.h"
#include "ctkMatrixWidget.h"
#include "qMRMLCoordinatesWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentationGeometryWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_SourceGeometry;
    QGridLayout *gridLayout;
    QLabel *label_SourceGeometryNode;
    qMRMLNodeComboBox *MRMLNodeComboBox_SourceGeometryNode;
    QGroupBox *groupBox_VolumeSpacingOptions;
    QGridLayout *gridLayout_2;
    QLabel *label_OversamplingFactor;
    ctkDoubleSpinBox *DoubleSpinBox_OversamplingFactor;
    QLabel *label_IsotropicSpacing;
    QCheckBox *checkBox_IsotropicSpacing;
    QGroupBox *groupBox_SegmentationLabelmapGeometry;
    QGridLayout *gridLayout_3;
    QLabel *label_Origin;
    qMRMLCoordinatesWidget *MRMLCoordinatesWidget_Spacing;
    ctkMatrixWidget *MatrixWidget_Directions;
    QLabel *label_Directions;
    QLabel *label_Error;
    QLabel *label_Spacing;
    QLabel *label_Dimensions;
    qMRMLCoordinatesWidget *MRMLCoordinatesWidget_Origin;
    qMRMLCoordinatesWidget *MRMLCoordinatesWidget_Dimensions;
    QGroupBox *groupBox_AdditionalOptions;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QCheckBox *CheckBox_PadSegmentation;
    QSpacerItem *horizontalSpacer;

    void setupUi(qMRMLWidget *qMRMLSegmentationGeometryWidget)
    {
        if (qMRMLSegmentationGeometryWidget->objectName().isEmpty())
            qMRMLSegmentationGeometryWidget->setObjectName(QString::fromUtf8("qMRMLSegmentationGeometryWidget"));
        qMRMLSegmentationGeometryWidget->resize(490, 370);
        verticalLayout = new QVBoxLayout(qMRMLSegmentationGeometryWidget);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        frame_SourceGeometry = new QFrame(qMRMLSegmentationGeometryWidget);
        frame_SourceGeometry->setObjectName(QString::fromUtf8("frame_SourceGeometry"));
        frame_SourceGeometry->setFrameShape(QFrame::StyledPanel);
        frame_SourceGeometry->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_SourceGeometry);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(9);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        label_SourceGeometryNode = new QLabel(frame_SourceGeometry);
        label_SourceGeometryNode->setObjectName(QString::fromUtf8("label_SourceGeometryNode"));

        gridLayout->addWidget(label_SourceGeometryNode, 0, 0, 1, 1);

        MRMLNodeComboBox_SourceGeometryNode = new qMRMLNodeComboBox(frame_SourceGeometry);
        MRMLNodeComboBox_SourceGeometryNode->setObjectName(QString::fromUtf8("MRMLNodeComboBox_SourceGeometryNode"));
        MRMLNodeComboBox_SourceGeometryNode->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode") << QString::fromUtf8("vtkMRMLSegmentationNode") << QString::fromUtf8("vtkMRMLModelNode") << QString::fromUtf8("vtkMRMLMarkupsROINode"));
        MRMLNodeComboBox_SourceGeometryNode->setNoneEnabled(true);
        MRMLNodeComboBox_SourceGeometryNode->setAddEnabled(false);
        MRMLNodeComboBox_SourceGeometryNode->setRemoveEnabled(false);

        gridLayout->addWidget(MRMLNodeComboBox_SourceGeometryNode, 0, 1, 1, 1);

        groupBox_VolumeSpacingOptions = new QGroupBox(frame_SourceGeometry);
        groupBox_VolumeSpacingOptions->setObjectName(QString::fromUtf8("groupBox_VolumeSpacingOptions"));
        gridLayout_2 = new QGridLayout(groupBox_VolumeSpacingOptions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(4);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(4, 6, 4, 4);
        label_OversamplingFactor = new QLabel(groupBox_VolumeSpacingOptions);
        label_OversamplingFactor->setObjectName(QString::fromUtf8("label_OversamplingFactor"));

        gridLayout_2->addWidget(label_OversamplingFactor, 0, 0, 1, 1);

        DoubleSpinBox_OversamplingFactor = new ctkDoubleSpinBox(groupBox_VolumeSpacingOptions);
        DoubleSpinBox_OversamplingFactor->setObjectName(QString::fromUtf8("DoubleSpinBox_OversamplingFactor"));
        DoubleSpinBox_OversamplingFactor->setMinimum(0.050000000000000);
        DoubleSpinBox_OversamplingFactor->setMaximum(20.000000000000000);
        DoubleSpinBox_OversamplingFactor->setSingleStep(0.500000000000000);
        DoubleSpinBox_OversamplingFactor->setValue(1.000000000000000);

        gridLayout_2->addWidget(DoubleSpinBox_OversamplingFactor, 0, 1, 1, 1);

        label_IsotropicSpacing = new QLabel(groupBox_VolumeSpacingOptions);
        label_IsotropicSpacing->setObjectName(QString::fromUtf8("label_IsotropicSpacing"));

        gridLayout_2->addWidget(label_IsotropicSpacing, 1, 0, 1, 1);

        checkBox_IsotropicSpacing = new QCheckBox(groupBox_VolumeSpacingOptions);
        checkBox_IsotropicSpacing->setObjectName(QString::fromUtf8("checkBox_IsotropicSpacing"));

        gridLayout_2->addWidget(checkBox_IsotropicSpacing, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_VolumeSpacingOptions, 1, 0, 1, 2);


        verticalLayout->addWidget(frame_SourceGeometry);

        groupBox_SegmentationLabelmapGeometry = new QGroupBox(qMRMLSegmentationGeometryWidget);
        groupBox_SegmentationLabelmapGeometry->setObjectName(QString::fromUtf8("groupBox_SegmentationLabelmapGeometry"));
        gridLayout_3 = new QGridLayout(groupBox_SegmentationLabelmapGeometry);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(4);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(4, 6, 4, 4);
        label_Origin = new QLabel(groupBox_SegmentationLabelmapGeometry);
        label_Origin->setObjectName(QString::fromUtf8("label_Origin"));

        gridLayout_3->addWidget(label_Origin, 4, 0, 1, 1);

        MRMLCoordinatesWidget_Spacing = new qMRMLCoordinatesWidget(groupBox_SegmentationLabelmapGeometry);
        MRMLCoordinatesWidget_Spacing->setObjectName(QString::fromUtf8("MRMLCoordinatesWidget_Spacing"));
        MRMLCoordinatesWidget_Spacing->setEnabled(false);
        MRMLCoordinatesWidget_Spacing->setDecimals(2);
        MRMLCoordinatesWidget_Spacing->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue|ctkDoubleSpinBox::InsertDecimals|ctkDoubleSpinBox::ReplaceDecimals);
        MRMLCoordinatesWidget_Spacing->setQuantity(QString::fromUtf8("length"));

        gridLayout_3->addWidget(MRMLCoordinatesWidget_Spacing, 1, 1, 1, 1);

        MatrixWidget_Directions = new ctkMatrixWidget(groupBox_SegmentationLabelmapGeometry);
        MatrixWidget_Directions->setObjectName(QString::fromUtf8("MatrixWidget_Directions"));
        MatrixWidget_Directions->setEnabled(false);
        MatrixWidget_Directions->setColumnCount(3);
        MatrixWidget_Directions->setRowCount(3);
        MatrixWidget_Directions->setEditable(true);
        MatrixWidget_Directions->setDecimals(3);

        gridLayout_3->addWidget(MatrixWidget_Directions, 6, 1, 1, 1);

        label_Directions = new QLabel(groupBox_SegmentationLabelmapGeometry);
        label_Directions->setObjectName(QString::fromUtf8("label_Directions"));

        gridLayout_3->addWidget(label_Directions, 6, 0, 1, 1);

        label_Error = new QLabel(groupBox_SegmentationLabelmapGeometry);
        label_Error->setObjectName(QString::fromUtf8("label_Error"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_Error->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_Error->setFont(font);
        label_Error->setText(QString::fromUtf8("Error message"));
        label_Error->setWordWrap(true);

        gridLayout_3->addWidget(label_Error, 8, 0, 1, 2);

        label_Spacing = new QLabel(groupBox_SegmentationLabelmapGeometry);
        label_Spacing->setObjectName(QString::fromUtf8("label_Spacing"));

        gridLayout_3->addWidget(label_Spacing, 1, 0, 1, 1);

        label_Dimensions = new QLabel(groupBox_SegmentationLabelmapGeometry);
        label_Dimensions->setObjectName(QString::fromUtf8("label_Dimensions"));

        gridLayout_3->addWidget(label_Dimensions, 0, 0, 1, 1);

        MRMLCoordinatesWidget_Origin = new qMRMLCoordinatesWidget(groupBox_SegmentationLabelmapGeometry);
        MRMLCoordinatesWidget_Origin->setObjectName(QString::fromUtf8("MRMLCoordinatesWidget_Origin"));
        MRMLCoordinatesWidget_Origin->setEnabled(false);
        MRMLCoordinatesWidget_Origin->setDecimals(2);
        MRMLCoordinatesWidget_Origin->setQuantity(QString::fromUtf8("length"));

        gridLayout_3->addWidget(MRMLCoordinatesWidget_Origin, 4, 1, 1, 1);

        MRMLCoordinatesWidget_Dimensions = new qMRMLCoordinatesWidget(groupBox_SegmentationLabelmapGeometry);
        MRMLCoordinatesWidget_Dimensions->setObjectName(QString::fromUtf8("MRMLCoordinatesWidget_Dimensions"));
        MRMLCoordinatesWidget_Dimensions->setEnabled(false);
        MRMLCoordinatesWidget_Dimensions->setDecimals(0);

        gridLayout_3->addWidget(MRMLCoordinatesWidget_Dimensions, 0, 1, 1, 1);

        groupBox_AdditionalOptions = new QGroupBox(groupBox_SegmentationLabelmapGeometry);
        groupBox_AdditionalOptions->setObjectName(QString::fromUtf8("groupBox_AdditionalOptions"));
        gridLayout_4 = new QGridLayout(groupBox_AdditionalOptions);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_AdditionalOptions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        CheckBox_PadSegmentation = new QCheckBox(groupBox_AdditionalOptions);
        CheckBox_PadSegmentation->setObjectName(QString::fromUtf8("CheckBox_PadSegmentation"));
        CheckBox_PadSegmentation->setIconSize(QSize(12, 12));
        CheckBox_PadSegmentation->setChecked(false);

        gridLayout_4->addWidget(CheckBox_PadSegmentation, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_AdditionalOptions, 7, 0, 1, 2);


        verticalLayout->addWidget(groupBox_SegmentationLabelmapGeometry);


        retranslateUi(qMRMLSegmentationGeometryWidget);
        QObject::connect(qMRMLSegmentationGeometryWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_SourceGeometryNode, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSegmentationGeometryWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLCoordinatesWidget_Dimensions, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSegmentationGeometryWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLCoordinatesWidget_Spacing, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSegmentationGeometryWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLCoordinatesWidget_Origin, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLSegmentationGeometryWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSegmentationGeometryWidget)
    {
        qMRMLSegmentationGeometryWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "SegmentationGeometryWidget", nullptr));
        label_SourceGeometryNode->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Source geometry:", nullptr));
        MRMLNodeComboBox_SourceGeometryNode->setNoneDisplay(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Showing current segmentation labelmap geometry. Click here to change", nullptr));
        groupBox_VolumeSpacingOptions->setTitle(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Volume spacing options", nullptr));
#if QT_CONFIG(tooltip)
        label_OversamplingFactor->setToolTip(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Split each voxel of the volume to this many voxels along each direction. Useful when increasing the resolution is needed", nullptr));
#endif // QT_CONFIG(tooltip)
        label_OversamplingFactor->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Oversampling factor:", nullptr));
#if QT_CONFIG(tooltip)
        DoubleSpinBox_OversamplingFactor->setToolTip(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Split each voxel of the volume to this many voxels along each direction. Useful when increasing the resolution is needed", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_IsotropicSpacing->setToolTip(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Resample the volume to have isotropic spacing, which means the voxels will be cubes. Use smallest spacing. Useful if the volume has elongated voxels.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_IsotropicSpacing->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Isotropic spacing:", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_IsotropicSpacing->setToolTip(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Resample the volume to have isotropic spacing, which means the voxels will be cubes. Use smallest spacing. Useful if the volume has elongated voxels.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_IsotropicSpacing->setText(QString());
        groupBox_SegmentationLabelmapGeometry->setTitle(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Segmentation labelmap geometry", nullptr));
        label_Origin->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Origin:", nullptr));
        label_Directions->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Directions:", nullptr));
        label_Spacing->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Spacing:", nullptr));
        label_Dimensions->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Dimensions:", nullptr));
        groupBox_AdditionalOptions->setTitle(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Additional Options", nullptr));
        label->setText(QCoreApplication::translate("qMRMLSegmentationGeometryWidget", "Pad output:", nullptr));
        CheckBox_PadSegmentation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentationGeometryWidget: public Ui_qMRMLSegmentationGeometryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTATIONGEOMETRYWIDGET_H
