/********************************************************************************
** Form generated from reading UI file 'qSlicerSegmentationsModule.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSEGMENTATIONSMODULE_H
#define UI_QSLICERSEGMENTATIONSMODULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkComboBox.h"
#include "ctkExpandableWidget.h"
#include "ctkPushButton.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSegmentationDisplayNodeWidget.h"
#include "qMRMLSegmentationFileExportWidget.h"
#include "qMRMLSegmentationRepresentationsListView.h"
#include "qMRMLSegmentationShow3DButton.h"
#include "qMRMLSegmentsTableView.h"
#include "qMRMLSubjectHierarchyComboBox.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSegmentationsModule
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_ActiveSegmentation;
    QLabel *label_ReferenceVolumeText;
    qMRMLNodeComboBox *MRMLNodeComboBox_Segmentation;
    QLabel *label_ReferenceVolumeName;
    ctkExpandableWidget *ResizableFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_AddSegment;
    QPushButton *pushButton_RemoveSelected;
    qMRMLSegmentationShow3DButton *show3DButton;
    QToolButton *toolButton_Edit;
    qMRMLSegmentsTableView *SegmentsTableView;
    ctkCollapsibleButton *CollapsibleButton_Display;
    QGridLayout *gridLayout;
    qMRMLSegmentationDisplayNodeWidget *SegmentationDisplayNodeWidget;
    ctkCollapsibleButton *CollapsibleButton_Representations;
    QGridLayout *gridLayout_3;
    qMRMLSegmentationRepresentationsListView *RepresentationsListView;
    ctkCollapsibleButton *CollapsibleButton_CopyMoveSegment;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_CurrentSegmentation_2;
    qMRMLSegmentsTableView *SegmentsTableView_Current;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButton_MoveFromCurrentSegmentation;
    QToolButton *toolButton_CopyFromCurrentSegmentation;
    QToolButton *toolButton_CopyToCurrentSegmentation;
    QToolButton *toolButton_MoveToCurrentSegmentation;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    qMRMLNodeComboBox *MRMLNodeComboBox_OtherSegmentationOrRepresentationNode;
    qMRMLSegmentsTableView *SegmentsTableView_Other;
    ctkCollapsibleButton *CollapsibleButton_ImportExportSegment;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    qMRMLSubjectHierarchyComboBox *SubjectHierarchyComboBox_ImportExport;
    QPushButton *pushButton_ClearSelection;
    QLabel *label;
    QRadioButton *radioButton_Labelmap;
    QRadioButton *radioButton_Model;
    QLabel *label_ImportExportType;
    QLabel *label_ImportExportNode;
    ctkPushButton *PushButton_ImportExport;
    QRadioButton *radioButton_Export;
    QRadioButton *radioButton_Import;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_ImporExportAdvanced;
    QFormLayout *formLayout;
    QLabel *label_4;
    ctkComboBox *ComboBox_ExportedSegments;
    QLabel *label_6;
    qMRMLNodeComboBox *MRMLNodeComboBox_ExportLabelmapReferenceVolume;
    QLabel *UseColorTableValuesLabel;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *UseColorTableValuesCheckBox;
    qMRMLNodeComboBox *ColorTableNodeSelector;
    ctkComboBox *ComboBox_TerminologyContext;
    QLabel *label_TerminologyContext;
    ctkCollapsibleButton *CollapsibleButton_ExportToFiles;
    QVBoxLayout *verticalLayout_6;
    qMRMLSegmentationFileExportWidget *ExportToFilesWidget;
    QSpacerItem *verticalSpacer;
    ctkCollapsibleButton *CollapsibleButton_BinaryLabelmapLayers;
    QGridLayout *gridLayout_5;
    QLabel *label_LayerCountText;
    QLabel *label_LayerCountValue;
    QLabel *label_OverwriteSegmentsText;
    QLabel *label_SegmentCountText;
    QPushButton *pushButton_CollapseLayers;
    QLabel *label_SegmentCountValue;
    QCheckBox *checkBox_OverwriteSegments;

    void setupUi(qSlicerWidget *qSlicerSegmentationsModule)
    {
        if (qSlicerSegmentationsModule->objectName().isEmpty())
            qSlicerSegmentationsModule->setObjectName(QString::fromUtf8("qSlicerSegmentationsModule"));
        qSlicerSegmentationsModule->resize(340, 870);
        verticalLayout = new QVBoxLayout(qSlicerSegmentationsModule);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_ActiveSegmentation = new QLabel(qSlicerSegmentationsModule);
        label_ActiveSegmentation->setObjectName(QString::fromUtf8("label_ActiveSegmentation"));

        gridLayout_4->addWidget(label_ActiveSegmentation, 0, 0, 1, 1);

        label_ReferenceVolumeText = new QLabel(qSlicerSegmentationsModule);
        label_ReferenceVolumeText->setObjectName(QString::fromUtf8("label_ReferenceVolumeText"));

        gridLayout_4->addWidget(label_ReferenceVolumeText, 1, 0, 1, 1);

        MRMLNodeComboBox_Segmentation = new qMRMLNodeComboBox(qSlicerSegmentationsModule);
        MRMLNodeComboBox_Segmentation->setObjectName(QString::fromUtf8("MRMLNodeComboBox_Segmentation"));
        MRMLNodeComboBox_Segmentation->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSegmentationNode"));
        MRMLNodeComboBox_Segmentation->setRenameEnabled(true);

        gridLayout_4->addWidget(MRMLNodeComboBox_Segmentation, 0, 1, 1, 1);

        label_ReferenceVolumeName = new QLabel(qSlicerSegmentationsModule);
        label_ReferenceVolumeName->setObjectName(QString::fromUtf8("label_ReferenceVolumeName"));

        gridLayout_4->addWidget(label_ReferenceVolumeName, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        ResizableFrame = new ctkExpandableWidget(qSlicerSegmentationsModule);
        ResizableFrame->setObjectName(QString::fromUtf8("ResizableFrame"));
        ResizableFrame->setOrientations(Qt::Vertical);
        ResizableFrame->setSizeGripInside(false);
        verticalLayout_4 = new QVBoxLayout(ResizableFrame);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_AddSegment = new QPushButton(ResizableFrame);
        pushButton_AddSegment->setObjectName(QString::fromUtf8("pushButton_AddSegment"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_AddSegment->setIcon(icon);

        horizontalLayout_4->addWidget(pushButton_AddSegment);

        pushButton_RemoveSelected = new QPushButton(ResizableFrame);
        pushButton_RemoveSelected->setObjectName(QString::fromUtf8("pushButton_RemoveSelected"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_RemoveSelected->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton_RemoveSelected);

        show3DButton = new qMRMLSegmentationShow3DButton(ResizableFrame);
        show3DButton->setObjectName(QString::fromUtf8("show3DButton"));

        horizontalLayout_4->addWidget(show3DButton);

        toolButton_Edit = new QToolButton(ResizableFrame);
        toolButton_Edit->setObjectName(QString::fromUtf8("toolButton_Edit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Edit->setIcon(icon2);

        horizontalLayout_4->addWidget(toolButton_Edit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        SegmentsTableView = new qMRMLSegmentsTableView(ResizableFrame);
        SegmentsTableView->setObjectName(QString::fromUtf8("SegmentsTableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SegmentsTableView->sizePolicy().hasHeightForWidth());
        SegmentsTableView->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(SegmentsTableView);


        verticalLayout->addWidget(ResizableFrame);

        CollapsibleButton_Display = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_Display->setObjectName(QString::fromUtf8("CollapsibleButton_Display"));
        gridLayout = new QGridLayout(CollapsibleButton_Display);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        SegmentationDisplayNodeWidget = new qMRMLSegmentationDisplayNodeWidget(CollapsibleButton_Display);
        SegmentationDisplayNodeWidget->setObjectName(QString::fromUtf8("SegmentationDisplayNodeWidget"));

        gridLayout->addWidget(SegmentationDisplayNodeWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(CollapsibleButton_Display);

        CollapsibleButton_Representations = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_Representations->setObjectName(QString::fromUtf8("CollapsibleButton_Representations"));
        gridLayout_3 = new QGridLayout(CollapsibleButton_Representations);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        RepresentationsListView = new qMRMLSegmentationRepresentationsListView(CollapsibleButton_Representations);
        RepresentationsListView->setObjectName(QString::fromUtf8("RepresentationsListView"));

        gridLayout_3->addWidget(RepresentationsListView, 0, 0, 1, 1);


        verticalLayout->addWidget(CollapsibleButton_Representations);

        CollapsibleButton_CopyMoveSegment = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_CopyMoveSegment->setObjectName(QString::fromUtf8("CollapsibleButton_CopyMoveSegment"));
        CollapsibleButton_CopyMoveSegment->setChecked(false);
        CollapsibleButton_CopyMoveSegment->setCollapsed(true);
        horizontalLayout_2 = new QHBoxLayout(CollapsibleButton_CopyMoveSegment);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_CurrentSegmentation_2 = new QLabel(CollapsibleButton_CopyMoveSegment);
        label_CurrentSegmentation_2->setObjectName(QString::fromUtf8("label_CurrentSegmentation_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_CurrentSegmentation_2->sizePolicy().hasHeightForWidth());
        label_CurrentSegmentation_2->setSizePolicy(sizePolicy1);
        label_CurrentSegmentation_2->setMinimumSize(QSize(20, 20));

        verticalLayout_2->addWidget(label_CurrentSegmentation_2);

        SegmentsTableView_Current = new qMRMLSegmentsTableView(CollapsibleButton_CopyMoveSegment);
        SegmentsTableView_Current->setObjectName(QString::fromUtf8("SegmentsTableView_Current"));
        sizePolicy.setHeightForWidth(SegmentsTableView_Current->sizePolicy().hasHeightForWidth());
        SegmentsTableView_Current->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(SegmentsTableView_Current);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolButton_MoveFromCurrentSegmentation = new QToolButton(CollapsibleButton_CopyMoveSegment);
        toolButton_MoveFromCurrentSegmentation->setObjectName(QString::fromUtf8("toolButton_MoveFromCurrentSegmentation"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolButton_MoveFromCurrentSegmentation->sizePolicy().hasHeightForWidth());
        toolButton_MoveFromCurrentSegmentation->setSizePolicy(sizePolicy2);
        toolButton_MoveFromCurrentSegmentation->setMinimumSize(QSize(30, 18));
        toolButton_MoveFromCurrentSegmentation->setMaximumSize(QSize(16777215, 24));

        verticalLayout_3->addWidget(toolButton_MoveFromCurrentSegmentation);

        toolButton_CopyFromCurrentSegmentation = new QToolButton(CollapsibleButton_CopyMoveSegment);
        toolButton_CopyFromCurrentSegmentation->setObjectName(QString::fromUtf8("toolButton_CopyFromCurrentSegmentation"));
        sizePolicy2.setHeightForWidth(toolButton_CopyFromCurrentSegmentation->sizePolicy().hasHeightForWidth());
        toolButton_CopyFromCurrentSegmentation->setSizePolicy(sizePolicy2);
        toolButton_CopyFromCurrentSegmentation->setMinimumSize(QSize(30, 18));
        toolButton_CopyFromCurrentSegmentation->setMaximumSize(QSize(16777215, 24));

        verticalLayout_3->addWidget(toolButton_CopyFromCurrentSegmentation);

        toolButton_CopyToCurrentSegmentation = new QToolButton(CollapsibleButton_CopyMoveSegment);
        toolButton_CopyToCurrentSegmentation->setObjectName(QString::fromUtf8("toolButton_CopyToCurrentSegmentation"));
        sizePolicy2.setHeightForWidth(toolButton_CopyToCurrentSegmentation->sizePolicy().hasHeightForWidth());
        toolButton_CopyToCurrentSegmentation->setSizePolicy(sizePolicy2);
        toolButton_CopyToCurrentSegmentation->setMinimumSize(QSize(30, 18));
        toolButton_CopyToCurrentSegmentation->setMaximumSize(QSize(16777215, 24));

        verticalLayout_3->addWidget(toolButton_CopyToCurrentSegmentation);

        toolButton_MoveToCurrentSegmentation = new QToolButton(CollapsibleButton_CopyMoveSegment);
        toolButton_MoveToCurrentSegmentation->setObjectName(QString::fromUtf8("toolButton_MoveToCurrentSegmentation"));
        sizePolicy2.setHeightForWidth(toolButton_MoveToCurrentSegmentation->sizePolicy().hasHeightForWidth());
        toolButton_MoveToCurrentSegmentation->setSizePolicy(sizePolicy2);
        toolButton_MoveToCurrentSegmentation->setMinimumSize(QSize(30, 18));
        toolButton_MoveToCurrentSegmentation->setMaximumSize(QSize(16777215, 24));

        verticalLayout_3->addWidget(toolButton_MoveToCurrentSegmentation);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode = new qMRMLNodeComboBox(CollapsibleButton_CopyMoveSegment);
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setObjectName(QString::fromUtf8("MRMLNodeComboBox_OtherSegmentationOrRepresentationNode"));
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setMinimumSize(QSize(0, 25));
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSegmentationNode"));
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setNoneEnabled(true);
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setAddEnabled(true);
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setRemoveEnabled(true);
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setRenameEnabled(true);

        horizontalLayout_3->addWidget(MRMLNodeComboBox_OtherSegmentationOrRepresentationNode);


        verticalLayout_5->addLayout(horizontalLayout_3);

        SegmentsTableView_Other = new qMRMLSegmentsTableView(CollapsibleButton_CopyMoveSegment);
        SegmentsTableView_Other->setObjectName(QString::fromUtf8("SegmentsTableView_Other"));
        sizePolicy.setHeightForWidth(SegmentsTableView_Other->sizePolicy().hasHeightForWidth());
        SegmentsTableView_Other->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(SegmentsTableView_Other);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout->addWidget(CollapsibleButton_CopyMoveSegment);

        CollapsibleButton_ImportExportSegment = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_ImportExportSegment->setObjectName(QString::fromUtf8("CollapsibleButton_ImportExportSegment"));
        CollapsibleButton_ImportExportSegment->setChecked(true);
        CollapsibleButton_ImportExportSegment->setCollapsed(false);
        gridLayout_2 = new QGridLayout(CollapsibleButton_ImportExportSegment);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        SubjectHierarchyComboBox_ImportExport = new qMRMLSubjectHierarchyComboBox(CollapsibleButton_ImportExportSegment);
        SubjectHierarchyComboBox_ImportExport->setObjectName(QString::fromUtf8("SubjectHierarchyComboBox_ImportExport"));

        horizontalLayout->addWidget(SubjectHierarchyComboBox_ImportExport);

        pushButton_ClearSelection = new QPushButton(CollapsibleButton_ImportExportSegment);
        pushButton_ClearSelection->setObjectName(QString::fromUtf8("pushButton_ClearSelection"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/ClearSelection.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ClearSelection->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_ClearSelection);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 2);

        label = new QLabel(CollapsibleButton_ImportExportSegment);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        radioButton_Labelmap = new QRadioButton(CollapsibleButton_ImportExportSegment);
        radioButton_Labelmap->setObjectName(QString::fromUtf8("radioButton_Labelmap"));
        radioButton_Labelmap->setChecked(true);

        gridLayout_2->addWidget(radioButton_Labelmap, 1, 1, 1, 1);

        radioButton_Model = new QRadioButton(CollapsibleButton_ImportExportSegment);
        radioButton_Model->setObjectName(QString::fromUtf8("radioButton_Model"));

        gridLayout_2->addWidget(radioButton_Model, 1, 2, 1, 1);

        label_ImportExportType = new QLabel(CollapsibleButton_ImportExportSegment);
        label_ImportExportType->setObjectName(QString::fromUtf8("label_ImportExportType"));

        gridLayout_2->addWidget(label_ImportExportType, 1, 0, 1, 1);

        label_ImportExportNode = new QLabel(CollapsibleButton_ImportExportSegment);
        label_ImportExportNode->setObjectName(QString::fromUtf8("label_ImportExportNode"));

        gridLayout_2->addWidget(label_ImportExportNode, 3, 0, 1, 1);

        PushButton_ImportExport = new ctkPushButton(CollapsibleButton_ImportExportSegment);
        PushButton_ImportExport->setObjectName(QString::fromUtf8("PushButton_ImportExport"));

        gridLayout_2->addWidget(PushButton_ImportExport, 5, 0, 1, 3);

        radioButton_Export = new QRadioButton(CollapsibleButton_ImportExportSegment);
        radioButton_Export->setObjectName(QString::fromUtf8("radioButton_Export"));

        gridLayout_2->addWidget(radioButton_Export, 0, 1, 1, 1);

        radioButton_Import = new QRadioButton(CollapsibleButton_ImportExportSegment);
        radioButton_Import->setObjectName(QString::fromUtf8("radioButton_Import"));

        gridLayout_2->addWidget(radioButton_Import, 0, 2, 1, 1);

        CollapsibleGroupBox_ImporExportAdvanced = new ctkCollapsibleGroupBox(CollapsibleButton_ImportExportSegment);
        CollapsibleGroupBox_ImporExportAdvanced->setObjectName(QString::fromUtf8("CollapsibleGroupBox_ImporExportAdvanced"));
        CollapsibleGroupBox_ImporExportAdvanced->setCollapsed(true);
        formLayout = new QFormLayout(CollapsibleGroupBox_ImporExportAdvanced);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(4, 4, 4, 4);
        label_4 = new QLabel(CollapsibleGroupBox_ImporExportAdvanced);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        ComboBox_ExportedSegments = new ctkComboBox(CollapsibleGroupBox_ImporExportAdvanced);
        ComboBox_ExportedSegments->addItem(QString());
        ComboBox_ExportedSegments->addItem(QString());
        ComboBox_ExportedSegments->setObjectName(QString::fromUtf8("ComboBox_ExportedSegments"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ComboBox_ExportedSegments);

        label_6 = new QLabel(CollapsibleGroupBox_ImporExportAdvanced);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        MRMLNodeComboBox_ExportLabelmapReferenceVolume = new qMRMLNodeComboBox(CollapsibleGroupBox_ImporExportAdvanced);
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setObjectName(QString::fromUtf8("MRMLNodeComboBox_ExportLabelmapReferenceVolume"));
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setNoneEnabled(true);
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setAddEnabled(false);
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setRemoveEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, MRMLNodeComboBox_ExportLabelmapReferenceVolume);

        UseColorTableValuesLabel = new QLabel(CollapsibleGroupBox_ImporExportAdvanced);
        UseColorTableValuesLabel->setObjectName(QString::fromUtf8("UseColorTableValuesLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, UseColorTableValuesLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        UseColorTableValuesCheckBox = new QCheckBox(CollapsibleGroupBox_ImporExportAdvanced);
        UseColorTableValuesCheckBox->setObjectName(QString::fromUtf8("UseColorTableValuesCheckBox"));

        horizontalLayout_5->addWidget(UseColorTableValuesCheckBox);

        ColorTableNodeSelector = new qMRMLNodeComboBox(CollapsibleGroupBox_ImporExportAdvanced);
        ColorTableNodeSelector->setObjectName(QString::fromUtf8("ColorTableNodeSelector"));
        ColorTableNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLColorTableNode"));
        ColorTableNodeSelector->setAddEnabled(false);
        ColorTableNodeSelector->setRemoveEnabled(false);

        horizontalLayout_5->addWidget(ColorTableNodeSelector);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);

        ComboBox_TerminologyContext = new ctkComboBox(CollapsibleGroupBox_ImporExportAdvanced);
        ComboBox_TerminologyContext->setObjectName(QString::fromUtf8("ComboBox_TerminologyContext"));
        ComboBox_TerminologyContext->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        formLayout->setWidget(3, QFormLayout::FieldRole, ComboBox_TerminologyContext);

        label_TerminologyContext = new QLabel(CollapsibleGroupBox_ImporExportAdvanced);
        label_TerminologyContext->setObjectName(QString::fromUtf8("label_TerminologyContext"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_TerminologyContext);


        gridLayout_2->addWidget(CollapsibleGroupBox_ImporExportAdvanced, 4, 0, 1, 3);


        verticalLayout->addWidget(CollapsibleButton_ImportExportSegment);

        CollapsibleButton_ExportToFiles = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_ExportToFiles->setObjectName(QString::fromUtf8("CollapsibleButton_ExportToFiles"));
        CollapsibleButton_ExportToFiles->setCollapsed(true);
        verticalLayout_6 = new QVBoxLayout(CollapsibleButton_ExportToFiles);
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        ExportToFilesWidget = new qMRMLSegmentationFileExportWidget(CollapsibleButton_ExportToFiles);
        ExportToFilesWidget->setObjectName(QString::fromUtf8("ExportToFilesWidget"));

        verticalLayout_6->addWidget(ExportToFilesWidget);


        verticalLayout->addWidget(CollapsibleButton_ExportToFiles);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        CollapsibleButton_BinaryLabelmapLayers = new ctkCollapsibleButton(qSlicerSegmentationsModule);
        CollapsibleButton_BinaryLabelmapLayers->setObjectName(QString::fromUtf8("CollapsibleButton_BinaryLabelmapLayers"));
        CollapsibleButton_BinaryLabelmapLayers->setCollapsed(true);
        gridLayout_5 = new QGridLayout(CollapsibleButton_BinaryLabelmapLayers);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_LayerCountText = new QLabel(CollapsibleButton_BinaryLabelmapLayers);
        label_LayerCountText->setObjectName(QString::fromUtf8("label_LayerCountText"));
        label_LayerCountText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_LayerCountText, 0, 0, 1, 1);

        label_LayerCountValue = new QLabel(CollapsibleButton_BinaryLabelmapLayers);
        label_LayerCountValue->setObjectName(QString::fromUtf8("label_LayerCountValue"));

        gridLayout_5->addWidget(label_LayerCountValue, 0, 1, 1, 1);

        label_OverwriteSegmentsText = new QLabel(CollapsibleButton_BinaryLabelmapLayers);
        label_OverwriteSegmentsText->setObjectName(QString::fromUtf8("label_OverwriteSegmentsText"));

        gridLayout_5->addWidget(label_OverwriteSegmentsText, 2, 0, 1, 1);

        label_SegmentCountText = new QLabel(CollapsibleButton_BinaryLabelmapLayers);
        label_SegmentCountText->setObjectName(QString::fromUtf8("label_SegmentCountText"));
        label_SegmentCountText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_SegmentCountText, 1, 0, 1, 1);

        pushButton_CollapseLayers = new QPushButton(CollapsibleButton_BinaryLabelmapLayers);
        pushButton_CollapseLayers->setObjectName(QString::fromUtf8("pushButton_CollapseLayers"));
        sizePolicy1.setHeightForWidth(pushButton_CollapseLayers->sizePolicy().hasHeightForWidth());
        pushButton_CollapseLayers->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(pushButton_CollapseLayers, 3, 0, 1, 3);

        label_SegmentCountValue = new QLabel(CollapsibleButton_BinaryLabelmapLayers);
        label_SegmentCountValue->setObjectName(QString::fromUtf8("label_SegmentCountValue"));
        label_SegmentCountValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_SegmentCountValue, 1, 1, 1, 1);

        checkBox_OverwriteSegments = new QCheckBox(CollapsibleButton_BinaryLabelmapLayers);
        checkBox_OverwriteSegments->setObjectName(QString::fromUtf8("checkBox_OverwriteSegments"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkBox_OverwriteSegments->sizePolicy().hasHeightForWidth());
        checkBox_OverwriteSegments->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(checkBox_OverwriteSegments, 2, 1, 1, 1);


        verticalLayout->addWidget(CollapsibleButton_BinaryLabelmapLayers);


        retranslateUi(qSlicerSegmentationsModule);
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_Segmentation, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_OtherSegmentationOrRepresentationNode, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(SegmentsTableView, SIGNAL(selectionChanged(QItemSelection,QItemSelection)), SegmentationDisplayNodeWidget, SLOT(onSegmentSelectionChanged(QItemSelection,QItemSelection)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_ExportLabelmapReferenceVolume, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ExportToFilesWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SegmentsTableView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SubjectHierarchyComboBox_ImportExport, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSegmentationsModule, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ColorTableNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qSlicerSegmentationsModule);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSegmentationsModule)
    {
        qSlicerSegmentationsModule->setWindowTitle(QCoreApplication::translate("qSlicerSegmentationsModule", "Segmentations", nullptr));
        label_ActiveSegmentation->setText(QCoreApplication::translate("qSlicerSegmentationsModule", " Active segmentation:", nullptr));
#if QT_CONFIG(tooltip)
        label_ReferenceVolumeText->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Node that was used for setting the segmentation geometry (origin, spacing, axis directions, and default extent)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_ReferenceVolumeText->setText(QCoreApplication::translate("qSlicerSegmentationsModule", " Source geometry:", nullptr));
        label_ReferenceVolumeName->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_AddSegment->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Add empty segment", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_AddSegment->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Add segment", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_RemoveSelected->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Remove selected segment", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_RemoveSelected->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Remove selected", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_Edit->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Go to Segment Editor module", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_Edit->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "...", nullptr));
#if QT_CONFIG(tooltip)
        CollapsibleButton_Display->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Display settings for the segmentation (all segments)", nullptr));
#endif // QT_CONFIG(tooltip)
        CollapsibleButton_Display->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Display", nullptr));
#if QT_CONFIG(tooltip)
        CollapsibleButton_Representations->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "List of representations to see available and existing ones, and creating or updating them", nullptr));
#endif // QT_CONFIG(tooltip)
        CollapsibleButton_Representations->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Representations", nullptr));
        CollapsibleButton_CopyMoveSegment->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Copy/move segments", nullptr));
        label_CurrentSegmentation_2->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Current segmentation", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_MoveFromCurrentSegmentation->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Move from current segmentation to other Segmentation node", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_MoveFromCurrentSegmentation->setText(QCoreApplication::translate("qSlicerSegmentationsModule", ">", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_CopyFromCurrentSegmentation->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Copy from current segmentation to other node (Segmentation node for copy and Model or Labelmap node for import/export)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_CopyFromCurrentSegmentation->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "+>", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_CopyToCurrentSegmentation->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Copy to current segmentation from other node (Segmentation node for copy and Model or Labelmap node for import/export)", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_CopyToCurrentSegmentation->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "<+", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_MoveToCurrentSegmentation->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Move to current segmentation from other Segmentation node", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_MoveToCurrentSegmentation->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "<", nullptr));
#if QT_CONFIG(tooltip)
        MRMLNodeComboBox_OtherSegmentationOrRepresentationNode->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Select Segmentation node to copy/move segments to/from.", nullptr));
#endif // QT_CONFIG(tooltip)
        CollapsibleButton_ImportExportSegment->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Export/import models and labelmaps", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ClearSelection->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Clear selection indicating that a new node should be created", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_ClearSelection->setText(QString());
        label->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Operation:", nullptr));
        radioButton_Labelmap->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Labelmap", nullptr));
        radioButton_Model->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Models", nullptr));
        label_ImportExportType->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Type:", nullptr));
        label_ImportExportNode->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Output:", nullptr));
        PushButton_ImportExport->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Apply", nullptr));
        radioButton_Export->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Export", nullptr));
        radioButton_Import->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Import", nullptr));
        CollapsibleGroupBox_ImporExportAdvanced->setTitle(QCoreApplication::translate("qSlicerSegmentationsModule", "Advanced", nullptr));
        label_4->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Exported segments:", nullptr));
        ComboBox_ExportedSegments->setItemText(0, QCoreApplication::translate("qSlicerSegmentationsModule", "All", nullptr));
        ComboBox_ExportedSegments->setItemText(1, QCoreApplication::translate("qSlicerSegmentationsModule", "Visible", nullptr));

#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Exported labelmap geometry will match this volume's geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Reference volume:", nullptr));
#if QT_CONFIG(tooltip)
        MRMLNodeComboBox_ExportLabelmapReferenceVolume->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Exported labelmap geometry will match this volume's geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        UseColorTableValuesLabel->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Use color table values:", nullptr));
        UseColorTableValuesCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        ComboBox_TerminologyContext->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Labels of the imported labelmap will be mapped to terminology entries of this context", nullptr));
#endif // QT_CONFIG(tooltip)
        ComboBox_TerminologyContext->setDefaultText(QCoreApplication::translate("qSlicerSegmentationsModule", "Choose terminology...", nullptr));
        label_TerminologyContext->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Terminology context:", nullptr));
        CollapsibleButton_ExportToFiles->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Export to files", nullptr));
        CollapsibleButton_BinaryLabelmapLayers->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Binary labelmap layers", nullptr));
        label_LayerCountText->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Number of layers:", nullptr));
        label_LayerCountValue->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_OverwriteSegmentsText->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Forcing all segments to a single layer will modify overlapping segments. Regions where multiple segments overlap will be assigned to the segment closest to the end of the segment list.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_OverwriteSegmentsText->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Force collapse to single layer:", nullptr));
        label_SegmentCountText->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Number of segments:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_CollapseLayers->setToolTip(QCoreApplication::translate("qSlicerSegmentationsModule", "Minimize the number of layers by moving segments to shared layers to minimize memory usage. Contents of segments are not modified unless there are overlapping segments and collapsing to a single layer is forced.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_CollapseLayers->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "Collapse labelmap layers", nullptr));
        label_SegmentCountValue->setText(QCoreApplication::translate("qSlicerSegmentationsModule", "0", nullptr));
        checkBox_OverwriteSegments->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerSegmentationsModule: public Ui_qSlicerSegmentationsModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSEGMENTATIONSMODULE_H
