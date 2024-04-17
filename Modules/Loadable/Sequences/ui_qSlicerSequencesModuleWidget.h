/********************************************************************************
** Form generated from reading UI file 'qSlicerSequencesModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERSEQUENCESMODULEWIDGET_H
#define UI_QSLICERSEQUENCESMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkVTKChartView.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLSequenceBrowserPlayWidget.h"
#include "qMRMLSequenceBrowserSeekWidget.h"
#include "qMRMLSequenceEditWidget.h"
#include "qMRMLWidget.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerSequencesModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTabWidget;
    QWidget *browseSequenceTab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    qMRMLNodeComboBox *MRMLNodeComboBox_ActiveBrowser;
    ctkCollapsibleButton *InputSection;
    QGridLayout *gridLayout;
    qMRMLSequenceBrowserSeekWidget *sequenceBrowserSeekWidget;
    qMRMLSequenceBrowserPlayWidget *sequenceBrowserPlayWidget;
    ctkCollapsibleButton *SynchronizedBrowsingSection;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    qMRMLNodeComboBox *MRMLNodeComboBox_SynchronizeSequenceNode;
    QPushButton *pushButton_AddSequenceNode;
    QPushButton *pushButton_RemoveSequenceNode;
    QTableWidget *tableWidget_SynchronizedSequenceNodes;
    ctkCollapsibleButton *PlottingSection;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_iCharting;
    ctkVTKChartView *ChartView_iCharting;
    ctkCollapsibleButton *AdvancedSection;
    QFormLayout *formLayout_2;
    QLabel *label_PlaybackItemSkippingEnabled;
    QCheckBox *checkBox_PlaybackItemSkippingEnabled;
    QLabel *label_RecordMasterOnly;
    QCheckBox *checkBox_RecordMasterOnly;
    QLabel *label_MasterSequence;
    qMRMLNodeComboBox *MRMLNodeComboBox_MasterSequence;
    QLabel *label_RecordingFrameRate;
    QComboBox *comboBox_RecordingSamplingMode;
    QLabel *label_IndexDisplayMode;
    QComboBox *comboBox_IndexDisplayMode;
    QLabel *label_IndexDisplayDecimals;
    QLineEdit *lineEdit_IndexDisplayFormat;
    QWidget *editSequenceTab;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    qMRMLNodeComboBox *MRMLNodeComboBox_Sequence;
    QLabel *Label_ActiveNode;
    qMRMLSequenceEditWidget *SequenceEditWidget;

    void setupUi(qSlicerWidget *qSlicerSequencesModuleWidget)
    {
        if (qSlicerSequencesModuleWidget->objectName().isEmpty())
            qSlicerSequencesModuleWidget->setObjectName(QString::fromUtf8("qSlicerSequencesModuleWidget"));
        qSlicerSequencesModuleWidget->resize(442, 513);
        verticalLayout = new QVBoxLayout(qSlicerSequencesModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mainTabWidget = new QTabWidget(qSlicerSequencesModuleWidget);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        browseSequenceTab = new QWidget();
        browseSequenceTab->setObjectName(QString::fromUtf8("browseSequenceTab"));
        verticalLayout_4 = new QVBoxLayout(browseSequenceTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(browseSequenceTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        MRMLNodeComboBox_ActiveBrowser = new qMRMLNodeComboBox(browseSequenceTab);
        MRMLNodeComboBox_ActiveBrowser->setObjectName(QString::fromUtf8("MRMLNodeComboBox_ActiveBrowser"));
        MRMLNodeComboBox_ActiveBrowser->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSequenceBrowserNode"));
        MRMLNodeComboBox_ActiveBrowser->setRenameEnabled(true);

        horizontalLayout_7->addWidget(MRMLNodeComboBox_ActiveBrowser);


        verticalLayout_4->addLayout(horizontalLayout_7);

        InputSection = new ctkCollapsibleButton(browseSequenceTab);
        InputSection->setObjectName(QString::fromUtf8("InputSection"));
        gridLayout = new QGridLayout(InputSection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sequenceBrowserSeekWidget = new qMRMLSequenceBrowserSeekWidget(InputSection);
        sequenceBrowserSeekWidget->setObjectName(QString::fromUtf8("sequenceBrowserSeekWidget"));

        gridLayout->addWidget(sequenceBrowserSeekWidget, 3, 0, 1, 2);

        sequenceBrowserPlayWidget = new qMRMLSequenceBrowserPlayWidget(InputSection);
        sequenceBrowserPlayWidget->setObjectName(QString::fromUtf8("sequenceBrowserPlayWidget"));

        gridLayout->addWidget(sequenceBrowserPlayWidget, 2, 0, 1, 2);


        verticalLayout_4->addWidget(InputSection);

        SynchronizedBrowsingSection = new ctkCollapsibleButton(browseSequenceTab);
        SynchronizedBrowsingSection->setObjectName(QString::fromUtf8("SynchronizedBrowsingSection"));
        verticalLayout_5 = new QVBoxLayout(SynchronizedBrowsingSection);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        MRMLNodeComboBox_SynchronizeSequenceNode = new qMRMLNodeComboBox(SynchronizedBrowsingSection);
        MRMLNodeComboBox_SynchronizeSequenceNode->setObjectName(QString::fromUtf8("MRMLNodeComboBox_SynchronizeSequenceNode"));
        MRMLNodeComboBox_SynchronizeSequenceNode->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSequenceNode"));
        MRMLNodeComboBox_SynchronizeSequenceNode->setShowChildNodeTypes(false);
        MRMLNodeComboBox_SynchronizeSequenceNode->setNoneEnabled(true);
        MRMLNodeComboBox_SynchronizeSequenceNode->setAddEnabled(false);
        MRMLNodeComboBox_SynchronizeSequenceNode->setRemoveEnabled(false);

        horizontalLayout_9->addWidget(MRMLNodeComboBox_SynchronizeSequenceNode);

        pushButton_AddSequenceNode = new QPushButton(SynchronizedBrowsingSection);
        pushButton_AddSequenceNode->setObjectName(QString::fromUtf8("pushButton_AddSequenceNode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_AddSequenceNode->sizePolicy().hasHeightForWidth());
        pushButton_AddSequenceNode->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(pushButton_AddSequenceNode);

        pushButton_RemoveSequenceNode = new QPushButton(SynchronizedBrowsingSection);
        pushButton_RemoveSequenceNode->setObjectName(QString::fromUtf8("pushButton_RemoveSequenceNode"));
        sizePolicy.setHeightForWidth(pushButton_RemoveSequenceNode->sizePolicy().hasHeightForWidth());
        pushButton_RemoveSequenceNode->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(pushButton_RemoveSequenceNode);


        verticalLayout_5->addLayout(horizontalLayout_9);

        tableWidget_SynchronizedSequenceNodes = new QTableWidget(SynchronizedBrowsingSection);
        if (tableWidget_SynchronizedSequenceNodes->columnCount() < 6)
            tableWidget_SynchronizedSequenceNodes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/pqVcrPlay24.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setIcon(icon);
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/VcrRecord16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setIcon(icon1);
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_SynchronizedSequenceNodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_SynchronizedSequenceNodes->setObjectName(QString::fromUtf8("tableWidget_SynchronizedSequenceNodes"));
        tableWidget_SynchronizedSequenceNodes->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableWidget_SynchronizedSequenceNodes->setColumnCount(6);
        tableWidget_SynchronizedSequenceNodes->horizontalHeader()->setVisible(true);
        tableWidget_SynchronizedSequenceNodes->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_SynchronizedSequenceNodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_5->addWidget(tableWidget_SynchronizedSequenceNodes);


        verticalLayout_4->addWidget(SynchronizedBrowsingSection);

        PlottingSection = new ctkCollapsibleButton(browseSequenceTab);
        PlottingSection->setObjectName(QString::fromUtf8("PlottingSection"));
        PlottingSection->setEnabled(true);
        PlottingSection->setMinimumSize(QSize(0, 37));
        PlottingSection->setChecked(false);
        PlottingSection->setCollapsed(true);
        PlottingSection->setCollapsedHeight(6);
        gridLayout_2 = new QGridLayout(PlottingSection);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_iCharting = new QPushButton(PlottingSection);
        pushButton_iCharting->setObjectName(QString::fromUtf8("pushButton_iCharting"));
        pushButton_iCharting->setCheckable(true);
        pushButton_iCharting->setChecked(false);

        gridLayout_2->addWidget(pushButton_iCharting, 0, 0, 1, 1);

        ChartView_iCharting = new ctkVTKChartView(PlottingSection);
        ChartView_iCharting->setObjectName(QString::fromUtf8("ChartView_iCharting"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(ChartView_iCharting->sizePolicy().hasHeightForWidth());
        ChartView_iCharting->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(ChartView_iCharting, 1, 0, 1, 1);


        verticalLayout_4->addWidget(PlottingSection);

        AdvancedSection = new ctkCollapsibleButton(browseSequenceTab);
        AdvancedSection->setObjectName(QString::fromUtf8("AdvancedSection"));
        AdvancedSection->setChecked(false);
        AdvancedSection->setCollapsed(true);
        formLayout_2 = new QFormLayout(AdvancedSection);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_PlaybackItemSkippingEnabled = new QLabel(AdvancedSection);
        label_PlaybackItemSkippingEnabled->setObjectName(QString::fromUtf8("label_PlaybackItemSkippingEnabled"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_PlaybackItemSkippingEnabled);

        checkBox_PlaybackItemSkippingEnabled = new QCheckBox(AdvancedSection);
        checkBox_PlaybackItemSkippingEnabled->setObjectName(QString::fromUtf8("checkBox_PlaybackItemSkippingEnabled"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkBox_PlaybackItemSkippingEnabled);

        label_RecordMasterOnly = new QLabel(AdvancedSection);
        label_RecordMasterOnly->setObjectName(QString::fromUtf8("label_RecordMasterOnly"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_RecordMasterOnly);

        checkBox_RecordMasterOnly = new QCheckBox(AdvancedSection);
        checkBox_RecordMasterOnly->setObjectName(QString::fromUtf8("checkBox_RecordMasterOnly"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, checkBox_RecordMasterOnly);

        label_MasterSequence = new QLabel(AdvancedSection);
        label_MasterSequence->setObjectName(QString::fromUtf8("label_MasterSequence"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_MasterSequence);

        MRMLNodeComboBox_MasterSequence = new qMRMLNodeComboBox(AdvancedSection);
        MRMLNodeComboBox_MasterSequence->setObjectName(QString::fromUtf8("MRMLNodeComboBox_MasterSequence"));
        MRMLNodeComboBox_MasterSequence->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSequenceNode"));
        MRMLNodeComboBox_MasterSequence->setNoneEnabled(false);
        MRMLNodeComboBox_MasterSequence->setAddEnabled(false);
        MRMLNodeComboBox_MasterSequence->setRemoveEnabled(true);
        MRMLNodeComboBox_MasterSequence->setRenameEnabled(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, MRMLNodeComboBox_MasterSequence);

        label_RecordingFrameRate = new QLabel(AdvancedSection);
        label_RecordingFrameRate->setObjectName(QString::fromUtf8("label_RecordingFrameRate"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_RecordingFrameRate);

        comboBox_RecordingSamplingMode = new QComboBox(AdvancedSection);
        comboBox_RecordingSamplingMode->addItem(QString());
        comboBox_RecordingSamplingMode->addItem(QString());
        comboBox_RecordingSamplingMode->setObjectName(QString::fromUtf8("comboBox_RecordingSamplingMode"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_RecordingSamplingMode);

        label_IndexDisplayMode = new QLabel(AdvancedSection);
        label_IndexDisplayMode->setObjectName(QString::fromUtf8("label_IndexDisplayMode"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_IndexDisplayMode);

        comboBox_IndexDisplayMode = new QComboBox(AdvancedSection);
        comboBox_IndexDisplayMode->addItem(QString());
        comboBox_IndexDisplayMode->addItem(QString());
        comboBox_IndexDisplayMode->setObjectName(QString::fromUtf8("comboBox_IndexDisplayMode"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox_IndexDisplayMode);

        label_IndexDisplayDecimals = new QLabel(AdvancedSection);
        label_IndexDisplayDecimals->setObjectName(QString::fromUtf8("label_IndexDisplayDecimals"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_IndexDisplayDecimals);

        lineEdit_IndexDisplayFormat = new QLineEdit(AdvancedSection);
        lineEdit_IndexDisplayFormat->setObjectName(QString::fromUtf8("lineEdit_IndexDisplayFormat"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_IndexDisplayFormat);


        verticalLayout_4->addWidget(AdvancedSection);

        mainTabWidget->addTab(browseSequenceTab, QString());
        editSequenceTab = new QWidget();
        editSequenceTab->setObjectName(QString::fromUtf8("editSequenceTab"));
        verticalLayout_3 = new QVBoxLayout(editSequenceTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        MRMLNodeComboBox_Sequence = new qMRMLNodeComboBox(editSequenceTab);
        MRMLNodeComboBox_Sequence->setObjectName(QString::fromUtf8("MRMLNodeComboBox_Sequence"));
        MRMLNodeComboBox_Sequence->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSequenceNode"));
        MRMLNodeComboBox_Sequence->setNoneEnabled(false);
        MRMLNodeComboBox_Sequence->setEditEnabled(true);
        MRMLNodeComboBox_Sequence->setRenameEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, MRMLNodeComboBox_Sequence);

        Label_ActiveNode = new QLabel(editSequenceTab);
        Label_ActiveNode->setObjectName(QString::fromUtf8("Label_ActiveNode"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label_ActiveNode);

        SequenceEditWidget = new qMRMLSequenceEditWidget(editSequenceTab);
        SequenceEditWidget->setObjectName(QString::fromUtf8("SequenceEditWidget"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, SequenceEditWidget);


        verticalLayout_3->addLayout(formLayout);

        mainTabWidget->addTab(editSequenceTab, QString());

        verticalLayout->addWidget(mainTabWidget);


        retranslateUi(qSlicerSequencesModuleWidget);
        QObject::connect(qSlicerSequencesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_ActiveBrowser, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSequencesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_SynchronizeSequenceNode, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSequencesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_MasterSequence, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerSequencesModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_Sequence, SLOT(setMRMLScene(vtkMRMLScene*)));

        mainTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerSequencesModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerSequencesModuleWidget)
    {
        qSlicerSequencesModuleWidget->setWindowTitle(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Sequences", nullptr));
        label->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Sequence browser:", nullptr));
        MRMLNodeComboBox_ActiveBrowser->setBaseName(QCoreApplication::translate("qSlicerSequencesModuleWidget", "SequenceBrowser", nullptr));
        InputSection->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Browsing", nullptr));
        SynchronizedBrowsingSection->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Synchronized nodes", nullptr));
        MRMLNodeComboBox_SynchronizeSequenceNode->setNoneDisplay(QCoreApplication::translate("qSlicerSequencesModuleWidget", "(new sequence)", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_AddSequenceNode->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Add the selected sequence to the browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_AddSequenceNode->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_RemoveSequenceNode->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Remove the selected sequence(s) from the browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_RemoveSequenceNode->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Sequence", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "The sequence node's name.", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Proxy node", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem1->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "The \"proxy\" node for the sequence (the node to playback into or record from).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(2);
#endif
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem2->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "<html><head/><body><p>Playback - update proxy node with sequence node contents during playback.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(3);
#endif
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem3->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "<html><head/><body><p>Record - save proxy node changes into sequence node during recording.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem4->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "<html><head/><body><p>Set the proxy node name using sequence node name and index value.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_SynchronizedSequenceNodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Save changes", nullptr));
#if QT_CONFIG(tooltip)
        ___qtablewidgetitem5->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "<html><head/><body><p>Save the proxy node current state into the sequence when not in playback or recording mode.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PlottingSection->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Plotting", nullptr));
        pushButton_iCharting->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Enable interactive charting", nullptr));
        AdvancedSection->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Advanced", nullptr));
        label_PlaybackItemSkippingEnabled->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Enable item skip during playback:", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_PlaybackItemSkippingEnabled->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "If checked, items may be skipped during playback to reach the requested frame rate. If not checked then each item is displayed during playback but the playback speed may be lower than requested.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_PlaybackItemSkippingEnabled->setText(QString());
        label_RecordMasterOnly->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Record on master node only:", nullptr));
        checkBox_RecordMasterOnly->setText(QString());
        label_MasterSequence->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Master node:", nullptr));
        label_RecordingFrameRate->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Recording sampling mode:", nullptr));
        comboBox_RecordingSamplingMode->setItemText(0, QCoreApplication::translate("qSlicerSequencesModuleWidget", "Maximum", nullptr));
        comboBox_RecordingSamplingMode->setItemText(1, QCoreApplication::translate("qSlicerSequencesModuleWidget", "Limited to playback rate", nullptr));

        label_IndexDisplayMode->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Index display:", nullptr));
        comboBox_IndexDisplayMode->setItemText(0, QCoreApplication::translate("qSlicerSequencesModuleWidget", "Index", nullptr));
        comboBox_IndexDisplayMode->setItemText(1, QCoreApplication::translate("qSlicerSequencesModuleWidget", "Index value", nullptr));

        label_IndexDisplayDecimals->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Index display format:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_IndexDisplayFormat->setToolTip(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Display index string in SPRINTF format. Only the first conversion specification is replaced. Available specifiers are: fFgGeEs.", nullptr));
#endif // QT_CONFIG(tooltip)
        mainTabWidget->setTabText(mainTabWidget->indexOf(browseSequenceTab), QCoreApplication::translate("qSlicerSequencesModuleWidget", "Browse", nullptr));
        Label_ActiveNode->setText(QCoreApplication::translate("qSlicerSequencesModuleWidget", "Sequence:", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(editSequenceTab), QCoreApplication::translate("qSlicerSequencesModuleWidget", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerSequencesModuleWidget: public Ui_qSlicerSequencesModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERSEQUENCESMODULEWIDGET_H
