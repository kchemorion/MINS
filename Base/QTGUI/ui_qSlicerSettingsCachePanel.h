/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsCachePanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSCACHEPANEL_H
#define UI_QSLICERSETTINGSCACHEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "ctkDirectoryButton.h"
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsCachePanel
{
public:
    QFormLayout *formLayout;
    QLabel *CachePathLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *UsedCacheSizeLabel;
    QLabel *FreeCacheSizeLabel;
    QLabel *UsageLabel;
    QSpinBox *CacheSizeSpinBox;
    QLabel *CacheSizeLabel;
    QSpinBox *CacheFreeBufferSpinBox;
    QLabel *CacheFreeBufferLabel;
    QLabel *ForceRedownloadLabel;
    QCheckBox *ForceRedownloadCheckBox;
    QListWidget *FilesListWidget;
    QLabel *FilesListLabel;
    QPushButton *ClearCachePushButton;
    ctkDirectoryButton *CachePathButton;

    void setupUi(ctkSettingsPanel *qSlicerSettingsCachePanel)
    {
        if (qSlicerSettingsCachePanel->objectName().isEmpty())
            qSlicerSettingsCachePanel->setObjectName(QString::fromUtf8("qSlicerSettingsCachePanel"));
        qSlicerSettingsCachePanel->resize(329, 267);
        formLayout = new QFormLayout(qSlicerSettingsCachePanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        CachePathLabel = new QLabel(qSlicerSettingsCachePanel);
        CachePathLabel->setObjectName(QString::fromUtf8("CachePathLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, CachePathLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        UsedCacheSizeLabel = new QLabel(qSlicerSettingsCachePanel);
        UsedCacheSizeLabel->setObjectName(QString::fromUtf8("UsedCacheSizeLabel"));

        horizontalLayout_2->addWidget(UsedCacheSizeLabel);

        FreeCacheSizeLabel = new QLabel(qSlicerSettingsCachePanel);
        FreeCacheSizeLabel->setObjectName(QString::fromUtf8("FreeCacheSizeLabel"));

        horizontalLayout_2->addWidget(FreeCacheSizeLabel);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        UsageLabel = new QLabel(qSlicerSettingsCachePanel);
        UsageLabel->setObjectName(QString::fromUtf8("UsageLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, UsageLabel);

        CacheSizeSpinBox = new QSpinBox(qSlicerSettingsCachePanel);
        CacheSizeSpinBox->setObjectName(QString::fromUtf8("CacheSizeSpinBox"));
        CacheSizeSpinBox->setMinimum(1);
        CacheSizeSpinBox->setMaximum(999999999);
        CacheSizeSpinBox->setSingleStep(10);
        CacheSizeSpinBox->setValue(200);

        formLayout->setWidget(2, QFormLayout::FieldRole, CacheSizeSpinBox);

        CacheSizeLabel = new QLabel(qSlicerSettingsCachePanel);
        CacheSizeLabel->setObjectName(QString::fromUtf8("CacheSizeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, CacheSizeLabel);

        CacheFreeBufferSpinBox = new QSpinBox(qSlicerSettingsCachePanel);
        CacheFreeBufferSpinBox->setObjectName(QString::fromUtf8("CacheFreeBufferSpinBox"));
        CacheFreeBufferSpinBox->setMaximum(999999999);
        CacheFreeBufferSpinBox->setSingleStep(10);
        CacheFreeBufferSpinBox->setValue(10);

        formLayout->setWidget(6, QFormLayout::FieldRole, CacheFreeBufferSpinBox);

        CacheFreeBufferLabel = new QLabel(qSlicerSettingsCachePanel);
        CacheFreeBufferLabel->setObjectName(QString::fromUtf8("CacheFreeBufferLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, CacheFreeBufferLabel);

        ForceRedownloadLabel = new QLabel(qSlicerSettingsCachePanel);
        ForceRedownloadLabel->setObjectName(QString::fromUtf8("ForceRedownloadLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, ForceRedownloadLabel);

        ForceRedownloadCheckBox = new QCheckBox(qSlicerSettingsCachePanel);
        ForceRedownloadCheckBox->setObjectName(QString::fromUtf8("ForceRedownloadCheckBox"));

        formLayout->setWidget(7, QFormLayout::FieldRole, ForceRedownloadCheckBox);

        FilesListWidget = new QListWidget(qSlicerSettingsCachePanel);
        FilesListWidget->setObjectName(QString::fromUtf8("FilesListWidget"));

        formLayout->setWidget(8, QFormLayout::FieldRole, FilesListWidget);

        FilesListLabel = new QLabel(qSlicerSettingsCachePanel);
        FilesListLabel->setObjectName(QString::fromUtf8("FilesListLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, FilesListLabel);

        ClearCachePushButton = new QPushButton(qSlicerSettingsCachePanel);
        ClearCachePushButton->setObjectName(QString::fromUtf8("ClearCachePushButton"));

        formLayout->setWidget(9, QFormLayout::FieldRole, ClearCachePushButton);

        CachePathButton = new ctkDirectoryButton(qSlicerSettingsCachePanel);
        CachePathButton->setObjectName(QString::fromUtf8("CachePathButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, CachePathButton);


        retranslateUi(qSlicerSettingsCachePanel);

        QMetaObject::connectSlotsByName(qSlicerSettingsCachePanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsCachePanel)
    {
        qSlicerSettingsCachePanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache", nullptr));
#if QT_CONFIG(tooltip)
        CachePathLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache directory for downloaded files", nullptr));
#endif // QT_CONFIG(tooltip)
        CachePathLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache location:", nullptr));
        UsedCacheSizeLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "~0MB used", nullptr));
        FreeCacheSizeLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "~200MB free", nullptr));
#if QT_CONFIG(tooltip)
        UsageLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Current usage of the cache", nullptr));
#endif // QT_CONFIG(tooltip)
        UsageLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache usage:", nullptr));
        CacheSizeSpinBox->setSuffix(QCoreApplication::translate("qSlicerSettingsCachePanel", "MB", nullptr));
#if QT_CONFIG(tooltip)
        CacheSizeLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Upper limit of the dedicated cache for downloaded files", nullptr));
#endif // QT_CONFIG(tooltip)
        CacheSizeLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache size:", nullptr));
        CacheFreeBufferSpinBox->setSuffix(QCoreApplication::translate("qSlicerSettingsCachePanel", "MB", nullptr));
#if QT_CONFIG(tooltip)
        CacheFreeBufferLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Amount of space that should remain free. It should be the typical size of a file to download.", nullptr));
#endif // QT_CONFIG(tooltip)
        CacheFreeBufferLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Cache free buffer:", nullptr));
#if QT_CONFIG(tooltip)
        ForceRedownloadLabel->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Control whether a file must be downloaded even if it is already in the cache", nullptr));
#endif // QT_CONFIG(tooltip)
        ForceRedownloadLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Force redownload:", nullptr));
        ForceRedownloadCheckBox->setText(QString());
        FilesListLabel->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Files in cache:", nullptr));
#if QT_CONFIG(tooltip)
        ClearCachePushButton->setToolTip(QCoreApplication::translate("qSlicerSettingsCachePanel", "Delete all files in cache directory", nullptr));
#endif // QT_CONFIG(tooltip)
        ClearCachePushButton->setText(QCoreApplication::translate("qSlicerSettingsCachePanel", "Clear cache", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsCachePanel: public Ui_qSlicerSettingsCachePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSCACHEPANEL_H
