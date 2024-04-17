/********************************************************************************
** Form generated from reading UI file 'qSlicerTextsModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTEXTSMODULEWIDGET_H
#define UI_QSLICERTEXTSMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "qMRMLCollapsibleButton.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLTextWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTextsModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *TextLayout;
    QLabel *TextNodeLabel;
    qMRMLNodeComboBox *TextNodeSelector;
    qMRMLCollapsibleButton *ContentsCollapsibleButton;
    QVBoxLayout *verticalLayout_2;
    qMRMLTextWidget *TextWidget;
    ctkCollapsibleButton *CollapsibleButton;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *AutoSaveCheckBox;
    QCheckBox *WordWrapCheckBox;
    QSpacerItem *BottomSpacer;

    void setupUi(qSlicerWidget *qSlicerTextsModuleWidget)
    {
        if (qSlicerTextsModuleWidget->objectName().isEmpty())
            qSlicerTextsModuleWidget->setObjectName(QString::fromUtf8("qSlicerTextsModuleWidget"));
        qSlicerTextsModuleWidget->resize(197, 134);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerTextsModuleWidget->sizePolicy().hasHeightForWidth());
        qSlicerTextsModuleWidget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/SlicerTexts.png"), QSize(), QIcon::Normal, QIcon::Off);
        qSlicerTextsModuleWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qSlicerTextsModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TextLayout = new QFormLayout();
        TextLayout->setObjectName(QString::fromUtf8("TextLayout"));
        TextNodeLabel = new QLabel(qSlicerTextsModuleWidget);
        TextNodeLabel->setObjectName(QString::fromUtf8("TextNodeLabel"));

        TextLayout->setWidget(1, QFormLayout::LabelRole, TextNodeLabel);

        TextNodeSelector = new qMRMLNodeComboBox(qSlicerTextsModuleWidget);
        TextNodeSelector->setObjectName(QString::fromUtf8("TextNodeSelector"));
        TextNodeSelector->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLTextNode"));
        TextNodeSelector->setNoneEnabled(false);
        TextNodeSelector->setRenameEnabled(true);

        TextLayout->setWidget(1, QFormLayout::FieldRole, TextNodeSelector);


        verticalLayout->addLayout(TextLayout);

        ContentsCollapsibleButton = new qMRMLCollapsibleButton(qSlicerTextsModuleWidget);
        ContentsCollapsibleButton->setObjectName(QString::fromUtf8("ContentsCollapsibleButton"));
        sizePolicy.setHeightForWidth(ContentsCollapsibleButton->sizePolicy().hasHeightForWidth());
        ContentsCollapsibleButton->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ContentsCollapsibleButton);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TextWidget = new qMRMLTextWidget(ContentsCollapsibleButton);
        TextWidget->setObjectName(QString::fromUtf8("TextWidget"));
        TextWidget->setProperty("autoSave", QVariant(false));

        verticalLayout_2->addWidget(TextWidget);


        verticalLayout->addWidget(ContentsCollapsibleButton);

        CollapsibleButton = new ctkCollapsibleButton(qSlicerTextsModuleWidget);
        CollapsibleButton->setObjectName(QString::fromUtf8("CollapsibleButton"));
        CollapsibleButton->setCollapsed(true);
        verticalLayout_3 = new QVBoxLayout(CollapsibleButton);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        AutoSaveCheckBox = new QCheckBox(CollapsibleButton);
        AutoSaveCheckBox->setObjectName(QString::fromUtf8("AutoSaveCheckBox"));

        verticalLayout_3->addWidget(AutoSaveCheckBox);

        WordWrapCheckBox = new QCheckBox(CollapsibleButton);
        WordWrapCheckBox->setObjectName(QString::fromUtf8("WordWrapCheckBox"));
        WordWrapCheckBox->setChecked(true);

        verticalLayout_3->addWidget(WordWrapCheckBox);


        verticalLayout->addWidget(CollapsibleButton);

        BottomSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(BottomSpacer);


        retranslateUi(qSlicerTextsModuleWidget);
        QObject::connect(qSlicerTextsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TextNodeSelector, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(TextNodeSelector, SIGNAL(currentNodeChanged(vtkMRMLNode*)), TextWidget, SLOT(setMRMLNode(vtkMRMLNode*)));
        QObject::connect(qSlicerTextsModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), TextWidget, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(AutoSaveCheckBox, SIGNAL(toggled(bool)), TextWidget, SLOT(setAutoSave(bool)));
        QObject::connect(TextWidget, SIGNAL(autoSaveChanged(bool)), AutoSaveCheckBox, SLOT(setChecked(bool)));
        QObject::connect(TextWidget, SIGNAL(editingChanged(bool)), AutoSaveCheckBox, SLOT(setDisabled(bool)));
        QObject::connect(WordWrapCheckBox, SIGNAL(toggled(bool)), TextWidget, SLOT(setWordWrap(bool)));

        QMetaObject::connectSlotsByName(qSlicerTextsModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerTextsModuleWidget)
    {
        qSlicerTextsModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerTextsModuleWidget", "Texts", nullptr));
        TextNodeLabel->setText(QCoreApplication::translate("qSlicerTextsModuleWidget", "Text node:", nullptr));
        ContentsCollapsibleButton->setText(QCoreApplication::translate("qSlicerTextsModuleWidget", "Contents", nullptr));
        CollapsibleButton->setText(QCoreApplication::translate("qSlicerTextsModuleWidget", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        AutoSaveCheckBox->setToolTip(QCoreApplication::translate("qSlicerTextsModuleWidget", "<html><head/><body><p>If checked, the text node is immediately updated as the contents are edited. If unchecked, text node is updated only when &quot;Save&quot; is clicked.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoSaveCheckBox->setText(QCoreApplication::translate("qSlicerTextsModuleWidget", "Auto-save edits to the text node", nullptr));
        WordWrapCheckBox->setText(QCoreApplication::translate("qSlicerTextsModuleWidget", "Enable word wrapping", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerTextsModuleWidget: public Ui_qSlicerTextsModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTEXTSMODULEWIDGET_H
