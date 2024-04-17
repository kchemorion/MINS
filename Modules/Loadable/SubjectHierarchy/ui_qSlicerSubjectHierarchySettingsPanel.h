/********************************************************************************
** Form generated from reading UI file 'qSlicerSubjectHierarchySettingsPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSUBJECTHIERARCHYSETTINGSPANEL_H
#define UI_QSLICERSUBJECTHIERARCHYSETTINGSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "ctkSettingsPanel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSubjectHierarchySettingsPanel
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *OperationGroupBox;
    QFormLayout *formLayout_2;
    QLabel *AutoDeleteSubjectHierarchyChildrenEnabledLabel;
    QCheckBox *AutoDeleteSubjectHierarchyChildrenEnabledCheckBox;
    QGroupBox *DisplayGroupBox;
    QGridLayout *gridLayout;
    QLabel *StudyIDTagLabel;
    QLabel *PatientTagsLabel;
    QCheckBox *PatientBirthDateTagCheckBox;
    QLabel *PatientIDTagLabel;
    QLabel *StudyTagsLabel;
    QCheckBox *StudyDateTagCheckBox;
    QCheckBox *StudyIDTagCheckBox;
    QCheckBox *PatientIDTagCheckBox;
    QLabel *StudyDateTagLabel;
    QLabel *PatientBirthDateTagLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(ctkSettingsPanel *qSlicerSubjectHierarchySettingsPanel)
    {
        if (qSlicerSubjectHierarchySettingsPanel->objectName().isEmpty())
            qSlicerSubjectHierarchySettingsPanel->setObjectName(QString::fromUtf8("qSlicerSubjectHierarchySettingsPanel"));
        qSlicerSubjectHierarchySettingsPanel->resize(419, 166);
        gridLayout_2 = new QGridLayout(qSlicerSubjectHierarchySettingsPanel);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        OperationGroupBox = new QGroupBox(qSlicerSubjectHierarchySettingsPanel);
        OperationGroupBox->setObjectName(QString::fromUtf8("OperationGroupBox"));
        OperationGroupBox->setFlat(true);
        formLayout_2 = new QFormLayout(OperationGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        AutoDeleteSubjectHierarchyChildrenEnabledLabel = new QLabel(OperationGroupBox);
        AutoDeleteSubjectHierarchyChildrenEnabledLabel->setObjectName(QString::fromUtf8("AutoDeleteSubjectHierarchyChildrenEnabledLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, AutoDeleteSubjectHierarchyChildrenEnabledLabel);

        AutoDeleteSubjectHierarchyChildrenEnabledCheckBox = new QCheckBox(OperationGroupBox);
        AutoDeleteSubjectHierarchyChildrenEnabledCheckBox->setObjectName(QString::fromUtf8("AutoDeleteSubjectHierarchyChildrenEnabledCheckBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, AutoDeleteSubjectHierarchyChildrenEnabledCheckBox);


        gridLayout_2->addWidget(OperationGroupBox, 0, 0, 1, 1);

        DisplayGroupBox = new QGroupBox(qSlicerSubjectHierarchySettingsPanel);
        DisplayGroupBox->setObjectName(QString::fromUtf8("DisplayGroupBox"));
        DisplayGroupBox->setFlat(true);
        gridLayout = new QGridLayout(DisplayGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StudyIDTagLabel = new QLabel(DisplayGroupBox);
        StudyIDTagLabel->setObjectName(QString::fromUtf8("StudyIDTagLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StudyIDTagLabel->sizePolicy().hasHeightForWidth());
        StudyIDTagLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(StudyIDTagLabel, 1, 1, 1, 1);

        PatientTagsLabel = new QLabel(DisplayGroupBox);
        PatientTagsLabel->setObjectName(QString::fromUtf8("PatientTagsLabel"));

        gridLayout->addWidget(PatientTagsLabel, 0, 0, 1, 1);

        PatientBirthDateTagCheckBox = new QCheckBox(DisplayGroupBox);
        PatientBirthDateTagCheckBox->setObjectName(QString::fromUtf8("PatientBirthDateTagCheckBox"));

        gridLayout->addWidget(PatientBirthDateTagCheckBox, 0, 4, 1, 1);

        PatientIDTagLabel = new QLabel(DisplayGroupBox);
        PatientIDTagLabel->setObjectName(QString::fromUtf8("PatientIDTagLabel"));
        sizePolicy.setHeightForWidth(PatientIDTagLabel->sizePolicy().hasHeightForWidth());
        PatientIDTagLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(PatientIDTagLabel, 0, 1, 1, 1);

        StudyTagsLabel = new QLabel(DisplayGroupBox);
        StudyTagsLabel->setObjectName(QString::fromUtf8("StudyTagsLabel"));

        gridLayout->addWidget(StudyTagsLabel, 1, 0, 1, 1);

        StudyDateTagCheckBox = new QCheckBox(DisplayGroupBox);
        StudyDateTagCheckBox->setObjectName(QString::fromUtf8("StudyDateTagCheckBox"));

        gridLayout->addWidget(StudyDateTagCheckBox, 1, 4, 1, 1);

        StudyIDTagCheckBox = new QCheckBox(DisplayGroupBox);
        StudyIDTagCheckBox->setObjectName(QString::fromUtf8("StudyIDTagCheckBox"));

        gridLayout->addWidget(StudyIDTagCheckBox, 1, 2, 1, 1);

        PatientIDTagCheckBox = new QCheckBox(DisplayGroupBox);
        PatientIDTagCheckBox->setObjectName(QString::fromUtf8("PatientIDTagCheckBox"));

        gridLayout->addWidget(PatientIDTagCheckBox, 0, 2, 1, 1);

        StudyDateTagLabel = new QLabel(DisplayGroupBox);
        StudyDateTagLabel->setObjectName(QString::fromUtf8("StudyDateTagLabel"));
        sizePolicy.setHeightForWidth(StudyDateTagLabel->sizePolicy().hasHeightForWidth());
        StudyDateTagLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(StudyDateTagLabel, 1, 3, 1, 1);

        PatientBirthDateTagLabel = new QLabel(DisplayGroupBox);
        PatientBirthDateTagLabel->setObjectName(QString::fromUtf8("PatientBirthDateTagLabel"));
        sizePolicy.setHeightForWidth(PatientBirthDateTagLabel->sizePolicy().hasHeightForWidth());
        PatientBirthDateTagLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(PatientBirthDateTagLabel, 0, 3, 1, 1);


        gridLayout_2->addWidget(DisplayGroupBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(qSlicerSubjectHierarchySettingsPanel);

        QMetaObject::connectSlotsByName(qSlicerSubjectHierarchySettingsPanel);
    } // setupUi

    void retranslateUi(ctkSettingsPanel *qSlicerSubjectHierarchySettingsPanel)
    {
        qSlicerSubjectHierarchySettingsPanel->setWindowTitle(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "SubjectHierarchySettingsPanel", nullptr));
        OperationGroupBox->setTitle(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Operation", nullptr));
#if QT_CONFIG(tooltip)
        AutoDeleteSubjectHierarchyChildrenEnabledLabel->setToolTip(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Delete whole branch under the deleted item from subject hierarchy.", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoDeleteSubjectHierarchyChildrenEnabledLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Automatically delete subject hierarchy children:", nullptr));
#if QT_CONFIG(tooltip)
        AutoDeleteSubjectHierarchyChildrenEnabledCheckBox->setToolTip(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Automatically delete subject hierarchy children for nodes removed from the scene.", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoDeleteSubjectHierarchyChildrenEnabledCheckBox->setText(QString());
        DisplayGroupBox->setTitle(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Display", nullptr));
        StudyIDTagLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "  ID:", nullptr));
        PatientTagsLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Patient tags in item name:", nullptr));
        PatientBirthDateTagCheckBox->setText(QString());
        PatientIDTagLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "  ID:", nullptr));
        StudyTagsLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "Study tags in item name:", nullptr));
        StudyDateTagCheckBox->setText(QString());
        StudyIDTagCheckBox->setText(QString());
        PatientIDTagCheckBox->setText(QString());
        StudyDateTagLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "  Study date:", nullptr));
        PatientBirthDateTagLabel->setText(QCoreApplication::translate("qSlicerSubjectHierarchySettingsPanel", "  Birth date:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSubjectHierarchySettingsPanel: public Ui_qSlicerSubjectHierarchySettingsPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSUBJECTHIERARCHYSETTINGSPANEL_H
