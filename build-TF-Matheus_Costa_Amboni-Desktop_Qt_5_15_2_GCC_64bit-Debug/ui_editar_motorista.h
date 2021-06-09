/********************************************************************************
** Form generated from reading UI file 'editar_motorista.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_MOTORISTA_H
#define UI_EDITAR_MOTORISTA_H

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

class Ui_editar_motorista
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLineEdit *txt_cpf_motorista;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QLineEdit *txt_razao_social;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_18;
    QLineEdit *txt_nome_motorista;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QLineEdit *txt_endereco;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QLineEdit *txt_ddd;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_21;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer;
    QPushButton *cadastro_motorista;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *editar_motorista)
    {
        if (editar_motorista->objectName().isEmpty())
            editar_motorista->setObjectName(QString::fromUtf8("editar_motorista"));
        editar_motorista->resize(905, 632);
        verticalLayoutWidget_2 = new QWidget(editar_motorista);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(140, 70, 641, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout->addWidget(label_14);

        txt_cpf_motorista = new QLineEdit(verticalLayoutWidget_2);
        txt_cpf_motorista->setObjectName(QString::fromUtf8("txt_cpf_motorista"));

        horizontalLayout->addWidget(txt_cpf_motorista);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);

        txt_razao_social = new QLineEdit(verticalLayoutWidget_2);
        txt_razao_social->setObjectName(QString::fromUtf8("txt_razao_social"));

        horizontalLayout_2->addWidget(txt_razao_social);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_16->addWidget(label_18);

        txt_nome_motorista = new QLineEdit(verticalLayoutWidget_2);
        txt_nome_motorista->setObjectName(QString::fromUtf8("txt_nome_motorista"));

        horizontalLayout_16->addWidget(txt_nome_motorista);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_20->addWidget(label_19);

        txt_endereco = new QLineEdit(verticalLayoutWidget_2);
        txt_endereco->setObjectName(QString::fromUtf8("txt_endereco"));

        horizontalLayout_20->addWidget(txt_endereco);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_20 = new QLabel(verticalLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_22->addWidget(label_20);

        txt_ddd = new QLineEdit(verticalLayoutWidget_2);
        txt_ddd->setObjectName(QString::fromUtf8("txt_ddd"));

        horizontalLayout_22->addWidget(txt_ddd);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_21 = new QLabel(verticalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_23->addWidget(label_21);

        txt_telefone = new QLineEdit(verticalLayoutWidget_2);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_23->addWidget(txt_telefone);


        horizontalLayout_22->addLayout(horizontalLayout_23);


        horizontalLayout_21->addLayout(horizontalLayout_22);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer);

        cadastro_motorista = new QPushButton(verticalLayoutWidget_2);
        cadastro_motorista->setObjectName(QString::fromUtf8("cadastro_motorista"));

        horizontalLayout_24->addWidget(cadastro_motorista);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_24);


        retranslateUi(editar_motorista);

        QMetaObject::connectSlotsByName(editar_motorista);
    } // setupUi

    void retranslateUi(QWidget *editar_motorista)
    {
        editar_motorista->setWindowTitle(QCoreApplication::translate("editar_motorista", "Form", nullptr));
        label_14->setText(QCoreApplication::translate("editar_motorista", "CNPJ/CPF", nullptr));
        label_17->setText(QCoreApplication::translate("editar_motorista", "Raz\303\243o social", nullptr));
        label_18->setText(QCoreApplication::translate("editar_motorista", "Nome fantasia", nullptr));
        label_19->setText(QCoreApplication::translate("editar_motorista", "Endere\303\247o", nullptr));
        label_20->setText(QCoreApplication::translate("editar_motorista", "DDD", nullptr));
        label_21->setText(QCoreApplication::translate("editar_motorista", "Telefone", nullptr));
        cadastro_motorista->setText(QCoreApplication::translate("editar_motorista", "Cadastrar Motorista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editar_motorista: public Ui_editar_motorista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_MOTORISTA_H
