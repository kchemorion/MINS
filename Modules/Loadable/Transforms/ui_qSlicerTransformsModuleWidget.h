/********************************************************************************
** Form generated from reading UI file 'qSlicerTransformsModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTRANSFORMSMODULEWIDGET_H
#define UI_QSLICERTRANSFORMSMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkMatrixWidget.h"
#include "qMRMLMatrixWidget.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLTransformDisplayNodeWidget.h"
#include "qMRMLTransformInfoWidget.h"
#include "qMRMLTransformSliders.h"
#include "qMRMLTreeView.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTransformsModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *TransformNodeSelectorLabel;
    qMRMLNodeComboBox *TransformNodeSelector;
    ctkCollapsibleButton *InfoCollapsibleWidget;
    QVBoxLayout *verticalLayout_8;
    qMRMLTransformInfoWidget *TransformInfoWidget;
    ctkCollapsibleButton *DisplayEditCollapsibleWidget;
    QVBoxLayout *verticalLayout_3;
    ctkCollapsibleGroupBox *MatrixViewGroupBox;
    QVBoxLayout *verticalLayout_2;
    qMRMLMatrixWidget *MatrixWidget;
    qMRMLTransformSliders *TranslationSliders;
    qMRMLTransformSliders *RotationSliders;
    QHBoxLayout *horizontalLayout_1;
    QPushButton *IdentityPushButton;
    QPushButton *InvertPushButton;
    QPushButton *SplitPushButton;
    QToolButton *TranslateFirstToolButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *CopyTransformToolButton;
    QToolButton *PasteTransformToolButton;
    ctkCollapsibleButton *DisplayCollapsibleButton;
    QVBoxLayout *verticalLayout_4;
    qMRMLTransformDisplayNodeWidget *TransformDisplayNodeWidget;
    ctkCollapsibleButton *TransformedCollapsibleButton;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *TransformableLabel;
    qMRMLTreeView *TransformableTreeView;
    QVBoxLayout *verticalLayout_5;
    QToolButton *TransformToolButton;
    QToolButton *UntransformToolButton;
    QToolButton *HardenToolButton;
    QVBoxLayout *verticalLayout_7;
    QLabel *TransformedLabel;
    qMRMLTreeView *TransformedTreeView;
    ctkCollapsibleButton *ConvertCollapsibleButton;
    QFormLayout *formLayout_2;
    QLabel *ConvertReferenceVolumeLabel;
    qMRMLNodeComboBox *ConvertReferenceVolumeNodeComboBox;
    QLabel *ConvertOutputDisplacementFieldLabel;
    qMRMLNodeComboBox *ConvertOutputDisplacementFieldNodeComboBox;
    QPushButton *ConvertPushButton;
    QSpacerItem *BottomSpacer;

    void setupUi(qSlicerWidget *qSlicerTransformsModuleWidget)
    {
        if (qSlicerTransformsModuleWidget->objectName().isEmpty())
            qSlicerTransformsModuleWidget->setObjectName(QString::fromUtf8("qSlicerTransformsModuleWidget"));
        qSlicerTransformsModuleWidget->resize(391, 1223);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerTransformsModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerTransformsModuleWidget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Transforms.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerTransformsModuleWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qSlicerTransformsModuleWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        TransformNodeSelectorLabel = new QLabel(qSlicerTransformsModuleWidget);
        TransformNodeSelectorLabel->setObjectName(QString::fromUtf8("TransformNodeSelectorLabel"));

        horizontalLayout_3->addWidget(TransformNodeSelectorLabel);

        TransformNodeSelector = new qMRMLNodeComboBox(qSlicerTransformsModuleWidget);
        TransformNodeSelector->setObjectName(QString::fromUtf8("TransformNodeSelector"));
        TransformNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLLinearTransformNode") << QString::fromUtf8("vtkMRMLBSplineTransformNode") << QString::fromUtf8("vtkMRMLGridTransformNode") << QString::fromUtf8("vtkMRMLTransformNode"));
        TransformNodeSelector->setRenameEnabled(true);

        horizontalLayout_3->addWidget(TransformNodeSelector);


        verticalLayout->addLayout(horizontalLayout_3);

        InfoCollapsibleWidget = new ctkCollapsibleButton(qSlicerTransformsModuleWidget);
        InfoCollapsibleWidget->setObjectName(QString::fromUtf8("InfoCollapsibleWidget"));
        sizePolicy.setHeightForWidth(InfoCollapsibleWidget->sizePolicy().hasHeightForWidth());
        InfoCollapsibleWidget->setSizePolicy(sizePolicy);
        InfoCollapsibleWidget->setChecked(false);
        InfoCollapsibleWidget->setCollapsedHeight(14);
        InfoCollapsibleWidget->setContentsFrameShape(QFrame::NoFrame);
        verticalLayout_8 = new QVBoxLayout(InfoCollapsibleWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        TransformInfoWidget = new qMRMLTransformInfoWidget(InfoCollapsibleWidget);
        TransformInfoWidget->setObjectName(QString::fromUtf8("TransformInfoWidget"));

        verticalLayout_8->addWidget(TransformInfoWidget);


        verticalLayout->addWidget(InfoCollapsibleWidget);

        DisplayEditCollapsibleWidget = new ctkCollapsibleButton(qSlicerTransformsModuleWidget);
        DisplayEditCollapsibleWidget->setObjectName(QString::fromUtf8("DisplayEditCollapsibleWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DisplayEditCollapsibleWidget->sizePolicy().hasHeightForWidth());
        DisplayEditCollapsibleWidget->setSizePolicy(sizePolicy1);
        DisplayEditCollapsibleWidget->setContentsLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(DisplayEditCollapsibleWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        MatrixViewGroupBox = new ctkCollapsibleGroupBox(DisplayEditCollapsibleWidget);
        MatrixViewGroupBox->setObjectName(QString::fromUtf8("MatrixViewGroupBox"));
        MatrixViewGroupBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MatrixViewGroupBox->sizePolicy().hasHeightForWidth());
        MatrixViewGroupBox->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(MatrixViewGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 6, 2, 2);
        MatrixWidget = new qMRMLMatrixWidget(MatrixViewGroupBox);
        MatrixWidget->setObjectName(QString::fromUtf8("MatrixWidget"));
        sizePolicy2.setHeightForWidth(MatrixWidget->sizePolicy().hasHeightForWidth());
        MatrixWidget->setSizePolicy(sizePolicy2);
        MatrixWidget->setMinimumSize(QSize(200, 0));
        MatrixWidget->setEditable(true);
        MatrixWidget->setDecimalsOption(ctkDoubleSpinBox::DecimalsByShortcuts);

        verticalLayout_2->addWidget(MatrixWidget);


        verticalLayout_3->addWidget(MatrixViewGroupBox);

        TranslationSliders = new qMRMLTransformSliders(DisplayEditCollapsibleWidget);
        TranslationSliders->setObjectName(QString::fromUtf8("TranslationSliders"));
        sizePolicy2.setHeightForWidth(TranslationSliders->sizePolicy().hasHeightForWidth());
        TranslationSliders->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(TranslationSliders);

        RotationSliders = new qMRMLTransformSliders(DisplayEditCollapsibleWidget);
        RotationSliders->setObjectName(QString::fromUtf8("RotationSliders"));
        RotationSliders->setTypeOfTransform(qMRMLTransformSliders::ROTATION);
        RotationSliders->setMinMaxVisible(false);

        verticalLayout_3->addWidget(RotationSliders);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(2);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        IdentityPushButton = new QPushButton(DisplayEditCollapsibleWidget);
        IdentityPushButton->setObjectName(QString::fromUtf8("IdentityPushButton"));
        IdentityPushButton->setEnabled(false);

        horizontalLayout_1->addWidget(IdentityPushButton);

        InvertPushButton = new QPushButton(DisplayEditCollapsibleWidget);
        InvertPushButton->setObjectName(QString::fromUtf8("InvertPushButton"));
        InvertPushButton->setEnabled(false);

        horizontalLayout_1->addWidget(InvertPushButton);

        SplitPushButton = new QPushButton(DisplayEditCollapsibleWidget);
        SplitPushButton->setObjectName(QString::fromUtf8("SplitPushButton"));
        SplitPushButton->setEnabled(true);

        horizontalLayout_1->addWidget(SplitPushButton);

        TranslateFirstToolButton = new QToolButton(DisplayEditCollapsibleWidget);
        TranslateFirstToolButton->setObjectName(QString::fromUtf8("TranslateFirstToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/TranslateFirst.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Icons/RotateFirst.png"), QSize(), QIcon::Normal, QIcon::On);
        TranslateFirstToolButton->setIcon(icon1);
        TranslateFirstToolButton->setIconSize(QSize(32, 16));
        TranslateFirstToolButton->setCheckable(true);

        horizontalLayout_1->addWidget(TranslateFirstToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        CopyTransformToolButton = new QToolButton(DisplayEditCollapsibleWidget);
        CopyTransformToolButton->setObjectName(QString::fromUtf8("CopyTransformToolButton"));
        CopyTransformToolButton->setEnabled(true);

        horizontalLayout_1->addWidget(CopyTransformToolButton);

        PasteTransformToolButton = new QToolButton(DisplayEditCollapsibleWidget);
        PasteTransformToolButton->setObjectName(QString::fromUtf8("PasteTransformToolButton"));
        PasteTransformToolButton->setEnabled(true);

        horizontalLayout_1->addWidget(PasteTransformToolButton);


        verticalLayout_3->addLayout(horizontalLayout_1);


        verticalLayout->addWidget(DisplayEditCollapsibleWidget);

        DisplayCollapsibleButton = new ctkCollapsibleButton(qSlicerTransformsModuleWidget);
        DisplayCollapsibleButton->setObjectName(QString::fromUtf8("DisplayCollapsibleButton"));
        sizePolicy1.setHeightForWidth(DisplayCollapsibleButton->sizePolicy().hasHeightForWidth());
        DisplayCollapsibleButton->setSizePolicy(sizePolicy1);
        DisplayCollapsibleButton->setChecked(true);
        DisplayCollapsibleButton->setCollapsed(false);
        verticalLayout_4 = new QVBoxLayout(DisplayCollapsibleButton);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        TransformDisplayNodeWidget = new qMRMLTransformDisplayNodeWidget(DisplayCollapsibleButton);
        TransformDisplayNodeWidget->setObjectName(QString::fromUtf8("TransformDisplayNodeWidget"));

        verticalLayout_4->addWidget(TransformDisplayNodeWidget);


        verticalLayout->addWidget(DisplayCollapsibleButton);

        TransformedCollapsibleButton = new ctkCollapsibleButton(qSlicerTransformsModuleWidget);
        TransformedCollapsibleButton->setObjectName(QString::fromUtf8("TransformedCollapsibleButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TransformedCollapsibleButton->sizePolicy().hasHeightForWidth());
        TransformedCollapsibleButton->setSizePolicy(sizePolicy3);
        TransformedCollapsibleButton->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(TransformedCollapsibleButton);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        TransformableLabel = new QLabel(TransformedCollapsibleButton);
        TransformableLabel->setObjectName(QString::fromUtf8("TransformableLabel"));

        verticalLayout_6->addWidget(TransformableLabel);

        TransformableTreeView = new qMRMLTreeView(TransformedCollapsibleButton);
        TransformableTreeView->setObjectName(QString::fromUtf8("TransformableTreeView"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TransformableTreeView->sizePolicy().hasHeightForWidth());
        TransformableTreeView->setSizePolicy(sizePolicy4);
        TransformableTreeView->setMinimumSize(QSize(160, 0));
        TransformableTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TransformableTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        TransformableTreeView->setHeaderHidden(true);
        TransformableTreeView->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTransformableNode"));
        TransformableTreeView->setFitSizeToVisibleIndexes(false);

        verticalLayout_6->addWidget(TransformableTreeView);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TransformToolButton = new QToolButton(TransformedCollapsibleButton);
        TransformToolButton->setObjectName(QString::fromUtf8("TransformToolButton"));

        verticalLayout_5->addWidget(TransformToolButton);

        UntransformToolButton = new QToolButton(TransformedCollapsibleButton);
        UntransformToolButton->setObjectName(QString::fromUtf8("UntransformToolButton"));

        verticalLayout_5->addWidget(UntransformToolButton);

        HardenToolButton = new QToolButton(TransformedCollapsibleButton);
        HardenToolButton->setObjectName(QString::fromUtf8("HardenToolButton"));
        HardenToolButton->setIcon(icon);

        verticalLayout_5->addWidget(HardenToolButton);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        TransformedLabel = new QLabel(TransformedCollapsibleButton);
        TransformedLabel->setObjectName(QString::fromUtf8("TransformedLabel"));

        verticalLayout_7->addWidget(TransformedLabel);

        TransformedTreeView = new qMRMLTreeView(TransformedCollapsibleButton);
        TransformedTreeView->setObjectName(QString::fromUtf8("TransformedTreeView"));
        sizePolicy4.setHeightForWidth(TransformedTreeView->sizePolicy().hasHeightForWidth());
        TransformedTreeView->setSizePolicy(sizePolicy4);
        TransformedTreeView->setMinimumSize(QSize(160, 0));
        TransformedTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TransformedTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        TransformedTreeView->setHeaderHidden(true);
        TransformedTreeView->setFitSizeToVisibleIndexes(false);

        verticalLayout_7->addWidget(TransformedTreeView);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout->addWidget(TransformedCollapsibleButton);

        ConvertCollapsibleButton = new ctkCollapsibleButton(qSlicerTransformsModuleWidget);
        ConvertCollapsibleButton->setObjectName(QString::fromUtf8("ConvertCollapsibleButton"));
        ConvertCollapsibleButton->setChecked(false);
        ConvertCollapsibleButton->setContentsFrameShape(QFrame::StyledPanel);
        formLayout_2 = new QFormLayout(ConvertCollapsibleButton);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ConvertReferenceVolumeLabel = new QLabel(ConvertCollapsibleButton);
        ConvertReferenceVolumeLabel->setObjectName(QString::fromUtf8("ConvertReferenceVolumeLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ConvertReferenceVolumeLabel);

        ConvertReferenceVolumeNodeComboBox = new qMRMLNodeComboBox(ConvertCollapsibleButton);
        ConvertReferenceVolumeNodeComboBox->setObjectName(QString::fromUtf8("ConvertReferenceVolumeNodeComboBox"));
        ConvertReferenceVolumeNodeComboBox->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(9);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(ConvertReferenceVolumeNodeComboBox->sizePolicy().hasHeightForWidth());
        ConvertReferenceVolumeNodeComboBox->setSizePolicy(sizePolicy5);
        ConvertReferenceVolumeNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLVolumeNode"));
        ConvertReferenceVolumeNodeComboBox->setNoneEnabled(false);
        ConvertReferenceVolumeNodeComboBox->setAddEnabled(false);
        ConvertReferenceVolumeNodeComboBox->setRemoveEnabled(true);
        ConvertReferenceVolumeNodeComboBox->setEditEnabled(false);
        ConvertReferenceVolumeNodeComboBox->setRenameEnabled(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ConvertReferenceVolumeNodeComboBox);

        ConvertOutputDisplacementFieldLabel = new QLabel(ConvertCollapsibleButton);
        ConvertOutputDisplacementFieldLabel->setObjectName(QString::fromUtf8("ConvertOutputDisplacementFieldLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ConvertOutputDisplacementFieldLabel);

        ConvertOutputDisplacementFieldNodeComboBox = new qMRMLNodeComboBox(ConvertCollapsibleButton);
        ConvertOutputDisplacementFieldNodeComboBox->setObjectName(QString::fromUtf8("ConvertOutputDisplacementFieldNodeComboBox"));
        ConvertOutputDisplacementFieldNodeComboBox->setEnabled(true);
        sizePolicy5.setHeightForWidth(ConvertOutputDisplacementFieldNodeComboBox->sizePolicy().hasHeightForWidth());
        ConvertOutputDisplacementFieldNodeComboBox->setSizePolicy(sizePolicy5);
        ConvertOutputDisplacementFieldNodeComboBox->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTransformNode") << QString::fromUtf8("vtkMRMLScalarVolumeNode") << QString::fromUtf8("vtkMRMLVectorVolumeNode"));
        ConvertOutputDisplacementFieldNodeComboBox->setShowChildNodeTypes(false);
        ConvertOutputDisplacementFieldNodeComboBox->setNoneEnabled(true);
        ConvertOutputDisplacementFieldNodeComboBox->setAddEnabled(true);
        ConvertOutputDisplacementFieldNodeComboBox->setRemoveEnabled(true);
        ConvertOutputDisplacementFieldNodeComboBox->setEditEnabled(false);
        ConvertOutputDisplacementFieldNodeComboBox->setRenameEnabled(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ConvertOutputDisplacementFieldNodeComboBox);

        ConvertPushButton = new QPushButton(ConvertCollapsibleButton);
        ConvertPushButton->setObjectName(QString::fromUtf8("ConvertPushButton"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, ConvertPushButton);


        verticalLayout->addWidget(ConvertCollapsibleButton);

        BottomSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(BottomSpacer);


        retranslateUi(qSlicerTransformsModuleWidget);
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformableTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformedTreeView, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), TranslationSliders, SLOT(setMRMLTransformNode(vtkMRMLNode*)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), RotationSliders, SLOT(setMRMLTransformNode(vtkMRMLNode*)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), MatrixWidget, SLOT(setMRMLTransformNode(vtkMRMLNode*)));
        QObject::connect(TranslationSliders, SIGNAL(valuesChanged()), RotationSliders, SLOT(resetUnactiveSliders()));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), InvertPushButton, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), TransformToolButton, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), UntransformToolButton, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), HardenToolButton, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), TransformableTreeView, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), TransformedTreeView, SLOT(setEnabled(bool)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), TransformDisplayNodeWidget, SLOT(setMRMLTransformNode(vtkMRMLNode*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformDisplayNodeWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), TransformInfoWidget, SLOT(setMRMLTransformNode(vtkMRMLNode*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TranslationSliders, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TransformInfoWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ConvertOutputDisplacementFieldNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerTransformsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), ConvertReferenceVolumeNodeComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(TransformNodeSelector, SIGNAL(currentNodeChanged(bool)), ConvertCollapsibleButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(qSlicerTransformsModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerTransformsModuleWidget)
    {
        qSlicerTransformsModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Transforms", nullptr));
        TransformNodeSelectorLabel->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Active Transform:", nullptr));
        InfoCollapsibleWidget->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Information", nullptr));
        DisplayEditCollapsibleWidget->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Edit", nullptr));
        MatrixViewGroupBox->setTitle(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Transform Matrix", nullptr));
        RotationSliders->setTitle(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Rotation", nullptr));
        IdentityPushButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Identity", nullptr));
        InvertPushButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Invert", nullptr));
#if QT_CONFIG(tooltip)
        SplitPushButton->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Split a composite transform to its components", nullptr));
#endif // QT_CONFIG(tooltip)
        SplitPushButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Split", nullptr));
#if QT_CONFIG(tooltip)
        TranslateFirstToolButton->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Translation in global or local (rotated) reference frame", nullptr));
#endif // QT_CONFIG(tooltip)
        TranslateFirstToolButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "...", nullptr));
        CopyTransformToolButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Copy transform", nullptr));
        PasteTransformToolButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Paste transform", nullptr));
        DisplayCollapsibleButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Display", nullptr));
        TransformedCollapsibleButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Apply transform", nullptr));
        TransformableLabel->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Transformable:", nullptr));
#if QT_CONFIG(tooltip)
        TransformToolButton->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Apply the active transform to the selected transformable nodes", nullptr));
#endif // QT_CONFIG(tooltip)
        TransformToolButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", ">", nullptr));
#if QT_CONFIG(tooltip)
        UntransformToolButton->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Remove the active transform from the selected transformed nodes", nullptr));
#endif // QT_CONFIG(tooltip)
        UntransformToolButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "<", nullptr));
#if QT_CONFIG(tooltip)
        HardenToolButton->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Harden transform", nullptr));
#endif // QT_CONFIG(tooltip)
        HardenToolButton->setText(QString());
        TransformedLabel->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Transformed:", nullptr));
        ConvertCollapsibleButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Convert", nullptr));
        ConvertReferenceVolumeLabel->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Reference volume:", nullptr));
#if QT_CONFIG(tooltip)
        ConvertReferenceVolumeNodeComboBox->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Volume that defines origin, spacing, and axis directions of the exported displacement field. If the reference volume is under a non-linear transform then the non-transformed geometry is used as reference.", nullptr));
#endif // QT_CONFIG(tooltip)
        ConvertReferenceVolumeNodeComboBox->setBaseName(QString());
        ConvertOutputDisplacementFieldLabel->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Output displacement field:", nullptr));
#if QT_CONFIG(tooltip)
        ConvertOutputDisplacementFieldNodeComboBox->setToolTip(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Volume or transform node that will store the displacement field. If scalar volume node is chosen then only displacement magnitude is saved. In vector volume or transform node 3D displacement vector is saved.", nullptr));
#endif // QT_CONFIG(tooltip)
        ConvertOutputDisplacementFieldNodeComboBox->setBaseName(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Displacement Field", nullptr));
        ConvertPushButton->setText(QCoreApplication::translate("qSlicerTransformsModuleWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerTransformsModuleWidget: public Ui_qSlicerTransformsModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTRANSFORMSMODULEWIDGET_H
