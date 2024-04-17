/********************************************************************************
** Form generated from reading UI file 'qSlicerSettingsViewsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSETTINGSVIEWSPANEL_H
#define UI_QSLICERSETTINGSVIEWSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCheckBox.h"
#include "ctkCollapsibleGroupBox.h"
#include "ctkComboBox.h"
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSettingsViewsPanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    ctkCollapsibleGroupBox *CollapsibleGroupBox;
    QFormLayout *formLayout_2;
    QLabel *SliceOrientationMarkerLabel;
    QHBoxLayout *horizontalLayout_2;
    ctkComboBox *SliceOrientationMarkerTypeComboBox;
    ctkComboBox *SliceOrientationMarkerSizeComboBox;
    QLabel *SliceRulerLabel;
    ctkComboBox *SliceRulerTypeComboBox;
    QLabel *SliceViewOrientationLabel;
    ctkComboBox *SliceViewOrientationComboBox;
    ctkCollapsibleGroupBox *CollapsibleGroupBox_2;
    QFormLayout *formLayout_3;
    QLabel *ThreeDBoxVisibilityLabel;
    ctkCheckBox *ThreeDBoxVisibilityCheckBox;
    QLabel *ThreeDAxisLabelsVisibilityLabel;
    ctkCheckBox *ThreeDAxisLabelsVisibilityCheckBox;
    QLabel *ThreeDOrientationMarkerLabel;
    QHBoxLayout *horizontalLayout_3;
    ctkComboBox *ThreeDOrientationMarkerTypeComboBox;
    ctkComboBox *ThreeDOrientationMarkerSizeComboBox;
    QLabel *ThreeDRulerTypeLabel;
    ctkComboBox *ThreeDRulerTypeComboBox;
    QLabel *ThreeDUseDepthPeelingLabel;
    ctkCheckBox *ThreeDUseDepthPeelingCheckBox;
    QLabel *label;
    ctkCheckBox *ThreeDUseOrthographicProjectionCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *MSAALabel;
    QComboBox *MSAAComboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(ctkSettingsPanel *qSlicerSettingsViewsPanel)
    {
        if (qSlicerSettingsViewsPanel->objectName().isEmpty())
            qSlicerSettingsViewsPanel->setObjectName(QString::fromUtf8("qSlicerSettingsViewsPanel"));
        qSlicerSettingsViewsPanel->resize(469, 593);
        verticalLayout_2 = new QVBoxLayout(qSlicerSettingsViewsPanel);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(qSlicerSettingsViewsPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 573));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        CollapsibleGroupBox = new ctkCollapsibleGroupBox(scrollAreaWidgetContents);
        CollapsibleGroupBox->setObjectName(QString::fromUtf8("CollapsibleGroupBox"));
        formLayout_2 = new QFormLayout(CollapsibleGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        SliceOrientationMarkerLabel = new QLabel(CollapsibleGroupBox);
        SliceOrientationMarkerLabel->setObjectName(QString::fromUtf8("SliceOrientationMarkerLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, SliceOrientationMarkerLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SliceOrientationMarkerTypeComboBox = new ctkComboBox(CollapsibleGroupBox);
        SliceOrientationMarkerTypeComboBox->setObjectName(QString::fromUtf8("SliceOrientationMarkerTypeComboBox"));

        horizontalLayout_2->addWidget(SliceOrientationMarkerTypeComboBox);

        SliceOrientationMarkerSizeComboBox = new ctkComboBox(CollapsibleGroupBox);
        SliceOrientationMarkerSizeComboBox->addItem(QString());
        SliceOrientationMarkerSizeComboBox->addItem(QString());
        SliceOrientationMarkerSizeComboBox->addItem(QString());
        SliceOrientationMarkerSizeComboBox->setObjectName(QString::fromUtf8("SliceOrientationMarkerSizeComboBox"));

        horizontalLayout_2->addWidget(SliceOrientationMarkerSizeComboBox);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        SliceRulerLabel = new QLabel(CollapsibleGroupBox);
        SliceRulerLabel->setObjectName(QString::fromUtf8("SliceRulerLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, SliceRulerLabel);

        SliceRulerTypeComboBox = new ctkComboBox(CollapsibleGroupBox);
        SliceRulerTypeComboBox->addItem(QString());
        SliceRulerTypeComboBox->addItem(QString());
        SliceRulerTypeComboBox->addItem(QString());
        SliceRulerTypeComboBox->setObjectName(QString::fromUtf8("SliceRulerTypeComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, SliceRulerTypeComboBox);

        SliceViewOrientationLabel = new QLabel(CollapsibleGroupBox);
        SliceViewOrientationLabel->setObjectName(QString::fromUtf8("SliceViewOrientationLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, SliceViewOrientationLabel);

        SliceViewOrientationComboBox = new ctkComboBox(CollapsibleGroupBox);
        SliceViewOrientationComboBox->setObjectName(QString::fromUtf8("SliceViewOrientationComboBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, SliceViewOrientationComboBox);


        verticalLayout->addWidget(CollapsibleGroupBox);

        CollapsibleGroupBox_2 = new ctkCollapsibleGroupBox(scrollAreaWidgetContents);
        CollapsibleGroupBox_2->setObjectName(QString::fromUtf8("CollapsibleGroupBox_2"));
        formLayout_3 = new QFormLayout(CollapsibleGroupBox_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        ThreeDBoxVisibilityLabel = new QLabel(CollapsibleGroupBox_2);
        ThreeDBoxVisibilityLabel->setObjectName(QString::fromUtf8("ThreeDBoxVisibilityLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, ThreeDBoxVisibilityLabel);

        ThreeDBoxVisibilityCheckBox = new ctkCheckBox(CollapsibleGroupBox_2);
        ThreeDBoxVisibilityCheckBox->setObjectName(QString::fromUtf8("ThreeDBoxVisibilityCheckBox"));
        ThreeDBoxVisibilityCheckBox->setChecked(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ThreeDBoxVisibilityCheckBox);

        ThreeDAxisLabelsVisibilityLabel = new QLabel(CollapsibleGroupBox_2);
        ThreeDAxisLabelsVisibilityLabel->setObjectName(QString::fromUtf8("ThreeDAxisLabelsVisibilityLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, ThreeDAxisLabelsVisibilityLabel);

        ThreeDAxisLabelsVisibilityCheckBox = new ctkCheckBox(CollapsibleGroupBox_2);
        ThreeDAxisLabelsVisibilityCheckBox->setObjectName(QString::fromUtf8("ThreeDAxisLabelsVisibilityCheckBox"));
        ThreeDAxisLabelsVisibilityCheckBox->setChecked(true);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, ThreeDAxisLabelsVisibilityCheckBox);

        ThreeDOrientationMarkerLabel = new QLabel(CollapsibleGroupBox_2);
        ThreeDOrientationMarkerLabel->setObjectName(QString::fromUtf8("ThreeDOrientationMarkerLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, ThreeDOrientationMarkerLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ThreeDOrientationMarkerTypeComboBox = new ctkComboBox(CollapsibleGroupBox_2);
        ThreeDOrientationMarkerTypeComboBox->addItem(QString());
        ThreeDOrientationMarkerTypeComboBox->addItem(QString());
        ThreeDOrientationMarkerTypeComboBox->addItem(QString());
        ThreeDOrientationMarkerTypeComboBox->addItem(QString());
        ThreeDOrientationMarkerTypeComboBox->setObjectName(QString::fromUtf8("ThreeDOrientationMarkerTypeComboBox"));

        horizontalLayout_3->addWidget(ThreeDOrientationMarkerTypeComboBox);

        ThreeDOrientationMarkerSizeComboBox = new ctkComboBox(CollapsibleGroupBox_2);
        ThreeDOrientationMarkerSizeComboBox->addItem(QString());
        ThreeDOrientationMarkerSizeComboBox->addItem(QString());
        ThreeDOrientationMarkerSizeComboBox->addItem(QString());
        ThreeDOrientationMarkerSizeComboBox->setObjectName(QString::fromUtf8("ThreeDOrientationMarkerSizeComboBox"));

        horizontalLayout_3->addWidget(ThreeDOrientationMarkerSizeComboBox);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        ThreeDRulerTypeLabel = new QLabel(CollapsibleGroupBox_2);
        ThreeDRulerTypeLabel->setObjectName(QString::fromUtf8("ThreeDRulerTypeLabel"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, ThreeDRulerTypeLabel);

        ThreeDRulerTypeComboBox = new ctkComboBox(CollapsibleGroupBox_2);
        ThreeDRulerTypeComboBox->addItem(QString());
        ThreeDRulerTypeComboBox->addItem(QString());
        ThreeDRulerTypeComboBox->addItem(QString());
        ThreeDRulerTypeComboBox->setObjectName(QString::fromUtf8("ThreeDRulerTypeComboBox"));
        ThreeDRulerTypeComboBox->setEnabled(false);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, ThreeDRulerTypeComboBox);

        ThreeDUseDepthPeelingLabel = new QLabel(CollapsibleGroupBox_2);
        ThreeDUseDepthPeelingLabel->setObjectName(QString::fromUtf8("ThreeDUseDepthPeelingLabel"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, ThreeDUseDepthPeelingLabel);

        ThreeDUseDepthPeelingCheckBox = new ctkCheckBox(CollapsibleGroupBox_2);
        ThreeDUseDepthPeelingCheckBox->setObjectName(QString::fromUtf8("ThreeDUseDepthPeelingCheckBox"));
        ThreeDUseDepthPeelingCheckBox->setChecked(true);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, ThreeDUseDepthPeelingCheckBox);

        label = new QLabel(CollapsibleGroupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label);

        ThreeDUseOrthographicProjectionCheckBox = new ctkCheckBox(CollapsibleGroupBox_2);
        ThreeDUseOrthographicProjectionCheckBox->setObjectName(QString::fromUtf8("ThreeDUseOrthographicProjectionCheckBox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, ThreeDUseOrthographicProjectionCheckBox);


        verticalLayout->addWidget(CollapsibleGroupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MSAALabel = new QLabel(scrollAreaWidgetContents);
        MSAALabel->setObjectName(QString::fromUtf8("MSAALabel"));

        horizontalLayout->addWidget(MSAALabel);

        MSAAComboBox = new QComboBox(scrollAreaWidgetContents);
        MSAAComboBox->setObjectName(QString::fromUtf8("MSAAComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MSAAComboBox->sizePolicy().hasHeightForWidth());
        MSAAComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(MSAAComboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        retranslateUi(qSlicerSettingsViewsPanel);
        QObject::connect(ThreeDUseOrthographicProjectionCheckBox, SIGNAL(toggled(bool)), ThreeDRulerTypeComboBox, SLOT(setEnabled(bool)));

        SliceOrientationMarkerSizeComboBox->setCurrentIndex(1);
        SliceViewOrientationComboBox->setCurrentIndex(-1);
        ThreeDOrientationMarkerSizeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(qSlicerSettingsViewsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSettingsViewsPanel)
    {
        qSlicerSettingsViewsPanel->setWindowTitle(QCoreApplication::translate("qSlicerSettingsViewsPanel", "ViewsSettings", nullptr));
        CollapsibleGroupBox->setTitle(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Slice viewer defaults", nullptr));
        SliceOrientationMarkerLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Orientation marker:", nullptr));
        SliceOrientationMarkerSizeComboBox->setItemText(0, QCoreApplication::translate("qSlicerSettingsViewsPanel", "small", nullptr));
        SliceOrientationMarkerSizeComboBox->setItemText(1, QCoreApplication::translate("qSlicerSettingsViewsPanel", "medium", nullptr));
        SliceOrientationMarkerSizeComboBox->setItemText(2, QCoreApplication::translate("qSlicerSettingsViewsPanel", "large", nullptr));

        SliceRulerLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Ruler:", nullptr));
        SliceRulerTypeComboBox->setItemText(0, QCoreApplication::translate("qSlicerSettingsViewsPanel", "none", nullptr));
        SliceRulerTypeComboBox->setItemText(1, QCoreApplication::translate("qSlicerSettingsViewsPanel", "thin", nullptr));
        SliceRulerTypeComboBox->setItemText(2, QCoreApplication::translate("qSlicerSettingsViewsPanel", "thick", nullptr));

        SliceViewOrientationLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "View orientation:", nullptr));
        CollapsibleGroupBox_2->setTitle(QCoreApplication::translate("qSlicerSettingsViewsPanel", "3D viewer defaults", nullptr));
        ThreeDBoxVisibilityLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Show 3D cube:", nullptr));
        ThreeDAxisLabelsVisibilityLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Show 3D axis label:", nullptr));
        ThreeDOrientationMarkerLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Orientation marker:", nullptr));
        ThreeDOrientationMarkerTypeComboBox->setItemText(0, QCoreApplication::translate("qSlicerSettingsViewsPanel", "none", nullptr));
        ThreeDOrientationMarkerTypeComboBox->setItemText(1, QCoreApplication::translate("qSlicerSettingsViewsPanel", "cube", nullptr));
        ThreeDOrientationMarkerTypeComboBox->setItemText(2, QCoreApplication::translate("qSlicerSettingsViewsPanel", "human", nullptr));
        ThreeDOrientationMarkerTypeComboBox->setItemText(3, QCoreApplication::translate("qSlicerSettingsViewsPanel", "axes", nullptr));

        ThreeDOrientationMarkerSizeComboBox->setItemText(0, QCoreApplication::translate("qSlicerSettingsViewsPanel", "small", nullptr));
        ThreeDOrientationMarkerSizeComboBox->setItemText(1, QCoreApplication::translate("qSlicerSettingsViewsPanel", "medium", nullptr));
        ThreeDOrientationMarkerSizeComboBox->setItemText(2, QCoreApplication::translate("qSlicerSettingsViewsPanel", "large", nullptr));

        ThreeDRulerTypeLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Ruler:", nullptr));
        ThreeDRulerTypeComboBox->setItemText(0, QCoreApplication::translate("qSlicerSettingsViewsPanel", "none", nullptr));
        ThreeDRulerTypeComboBox->setItemText(1, QCoreApplication::translate("qSlicerSettingsViewsPanel", "thin", nullptr));
        ThreeDRulerTypeComboBox->setItemText(2, QCoreApplication::translate("qSlicerSettingsViewsPanel", "thick", nullptr));

#if QT_CONFIG(tooltip)
        ThreeDRulerTypeComboBox->setToolTip(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Ruler is only displayed if orthographic projection mode is used.", nullptr));
#endif // QT_CONFIG(tooltip)
        ThreeDUseDepthPeelingLabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Use depth peeling:", nullptr));
#if QT_CONFIG(tooltip)
        ThreeDUseDepthPeelingCheckBox->setToolTip(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Enabling depth peeling improves rendering of transparent models at the cost of higher computational cost.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Use orthographic projection:", nullptr));
        MSAALabel->setText(QCoreApplication::translate("qSlicerSettingsViewsPanel", "Multi-sampling (MSAA):", nullptr));
#if QT_CONFIG(tooltip)
        MSAAComboBox->setToolTip(QCoreApplication::translate("qSlicerSettingsViewsPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Use multisampling for full-screen anti-aliasing.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qSlicerSettingsViewsPanel: public Ui_qSlicerSettingsViewsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSETTINGSVIEWSPANEL_H
