/********************************************************************************
** Form generated from reading UI file 'qSlicerTableColumnPropertiesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTABLECOLUMNPROPERTIESWIDGET_H
#define UI_QSLICERTABLECOLUMNPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTableColumnPropertiesWidget
{
public:
    QAction *ActionPersistent;
    QAction *ActionDeleteAll;
    QAction *ActionVisibility;
    QAction *ActionLocked;
    QFormLayout *formLayout_2;
    QLabel *NameLabel;
    QLineEdit *NameLineEdit;
    QLabel *DataTypeLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *DataTypeComboBox;
    QPushButton *ApplyTypeChangeButton;
    QPushButton *CancelTypeChangeButton;
    QLabel *NullValueLabel;
    QLineEdit *NullValueLineEdit;
    QLabel *TitleLabel;
    QLineEdit *TitleLineEdit;
    QLabel *DescriptionLabel;
    QLineEdit *DescriptionLineEdit;
    QLabel *UnitLabelLabel;
    QLineEdit *UnitLabelLineEdit;
    QLabel *ComponentCountLabel;
    QLineEdit *ComponentCountLineEdit;
    QLineEdit *ComponentNamesLineEdit;
    QLabel *ComponentNamesLabel;

    void setupUi(qSlicerWidget *qSlicerTableColumnPropertiesWidget)
    {
        if (qSlicerTableColumnPropertiesWidget->objectName().isEmpty())
            qSlicerTableColumnPropertiesWidget->setObjectName(QString::fromUtf8("qSlicerTableColumnPropertiesWidget"));
        qSlicerTableColumnPropertiesWidget->resize(384, 285);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerTableColumnPropertiesWidget->sizePolicy().hasHeightForWidth());
        qSlicerTableColumnPropertiesWidget->setSizePolicy(sizePolicy);
        ActionPersistent = new QAction(qSlicerTableColumnPropertiesWidget);
        ActionPersistent->setObjectName(QString::fromUtf8("ActionPersistent"));
        ActionPersistent->setCheckable(true);
        ActionDeleteAll = new QAction(qSlicerTableColumnPropertiesWidget);
        ActionDeleteAll->setObjectName(QString::fromUtf8("ActionDeleteAll"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/MarkupsDeleteAllRows.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionDeleteAll->setIcon(icon);
        ActionVisibility = new QAction(qSlicerTableColumnPropertiesWidget);
        ActionVisibility->setObjectName(QString::fromUtf8("ActionVisibility"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Small/SlicerInvisible.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/Icons/Small/SlicerVisible.png"), QSize(), QIcon::Normal, QIcon::On);
        ActionVisibility->setIcon(icon1);
        ActionLocked = new QAction(qSlicerTableColumnPropertiesWidget);
        ActionLocked->setObjectName(QString::fromUtf8("ActionLocked"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Small/SlicerUnlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/Small/SlicerLock.png"), QSize(), QIcon::Normal, QIcon::On);
        ActionLocked->setIcon(icon2);
        formLayout_2 = new QFormLayout(qSlicerTableColumnPropertiesWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, NameLabel);

        NameLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));
        NameLineEdit->setEnabled(false);
        NameLineEdit->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, NameLineEdit);

        DataTypeLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        DataTypeLabel->setObjectName(QString::fromUtf8("DataTypeLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, DataTypeLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        DataTypeComboBox = new QComboBox(qSlicerTableColumnPropertiesWidget);
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->addItem(QString());
        DataTypeComboBox->setObjectName(QString::fromUtf8("DataTypeComboBox"));

        horizontalLayout->addWidget(DataTypeComboBox);

        ApplyTypeChangeButton = new QPushButton(qSlicerTableColumnPropertiesWidget);
        ApplyTypeChangeButton->setObjectName(QString::fromUtf8("ApplyTypeChangeButton"));

        horizontalLayout->addWidget(ApplyTypeChangeButton);

        CancelTypeChangeButton = new QPushButton(qSlicerTableColumnPropertiesWidget);
        CancelTypeChangeButton->setObjectName(QString::fromUtf8("CancelTypeChangeButton"));

        horizontalLayout->addWidget(CancelTypeChangeButton);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        NullValueLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        NullValueLabel->setObjectName(QString::fromUtf8("NullValueLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, NullValueLabel);

        NullValueLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        NullValueLineEdit->setObjectName(QString::fromUtf8("NullValueLineEdit"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, NullValueLineEdit);

        TitleLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        TitleLabel->setObjectName(QString::fromUtf8("TitleLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, TitleLabel);

        TitleLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        TitleLineEdit->setObjectName(QString::fromUtf8("TitleLineEdit"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, TitleLineEdit);

        DescriptionLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        DescriptionLabel->setObjectName(QString::fromUtf8("DescriptionLabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, DescriptionLabel);

        DescriptionLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        DescriptionLineEdit->setObjectName(QString::fromUtf8("DescriptionLineEdit"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, DescriptionLineEdit);

        UnitLabelLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        UnitLabelLabel->setObjectName(QString::fromUtf8("UnitLabelLabel"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, UnitLabelLabel);

        UnitLabelLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        UnitLabelLineEdit->setObjectName(QString::fromUtf8("UnitLabelLineEdit"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, UnitLabelLineEdit);

        ComponentCountLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        ComponentCountLabel->setObjectName(QString::fromUtf8("ComponentCountLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, ComponentCountLabel);

        ComponentCountLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        ComponentCountLineEdit->setObjectName(QString::fromUtf8("ComponentCountLineEdit"));
        ComponentCountLineEdit->setReadOnly(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, ComponentCountLineEdit);

        ComponentNamesLineEdit = new QLineEdit(qSlicerTableColumnPropertiesWidget);
        ComponentNamesLineEdit->setObjectName(QString::fromUtf8("ComponentNamesLineEdit"));
        ComponentNamesLineEdit->setReadOnly(true);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, ComponentNamesLineEdit);

        ComponentNamesLabel = new QLabel(qSlicerTableColumnPropertiesWidget);
        ComponentNamesLabel->setObjectName(QString::fromUtf8("ComponentNamesLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, ComponentNamesLabel);


        retranslateUi(qSlicerTableColumnPropertiesWidget);

        QMetaObject::connectSlotsByName(qSlicerTableColumnPropertiesWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerTableColumnPropertiesWidget)
    {
        qSlicerTableColumnPropertiesWidget->setWindowTitle(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Place markups", nullptr));
        ActionPersistent->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Place multiple control points", nullptr));
#if QT_CONFIG(tooltip)
        ActionPersistent->setToolTip(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Place multiple control points", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionDeleteAll->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Delete all control points", nullptr));
#if QT_CONFIG(tooltip)
        ActionDeleteAll->setToolTip(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Delete all control points in the list", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionVisibility->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Visibility", nullptr));
#if QT_CONFIG(tooltip)
        ActionVisibility->setToolTip(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Toggle control point visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionLocked->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Locked", nullptr));
#if QT_CONFIG(tooltip)
        ActionLocked->setToolTip(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Toggle control point positions lock", nullptr));
#endif // QT_CONFIG(tooltip)
        NameLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Name:", nullptr));
        DataTypeLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Data type:", nullptr));
        DataTypeComboBox->setItemText(0, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "string", nullptr));
        DataTypeComboBox->setItemText(1, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "double", nullptr));
        DataTypeComboBox->setItemText(2, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "int", nullptr));
        DataTypeComboBox->setItemText(3, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "bit", nullptr));
        DataTypeComboBox->setItemText(4, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "float", nullptr));
        DataTypeComboBox->setItemText(5, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "char", nullptr));
        DataTypeComboBox->setItemText(6, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "signed char", nullptr));
        DataTypeComboBox->setItemText(7, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "short", nullptr));
        DataTypeComboBox->setItemText(8, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "long", nullptr));
        DataTypeComboBox->setItemText(9, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "long long", nullptr));
        DataTypeComboBox->setItemText(10, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "__int64", nullptr));
        DataTypeComboBox->setItemText(11, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "idtype", nullptr));
        DataTypeComboBox->setItemText(12, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned char", nullptr));
        DataTypeComboBox->setItemText(13, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned short", nullptr));
        DataTypeComboBox->setItemText(14, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned int", nullptr));
        DataTypeComboBox->setItemText(15, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned long", nullptr));
        DataTypeComboBox->setItemText(16, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned long long", nullptr));
        DataTypeComboBox->setItemText(17, QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "unsigned __int64", nullptr));

        ApplyTypeChangeButton->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Convert", nullptr));
        CancelTypeChangeButton->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Cancel", nullptr));
        NullValueLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Null value:", nullptr));
        TitleLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Title:", nullptr));
        DescriptionLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Description:", nullptr));
        UnitLabelLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Unit label:", nullptr));
        ComponentCountLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Component count:", nullptr));
        ComponentNamesLabel->setText(QCoreApplication::translate("qSlicerTableColumnPropertiesWidget", "Component names:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerTableColumnPropertiesWidget: public Ui_qSlicerTableColumnPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTABLECOLUMNPROPERTIESWIDGET_H
