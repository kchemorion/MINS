/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentEditorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTEDITORWIDGET_H
#define UI_QMRMLSEGMENTEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCheckBox.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkExpandableWidget.h"
#include "ctkFittedTextBrowser.h"
#include "ctkMenuButton.h"
#include "ctkRangeWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSegmentationShow3DButton.h"
#include "qMRMLSegmentsTableView.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentEditorWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *NodeSelectorLayout;
    QLabel *SourceVolumeNodeLabel;
    qMRMLNodeComboBox *SourceVolumeNodeComboBox;
    QLabel *SegmentationNodeLabel;
    QToolButton *SpecifyGeometryButton;
    QHBoxLayout *SegmentationNodeSelectorLayout;
    qMRMLNodeComboBox *SegmentationNodeComboBox;
    QToolButton *SliceRotateWarningButton;
    QHBoxLayout *SegmentActionsLayout;
    QPushButton *AddSegmentButton;
    QPushButton *RemoveSegmentButton;
    qMRMLSegmentationShow3DButton *Show3DButton;
    QToolButton *SwitchToSegmentationsButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QFrame *EffectsGroupBox;
    QFrame *UndoRedoGroupBox;
    QGridLayout *UndoRedoLayout;
    QToolButton *UndoButton;
    QToolButton *RedoButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    ctkExpandableWidget *SegmentsTableResizableFrame;
    QVBoxLayout *verticalLayout_2;
    qMRMLSegmentsTableView *SegmentsTableView;
    QGroupBox *OptionsGroupBox;
    QVBoxLayout *verticalLayout_4;
    ctkFittedTextBrowser *EffectHelpBrowser;
    QFrame *EffectsOptionsFrame;
    ctkCollapsibleGroupBox *MaskingGroupBox;
    QFormLayout *formLayout;
    QLabel *MaskModeLabel;
    QComboBox *MaskModeComboBox;
    QLabel *SourceVolumeIntensityMaskRangeLabel;
    ctkCheckBox *SourceVolumeIntensityMaskCheckBox;
    ctkRangeWidget *SourceVolumeIntensityMaskRangeWidget;
    QLabel *OverwriteModeLabel;
    QComboBox *OverwriteModeComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(qMRMLWidget *qMRMLSegmentEditorWidget)
    {
        if (qMRMLSegmentEditorWidget->objectName().isEmpty())
            qMRMLSegmentEditorWidget->setObjectName(QString::fromUtf8("qMRMLSegmentEditorWidget"));
        qMRMLSegmentEditorWidget->resize(413, 579);
        gridLayout_2 = new QGridLayout(qMRMLSegmentEditorWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        NodeSelectorLayout = new QGridLayout();
        NodeSelectorLayout->setObjectName(QString::fromUtf8("NodeSelectorLayout"));
        SourceVolumeNodeLabel = new QLabel(qMRMLSegmentEditorWidget);
        SourceVolumeNodeLabel->setObjectName(QString::fromUtf8("SourceVolumeNodeLabel"));

        NodeSelectorLayout->addWidget(SourceVolumeNodeLabel, 1, 0, 1, 1);

        SourceVolumeNodeComboBox = new qMRMLNodeComboBox(qMRMLSegmentEditorWidget);
        SourceVolumeNodeComboBox->setObjectName(QString::fromUtf8("SourceVolumeNodeComboBox"));
        SourceVolumeNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode"));
        SourceVolumeNodeComboBox->setHideChildNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSegmentationNode"));
        SourceVolumeNodeComboBox->setNoneEnabled(true);
        SourceVolumeNodeComboBox->setAddEnabled(false);
        SourceVolumeNodeComboBox->setRenameEnabled(true);

        NodeSelectorLayout->addWidget(SourceVolumeNodeComboBox, 1, 1, 1, 1);

        SegmentationNodeLabel = new QLabel(qMRMLSegmentEditorWidget);
        SegmentationNodeLabel->setObjectName(QString::fromUtf8("SegmentationNodeLabel"));

        NodeSelectorLayout->addWidget(SegmentationNodeLabel, 0, 0, 1, 1);

        SpecifyGeometryButton = new QToolButton(qMRMLSegmentEditorWidget);
        SpecifyGeometryButton->setObjectName(QString::fromUtf8("SpecifyGeometryButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SegmentGeometry.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpecifyGeometryButton->setIcon(icon);

        NodeSelectorLayout->addWidget(SpecifyGeometryButton, 1, 2, 1, 1);

        SegmentationNodeSelectorLayout = new QHBoxLayout();
        SegmentationNodeSelectorLayout->setObjectName(QString::fromUtf8("SegmentationNodeSelectorLayout"));
        SegmentationNodeComboBox = new qMRMLNodeComboBox(qMRMLSegmentEditorWidget);
        SegmentationNodeComboBox->setObjectName(QString::fromUtf8("SegmentationNodeComboBox"));
        SegmentationNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSegmentationNode"));
        SegmentationNodeComboBox->setRenameEnabled(true);

        SegmentationNodeSelectorLayout->addWidget(SegmentationNodeComboBox);

        SliceRotateWarningButton = new QToolButton(qMRMLSegmentEditorWidget);
        SliceRotateWarningButton->setObjectName(QString::fromUtf8("SliceRotateWarningButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/SlicerRotateWarning.png"), QSize(), QIcon::Normal, QIcon::Off);
        SliceRotateWarningButton->setIcon(icon1);

        SegmentationNodeSelectorLayout->addWidget(SliceRotateWarningButton);


        NodeSelectorLayout->addLayout(SegmentationNodeSelectorLayout, 0, 1, 1, 2);


        gridLayout_2->addLayout(NodeSelectorLayout, 0, 0, 1, 1);

        SegmentActionsLayout = new QHBoxLayout();
        SegmentActionsLayout->setSpacing(4);
        SegmentActionsLayout->setObjectName(QString::fromUtf8("SegmentActionsLayout"));
        AddSegmentButton = new QPushButton(qMRMLSegmentEditorWidget);
        AddSegmentButton->setObjectName(QString::fromUtf8("AddSegmentButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddSegmentButton->setIcon(icon2);

        SegmentActionsLayout->addWidget(AddSegmentButton);

        RemoveSegmentButton = new QPushButton(qMRMLSegmentEditorWidget);
        RemoveSegmentButton->setObjectName(QString::fromUtf8("RemoveSegmentButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveSegmentButton->setIcon(icon3);

        SegmentActionsLayout->addWidget(RemoveSegmentButton);

        Show3DButton = new qMRMLSegmentationShow3DButton(qMRMLSegmentEditorWidget);
        Show3DButton->setObjectName(QString::fromUtf8("Show3DButton"));

        SegmentActionsLayout->addWidget(Show3DButton);

        SwitchToSegmentationsButton = new QToolButton(qMRMLSegmentEditorWidget);
        SwitchToSegmentationsButton->setObjectName(QString::fromUtf8("SwitchToSegmentationsButton"));
        SwitchToSegmentationsButton->setPopupMode(QToolButton::MenuButtonPopup);

        SegmentActionsLayout->addWidget(SwitchToSegmentationsButton);


        gridLayout_2->addLayout(SegmentActionsLayout, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EffectsGroupBox = new QFrame(qMRMLSegmentEditorWidget);
        EffectsGroupBox->setObjectName(QString::fromUtf8("EffectsGroupBox"));
        EffectsGroupBox->setFrameShape(QFrame::StyledPanel);
        EffectsGroupBox->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(EffectsGroupBox);

        UndoRedoGroupBox = new QFrame(qMRMLSegmentEditorWidget);
        UndoRedoGroupBox->setObjectName(QString::fromUtf8("UndoRedoGroupBox"));
        UndoRedoGroupBox->setFrameShape(QFrame::StyledPanel);
        UndoRedoGroupBox->setFrameShadow(QFrame::Raised);
        UndoRedoLayout = new QGridLayout(UndoRedoGroupBox);
        UndoRedoLayout->setObjectName(QString::fromUtf8("UndoRedoLayout"));
        UndoButton = new QToolButton(UndoRedoGroupBox);
        UndoButton->setObjectName(QString::fromUtf8("UndoButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UndoButton->sizePolicy().hasHeightForWidth());
        UndoButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Medium/SlicerUndo.png"), QSize(), QIcon::Normal, QIcon::Off);
        UndoButton->setIcon(icon4);

        UndoRedoLayout->addWidget(UndoButton, 0, 0, 1, 1);

        RedoButton = new QToolButton(UndoRedoGroupBox);
        RedoButton->setObjectName(QString::fromUtf8("RedoButton"));
        sizePolicy.setHeightForWidth(RedoButton->sizePolicy().hasHeightForWidth());
        RedoButton->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/Medium/SlicerRedo.png"), QSize(), QIcon::Normal, QIcon::Off);
        RedoButton->setIcon(icon5);

        UndoRedoLayout->addWidget(RedoButton, 0, 1, 1, 1);


        verticalLayout_3->addWidget(UndoRedoGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SegmentsTableResizableFrame = new ctkExpandableWidget(qMRMLSegmentEditorWidget);
        SegmentsTableResizableFrame->setObjectName(QString::fromUtf8("SegmentsTableResizableFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SegmentsTableResizableFrame->sizePolicy().hasHeightForWidth());
        SegmentsTableResizableFrame->setSizePolicy(sizePolicy1);
        SegmentsTableResizableFrame->setOrientations(Qt::Vertical);
        SegmentsTableResizableFrame->setSizeGripInside(false);
        SegmentsTableResizableFrame->setProperty("childrenCollapsible", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(SegmentsTableResizableFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SegmentsTableView = new qMRMLSegmentsTableView(SegmentsTableResizableFrame);
        SegmentsTableView->setObjectName(QString::fromUtf8("SegmentsTableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SegmentsTableView->sizePolicy().hasHeightForWidth());
        SegmentsTableView->setSizePolicy(sizePolicy2);
        SegmentsTableView->setOpacityColumnVisible(false);

        verticalLayout_2->addWidget(SegmentsTableView);


        verticalLayout->addWidget(SegmentsTableResizableFrame);

        OptionsGroupBox = new QGroupBox(qMRMLSegmentEditorWidget);
        OptionsGroupBox->setObjectName(QString::fromUtf8("OptionsGroupBox"));
        verticalLayout_4 = new QVBoxLayout(OptionsGroupBox);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        EffectHelpBrowser = new ctkFittedTextBrowser(OptionsGroupBox);
        EffectHelpBrowser->setObjectName(QString::fromUtf8("EffectHelpBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(EffectHelpBrowser->sizePolicy().hasHeightForWidth());
        EffectHelpBrowser->setSizePolicy(sizePolicy3);
        EffectHelpBrowser->setFrameShape(QFrame::NoFrame);
        EffectHelpBrowser->setFrameShadow(QFrame::Plain);
        EffectHelpBrowser->setOpenExternalLinks(true);
        EffectHelpBrowser->setOpenLinks(true);

        verticalLayout_4->addWidget(EffectHelpBrowser);

        EffectsOptionsFrame = new QFrame(OptionsGroupBox);
        EffectsOptionsFrame->setObjectName(QString::fromUtf8("EffectsOptionsFrame"));

        verticalLayout_4->addWidget(EffectsOptionsFrame);


        verticalLayout->addWidget(OptionsGroupBox);

        MaskingGroupBox = new ctkCollapsibleGroupBox(qMRMLSegmentEditorWidget);
        MaskingGroupBox->setObjectName(QString::fromUtf8("MaskingGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(MaskingGroupBox->sizePolicy().hasHeightForWidth());
        MaskingGroupBox->setSizePolicy(sizePolicy4);
        formLayout = new QFormLayout(MaskingGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(4, 4, 4, 4);
        MaskModeLabel = new QLabel(MaskingGroupBox);
        MaskModeLabel->setObjectName(QString::fromUtf8("MaskModeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, MaskModeLabel);

        MaskModeComboBox = new QComboBox(MaskingGroupBox);
        MaskModeComboBox->setObjectName(QString::fromUtf8("MaskModeComboBox"));
        MaskModeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        formLayout->setWidget(0, QFormLayout::FieldRole, MaskModeComboBox);

        SourceVolumeIntensityMaskRangeLabel = new QLabel(MaskingGroupBox);
        SourceVolumeIntensityMaskRangeLabel->setObjectName(QString::fromUtf8("SourceVolumeIntensityMaskRangeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, SourceVolumeIntensityMaskRangeLabel);

        SourceVolumeIntensityMaskCheckBox = new ctkCheckBox(MaskingGroupBox);
        SourceVolumeIntensityMaskCheckBox->setObjectName(QString::fromUtf8("SourceVolumeIntensityMaskCheckBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, SourceVolumeIntensityMaskCheckBox);

        SourceVolumeIntensityMaskRangeWidget = new ctkRangeWidget(MaskingGroupBox);
        SourceVolumeIntensityMaskRangeWidget->setObjectName(QString::fromUtf8("SourceVolumeIntensityMaskRangeWidget"));
        SourceVolumeIntensityMaskRangeWidget->setSingleStep(0.010000000000000);

        formLayout->setWidget(2, QFormLayout::SpanningRole, SourceVolumeIntensityMaskRangeWidget);

        OverwriteModeLabel = new QLabel(MaskingGroupBox);
        OverwriteModeLabel->setObjectName(QString::fromUtf8("OverwriteModeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, OverwriteModeLabel);

        OverwriteModeComboBox = new QComboBox(MaskingGroupBox);
        OverwriteModeComboBox->setObjectName(QString::fromUtf8("OverwriteModeComboBox"));
        OverwriteModeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(4, QFormLayout::FieldRole, OverwriteModeComboBox);


        verticalLayout->addWidget(MaskingGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(qMRMLSegmentEditorWidget);
        QObject::connect(qMRMLSegmentEditorWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SegmentationNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qMRMLSegmentEditorWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), SourceVolumeNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLSegmentEditorWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSegmentEditorWidget)
    {
        qMRMLSegmentEditorWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentEditorWidget", "qMRMLSegmentEditorWidget", nullptr));
        SourceVolumeNodeLabel->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Source volume:", nullptr));
        SourceVolumeNodeComboBox->setNoneDisplay(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Select source volume to enable editing", nullptr));
        SegmentationNodeLabel->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Segmentation:", nullptr));
#if QT_CONFIG(tooltip)
        SpecifyGeometryButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Specify geometry (grid origin, spacing, axis directions, and default extent) of the edited labelmap representation", nullptr));
#endif // QT_CONFIG(tooltip)
        SpecifyGeometryButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Specify geometry of the edited labelmap representation", nullptr));
#if QT_CONFIG(tooltip)
        SliceRotateWarningButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Slice views orientation are not aligned with segmentation. Striping artifacts may appear. Click to align slice views to segmentation.", nullptr));
#endif // QT_CONFIG(tooltip)
        SliceRotateWarningButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Slice rotated", nullptr));
#if QT_CONFIG(tooltip)
        AddSegmentButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Add new empty segment", nullptr));
#endif // QT_CONFIG(tooltip)
        AddSegmentButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        RemoveSegmentButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Remove selected segment(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveSegmentButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        SwitchToSegmentationsButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Go to Segmentations module", nullptr));
#endif // QT_CONFIG(tooltip)
        SwitchToSegmentationsButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Segmentations", nullptr));
#if QT_CONFIG(tooltip)
        UndoButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Undo last editing operation", nullptr));
#endif // QT_CONFIG(tooltip)
        UndoButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        RedoButton->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Redo last editing operation", nullptr));
#endif // QT_CONFIG(tooltip)
        RedoButton->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Redo", nullptr));
        SegmentsTableResizableFrame->setWindowTitle(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Segments Table", nullptr));
        OptionsGroupBox->setTitle(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Options", nullptr));
        EffectHelpBrowser->setShowDetailsText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Show details.", nullptr));
        MaskingGroupBox->setTitle(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Masking", nullptr));
        MaskModeLabel->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Editable area:", nullptr));
        SourceVolumeIntensityMaskRangeLabel->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Editable intensity range:", nullptr));
#if QT_CONFIG(tooltip)
        SourceVolumeIntensityMaskCheckBox->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Only those regions are allowed to be changed where the source volume intensity is in the specified range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        OverwriteModeLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        OverwriteModeLabel->setText(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Modify other segments:", nullptr));
#if QT_CONFIG(tooltip)
        OverwriteModeComboBox->setToolTip(QCoreApplication::translate("qMRMLSegmentEditorWidget", "Controls which segments the current segment will overwrite. Segments that are not overwritten may overlap with the selected segment.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentEditorWidget: public Ui_qMRMLSegmentEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTEDITORWIDGET_H
