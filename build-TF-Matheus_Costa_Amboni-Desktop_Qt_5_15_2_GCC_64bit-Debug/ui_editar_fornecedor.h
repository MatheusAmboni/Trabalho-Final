/********************************************************************************
** Form generated from reading UI file 'editar_fornecedor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_FORNECEDOR_H
#define UI_EDITAR_FORNECEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editar_fornecedor
{
public:
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_23;
    QLineEdit *txt_username_fornecedor;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *cadastro_fornecedor;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *editar_fornecedor)
    {
        if (editar_fornecedor->objectName().isEmpty())
            editar_fornecedor->setObjectName(QString::fromUtf8("editar_fornecedor"));
        editar_fornecedor->resize(866, 599);
        verticalLayoutWidget_5 = new QWidget(editar_fornecedor);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(140, 70, 641, 431));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_23 = new QLabel(verticalLayoutWidget_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_25->addWidget(label_23);

        txt_username_fornecedor = new QLineEdit(verticalLayoutWidget_5);
        txt_username_fornecedor->setObjectName(QString::fromUtf8("txt_username_fornecedor"));

        horizontalLayout_25->addWidget(txt_username_fornecedor);


        verticalLayout_3->addLayout(horizontalLayout_25);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_8);

        cadastro_fornecedor = new QPushButton(verticalLayoutWidget_5);
        cadastro_fornecedor->setObjectName(QString::fromUtf8("cadastro_fornecedor"));

        horizontalLayout_32->addWidget(cadastro_fornecedor);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_32);


        retranslateUi(editar_fornecedor);

        QMetaObject::connectSlotsByName(editar_fornecedor);
    } // setupUi

    void retranslateUi(QWidget *editar_fornecedor)
    {
        editar_fornecedor->setWindowTitle(QCoreApplication::translate("editar_fornecedor", "Form", nullptr));
        label_23->setText(QCoreApplication::translate("editar_fornecedor", "Nome Fornecedor", nullptr));
        cadastro_fornecedor->setText(QCoreApplication::translate("editar_fornecedor", "Editar Fornecedor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editar_fornecedor: public Ui_editar_fornecedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_FORNECEDOR_H
