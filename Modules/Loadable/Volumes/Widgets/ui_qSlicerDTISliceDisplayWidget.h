/********************************************************************************
** Form generated from reading UI file 'qSlicerDTISliceDisplayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERDTISLICEDISPLAYWIDGET_H
#define UI_QSLICERDTISLICEDISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "ctkRangeWidget.h"
#include "ctkSliderWidget.h"
#include "qMRMLColorTableComboBox.h"
#include "qMRMLNodeComboBox.h"
#include "qMRMLScalarInvariantComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerDTISliceDisplayWidget
{
public:
    QFormLayout *formLayout;
    QLabel *GlyphVisibilityLabel;
    QCheckBox *GlyphVisibilityCheckBox;
    QLabel *GlypthOpacityLabel;
    ctkSliderWidget *GlyphOpacitySliderWidget;
    QLabel *GlyphColorTableLabel;
    qMRMLColorTableComboBox *GlyphScalarColorTableComboBox;
    QLabel *GlyphColorByScalarLabel;
    qMRMLScalarInvariantComboBox *GlyphColorByScalarComboBox;
    QLabel *GlyphScalarRangeLabel;
    QLabel *GlyphGeometryLabel;
    QComboBox *GlyphGeometryComboBox;
    QLabel *GlyphScaleLabel;
    ctkSliderWidget *GlyphScaleSliderWidget;
    QLabel *GlyphSpacingLabel;
    ctkSliderWidget *GlyphSpacingSliderWidget;
    QStackedWidget *GlyphAdvancedPropertiesWidget;
    QWidget *LinePropertiesPage;
    QFormLayout *formLayout_2;
    QLabel *LineEigenVectorLabel;
    QComboBox *LineEigenVectorComboBox;
    QWidget *TubePropertiesPage;
    QFormLayout *formLayout_3;
    QLabel *TubeEigenVectorLabel;
    QComboBox *TubeEigenVectorComboBox;
    QWidget *EllipsoidPropertiesPage;
    QHBoxLayout *horizontalLayout;
    QCheckBox *GlyphManualScalarRangeCheckBox;
    ctkRangeWidget *GlyphScalarRangeWidget;

    void setupUi(qSlicerWidget *qSlicerDTISliceDisplayWidget)
    {
        if (qSlicerDTISliceDisplayWidget->objectName().isEmpty())
            qSlicerDTISliceDisplayWidget->setObjectName(QString::fromUtf8("qSlicerDTISliceDisplayWidget"));
        qSlicerDTISliceDisplayWidget->resize(280, 243);
        formLayout = new QFormLayout(qSlicerDTISliceDisplayWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        GlyphVisibilityLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphVisibilityLabel->setObjectName(QString::fromUtf8("GlyphVisibilityLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, GlyphVisibilityLabel);

        GlyphVisibilityCheckBox = new QCheckBox(qSlicerDTISliceDisplayWidget);
        GlyphVisibilityCheckBox->setObjectName(QString::fromUtf8("GlyphVisibilityCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, GlyphVisibilityCheckBox);

        GlypthOpacityLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlypthOpacityLabel->setObjectName(QString::fromUtf8("GlypthOpacityLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, GlypthOpacityLabel);

        GlyphOpacitySliderWidget = new ctkSliderWidget(qSlicerDTISliceDisplayWidget);
        GlyphOpacitySliderWidget->setObjectName(QString::fromUtf8("GlyphOpacitySliderWidget"));
        GlyphOpacitySliderWidget->setSingleStep(0.050000000000000);
        GlyphOpacitySliderWidget->setPageStep(0.100000000000000);
        GlyphOpacitySliderWidget->setMaximum(1.000000000000000);
        GlyphOpacitySliderWidget->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, GlyphOpacitySliderWidget);

        GlyphColorTableLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphColorTableLabel->setObjectName(QString::fromUtf8("GlyphColorTableLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, GlyphColorTableLabel);

        GlyphScalarColorTableComboBox = new qMRMLColorTableComboBox(qSlicerDTISliceDisplayWidget);
        GlyphScalarColorTableComboBox->setObjectName(QString::fromUtf8("GlyphScalarColorTableComboBox"));
        GlyphScalarColorTableComboBox->setHideChildNodeTypes(QStringList() << QString::fromUtf8("vtkMRMLDiffusionTensorDisplayPropertiesNode"));

        formLayout->setWidget(2, QFormLayout::FieldRole, GlyphScalarColorTableComboBox);

        GlyphColorByScalarLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphColorByScalarLabel->setObjectName(QString::fromUtf8("GlyphColorByScalarLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, GlyphColorByScalarLabel);

        GlyphColorByScalarComboBox = new qMRMLScalarInvariantComboBox(qSlicerDTISliceDisplayWidget);
        GlyphColorByScalarComboBox->setObjectName(QString::fromUtf8("GlyphColorByScalarComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, GlyphColorByScalarComboBox);

        GlyphScalarRangeLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphScalarRangeLabel->setObjectName(QString::fromUtf8("GlyphScalarRangeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, GlyphScalarRangeLabel);

        GlyphGeometryLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphGeometryLabel->setObjectName(QString::fromUtf8("GlyphGeometryLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, GlyphGeometryLabel);

        GlyphGeometryComboBox = new QComboBox(qSlicerDTISliceDisplayWidget);
        GlyphGeometryComboBox->addItem(QString());
        GlyphGeometryComboBox->addItem(QString());
        GlyphGeometryComboBox->addItem(QString());
        GlyphGeometryComboBox->setObjectName(QString::fromUtf8("GlyphGeometryComboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, GlyphGeometryComboBox);

        GlyphScaleLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphScaleLabel->setObjectName(QString::fromUtf8("GlyphScaleLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, GlyphScaleLabel);

        GlyphScaleSliderWidget = new ctkSliderWidget(qSlicerDTISliceDisplayWidget);
        GlyphScaleSliderWidget->setObjectName(QString::fromUtf8("GlyphScaleSliderWidget"));
        GlyphScaleSliderWidget->setPageStep(10.000000000000000);
        GlyphScaleSliderWidget->setMinimum(0.010000000000000);
        GlyphScaleSliderWidget->setMaximum(200.000000000000000);
        GlyphScaleSliderWidget->setValue(50.000000000000000);
        GlyphScaleSliderWidget->setTracking(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, GlyphScaleSliderWidget);

        GlyphSpacingLabel = new QLabel(qSlicerDTISliceDisplayWidget);
        GlyphSpacingLabel->setObjectName(QString::fromUtf8("GlyphSpacingLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, GlyphSpacingLabel);

        GlyphSpacingSliderWidget = new ctkSliderWidget(qSlicerDTISliceDisplayWidget);
        GlyphSpacingSliderWidget->setObjectName(QString::fromUtf8("GlyphSpacingSliderWidget"));
        GlyphSpacingSliderWidget->setMinimum(1.000000000000000);
        GlyphSpacingSliderWidget->setMaximum(50.000000000000000);
        GlyphSpacingSliderWidget->setValue(10.000000000000000);
        GlyphSpacingSliderWidget->setTracking(false);

        formLayout->setWidget(7, QFormLayout::FieldRole, GlyphSpacingSliderWidget);

        GlyphAdvancedPropertiesWidget = new QStackedWidget(qSlicerDTISliceDisplayWidget);
        GlyphAdvancedPropertiesWidget->setObjectName(QString::fromUtf8("GlyphAdvancedPropertiesWidget"));
        LinePropertiesPage = new QWidget();
        LinePropertiesPage->setObjectName(QString::fromUtf8("LinePropertiesPage"));
        formLayout_2 = new QFormLayout(LinePropertiesPage);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        LineEigenVectorLabel = new QLabel(LinePropertiesPage);
        LineEigenVectorLabel->setObjectName(QString::fromUtf8("LineEigenVectorLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, LineEigenVectorLabel);

        LineEigenVectorComboBox = new QComboBox(LinePropertiesPage);
        LineEigenVectorComboBox->addItem(QString());
        LineEigenVectorComboBox->addItem(QString());
        LineEigenVectorComboBox->addItem(QString());
        LineEigenVectorComboBox->setObjectName(QString::fromUtf8("LineEigenVectorComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LineEigenVectorComboBox);

        GlyphAdvancedPropertiesWidget->addWidget(LinePropertiesPage);
        TubePropertiesPage = new QWidget();
        TubePropertiesPage->setObjectName(QString::fromUtf8("TubePropertiesPage"));
        formLayout_3 = new QFormLayout(TubePropertiesPage);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        TubeEigenVectorLabel = new QLabel(TubePropertiesPage);
        TubeEigenVectorLabel->setObjectName(QString::fromUtf8("TubeEigenVectorLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, TubeEigenVectorLabel);

        TubeEigenVectorComboBox = new QComboBox(TubePropertiesPage);
        TubeEigenVectorComboBox->addItem(QString());
        TubeEigenVectorComboBox->addItem(QString());
        TubeEigenVectorComboBox->addItem(QString());
        TubeEigenVectorComboBox->setObjectName(QString::fromUtf8("TubeEigenVectorComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, TubeEigenVectorComboBox);

        GlyphAdvancedPropertiesWidget->addWidget(TubePropertiesPage);
        EllipsoidPropertiesPage = new QWidget();
        EllipsoidPropertiesPage->setObjectName(QString::fromUtf8("EllipsoidPropertiesPage"));
        GlyphAdvancedPropertiesWidget->addWidget(EllipsoidPropertiesPage);

        formLayout->setWidget(8, QFormLayout::SpanningRole, GlyphAdvancedPropertiesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        GlyphManualScalarRangeCheckBox = new QCheckBox(qSlicerDTISliceDisplayWidget);
        GlyphManualScalarRangeCheckBox->setObjectName(QString::fromUtf8("GlyphManualScalarRangeCheckBox"));

        horizontalLayout->addWidget(GlyphManualScalarRangeCheckBox);

        GlyphScalarRangeWidget = new ctkRangeWidget(qSlicerDTISliceDisplayWidget);
        GlyphScalarRangeWidget->setObjectName(QString::fromUtf8("GlyphScalarRangeWidget"));
        GlyphScalarRangeWidget->setEnabled(false);

        horizontalLayout->addWidget(GlyphScalarRangeWidget);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(qSlicerDTISliceDisplayWidget);
        QObject::connect(qSlicerDTISliceDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GlyphScalarColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(GlyphManualScalarRangeCheckBox, SIGNAL(toggled(bool)), GlyphScalarRangeWidget, SLOT(setEnabled(bool)));
        QObject::connect(GlyphGeometryComboBox, SIGNAL(currentIndexChanged(int)), GlyphAdvancedPropertiesWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(qSlicerDTISliceDisplayWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), GlyphScalarColorTableComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));

        GlyphAdvancedPropertiesWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qSlicerDTISliceDisplayWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerDTISliceDisplayWidget)
    {
        qSlicerDTISliceDisplayWidget->setWindowTitle(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Diffusion Tensor Volume Slice Display", nullptr));
        GlyphVisibilityLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Visibility:", nullptr));
        GlyphVisibilityCheckBox->setText(QString());
        GlypthOpacityLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Opacity:", nullptr));
        GlyphColorTableLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Scalar ColorMap:", nullptr));
        GlyphColorByScalarLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Color by Scalar:", nullptr));
        GlyphScalarRangeLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Scalar Range:", nullptr));
        GlyphGeometryLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Glyph Type:", nullptr));
        GlyphGeometryComboBox->setItemText(0, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Lines", nullptr));
        GlyphGeometryComboBox->setItemText(1, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Tubes", nullptr));
        GlyphGeometryComboBox->setItemText(2, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Ellipsoids", nullptr));

        GlyphScaleLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Scale Factor:", nullptr));
        GlyphSpacingLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Spacing:", nullptr));
        LineEigenVectorLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Glyph EigenVector:", nullptr));
        LineEigenVectorComboBox->setItemText(0, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Major", nullptr));
        LineEigenVectorComboBox->setItemText(1, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Middle", nullptr));
        LineEigenVectorComboBox->setItemText(2, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Minor", nullptr));

        TubeEigenVectorLabel->setText(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Glyph EigenVector:", nullptr));
        TubeEigenVectorComboBox->setItemText(0, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Major", nullptr));
        TubeEigenVectorComboBox->setItemText(1, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Middle", nullptr));
        TubeEigenVectorComboBox->setItemText(2, QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Minor", nullptr));

#if QT_CONFIG(tooltip)
        GlyphManualScalarRangeCheckBox->setToolTip(QCoreApplication::translate("qSlicerDTISliceDisplayWidget", "Manual or Auto scalar range", nullptr));
#endif // QT_CONFIG(tooltip)
        GlyphManualScalarRangeCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qSlicerDTISliceDisplayWidget: public Ui_qSlicerDTISliceDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERDTISLICEDISPLAYWIDGET_H
