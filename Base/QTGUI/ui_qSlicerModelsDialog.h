/********************************************************************************
** Form generated from reading UI file 'qSlicerModelsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERMODELSDIALOG_H
#define UI_QSLICERMODELSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_qSlicerModelsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *AddModelToolButton;
    QToolButton *AddModelDirectoryToolButton;

    void setupUi(QDialog *qSlicerModelsDialog)
    {
        if (qSlicerModelsDialog->objectName().isEmpty())
            qSlicerModelsDialog->setObjectName(QString::fromUtf8("qSlicerModelsDialog"));
        qSlicerModelsDialog->resize(321, 119);
        horizontalLayout = new QHBoxLayout(qSlicerModelsDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddModelToolButton = new QToolButton(qSlicerModelsDialog);
        AddModelToolButton->setObjectName(QString::fromUtf8("AddModelToolButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddModelToolButton->sizePolicy().hasHeightForWidth());
        AddModelToolButton->setSizePolicy(sizePolicy);
        AddModelToolButton->setIconSize(QSize(128, 128));
        AddModelToolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(AddModelToolButton);

        AddModelDirectoryToolButton = new QToolButton(qSlicerModelsDialog);
        AddModelDirectoryToolButton->setObjectName(QString::fromUtf8("AddModelDirectoryToolButton"));
        sizePolicy.setHeightForWidth(AddModelDirectoryToolButton->sizePolicy().hasHeightForWidth());
        AddModelDirectoryToolButton->setSizePolicy(sizePolicy);
        AddModelDirectoryToolButton->setIconSize(QSize(128, 128));
        AddModelDirectoryToolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(AddModelDirectoryToolButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(qSlicerModelsDialog);

        QMetaObject::connectSlotsByName(qSlicerModelsDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerModelsDialog)
    {
        qSlicerModelsDialog->setWindowTitle(QCoreApplication::translate("qSlicerModelsDialog", "Add a 3D model", nullptr));
        AddModelToolButton->setText(QCoreApplication::translate("qSlicerModelsDialog", "Add Model file(s)", nullptr));
        AddModelDirectoryToolButton->setText(QCoreApplication::translate("qSlicerModelsDialog", "Add Model directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerModelsDialog: public Ui_qSlicerModelsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERMODELSDIALOG_H
