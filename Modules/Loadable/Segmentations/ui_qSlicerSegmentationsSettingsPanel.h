/********************************************************************************
** Form generated from reading UI file 'qSlicerSegmentationsSettingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSEGMENTATIONSSETTINGSPANEL_H
#define UI_QSLICERSEGMENTATIONSSETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "ctkComboBox.h"
#include "ctkPushButton.h"
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSegmentationsSettingsPanel
{
public:
    QFormLayout *formLayout;
    QLabel *AutoOpacitiesLabel;
    QCheckBox *AutoOpacitiesCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *SurfaceSmoothingLabel;
    QCheckBox *SurfaceSmoothingCheckBox;
    QLabel *label;
    ctkPushButton *EditDefaultTerminologyEntryPushButton;
    QLabel *label_2;
    ctkComboBox *AllowEditingHiddenSegmentComboBox;
    QLabel *label_3;
    ctkComboBox *DefaultOverwriteModeComboBox;

    void setupUi(ctkSettingsPanel *qSlicerSegmentationsSettingsPanel)
    {
        if (qSlicerSegmentationsSettingsPanel->objectName().isEmpty())
            qSlicerSegmentationsSettingsPanel->setObjectName(QString::fromUtf8("qSlicerSegmentationsSettingsPanel"));
        qSlicerSegmentationsSettingsPanel->resize(416, 162);
        formLayout = new QFormLayout(qSlicerSegmentationsSettingsPanel);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        AutoOpacitiesLabel = new QLabel(qSlicerSegmentationsSettingsPanel);
        AutoOpacitiesLabel->setObjectName(QString::fromUtf8("AutoOpacitiesLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, AutoOpacitiesLabel);

        AutoOpacitiesCheckBox = new QCheckBox(qSlicerSegmentationsSettingsPanel);
        AutoOpacitiesCheckBox->setObjectName(QString::fromUtf8("AutoOpacitiesCheckBox"));
        AutoOpacitiesCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, AutoOpacitiesCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::SpanningRole, verticalSpacer);

        SurfaceSmoothingLabel = new QLabel(qSlicerSegmentationsSettingsPanel);
        SurfaceSmoothingLabel->setObjectName(QString::fromUtf8("SurfaceSmoothingLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, SurfaceSmoothingLabel);

        SurfaceSmoothingCheckBox = new QCheckBox(qSlicerSegmentationsSettingsPanel);
        SurfaceSmoothingCheckBox->setObjectName(QString::fromUtf8("SurfaceSmoothingCheckBox"));
        SurfaceSmoothingCheckBox->setChecked(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, SurfaceSmoothingCheckBox);

        label = new QLabel(qSlicerSegmentationsSettingsPanel);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        EditDefaultTerminologyEntryPushButton = new ctkPushButton(qSlicerSegmentationsSettingsPanel);
        EditDefaultTerminologyEntryPushButton->setObjectName(QString::fromUtf8("EditDefaultTerminologyEntryPushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, EditDefaultTerminologyEntryPushButton);

        label_2 = new QLabel(qSlicerSegmentationsSettingsPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        AllowEditingHiddenSegmentComboBox = new ctkComboBox(qSlicerSegmentationsSettingsPanel);
        AllowEditingHiddenSegmentComboBox->setObjectName(QString::fromUtf8("AllowEditingHiddenSegmentComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, AllowEditingHiddenSegmentComboBox);

        label_3 = new QLabel(qSlicerSegmentationsSettingsPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        DefaultOverwriteModeComboBox = new ctkComboBox(qSlicerSegmentationsSettingsPanel);
        DefaultOverwriteModeComboBox->setObjectName(QString::fromUtf8("DefaultOverwriteModeComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, DefaultOverwriteModeComboBox);


        retranslateUi(qSlicerSegmentationsSettingsPanel);

        QMetaObject::connectSlotsByName(qSlicerSegmentationsSettingsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSegmentationsSettingsPanel)
    {
        qSlicerSegmentationsSettingsPanel->setWindowTitle(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "SegmentationsSettingsPanel", nullptr));
#if QT_CONFIG(tooltip)
        AutoOpacitiesLabel->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Automatically set opacities of the segments when loading from file based on which contains which, so that no segment obscures another", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoOpacitiesLabel->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Automatic segment opacities:", nullptr));
#if QT_CONFIG(tooltip)
        AutoOpacitiesCheckBox->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Automatically set opacities of the segments when loading from file based on which contains which, so that no segment obscures another", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoOpacitiesCheckBox->setText(QString());
#if QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Automatically set opacities of the segments when loading from file based on which contains which, so that no segment obscures another", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingLabel->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Enable surface smoothing by default:", nullptr));
#if QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Enable surface smoothing during binary labelmap to closed surface conversion in new segmentations. Smoothing improves appearance in 3D views and exported models but makes segment editing considerably slower.", nullptr));
#endif // QT_CONFIG(tooltip)
        SurfaceSmoothingCheckBox->setText(QString());
        label->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Default terminology entry:", nullptr));
#if QT_CONFIG(tooltip)
        EditDefaultTerminologyEntryPushButton->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "This terminology will be used by default for new segments in an empty segmentation.", nullptr));
#endif // QT_CONFIG(tooltip)
        EditDefaultTerminologyEntryPushButton->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "(set)", nullptr));
        label_2->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Edit hidden segments: ", nullptr));
#if QT_CONFIG(tooltip)
        AllowEditingHiddenSegmentComboBox->setToolTip(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "This option controls what the application should do if the user edits a segment that is currently not visible. It is meant to prevent unintentional changes to hidden segments.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("qSlicerSegmentationsSettingsPanel", "Default overwrite mode:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSegmentationsSettingsPanel: public Ui_qSlicerSegmentationsSettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSEGMENTATIONSSETTINGSPANEL_H
