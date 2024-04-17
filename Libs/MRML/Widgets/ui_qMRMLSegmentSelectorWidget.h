/********************************************************************************
** Form generated from reading UI file 'qMRMLSegmentSelectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSEGMENTSELECTORWIDGET_H
#define UI_QMRMLSEGMENTSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include "ctkCheckableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLSegmentSelectorWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_Segment;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_SegmentIndented;
    QGridLayout *gridLayout_2;
    ctkCheckableComboBox *CheckableComboBox_Segment;
    QComboBox *comboBox_Segment;
    QLabel *label_Segment;
    QLabel *label_Message;
    qMRMLNodeComboBox *MRMLNodeComboBox_Segmentation;

    void setupUi(qMRMLWidget *qMRMLSegmentSelectorWidget)
    {
        if (qMRMLSegmentSelectorWidget->objectName().isEmpty())
            qMRMLSegmentSelectorWidget->setObjectName(QString::fromUtf8("qMRMLSegmentSelectorWidget"));
        qMRMLSegmentSelectorWidget->resize(244, 64);
        gridLayout = new QGridLayout(qMRMLSegmentSelectorWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame_Segment = new QFrame(qMRMLSegmentSelectorWidget);
        frame_Segment->setObjectName(QString::fromUtf8("frame_Segment"));
        frame_Segment->setFrameShape(QFrame::NoFrame);
        frame_Segment->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Segment);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 0, 0, 0);
        frame_SegmentIndented = new QFrame(frame_Segment);
        frame_SegmentIndented->setObjectName(QString::fromUtf8("frame_SegmentIndented"));
        frame_SegmentIndented->setFrameShape(QFrame::NoFrame);
        frame_SegmentIndented->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_SegmentIndented);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        CheckableComboBox_Segment = new ctkCheckableComboBox(frame_SegmentIndented);
        CheckableComboBox_Segment->setObjectName(QString::fromUtf8("CheckableComboBox_Segment"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckableComboBox_Segment->sizePolicy().hasHeightForWidth());
        CheckableComboBox_Segment->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(CheckableComboBox_Segment, 0, 1, 1, 1);

        comboBox_Segment = new QComboBox(frame_SegmentIndented);
        comboBox_Segment->setObjectName(QString::fromUtf8("comboBox_Segment"));
        sizePolicy.setHeightForWidth(comboBox_Segment->sizePolicy().hasHeightForWidth());
        comboBox_Segment->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_Segment, 0, 2, 1, 1);

        label_Segment = new QLabel(frame_SegmentIndented);
        label_Segment->setObjectName(QString::fromUtf8("label_Segment"));

        gridLayout_2->addWidget(label_Segment, 0, 0, 1, 1);

        label_Message = new QLabel(frame_SegmentIndented);
        label_Message->setObjectName(QString::fromUtf8("label_Message"));
        label_Message->setText(QString::fromUtf8("Messages label"));

        gridLayout_2->addWidget(label_Message, 1, 0, 1, 3);


        horizontalLayout->addWidget(frame_SegmentIndented);


        gridLayout->addWidget(frame_Segment, 1, 0, 1, 1);

        MRMLNodeComboBox_Segmentation = new qMRMLNodeComboBox(qMRMLSegmentSelectorWidget);
        MRMLNodeComboBox_Segmentation->setObjectName(QString::fromUtf8("MRMLNodeComboBox_Segmentation"));
        MRMLNodeComboBox_Segmentation->setNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLSegmentationNode"));
        MRMLNodeComboBox_Segmentation->setAddEnabled(false);
        MRMLNodeComboBox_Segmentation->setRenameEnabled(true);

        gridLayout->addWidget(MRMLNodeComboBox_Segmentation, 0, 0, 1, 1);


        retranslateUi(qMRMLSegmentSelectorWidget);
        QObject::connect(qMRMLSegmentSelectorWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MRMLNodeComboBox_Segmentation, SLOT(setMRMLScene(vtkMRMLScene*)));

        QMetaObject::connectSlotsByName(qMRMLSegmentSelectorWidget);
    } // setupUi

    void retranslateUi(qMRMLWidget *qMRMLSegmentSelectorWidget)
    {
        qMRMLSegmentSelectorWidget->setWindowTitle(QCoreApplication::translate("qMRMLSegmentSelectorWidget", "qMRMLSegmentSelectorWidget", nullptr));
        label_Segment->setText(QCoreApplication::translate("qMRMLSegmentSelectorWidget", "Segment: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSegmentSelectorWidget: public Ui_qMRMLSegmentSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSEGMENTSELECTORWIDGET_H
