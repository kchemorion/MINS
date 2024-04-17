/********************************************************************************
** Form generated from reading UI file 'qSlicerModuleFinderDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMODULEFINDERDIALOG_H
#define UI_QSLICERMODULEFINDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include "ctkSearchBox.h"
#include "qSlicerModulesListView.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerModuleFinderDialog
{
public:
    QGridLayout *gridLayout;
    qSlicerModulesListView *ModuleListView;
    QDialogButtonBox *ButtonBox;
    QTextBrowser *ModuleDescriptionBrowser;
    QHBoxLayout *horizontalLayout_2;
    ctkSearchBox *FilterTitleSearchBox;
    QCheckBox *SearchInAllTextCheckBox;
    QCheckBox *ShowBuiltInCheckBox;
    QCheckBox *ShowTestingCheckBox;

    void setupUi(QDialog *qSlicerModuleFinderDialog)
    {
        if (qSlicerModuleFinderDialog->objectName().isEmpty())
            qSlicerModuleFinderDialog->setObjectName(QString::fromUtf8("qSlicerModuleFinderDialog"));
        qSlicerModuleFinderDialog->resize(674, 413);
        gridLayout = new QGridLayout(qSlicerModuleFinderDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ModuleListView = new qSlicerModulesListView(qSlicerModuleFinderDialog);
        ModuleListView->setObjectName(QString::fromUtf8("ModuleListView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModuleListView->sizePolicy().hasHeightForWidth());
        ModuleListView->setSizePolicy(sizePolicy);
        ModuleListView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(ModuleListView, 1, 0, 1, 1);

        ButtonBox = new QDialogButtonBox(qSlicerModuleFinderDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setOrientation(Qt::Horizontal);
        ButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        ButtonBox->setCenterButtons(true);

        gridLayout->addWidget(ButtonBox, 2, 0, 1, 2);

        ModuleDescriptionBrowser = new QTextBrowser(qSlicerModuleFinderDialog);
        ModuleDescriptionBrowser->setObjectName(QString::fromUtf8("ModuleDescriptionBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ModuleDescriptionBrowser->sizePolicy().hasHeightForWidth());
        ModuleDescriptionBrowser->setSizePolicy(sizePolicy1);
        ModuleDescriptionBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(ModuleDescriptionBrowser, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        FilterTitleSearchBox = new ctkSearchBox(qSlicerModuleFinderDialog);
        FilterTitleSearchBox->setObjectName(QString::fromUtf8("FilterTitleSearchBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(FilterTitleSearchBox->sizePolicy().hasHeightForWidth());
        FilterTitleSearchBox->setSizePolicy(sizePolicy2);
        FilterTitleSearchBox->setFocusPolicy(Qt::StrongFocus);
        FilterTitleSearchBox->setShowSearchIcon(true);

        horizontalLayout_2->addWidget(FilterTitleSearchBox);

        SearchInAllTextCheckBox = new QCheckBox(qSlicerModuleFinderDialog);
        SearchInAllTextCheckBox->setObjectName(QString::fromUtf8("SearchInAllTextCheckBox"));
        SearchInAllTextCheckBox->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(SearchInAllTextCheckBox);

        ShowBuiltInCheckBox = new QCheckBox(qSlicerModuleFinderDialog);
        ShowBuiltInCheckBox->setObjectName(QString::fromUtf8("ShowBuiltInCheckBox"));
        ShowBuiltInCheckBox->setFocusPolicy(Qt::NoFocus);
        ShowBuiltInCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(ShowBuiltInCheckBox);

        ShowTestingCheckBox = new QCheckBox(qSlicerModuleFinderDialog);
        ShowTestingCheckBox->setObjectName(QString::fromUtf8("ShowTestingCheckBox"));
        ShowTestingCheckBox->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(ShowTestingCheckBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        QWidget::setTabOrder(ModuleListView, ButtonBox);

        retranslateUi(qSlicerModuleFinderDialog);
        QObject::connect(ButtonBox, SIGNAL(accepted()), qSlicerModuleFinderDialog, SLOT(accept()));
        QObject::connect(ButtonBox, SIGNAL(rejected()), qSlicerModuleFinderDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(qSlicerModuleFinderDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerModuleFinderDialog)
    {
        qSlicerModuleFinderDialog->setWindowTitle(QCoreApplication::translate("qSlicerModuleFinderDialog", "Module finder", nullptr));
#if QT_CONFIG(tooltip)
        SearchInAllTextCheckBox->setToolTip(QCoreApplication::translate("qSlicerModuleFinderDialog", "Search in full text (module name and description). If unchecked then only module names are searched.", nullptr));
#endif // QT_CONFIG(tooltip)
        SearchInAllTextCheckBox->setText(QCoreApplication::translate("qSlicerModuleFinderDialog", "&Full text", nullptr));
#if QT_CONFIG(tooltip)
        ShowBuiltInCheckBox->setToolTip(QCoreApplication::translate("qSlicerModuleFinderDialog", "Show built-in modules. Unchecking makes it easier to find modules provided by extensions.", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowBuiltInCheckBox->setText(QCoreApplication::translate("qSlicerModuleFinderDialog", "&Built-in", nullptr));
#if QT_CONFIG(tooltip)
        ShowTestingCheckBox->setToolTip(QCoreApplication::translate("qSlicerModuleFinderDialog", "Show testing modules. Useful for software testing and troubleshooting.", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowTestingCheckBox->setText(QCoreApplication::translate("qSlicerModuleFinderDialog", "&Testing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerModuleFinderDialog: public Ui_qSlicerModuleFinderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMODULEFINDERDIALOG_H
