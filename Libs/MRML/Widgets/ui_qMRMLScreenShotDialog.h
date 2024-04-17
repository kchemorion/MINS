/********************************************************************************
** Form generated from reading UI file 'qMRMLScreenShotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSCREENSHOTDIALOG_H
#define UI_QMRMLSCREENSHOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "ctkDoubleSpinBox.h"
#include "ctkThumbnailLabel.h"

QT_BEGIN_NAMESPACE

class Ui_qMRMLScreenShotDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *screenshotLabel;
    QHBoxLayout *topRow;
    QVBoxLayout *verticalLayout;
    QRadioButton *fullLayoutRadio;
    QRadioButton *threeDViewRadio;
    QRadioButton *redSliceViewRadio;
    QRadioButton *yellowSliceViewRadio;
    QRadioButton *greenSliceViewRadio;
    ctkThumbnailLabel *ScreenshotWidget;
    QLabel *scaleFactorLabel;
    ctkDoubleSpinBox *scaleFactorSpinBox;
    QPushButton *saveAsButton;
    QLabel *descriptionLabel;
    QTextEdit *descriptionTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qMRMLScreenShotDialog)
    {
        if (qMRMLScreenShotDialog->objectName().isEmpty())
            qMRMLScreenShotDialog->setObjectName(QString::fromUtf8("qMRMLScreenShotDialog"));
        qMRMLScreenShotDialog->resize(461, 419);
        qMRMLScreenShotDialog->setWindowTitle(QString::fromUtf8("Annotation Screenshot"));
        gridLayout = new QGridLayout(qMRMLScreenShotDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLabel = new QLabel(qMRMLScreenShotDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        nameEdit = new QLineEdit(qMRMLScreenShotDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        screenshotLabel = new QLabel(qMRMLScreenShotDialog);
        screenshotLabel->setObjectName(QString::fromUtf8("screenshotLabel"));
        screenshotLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(screenshotLabel, 1, 0, 1, 1);

        topRow = new QHBoxLayout();
        topRow->setObjectName(QString::fromUtf8("topRow"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fullLayoutRadio = new QRadioButton(qMRMLScreenShotDialog);
        fullLayoutRadio->setObjectName(QString::fromUtf8("fullLayoutRadio"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/AnnotationLayout.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullLayoutRadio->setIcon(icon);
        fullLayoutRadio->setChecked(true);

        verticalLayout->addWidget(fullLayoutRadio);

        threeDViewRadio = new QRadioButton(qMRMLScreenShotDialog);
        threeDViewRadio->setObjectName(QString::fromUtf8("threeDViewRadio"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/LayoutOneUp3DView.png"), QSize(), QIcon::Normal, QIcon::Off);
        threeDViewRadio->setIcon(icon1);
        threeDViewRadio->setChecked(false);

        verticalLayout->addWidget(threeDViewRadio);

        redSliceViewRadio = new QRadioButton(qMRMLScreenShotDialog);
        redSliceViewRadio->setObjectName(QString::fromUtf8("redSliceViewRadio"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/LayoutOneUpRedSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        redSliceViewRadio->setIcon(icon2);

        verticalLayout->addWidget(redSliceViewRadio);

        yellowSliceViewRadio = new QRadioButton(qMRMLScreenShotDialog);
        yellowSliceViewRadio->setObjectName(QString::fromUtf8("yellowSliceViewRadio"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/LayoutOneUpYellowSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        yellowSliceViewRadio->setIcon(icon3);

        verticalLayout->addWidget(yellowSliceViewRadio);

        greenSliceViewRadio = new QRadioButton(qMRMLScreenShotDialog);
        greenSliceViewRadio->setObjectName(QString::fromUtf8("greenSliceViewRadio"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/LayoutOneUpGreenSliceView.png"), QSize(), QIcon::Normal, QIcon::Off);
        greenSliceViewRadio->setIcon(icon4);

        verticalLayout->addWidget(greenSliceViewRadio);


        topRow->addLayout(verticalLayout);

        ScreenshotWidget = new ctkThumbnailLabel(qMRMLScreenShotDialog);
        ScreenshotWidget->setObjectName(QString::fromUtf8("ScreenshotWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScreenshotWidget->sizePolicy().hasHeightForWidth());
        ScreenshotWidget->setSizePolicy(sizePolicy);
        ScreenshotWidget->setMinimumSize(QSize(200, 0));
        ScreenshotWidget->setTextPosition(Qt::AlignCenter);
        ScreenshotWidget->setTransformationMode(Qt::SmoothTransformation);
        ScreenshotWidget->setSelectedColor(QColor(0, 0, 0, 0));

        topRow->addWidget(ScreenshotWidget);

        topRow->setStretch(1, 1);

        gridLayout->addLayout(topRow, 1, 1, 1, 1);

        scaleFactorLabel = new QLabel(qMRMLScreenShotDialog);
        scaleFactorLabel->setObjectName(QString::fromUtf8("scaleFactorLabel"));

        gridLayout->addWidget(scaleFactorLabel, 2, 0, 1, 1);

        scaleFactorSpinBox = new ctkDoubleSpinBox(qMRMLScreenShotDialog);
        scaleFactorSpinBox->setObjectName(QString::fromUtf8("scaleFactorSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scaleFactorSpinBox->sizePolicy().hasHeightForWidth());
        scaleFactorSpinBox->setSizePolicy(sizePolicy1);
        scaleFactorSpinBox->setDecimals(1);
        scaleFactorSpinBox->setMinimum(1.000000000000000);
        scaleFactorSpinBox->setMaximum(10.000000000000000);
        scaleFactorSpinBox->setSingleStep(1.000000000000000);

        gridLayout->addWidget(scaleFactorSpinBox, 2, 1, 1, 1);

        saveAsButton = new QPushButton(qMRMLScreenShotDialog);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));

        gridLayout->addWidget(saveAsButton, 3, 0, 1, 1);

        descriptionLabel = new QLabel(qMRMLScreenShotDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 4, 0, 1, 1);

        descriptionTextEdit = new QTextEdit(qMRMLScreenShotDialog);
        descriptionTextEdit->setObjectName(QString::fromUtf8("descriptionTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(descriptionTextEdit->sizePolicy().hasHeightForWidth());
        descriptionTextEdit->setSizePolicy(sizePolicy2);
        descriptionTextEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(descriptionTextEdit, 5, 0, 1, 2);

        buttonBox = new QDialogButtonBox(qMRMLScreenShotDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);


        retranslateUi(qMRMLScreenShotDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), qMRMLScreenShotDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), qMRMLScreenShotDialog, SLOT(accept()));
        QObject::connect(fullLayoutRadio, SIGNAL(clicked()), qMRMLScreenShotDialog, SLOT(grabScreenShot()));
        QObject::connect(threeDViewRadio, SIGNAL(clicked()), qMRMLScreenShotDialog, SLOT(grabScreenShot()));
        QObject::connect(redSliceViewRadio, SIGNAL(clicked()), qMRMLScreenShotDialog, SLOT(grabScreenShot()));
        QObject::connect(yellowSliceViewRadio, SIGNAL(clicked()), qMRMLScreenShotDialog, SLOT(grabScreenShot()));
        QObject::connect(greenSliceViewRadio, SIGNAL(clicked()), qMRMLScreenShotDialog, SLOT(grabScreenShot()));
        QObject::connect(scaleFactorSpinBox, SIGNAL(valueChanged(double)), qMRMLScreenShotDialog, SLOT(grabScreenShot()));

        QMetaObject::connectSlotsByName(qMRMLScreenShotDialog);
    } // setupUi

    void retranslateUi(QDialog *qMRMLScreenShotDialog)
    {
        nameLabel->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Name:", nullptr));
        screenshotLabel->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Thumbnail:", nullptr));
        fullLayoutRadio->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Full layout", nullptr));
        threeDViewRadio->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "3D View", nullptr));
        redSliceViewRadio->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Red Slice View", nullptr));
        yellowSliceViewRadio->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Yellow Slice View", nullptr));
        greenSliceViewRadio->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Green Slice View", nullptr));
        scaleFactorLabel->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Scale factor:", nullptr));
#if QT_CONFIG(tooltip)
        scaleFactorSpinBox->setToolTip(QCoreApplication::translate("qMRMLScreenShotDialog", "Adjust the Magnification factor.", nullptr));
#endif // QT_CONFIG(tooltip)
        scaleFactorSpinBox->setSuffix(QCoreApplication::translate("qMRMLScreenShotDialog", "x", nullptr));
        saveAsButton->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Save As...:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("qMRMLScreenShotDialog", "Description:", nullptr));
#if QT_CONFIG(tooltip)
        buttonBox->setToolTip(QCoreApplication::translate("qMRMLScreenShotDialog", "Save snapshot via File Save. Edit in Annotations module.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)qMRMLScreenShotDialog;
    } // retranslateUi

};

namespace Ui {
    class qMRMLScreenShotDialog: public Ui_qMRMLScreenShotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSCREENSHOTDIALOG_H
