/********************************************************************************
** Form generated from reading UI file 'qMRMLSceneFactoryWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMRMLSCENEFACTORYWIDGET_H
#define UI_QMRMLSCENEFACTORYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qMRMLSceneFactoryWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *NewSceneButton;
    QPushButton *DeleteSceneButton;
    QLineEdit *NewNodeLineEdit;
    QPushButton *NewNodeButton;
    QLineEdit *DeleteNodeLineEdit;
    QPushButton *DeleteNodeButton;

    void setupUi(QWidget *SceneFactoryWidget)
    {
        if (SceneFactoryWidget->objectName().isEmpty())
            SceneFactoryWidget->setObjectName(QString::fromUtf8("SceneFactoryWidget"));
        SceneFactoryWidget->resize(381, 148);
        gridLayout = new QGridLayout(SceneFactoryWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NewSceneButton = new QPushButton(SceneFactoryWidget);
        NewSceneButton->setObjectName(QString::fromUtf8("NewSceneButton"));

        gridLayout->addWidget(NewSceneButton, 0, 0, 1, 2);

        DeleteSceneButton = new QPushButton(SceneFactoryWidget);
        DeleteSceneButton->setObjectName(QString::fromUtf8("DeleteSceneButton"));

        gridLayout->addWidget(DeleteSceneButton, 1, 0, 1, 2);

        NewNodeLineEdit = new QLineEdit(SceneFactoryWidget);
        NewNodeLineEdit->setObjectName(QString::fromUtf8("NewNodeLineEdit"));
        NewNodeLineEdit->setEnabled(false);

        gridLayout->addWidget(NewNodeLineEdit, 2, 0, 1, 1);

        NewNodeButton = new QPushButton(SceneFactoryWidget);
        NewNodeButton->setObjectName(QString::fromUtf8("NewNodeButton"));
        NewNodeButton->setEnabled(false);

        gridLayout->addWidget(NewNodeButton, 2, 1, 1, 1);

        DeleteNodeLineEdit = new QLineEdit(SceneFactoryWidget);
        DeleteNodeLineEdit->setObjectName(QString::fromUtf8("DeleteNodeLineEdit"));
        DeleteNodeLineEdit->setEnabled(false);

        gridLayout->addWidget(DeleteNodeLineEdit, 3, 0, 1, 1);

        DeleteNodeButton = new QPushButton(SceneFactoryWidget);
        DeleteNodeButton->setObjectName(QString::fromUtf8("DeleteNodeButton"));
        DeleteNodeButton->setEnabled(false);

        gridLayout->addWidget(DeleteNodeButton, 3, 1, 1, 1);


        retranslateUi(SceneFactoryWidget);

        QMetaObject::connectSlotsByName(SceneFactoryWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneFactoryWidget)
    {
        SceneFactoryWidget->setWindowTitle(QCoreApplication::translate("qMRMLSceneFactoryWidget", "Scene Factory", nullptr));
        NewSceneButton->setText(QCoreApplication::translate("qMRMLSceneFactoryWidget", "New Scene", nullptr));
        DeleteSceneButton->setText(QCoreApplication::translate("qMRMLSceneFactoryWidget", "Delete Scene", nullptr));
        NewNodeButton->setText(QCoreApplication::translate("qMRMLSceneFactoryWidget", "New Node", nullptr));
        DeleteNodeButton->setText(QCoreApplication::translate("qMRMLSceneFactoryWidget", "Delete Node", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qMRMLSceneFactoryWidget: public Ui_qMRMLSceneFactoryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMRMLSCENEFACTORYWIDGET_H
