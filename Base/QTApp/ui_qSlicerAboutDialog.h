/********************************************************************************
** Form generated from reading UI file 'qSlicerAboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERABOUTDIALOG_H
#define UI_QSLICERABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "ctkThumbnailLabel.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerAboutDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *SlicerLinksTextBrowser;
    QTextBrowser *CreditsTextBrowser;
    ctkThumbnailLabel *SlicerLabel;
    QWidget *ButtonBoxWidget;
    QHBoxLayout *ButtonBoxlLayout;
    QDialogButtonBox *ButtonBox;

    void setupUi(QDialog *qSlicerAboutDialog)
    {
        if (qSlicerAboutDialog->objectName().isEmpty())
            qSlicerAboutDialog->setObjectName(QString::fromUtf8("qSlicerAboutDialog"));
        qSlicerAboutDialog->resize(671, 396);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qSlicerAboutDialog->sizePolicy().hasHeightForWidth());
        qSlicerAboutDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(qSlicerAboutDialog);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SlicerLinksTextBrowser = new QTextBrowser(qSlicerAboutDialog);
        SlicerLinksTextBrowser->setObjectName(QString::fromUtf8("SlicerLinksTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SlicerLinksTextBrowser->sizePolicy().hasHeightForWidth());
        SlicerLinksTextBrowser->setSizePolicy(sizePolicy1);
        SlicerLinksTextBrowser->setMaximumSize(QSize(16777215, 50));
        SlicerLinksTextBrowser->setFrameShape(QFrame::NoFrame);
        SlicerLinksTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SlicerLinksTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        SlicerLinksTextBrowser->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        SlicerLinksTextBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(SlicerLinksTextBrowser, 2, 0, 1, 3);

        CreditsTextBrowser = new QTextBrowser(qSlicerAboutDialog);
        CreditsTextBrowser->setObjectName(QString::fromUtf8("CreditsTextBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CreditsTextBrowser->sizePolicy().hasHeightForWidth());
        CreditsTextBrowser->setSizePolicy(sizePolicy2);
        CreditsTextBrowser->setFrameShape(QFrame::NoFrame);
        CreditsTextBrowser->setLineWidth(0);
        CreditsTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CreditsTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CreditsTextBrowser->setReadOnly(true);
        CreditsTextBrowser->setOpenExternalLinks(true);

        gridLayout->addWidget(CreditsTextBrowser, 0, 1, 1, 2);

        SlicerLabel = new ctkThumbnailLabel(qSlicerAboutDialog);
        SlicerLabel->setObjectName(QString::fromUtf8("SlicerLabel"));
        SlicerLabel->setMinimumSize(QSize(256, 0));
        SlicerLabel->setTextPosition(Qt::AlignCenter);
        SlicerLabel->setTransformationMode(Qt::SmoothTransformation);
        SlicerLabel->setSelectedColor(QColor(255, 255, 255, 0));

        gridLayout->addWidget(SlicerLabel, 0, 0, 1, 1);

        ButtonBoxWidget = new QWidget(qSlicerAboutDialog);
        ButtonBoxWidget->setObjectName(QString::fromUtf8("ButtonBoxWidget"));
        ButtonBoxlLayout = new QHBoxLayout(ButtonBoxWidget);
        ButtonBoxlLayout->setObjectName(QString::fromUtf8("ButtonBoxlLayout"));
        ButtonBoxlLayout->setContentsMargins(0, 0, -1, -1);
        ButtonBox = new QDialogButtonBox(ButtonBoxWidget);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setStandardButtons(QDialogButtonBox::Close);

        ButtonBoxlLayout->addWidget(ButtonBox);


        gridLayout->addWidget(ButtonBoxWidget, 3, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(qSlicerAboutDialog);

        QMetaObject::connectSlotsByName(qSlicerAboutDialog);
    } // setupUi

    void retranslateUi(QDialog *qSlicerAboutDialog)
    {
        qSlicerAboutDialog->setWindowTitle(QCoreApplication::translate("qSlicerAboutDialog", "About 3D Slicer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qSlicerAboutDialog: public Ui_qSlicerAboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERABOUTDIALOG_H
