/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsStylesPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSSTYLESPANEL_H
#define UI_QSLICERSETTINGSSTYLESPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkExpandButton.h"
#include "ctkFontButton.h"
#include "ctkSettingsPanel.h"
#include "qSlicerDirectoryListView.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsStylesPanel
{
public:
    QFormLayout *formLayout;
    QLabel *AdditionalModulePathsLabel;
    QWidget *AdditionalStylePathsWidget;
    QHBoxLayout *horizontalLayout_2;
    qSlicerDirectoryListView *AdditionalStylePathsView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddAdditionalStylePathButton;
    QPushButton *RemoveAdditionalStylePathButton;
    QSpacerItem *verticalSpacer;
    ctkExpandButton *AdditionalStylePathMoreButton;
    QLabel *StyleLabel;
    QComboBox *StyleComboBox;
    QLabel *ShowToolTipsLabel;
    QCheckBox *ShowToolTipsCheckBox;
    QLabel *FontLabel;
    ctkFontButton *FontButton;
    QLabel *ShowToolButtonTextLabel;
    QCheckBox *ShowToolButtonTextCheckBox;
    QLabel *RestoreUILabel;
    QCheckBox *RestoreUICheckBox;

    void setupUi(ctkSettingsPanel *qSlicerSettingsStylesPanel)
    {
        if (qSlicerSettingsStylesPanel->objectName().isEmpty())
            qSlicerSettingsStylesPanel->setObjectName(QString::fromUtf8("qSlicerSettingsStylesPanel"));
        qSlicerSettingsStylesPanel->resize(469, 227);
        formLayout = new QFormLayout(qSlicerSettingsStylesPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        AdditionalModulePathsLabel = new QLabel(qSlicerSettingsStylesPanel);
        AdditionalModulePathsLabel->setObjectName(QString::fromUtf8("AdditionalModulePathsLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, AdditionalModulePathsLabel);

        AdditionalStylePathsWidget = new QWidget(qSlicerSettingsStylesPanel);
        AdditionalStylePathsWidget->setObjectName(QString::fromUtf8("AdditionalStylePathsWidget"));
        horizontalLayout_2 = new QHBoxLayout(AdditionalStylePathsWidget);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AdditionalStylePathsView = new qSlicerDirectoryListView(AdditionalStylePathsWidget);
        AdditionalStylePathsView->setObjectName(QString::fromUtf8("AdditionalStylePathsView"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdditionalStylePathsView->sizePolicy().hasHeightForWidth());
        AdditionalStylePathsView->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(AdditionalStylePathsView);

        groupBox = new QGroupBox(AdditionalStylePathsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AddAdditionalStylePathButton = new QPushButton(groupBox);
        AddAdditionalStylePathButton->setObjectName(QString::fromUtf8("AddAdditionalStylePathButton"));

        verticalLayout_2->addWidget(AddAdditionalStylePathButton);

        RemoveAdditionalStylePathButton = new QPushButton(groupBox);
        RemoveAdditionalStylePathButton->setObjectName(QString::fromUtf8("RemoveAdditionalStylePathButton"));

        verticalLayout_2->addWidget(RemoveAdditionalStylePathButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(groupBox);

        AdditionalStylePathMoreButton = new ctkExpandButton(AdditionalStylePathsWidget);
        AdditionalStylePathMoreButton->setObjectName(QString::fromUtf8("AdditionalStylePathMoreButton"));
        AdditionalStylePathMoreButton->setChecked(true);
        AdditionalStylePathMoreButton->setMirrorOnExpand(true);

        horizontalLayout_2->addWidget(AdditionalStylePathMoreButton);


        formLayout->setWidget(6, QFormLayout::FieldRole, AdditionalStylePathsWidget);

        StyleLabel = new QLabel(qSlicerSettingsStylesPanel);
        StyleLabel->setObjectName(QString::fromUtf8("StyleLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, StyleLabel);

        StyleComboBox = new QComboBox(qSlicerSettingsStylesPanel);
        StyleComboBox->setObjectName(QString::fromUtf8("StyleComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, StyleComboBox);

        ShowToolTipsLabel = new QLabel(qSlicerSettingsStylesPanel);
        ShowToolTipsLabel->setObjectName(QString::fromUtf8("ShowToolTipsLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ShowToolTipsLabel);

        ShowToolTipsCheckBox = new QCheckBox(qSlicerSettingsStylesPanel);
        ShowToolTipsCheckBox->setObjectName(QString::fromUtf8("ShowToolTipsCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ShowToolTipsCheckBox);

        FontLabel = new QLabel(qSlicerSettingsStylesPanel);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, FontLabel);

        FontButton = new ctkFontButton(qSlicerSettingsStylesPanel);
        FontButton->setObjectName(QString::fromUtf8("FontButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, FontButton);

        ShowToolButtonTextLabel = new QLabel(qSlicerSettingsStylesPanel);
        ShowToolButtonTextLabel->setObjectName(QString::fromUtf8("ShowToolButtonTextLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ShowToolButtonTextLabel);

        ShowToolButtonTextCheckBox = new QCheckBox(qSlicerSettingsStylesPanel);
        ShowToolButtonTextCheckBox->setObjectName(QString::fromUtf8("ShowToolButtonTextCheckBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ShowToolButtonTextCheckBox);

        RestoreUILabel = new QLabel(qSlicerSettingsStylesPanel);
        RestoreUILabel->setObjectName(QString::fromUtf8("RestoreUILabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, RestoreUILabel);

        RestoreUICheckBox = new QCheckBox(qSlicerSettingsStylesPanel);
        RestoreUICheckBox->setObjectName(QString::fromUtf8("RestoreUICheckBox"));
        RestoreUICheckBox->setChecked(true);
        RestoreUICheckBox->setTristate(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, RestoreUICheckBox);


        retranslateUi(qSlicerSettingsStylesPanel);
        QObject::connect(AdditionalStylePathMoreButton, SIGNAL(toggled(bool)), groupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qSlicerSettingsStylesPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsStylesPanel)
    {
        qSlicerSettingsStylesPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsStylesPanel", "StyleSettings", nullptr));
        AdditionalModulePathsLabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Additional style paths:", nullptr));
#if QT_CONFIG(tooltip)
        AdditionalStylePathsView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Paths", nullptr));
#if QT_CONFIG(tooltip)
        AddAdditionalStylePathButton->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Add a style plugin path.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Adding a style plugin path will make accessible this style plugin (and thus all the its styles) to the application. This action </span><span style=\" font-size:8pt; "
                        "font-weight:600;\">requires</span><span style=\" font-size:8pt;\"> to restart the application.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AddAdditionalStylePathButton->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Add", nullptr));
#if QT_CONFIG(tooltip)
        RemoveAdditionalStylePathButton->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Remove the currently selected style plugin path.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Removing a style plugin path will make inaccessible this style plugin (and thus all the its styles) the next time the application is opened. "
                        "This action </span><span style=\" font-size:8pt; font-weight:600;\">requires</span><span style=\" font-size:8pt;\"> to restart the application.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveAdditionalStylePathButton->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        AdditionalStylePathMoreButton->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Show the interface to add/remove additional style paths.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        StyleLabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Style", nullptr));
#if QT_CONFIG(tooltip)
        StyleComboBox->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Select the application current style.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowToolTipsLabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Disable tooltips:", nullptr));
#if QT_CONFIG(tooltip)
        ShowToolTipsCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Set if tooltips (just like this) appear or not when the mouse hovers above widgets.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowToolTipsCheckBox->setText(QString());
        FontLabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Font and size:", nullptr));
#if QT_CONFIG(tooltip)
        FontButton->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Customize the application's font and size to your preference.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowToolButtonTextLabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Show text under icons in toolbar buttons:", nullptr));
#if QT_CONFIG(tooltip)
        ShowToolButtonTextCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">When disabled, only icons are seen in the main window toolbar. Otherwise the action's corresponding text is shown underneath.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ShowToolButtonTextCheckBox->setText(QString());
        RestoreUILabel->setText(QCoreApplication::translate("qSlicerSettingsStylesPanel", "Save user interface size and position on exit:", nullptr));
#if QT_CONFIG(tooltip)
        RestoreUICheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsStylesPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">When enabled, the application size and position will be remembered for the next time the application is started.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        RestoreUICheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsStylesPanel: public Ui_qSlicerSettingsStylesPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSSTYLESPANEL_H
