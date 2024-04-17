/********************************************************************************
** Form generated from reading UI file 'qSlicerTerminologyNavigatorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERTERMINOLOGYNAVIGATORWIDGET_H
#define UI_QSLICERTERMINOLOGYNAVIGATORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "ctkColorPickerButton.h"
#include "ctkComboBox.h"
#include "ctkExpandButton.h"
#include "ctkSearchBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerTerminologyNavigatorWidget
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_TerminologyEntry;
    QGridLayout *gridLayout_3;
    ctkExpandButton *CategoryExpandButton;
    ctkExpandButton *AnatomicalRegionExpandButton;
    QTableWidget *tableWidget_Type;
    ctkSearchBox *SearchBox_Type;
    ctkComboBox *ComboBox_TypeModifier;
    QFrame *frame_AnatomicRegion;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    ctkComboBox *ComboBox_AnatomicContext;
    QPushButton *pushButton_LoadAnatomicContext;
    ctkSearchBox *SearchBox_AnatomicRegion;
    QTableWidget *tableWidget_AnatomicRegion;
    ctkComboBox *ComboBox_AnatomicRegionModifier;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    ctkComboBox *ComboBox_Terminology;
    QPushButton *pushButton_LoadTerminology;
    QFrame *frame_Category;
    QVBoxLayout *verticalLayout_2;
    ctkSearchBox *SearchBox_Category;
    QTableWidget *tableWidget_Category;
    QFrame *frame_TerminologyOverride;
    QGridLayout *gridLayout_4;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton_ResetName;
    QLabel *label;
    ctkColorPickerButton *ColorPickerButton_RecommendedRGB;
    QPushButton *pushButton_ResetColor;

    void setupUi(qMRMLWidget *qSlicerTerminologyNavigatorWidget)
    {
        if (qSlicerTerminologyNavigatorWidget->objectName().isEmpty())
            qSlicerTerminologyNavigatorWidget->setObjectName(QString::fromUtf8("qSlicerTerminologyNavigatorWidget"));
        qSlicerTerminologyNavigatorWidget->resize(325, 392);
        gridLayout_2 = new QGridLayout(qSlicerTerminologyNavigatorWidget);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 2);
        frame_TerminologyEntry = new QFrame(qSlicerTerminologyNavigatorWidget);
        frame_TerminologyEntry->setObjectName(QString::fromUtf8("frame_TerminologyEntry"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_TerminologyEntry->sizePolicy().hasHeightForWidth());
        frame_TerminologyEntry->setSizePolicy(sizePolicy);
        frame_TerminologyEntry->setFrameShape(QFrame::StyledPanel);
        frame_TerminologyEntry->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_TerminologyEntry);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(2);
        gridLayout_3->setVerticalSpacing(4);
        gridLayout_3->setContentsMargins(0, 0, 0, 2);
        CategoryExpandButton = new ctkExpandButton(frame_TerminologyEntry);
        CategoryExpandButton->setObjectName(QString::fromUtf8("CategoryExpandButton"));
        CategoryExpandButton->setChecked(true);
        CategoryExpandButton->setArrowType(Qt::LeftArrow);

        gridLayout_3->addWidget(CategoryExpandButton, 1, 1, 3, 1);

        AnatomicalRegionExpandButton = new ctkExpandButton(frame_TerminologyEntry);
        AnatomicalRegionExpandButton->setObjectName(QString::fromUtf8("AnatomicalRegionExpandButton"));
        AnatomicalRegionExpandButton->setChecked(true);
        AnatomicalRegionExpandButton->setArrowType(Qt::RightArrow);

        gridLayout_3->addWidget(AnatomicalRegionExpandButton, 0, 3, 4, 1);

        tableWidget_Type = new QTableWidget(frame_TerminologyEntry);
        if (tableWidget_Type->columnCount() < 1)
            tableWidget_Type->setColumnCount(1);
        tableWidget_Type->setObjectName(QString::fromUtf8("tableWidget_Type"));
        tableWidget_Type->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Type->setTabKeyNavigation(false);
        tableWidget_Type->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_Type->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Type->setColumnCount(1);
        tableWidget_Type->horizontalHeader()->setVisible(false);
        tableWidget_Type->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Type->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(tableWidget_Type, 2, 2, 1, 1);

        SearchBox_Type = new ctkSearchBox(frame_TerminologyEntry);
        SearchBox_Type->setObjectName(QString::fromUtf8("SearchBox_Type"));
        SearchBox_Type->setShowSearchIcon(true);

        gridLayout_3->addWidget(SearchBox_Type, 1, 2, 1, 1);

        ComboBox_TypeModifier = new ctkComboBox(frame_TerminologyEntry);
        ComboBox_TypeModifier->setObjectName(QString::fromUtf8("ComboBox_TypeModifier"));
        ComboBox_TypeModifier->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_3->addWidget(ComboBox_TypeModifier, 3, 2, 1, 1);

        frame_AnatomicRegion = new QFrame(frame_TerminologyEntry);
        frame_AnatomicRegion->setObjectName(QString::fromUtf8("frame_AnatomicRegion"));
        frame_AnatomicRegion->setFrameShape(QFrame::StyledPanel);
        frame_AnatomicRegion->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_AnatomicRegion);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ComboBox_AnatomicContext = new ctkComboBox(frame_AnatomicRegion);
        ComboBox_AnatomicContext->setObjectName(QString::fromUtf8("ComboBox_AnatomicContext"));
        ComboBox_AnatomicContext->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_2->addWidget(ComboBox_AnatomicContext);

        pushButton_LoadAnatomicContext = new QPushButton(frame_AnatomicRegion);
        pushButton_LoadAnatomicContext->setObjectName(QString::fromUtf8("pushButton_LoadAnatomicContext"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_LoadAnatomicContext->sizePolicy().hasHeightForWidth());
        pushButton_LoadAnatomicContext->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Small/SlicerAddData.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_LoadAnatomicContext->setIcon(icon);
        pushButton_LoadAnatomicContext->setIconSize(QSize(21, 21));

        horizontalLayout_2->addWidget(pushButton_LoadAnatomicContext);


        verticalLayout->addLayout(horizontalLayout_2);

        SearchBox_AnatomicRegion = new ctkSearchBox(frame_AnatomicRegion);
        SearchBox_AnatomicRegion->setObjectName(QString::fromUtf8("SearchBox_AnatomicRegion"));
        SearchBox_AnatomicRegion->setShowSearchIcon(true);

        verticalLayout->addWidget(SearchBox_AnatomicRegion);

        tableWidget_AnatomicRegion = new QTableWidget(frame_AnatomicRegion);
        if (tableWidget_AnatomicRegion->columnCount() < 1)
            tableWidget_AnatomicRegion->setColumnCount(1);
        tableWidget_AnatomicRegion->setObjectName(QString::fromUtf8("tableWidget_AnatomicRegion"));
        tableWidget_AnatomicRegion->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_AnatomicRegion->setTabKeyNavigation(false);
        tableWidget_AnatomicRegion->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_AnatomicRegion->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_AnatomicRegion->setColumnCount(1);
        tableWidget_AnatomicRegion->horizontalHeader()->setVisible(false);
        tableWidget_AnatomicRegion->horizontalHeader()->setStretchLastSection(true);
        tableWidget_AnatomicRegion->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget_AnatomicRegion);

        ComboBox_AnatomicRegionModifier = new ctkComboBox(frame_AnatomicRegion);
        ComboBox_AnatomicRegionModifier->setObjectName(QString::fromUtf8("ComboBox_AnatomicRegionModifier"));
        ComboBox_AnatomicRegionModifier->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        verticalLayout->addWidget(ComboBox_AnatomicRegionModifier);


        gridLayout_3->addWidget(frame_AnatomicRegion, 0, 4, 4, 1);

        frame = new QFrame(frame_TerminologyEntry);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ComboBox_Terminology = new ctkComboBox(frame);
        ComboBox_Terminology->setObjectName(QString::fromUtf8("ComboBox_Terminology"));
        ComboBox_Terminology->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout->addWidget(ComboBox_Terminology);

        pushButton_LoadTerminology = new QPushButton(frame);
        pushButton_LoadTerminology->setObjectName(QString::fromUtf8("pushButton_LoadTerminology"));
        sizePolicy1.setHeightForWidth(pushButton_LoadTerminology->sizePolicy().hasHeightForWidth());
        pushButton_LoadTerminology->setSizePolicy(sizePolicy1);
        pushButton_LoadTerminology->setIcon(icon);
        pushButton_LoadTerminology->setIconSize(QSize(21, 21));

        horizontalLayout->addWidget(pushButton_LoadTerminology);


        gridLayout_3->addWidget(frame, 0, 0, 1, 3);

        frame_Category = new QFrame(frame_TerminologyEntry);
        frame_Category->setObjectName(QString::fromUtf8("frame_Category"));
        frame_Category->setFrameShape(QFrame::StyledPanel);
        frame_Category->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_Category);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SearchBox_Category = new ctkSearchBox(frame_Category);
        SearchBox_Category->setObjectName(QString::fromUtf8("SearchBox_Category"));
        SearchBox_Category->setShowSearchIcon(true);

        verticalLayout_2->addWidget(SearchBox_Category);

        tableWidget_Category = new QTableWidget(frame_Category);
        if (tableWidget_Category->columnCount() < 1)
            tableWidget_Category->setColumnCount(1);
        tableWidget_Category->setObjectName(QString::fromUtf8("tableWidget_Category"));
        tableWidget_Category->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_Category->setTabKeyNavigation(false);
        tableWidget_Category->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget_Category->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_Category->setColumnCount(1);
        tableWidget_Category->horizontalHeader()->setVisible(false);
        tableWidget_Category->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Category->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidget_Category);


        gridLayout_3->addWidget(frame_Category, 1, 0, 3, 1);

        frame_TerminologyOverride = new QFrame(frame_TerminologyEntry);
        frame_TerminologyOverride->setObjectName(QString::fromUtf8("frame_TerminologyOverride"));
        frame_TerminologyOverride->setFrameShape(QFrame::NoFrame);
        frame_TerminologyOverride->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_TerminologyOverride);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(4, 0, 0, 0);
        label_Name = new QLabel(frame_TerminologyOverride);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));

        gridLayout_4->addWidget(label_Name, 0, 0, 1, 1);

        lineEdit_Name = new QLineEdit(frame_TerminologyOverride);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        gridLayout_4->addWidget(lineEdit_Name, 0, 1, 1, 1);

        pushButton_ResetName = new QPushButton(frame_TerminologyOverride);
        pushButton_ResetName->setObjectName(QString::fromUtf8("pushButton_ResetName"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/ResetProperty.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ResetName->setIcon(icon1);

        gridLayout_4->addWidget(pushButton_ResetName, 0, 2, 1, 1);

        label = new QLabel(frame_TerminologyOverride);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        ColorPickerButton_RecommendedRGB = new ctkColorPickerButton(frame_TerminologyOverride);
        ColorPickerButton_RecommendedRGB->setObjectName(QString::fromUtf8("ColorPickerButton_RecommendedRGB"));
        ColorPickerButton_RecommendedRGB->setDisplayColorName(false);

        gridLayout_4->addWidget(ColorPickerButton_RecommendedRGB, 1, 1, 1, 1);

        pushButton_ResetColor = new QPushButton(frame_TerminologyOverride);
        pushButton_ResetColor->setObjectName(QString::fromUtf8("pushButton_ResetColor"));
        pushButton_ResetColor->setIcon(icon1);

        gridLayout_4->addWidget(pushButton_ResetColor, 1, 2, 1, 1);


        gridLayout_3->addWidget(frame_TerminologyOverride, 4, 0, 1, 5);


        gridLayout_2->addWidget(frame_TerminologyEntry, 3, 1, 1, 1);

        QWidget::setTabOrder(SearchBox_Type, tableWidget_Type);
        QWidget::setTabOrder(tableWidget_Type, ComboBox_TypeModifier);
        QWidget::setTabOrder(ComboBox_TypeModifier, SearchBox_AnatomicRegion);
        QWidget::setTabOrder(SearchBox_AnatomicRegion, tableWidget_AnatomicRegion);
        QWidget::setTabOrder(tableWidget_AnatomicRegion, ComboBox_AnatomicRegionModifier);
        QWidget::setTabOrder(ComboBox_AnatomicRegionModifier, ComboBox_Terminology);
        QWidget::setTabOrder(ComboBox_Terminology, pushButton_LoadTerminology);
        QWidget::setTabOrder(pushButton_LoadTerminology, AnatomicalRegionExpandButton);
        QWidget::setTabOrder(AnatomicalRegionExpandButton, ComboBox_AnatomicContext);
        QWidget::setTabOrder(ComboBox_AnatomicContext, pushButton_LoadAnatomicContext);
        QWidget::setTabOrder(pushButton_LoadAnatomicContext, SearchBox_Category);
        QWidget::setTabOrder(SearchBox_Category, tableWidget_Category);
        QWidget::setTabOrder(tableWidget_Category, CategoryExpandButton);

        retranslateUi(qSlicerTerminologyNavigatorWidget);
        QObject::connect(AnatomicalRegionExpandButton, SIGNAL(toggled(bool)), frame_AnatomicRegion, SLOT(setVisible(bool)));
        QObject::connect(CategoryExpandButton, SIGNAL(toggled(bool)), frame_Category, SLOT(setVisible(bool)));
        QObject::connect(CategoryExpandButton, SIGNAL(toggled(bool)), frame, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qSlicerTerminologyNavigatorWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qSlicerTerminologyNavigatorWidget)
    {
        qSlicerTerminologyNavigatorWidget->setWindowTitle(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "qSlicerTerminologyNavigatorWidget", nullptr));
        SearchBox_Type->setPlaceholderText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Property type...", nullptr));
        ComboBox_TypeModifier->setDefaultText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Select type modifier...", nullptr));
        ComboBox_AnatomicContext->setDefaultText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Select anatomic region context...", nullptr));
        pushButton_LoadAnatomicContext->setText(QString());
        SearchBox_AnatomicRegion->setPlaceholderText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Anatomic region...", nullptr));
        ComboBox_AnatomicRegionModifier->setDefaultText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Select anatomic region modifier...", nullptr));
        ComboBox_Terminology->setDefaultText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Select terminology...", nullptr));
        pushButton_LoadTerminology->setText(QString());
        SearchBox_Category->setPlaceholderText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Category...", nullptr));
        label_Name->setText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Name:", nullptr));
        pushButton_ResetName->setText(QString());
        label->setText(QCoreApplication::translate("qSlicerTerminologyNavigatorWidget", "Color:", nullptr));
        pushButton_ResetColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerTerminologyNavigatorWidget: public Ui_qSlicerTerminologyNavigatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERTERMINOLOGYNAVIGATORWIDGET_H
