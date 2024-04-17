/********************************************************************************
** Form generated from reading UI file 'qMRMLVolumeInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLVOLUMEINFOWIDGET_H
#define UI_QMRMLVOLUMEINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "ctkCoordinatesWidget.h"
#include "ctkMatrixWidget.h"
#include "qMRMLCoordinatesWidget.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLVolumeInfoWidget
{
public:
    QFormLayout *formLayout;
    QLabel *ImageDimensionsLabel;
    ctkCoordinatesWidget *ImageDimensionsWidget;
    QLabel *ImageSpacingLabel;
    qMRMLCoordinatesWidget *ImageSpacingWidget;
    QLabel *ImageOriginLabel;
    qMRMLCoordinatesWidget *ImageOriginWidget;
    QLabel *IJKToRASDirectionLabel;
    ctkMatrixWidget *IJKToRASDirectionMatrixWidget;
    QPushButton *CenterVolumePushButton;
    QLabel *ScanOrderLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ScanOrderValueLabel;
    QComboBox *ScanOrderComboBox;
    QLabel *NumberOfScalarsLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *NumberOfScalarsValueLabel;
    QSpinBox *NumberOfScalarsSpinBox;
    QLabel *ScalarTypeLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *ScalarTypeValueLabel;
    QComboBox *ScalarTypeComboBox;
    QLabel *ScalarRangeLabel;
    QLabel *ScalarRangeValueLabel;
    QLabel *VolumeTypeLabel;
    QLabel *VolumeTagLabel;
    QLabel *FileNameLabel;
    QLineEdit *FileNameLineEdit;
    QLabel *WindowLevelPresetsLabel;
    QListWidget *WindowLevelPresetsListWidget;

    void setupUi(qMRMLWidget *qMRMLVolumeInfoWidget)
    {
        if (qMRMLVolumeInfoWidget->objectName().isEmpty())
            qMRMLVolumeInfoWidget->setObjectName(QString::fromUtf8("qMRMLVolumeInfoWidget"));
        qMRMLVolumeInfoWidget->resize(315, 421);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qMRMLVolumeInfoWidget->sizePolicy().hasHeightForWidth());
        qMRMLVolumeInfoWidget->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(qMRMLVolumeInfoWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ImageDimensionsLabel = new QLabel(qMRMLVolumeInfoWidget);
        ImageDimensionsLabel->setObjectName(QString::fromUtf8("ImageDimensionsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ImageDimensionsLabel);

        ImageDimensionsWidget = new ctkCoordinatesWidget(qMRMLVolumeInfoWidget);
        ImageDimensionsWidget->setObjectName(QString::fromUtf8("ImageDimensionsWidget"));
        ImageDimensionsWidget->setDecimals(0);
        ImageDimensionsWidget->setDecimalsOption(ctkDoubleSpinBox::FixedDecimals);
        ImageDimensionsWidget->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, ImageDimensionsWidget);

        ImageSpacingLabel = new QLabel(qMRMLVolumeInfoWidget);
        ImageSpacingLabel->setObjectName(QString::fromUtf8("ImageSpacingLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ImageSpacingLabel);

        ImageSpacingWidget = new qMRMLCoordinatesWidget(qMRMLVolumeInfoWidget);
        ImageSpacingWidget->setObjectName(QString::fromUtf8("ImageSpacingWidget"));
        ImageSpacingWidget->setDecimals(4);
        ImageSpacingWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue);
        ImageSpacingWidget->setMinimum(0.000000000000000);
        ImageSpacingWidget->setMaximum(1000000000.000000000000000);
        ImageSpacingWidget->setQuantity(QString::fromUtf8("length"));
        ImageSpacingWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::Precision|qMRMLCoordinatesWidget::Prefix|qMRMLCoordinatesWidget::Scaling|qMRMLCoordinatesWidget::Suffix);

        formLayout->setWidget(1, QFormLayout::FieldRole, ImageSpacingWidget);

        ImageOriginLabel = new QLabel(qMRMLVolumeInfoWidget);
        ImageOriginLabel->setObjectName(QString::fromUtf8("ImageOriginLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ImageOriginLabel);

        ImageOriginWidget = new qMRMLCoordinatesWidget(qMRMLVolumeInfoWidget);
        ImageOriginWidget->setObjectName(QString::fromUtf8("ImageOriginWidget"));
        ImageOriginWidget->setDecimals(4);
        ImageOriginWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue);
        ImageOriginWidget->setMinimum(-1000000000.000000000000000);
        ImageOriginWidget->setMaximum(1000000000.000000000000000);
        ImageOriginWidget->setQuantity(QString::fromUtf8("length"));
        ImageOriginWidget->setUnitAwareProperties(qMRMLCoordinatesWidget::Precision|qMRMLCoordinatesWidget::Prefix|qMRMLCoordinatesWidget::Scaling|qMRMLCoordinatesWidget::Suffix);

        formLayout->setWidget(2, QFormLayout::FieldRole, ImageOriginWidget);

        IJKToRASDirectionLabel = new QLabel(qMRMLVolumeInfoWidget);
        IJKToRASDirectionLabel->setObjectName(QString::fromUtf8("IJKToRASDirectionLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, IJKToRASDirectionLabel);

        IJKToRASDirectionMatrixWidget = new ctkMatrixWidget(qMRMLVolumeInfoWidget);
        IJKToRASDirectionMatrixWidget->setObjectName(QString::fromUtf8("IJKToRASDirectionMatrixWidget"));
        IJKToRASDirectionMatrixWidget->setEnabled(true);
        IJKToRASDirectionMatrixWidget->setColumnCount(3);
        IJKToRASDirectionMatrixWidget->setRowCount(3);
        IJKToRASDirectionMatrixWidget->setEditable(false);
        IJKToRASDirectionMatrixWidget->setMinimum(-1.000000000000000);
        IJKToRASDirectionMatrixWidget->setMaximum(1.000000000000000);
        IJKToRASDirectionMatrixWidget->setDecimals(4);
        IJKToRASDirectionMatrixWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts|ctkDoubleSpinBox::DecimalsByValue);
        IJKToRASDirectionMatrixWidget->setSingleStep(0.000100000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, IJKToRASDirectionMatrixWidget);

        CenterVolumePushButton = new QPushButton(qMRMLVolumeInfoWidget);
        CenterVolumePushButton->setObjectName(QString::fromUtf8("CenterVolumePushButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, CenterVolumePushButton);

        ScanOrderLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScanOrderLabel->setObjectName(QString::fromUtf8("ScanOrderLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, ScanOrderLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ScanOrderValueLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScanOrderValueLabel->setObjectName(QString::fromUtf8("ScanOrderValueLabel"));

        horizontalLayout_3->addWidget(ScanOrderValueLabel);

        ScanOrderComboBox = new QComboBox(qMRMLVolumeInfoWidget);
        ScanOrderComboBox->setObjectName(QString::fromUtf8("ScanOrderComboBox"));

        horizontalLayout_3->addWidget(ScanOrderComboBox);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_3);

        NumberOfScalarsLabel = new QLabel(qMRMLVolumeInfoWidget);
        NumberOfScalarsLabel->setObjectName(QString::fromUtf8("NumberOfScalarsLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, NumberOfScalarsLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        NumberOfScalarsValueLabel = new QLabel(qMRMLVolumeInfoWidget);
        NumberOfScalarsValueLabel->setObjectName(QString::fromUtf8("NumberOfScalarsValueLabel"));

        horizontalLayout_2->addWidget(NumberOfScalarsValueLabel);

        NumberOfScalarsSpinBox = new QSpinBox(qMRMLVolumeInfoWidget);
        NumberOfScalarsSpinBox->setObjectName(QString::fromUtf8("NumberOfScalarsSpinBox"));
        NumberOfScalarsSpinBox->setMaximum(9999);
        NumberOfScalarsSpinBox->setValue(1);

        horizontalLayout_2->addWidget(NumberOfScalarsSpinBox);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_2);

        ScalarTypeLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScalarTypeLabel->setObjectName(QString::fromUtf8("ScalarTypeLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, ScalarTypeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        ScalarTypeValueLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScalarTypeValueLabel->setObjectName(QString::fromUtf8("ScalarTypeValueLabel"));

        horizontalLayout->addWidget(ScalarTypeValueLabel);

        ScalarTypeComboBox = new QComboBox(qMRMLVolumeInfoWidget);
        ScalarTypeComboBox->setObjectName(QString::fromUtf8("ScalarTypeComboBox"));

        horizontalLayout->addWidget(ScalarTypeComboBox);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);

        ScalarRangeLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScalarRangeLabel->setObjectName(QString::fromUtf8("ScalarRangeLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, ScalarRangeLabel);

        ScalarRangeValueLabel = new QLabel(qMRMLVolumeInfoWidget);
        ScalarRangeValueLabel->setObjectName(QString::fromUtf8("ScalarRangeValueLabel"));

        formLayout->setWidget(8, QFormLayout::FieldRole, ScalarRangeValueLabel);

        VolumeTypeLabel = new QLabel(qMRMLVolumeInfoWidget);
        VolumeTypeLabel->setObjectName(QString::fromUtf8("VolumeTypeLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, VolumeTypeLabel);

        VolumeTagLabel = new QLabel(qMRMLVolumeInfoWidget);
        VolumeTagLabel->setObjectName(QString::fromUtf8("VolumeTagLabel"));

        formLayout->setWidget(9, QFormLayout::FieldRole, VolumeTagLabel);

        FileNameLabel = new QLabel(qMRMLVolumeInfoWidget);
        FileNameLabel->setObjectName(QString::fromUtf8("FileNameLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, FileNameLabel);

        FileNameLineEdit = new QLineEdit(qMRMLVolumeInfoWidget);
        FileNameLineEdit->setObjectName(QString::fromUtf8("FileNameLineEdit"));
        FileNameLineEdit->setReadOnly(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, FileNameLineEdit);

        WindowLevelPresetsLabel = new QLabel(qMRMLVolumeInfoWidget);
        WindowLevelPresetsLabel->setObjectName(QString::fromUtf8("WindowLevelPresetsLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, WindowLevelPresetsLabel);

        WindowLevelPresetsListWidget = new QListWidget(qMRMLVolumeInfoWidget);
        WindowLevelPresetsListWidget->setObjectName(QString::fromUtf8("WindowLevelPresetsListWidget"));
        sizePolicy.setHeightForWidth(WindowLevelPresetsListWidget->sizePolicy().hasHeightForWidth());
        WindowLevelPresetsListWidget->setSizePolicy(sizePolicy);
        WindowLevelPresetsListWidget->setMaximumSize(QSize(16777215, 80));

        formLayout->setWidget(11, QFormLayout::FieldRole, WindowLevelPresetsListWidget);


        retranslateUi(qMRMLVolumeInfoWidget);
        QObject::connect(qMRMLVolumeInfoWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ImageOriginWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLVolumeInfoWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ImageSpacingWidget, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLVolumeInfoWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLVolumeInfoWidget)
    {
        qMRMLVolumeInfoWidget->setWindowTitle(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Volume Information", nullptr));
        ImageDimensionsLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Image Dimensions:", nullptr));
        ImageSpacingLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Image Spacing:", nullptr));
        ImageSpacingWidget->setProperty("coordinates", QVariant(QCoreApplication::translate("qMRMLVolumeInfoWidget", "0,0,0", nullptr)));
        ImageOriginLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Image Origin:", nullptr));
        IJKToRASDirectionLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "IJK to RAS Direction Matrix:", nullptr));
#if QT_CONFIG(tooltip)
        CenterVolumePushButton->setToolTip(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Set a parent transform to the volume that center it on the origin. Harden the transform to permanently change the volume position.", nullptr));
#endif // QT_CONFIG(tooltip)
        CenterVolumePushButton->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Center Volume", nullptr));
        ScanOrderLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Scan Order:", nullptr));
        ScanOrderValueLabel->setText(QString());
        NumberOfScalarsLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Number of Scalars:", nullptr));
        NumberOfScalarsValueLabel->setText(QString());
        ScalarTypeLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Scalar Type:", nullptr));
        ScalarTypeValueLabel->setText(QString());
        ScalarRangeLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Scalar Range:", nullptr));
        ScalarRangeValueLabel->setText(QString());
        VolumeTypeLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Volume type:", nullptr));
        VolumeTagLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "VolumeTag", nullptr));
        FileNameLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "File Name:", nullptr));
        WindowLevelPresetsLabel->setText(QCoreApplication::translate("qMRMLVolumeInfoWidget", "Window/Level Presets:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLVolumeInfoWidget: public Ui_qMRMLVolumeInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLVOLUMEINFOWIDGET_H
