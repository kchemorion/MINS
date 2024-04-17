/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentationFileExportWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTATIONFILEEXPORTWIDGET_H
#define UI_QMRMLSEGMENTATIONFILEEXPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include "ctkDirectoryButton.h"
#include "ctkDoubleSpinBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentationFileExportWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *VisibleSegmentsOnlyLabel;
    ctkDoubleSpinBox *SizeScaleSpinBox;
    QHBoxLayout *ColorTableLayout;
    QCheckBox *UseColorTableValuesCheckBox;
    qMRMLNodeComboBox *ColorTableNodeSelector;
    QLabel *DestinationFoldeLabel;
    QComboBox *CoordinateSystemComboBox;
    QLabel *UseColorTableValuesLabel;
    QLabel *FileFormatLabel;
    QLabel *CoordinateSystemLabel;
    QCheckBox *VisibleSegmentsOnlyCheckBox;
    QLabel *MergeIntoSingleFileLabel;
    QPushButton *ExportToFilesButton;
    QCheckBox *ShowDestinationFolderOnExportCompleteCheckBox;
    QHBoxLayout *HorizontalLayout;
    ctkDirectoryButton *DestinationFolderButton;
    QToolButton *ShowDestinationFolderButton;
    QLabel *SizeScaleLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *MergeIntoSingleOBJFileCheckBox;
    QCheckBox *MergeIntoSingleSTLFileCheckBox;
    QCheckBox *UseCompressionCheckBox;
    QComboBox *FileFormatComboBox;
    QLabel *UseCompressionLabel;
    QLabel *ShowDestinationFolderOnExportCompleteLabel;
    QLabel *ReferenceVolumeLabel;
    qMRMLNodeComboBox *ReferenceVolumeComboBox;

    void setupUi(qMRMLWidget *qMRMLSegmentationFileExportWidget)
    {
        if (qMRMLSegmentationFileExportWidget->objectName().isEmpty())
            qMRMLSegmentationFileExportWidget->setObjectName(QString::fromUtf8("qMRMLSegmentationFileExportWidget"));
        qMRMLSegmentationFileExportWidget->resize(298, 253);
        gridLayout_2 = new QGridLayout(qMRMLSegmentationFileExportWidget);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        VisibleSegmentsOnlyLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        VisibleSegmentsOnlyLabel->setObjectName(QString::fromUtf8("VisibleSegmentsOnlyLabel"));

        gridLayout_2->addWidget(VisibleSegmentsOnlyLabel, 3, 0, 1, 1);

        SizeScaleSpinBox = new ctkDoubleSpinBox(qMRMLSegmentationFileExportWidget);
        SizeScaleSpinBox->setObjectName(QString::fromUtf8("SizeScaleSpinBox"));
        SizeScaleSpinBox->setFocusPolicy(Qt::TabFocus);
        SizeScaleSpinBox->setDecimals(3);
        SizeScaleSpinBox->setDecimalsOption(ctkDoubleSpinBox::DecimalsByKey|ctkDoubleSpinBox::DecimalsByShortcuts);
        SizeScaleSpinBox->setMinimum(0.000001000000000);
        SizeScaleSpinBox->setMaximum(1000000.000000000000000);
        SizeScaleSpinBox->setSingleStep(0.100000000000000);
        SizeScaleSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(SizeScaleSpinBox, 9, 1, 1, 1);

        ColorTableLayout = new QHBoxLayout();
        ColorTableLayout->setObjectName(QString::fromUtf8("ColorTableLayout"));
        UseColorTableValuesCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        UseColorTableValuesCheckBox->setObjectName(QString::fromUtf8("UseColorTableValuesCheckBox"));

        ColorTableLayout->addWidget(UseColorTableValuesCheckBox);

        ColorTableNodeSelector = new qMRMLNodeComboBox(qMRMLSegmentationFileExportWidget);
        ColorTableNodeSelector->setObjectName(QString::fromUtf8("ColorTableNodeSelector"));
        ColorTableNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLColorTableNode"));
        ColorTableNodeSelector->setNoneEnabled(false);
        ColorTableNodeSelector->setAddEnabled(false);
        ColorTableNodeSelector->setRemoveEnabled(false);

        ColorTableLayout->addWidget(ColorTableNodeSelector);


        gridLayout_2->addLayout(ColorTableLayout, 12, 1, 1, 1);

        DestinationFoldeLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        DestinationFoldeLabel->setObjectName(QString::fromUtf8("DestinationFoldeLabel"));

        gridLayout_2->addWidget(DestinationFoldeLabel, 2, 0, 1, 1);

        CoordinateSystemComboBox = new QComboBox(qMRMLSegmentationFileExportWidget);
        CoordinateSystemComboBox->addItem(QString());
        CoordinateSystemComboBox->addItem(QString());
        CoordinateSystemComboBox->setObjectName(QString::fromUtf8("CoordinateSystemComboBox"));

        gridLayout_2->addWidget(CoordinateSystemComboBox, 10, 1, 1, 1);

        UseColorTableValuesLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        UseColorTableValuesLabel->setObjectName(QString::fromUtf8("UseColorTableValuesLabel"));

        gridLayout_2->addWidget(UseColorTableValuesLabel, 12, 0, 1, 1);

        FileFormatLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        FileFormatLabel->setObjectName(QString::fromUtf8("FileFormatLabel"));

        gridLayout_2->addWidget(FileFormatLabel, 5, 0, 1, 1);

        CoordinateSystemLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        CoordinateSystemLabel->setObjectName(QString::fromUtf8("CoordinateSystemLabel"));

        gridLayout_2->addWidget(CoordinateSystemLabel, 10, 0, 1, 1);

        VisibleSegmentsOnlyCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        VisibleSegmentsOnlyCheckBox->setObjectName(QString::fromUtf8("VisibleSegmentsOnlyCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VisibleSegmentsOnlyCheckBox->sizePolicy().hasHeightForWidth());
        VisibleSegmentsOnlyCheckBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(VisibleSegmentsOnlyCheckBox, 3, 1, 1, 1);

        MergeIntoSingleFileLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        MergeIntoSingleFileLabel->setObjectName(QString::fromUtf8("MergeIntoSingleFileLabel"));

        gridLayout_2->addWidget(MergeIntoSingleFileLabel, 7, 0, 1, 1);

        ExportToFilesButton = new QPushButton(qMRMLSegmentationFileExportWidget);
        ExportToFilesButton->setObjectName(QString::fromUtf8("ExportToFilesButton"));

        gridLayout_2->addWidget(ExportToFilesButton, 15, 0, 1, 2);

        ShowDestinationFolderOnExportCompleteCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        ShowDestinationFolderOnExportCompleteCheckBox->setObjectName(QString::fromUtf8("ShowDestinationFolderOnExportCompleteCheckBox"));
        sizePolicy.setHeightForWidth(ShowDestinationFolderOnExportCompleteCheckBox->sizePolicy().hasHeightForWidth());
        ShowDestinationFolderOnExportCompleteCheckBox->setSizePolicy(sizePolicy);
        ShowDestinationFolderOnExportCompleteCheckBox->setChecked(true);

        gridLayout_2->addWidget(ShowDestinationFolderOnExportCompleteCheckBox, 13, 1, 1, 1);

        HorizontalLayout = new QHBoxLayout();
        HorizontalLayout->setObjectName(QString::fromUtf8("HorizontalLayout"));
        HorizontalLayout->setContentsMargins(-1, 0, -1, -1);
        DestinationFolderButton = new ctkDirectoryButton(qMRMLSegmentationFileExportWidget);
        DestinationFolderButton->setObjectName(QString::fromUtf8("DestinationFolderButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DestinationFolderButton->sizePolicy().hasHeightForWidth());
        DestinationFolderButton->setSizePolicy(sizePolicy1);
        DestinationFolderButton->setFocusPolicy(Qt::TabFocus);

        HorizontalLayout->addWidget(DestinationFolderButton);

        ShowDestinationFolderButton = new QToolButton(qMRMLSegmentationFileExportWidget);
        ShowDestinationFolderButton->setObjectName(QString::fromUtf8("ShowDestinationFolderButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Go.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShowDestinationFolderButton->setIcon(icon);

        HorizontalLayout->addWidget(ShowDestinationFolderButton);


        gridLayout_2->addLayout(HorizontalLayout, 2, 1, 1, 1);

        SizeScaleLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        SizeScaleLabel->setObjectName(QString::fromUtf8("SizeScaleLabel"));

        gridLayout_2->addWidget(SizeScaleLabel, 9, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MergeIntoSingleOBJFileCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        MergeIntoSingleOBJFileCheckBox->setObjectName(QString::fromUtf8("MergeIntoSingleOBJFileCheckBox"));
        MergeIntoSingleOBJFileCheckBox->setEnabled(false);
        MergeIntoSingleOBJFileCheckBox->setChecked(true);

        horizontalLayout->addWidget(MergeIntoSingleOBJFileCheckBox);

        MergeIntoSingleSTLFileCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        MergeIntoSingleSTLFileCheckBox->setObjectName(QString::fromUtf8("MergeIntoSingleSTLFileCheckBox"));
        sizePolicy.setHeightForWidth(MergeIntoSingleSTLFileCheckBox->sizePolicy().hasHeightForWidth());
        MergeIntoSingleSTLFileCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(MergeIntoSingleSTLFileCheckBox);


        gridLayout_2->addLayout(horizontalLayout, 7, 1, 1, 1);

        UseCompressionCheckBox = new QCheckBox(qMRMLSegmentationFileExportWidget);
        UseCompressionCheckBox->setObjectName(QString::fromUtf8("UseCompressionCheckBox"));

        gridLayout_2->addWidget(UseCompressionCheckBox, 11, 1, 1, 1);

        FileFormatComboBox = new QComboBox(qMRMLSegmentationFileExportWidget);
        FileFormatComboBox->addItem(QString());
        FileFormatComboBox->addItem(QString());
        FileFormatComboBox->addItem(QString());
        FileFormatComboBox->addItem(QString());
        FileFormatComboBox->setObjectName(QString::fromUtf8("FileFormatComboBox"));

        gridLayout_2->addWidget(FileFormatComboBox, 5, 1, 1, 1);

        UseCompressionLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        UseCompressionLabel->setObjectName(QString::fromUtf8("UseCompressionLabel"));

        gridLayout_2->addWidget(UseCompressionLabel, 11, 0, 1, 1);

        ShowDestinationFolderOnExportCompleteLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        ShowDestinationFolderOnExportCompleteLabel->setObjectName(QString::fromUtf8("ShowDestinationFolderOnExportCompleteLabel"));

        gridLayout_2->addWidget(ShowDestinationFolderOnExportCompleteLabel, 13, 0, 1, 1);

        ReferenceVolumeLabel = new QLabel(qMRMLSegmentationFileExportWidget);
        ReferenceVolumeLabel->setObjectName(QString::fromUtf8("ReferenceVolumeLabel"));

        gridLayout_2->addWidget(ReferenceVolumeLabel, 4, 0, 1, 1);

        ReferenceVolumeComboBox = new qMRMLNodeComboBox(qMRMLSegmentationFileExportWidget);
        ReferenceVolumeComboBox->setObjectName(QString::fromUtf8("ReferenceVolumeComboBox"));
        ReferenceVolumeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        ReferenceVolumeComboBox->setNoneEnabled(true);
        ReferenceVolumeComboBox->setAddEnabled(false);
        ReferenceVolumeComboBox->setRemoveEnabled(false);

        gridLayout_2->addWidget(ReferenceVolumeComboBox, 4, 1, 1, 1);

        QWidget::setTabOrder(DestinationFolderButton, ShowDestinationFolderButton);
        QWidget::setTabOrder(ShowDestinationFolderButton, FileFormatComboBox);
        QWidget::setTabOrder(FileFormatComboBox, SizeScaleSpinBox);
        QWidget::setTabOrder(SizeScaleSpinBox, CoordinateSystemComboBox);
        QWidget::setTabOrder(CoordinateSystemComboBox, ExportToFilesButton);

        retranslateUi(qMRMLSegmentationFileExportWidget);
        QObject::connect(qMRMLSegmentationFileExportWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSegmentationFileExportWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ReferenceVolumeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLSegmentationFileExportWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSegmentationFileExportWidget)
    {
        qMRMLSegmentationFileExportWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "qMRMLSegmentationFileExportWidget", nullptr));
        VisibleSegmentsOnlyLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Visible segments only: ", nullptr));
#if QT_CONFIG(tooltip)
        SizeScaleSpinBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Adjust the exported model size. Point coordinates in the exported model will be multiplied by this number. By default Slicer uses millimeter unit for coordinates.", nullptr));
#endif // QT_CONFIG(tooltip)
        UseColorTableValuesCheckBox->setText(QString());
        DestinationFoldeLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Destination folder: ", nullptr));
        CoordinateSystemComboBox->setItemText(0, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "LPS", nullptr));
        CoordinateSystemComboBox->setItemText(1, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "RAS", nullptr));

#if QT_CONFIG(tooltip)
        CoordinateSystemComboBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Output model XYZ axes are mapped to LPS (left-posterior-superior) or RAS (right-anterior-superior) patient axis directions. LPS is used more commonly.", nullptr));
#endif // QT_CONFIG(tooltip)
        UseColorTableValuesLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Use color table values:", nullptr));
        FileFormatLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "File format:", nullptr));
        CoordinateSystemLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Coordinate system: ", nullptr));
#if QT_CONFIG(tooltip)
        VisibleSegmentsOnlyCheckBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Only export those segments that are currently visible.", nullptr));
#endif // QT_CONFIG(tooltip)
        VisibleSegmentsOnlyCheckBox->setText(QString());
        MergeIntoSingleFileLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Merge into single file:", nullptr));
        ExportToFilesButton->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Export", nullptr));
#if QT_CONFIG(tooltip)
        ShowDestinationFolderOnExportCompleteCheckBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Open destination folder when export is completed.", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowDestinationFolderOnExportCompleteCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        ShowDestinationFolderButton->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Browse to destination folder", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowDestinationFolderButton->setText(QString());
        SizeScaleLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Size scale:", nullptr));
#if QT_CONFIG(tooltip)
        MergeIntoSingleOBJFileCheckBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Export all segments to a single OBJ file. It is always enabled for OBJ files, as segments can be distinguished based on their material.", nullptr));
#endif // QT_CONFIG(tooltip)
        MergeIntoSingleOBJFileCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        MergeIntoSingleSTLFileCheckBox->setToolTip(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Export all segments to a single output STL file.", nullptr));
#endif // QT_CONFIG(tooltip)
        MergeIntoSingleSTLFileCheckBox->setText(QString());
        UseCompressionCheckBox->setText(QString());
        FileFormatComboBox->setItemText(0, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "STL", nullptr));
        FileFormatComboBox->setItemText(1, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "OBJ", nullptr));
        FileFormatComboBox->setItemText(2, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "NRRD", nullptr));
        FileFormatComboBox->setItemText(3, QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "NIFTI", nullptr));

        UseCompressionLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Use compression:", nullptr));
        ShowDestinationFolderOnExportCompleteLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Show destination folder:", nullptr));
        ReferenceVolumeLabel->setText(QCoreApplication::translate("qMRMLSegmentationFileExportWidget", "Reference volume:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentationFileExportWidget: public Ui_qMRMLSegmentationFileExportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTATIONFILEEXPORTWIDGET_H
