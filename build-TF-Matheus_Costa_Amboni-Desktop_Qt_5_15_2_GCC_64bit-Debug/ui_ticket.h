/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticket
{
public:
    QStackedWidget *stackedWidget;
    QWidget *pesagem;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_11;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *txt_data;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *txt_fornecedor;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *txt_placa;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *txt_placa2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *txt_placa3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLineEdit *txt_motorista;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *txt_transportadora;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLineEdit *txt_pesobruto;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QLineEdit *txt_tara;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *txt_observacao;
    QWidget *fornecedor;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_23;
    QLineEdit *txt_username_fornecedor;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton;
    QPushButton *cadastro_fornecedor;
    QSpacerItem *horizontalSpacer_9;
    QWidget *motorista;
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
    QPushButton *pushButton_2;
    QPushButton *cadastro_motorista;
    QSpacerItem *horizontalSpacer_5;
    QWidget *transportadora;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_22;
    QLineEdit *txt_nome_transportadora;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_25;
    QLineEdit *txt_endereco_transportadora;
    QHBoxLayout *horizontalLayout_31;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_10;
    QPushButton *cadastro_transportadora;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *ticket)
    {
        if (ticket->objectName().isEmpty())
            ticket->setObjectName(QString::fromUtf8("ticket"));
        ticket->resize(947, 663);
        stackedWidget = new QStackedWidget(ticket);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(110, 20, 771, 591));
        pesagem = new QWidget();
        pesagem->setObjectName(QString::fromUtf8("pesagem"));
        horizontalLayoutWidget_2 = new QWidget(pesagem);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 510, 771, 80));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_19->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_19->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_19->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_19->addWidget(pushButton_5);

        pushButton_11 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_19->addWidget(pushButton_11);

        verticalLayoutWidget_3 = new QWidget(pesagem);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 771, 481));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        txt_data = new QLineEdit(verticalLayoutWidget_3);
        txt_data->setObjectName(QString::fromUtf8("txt_data"));

        horizontalLayout_8->addWidget(txt_data);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        txt_fornecedor = new QLineEdit(verticalLayoutWidget_3);
        txt_fornecedor->setObjectName(QString::fromUtf8("txt_fornecedor"));

        horizontalLayout_9->addWidget(txt_fornecedor);

        pushButton_7 = new QPushButton(verticalLayoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_9->addWidget(pushButton_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        txt_placa = new QLineEdit(verticalLayoutWidget_3);
        txt_placa->setObjectName(QString::fromUtf8("txt_placa"));

        horizontalLayout_10->addWidget(txt_placa);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        txt_placa2 = new QLineEdit(verticalLayoutWidget_3);
        txt_placa2->setObjectName(QString::fromUtf8("txt_placa2"));

        horizontalLayout_11->addWidget(txt_placa2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_12->addWidget(label_10);

        txt_placa3 = new QLineEdit(verticalLayoutWidget_3);
        txt_placa3->setObjectName(QString::fromUtf8("txt_placa3"));

        horizontalLayout_12->addWidget(txt_placa3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        txt_motorista = new QLineEdit(verticalLayoutWidget_3);
        txt_motorista->setObjectName(QString::fromUtf8("txt_motorista"));

        horizontalLayout_13->addWidget(txt_motorista);

        pushButton_8 = new QPushButton(verticalLayoutWidget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_13->addWidget(pushButton_8);


        horizontalLayout_12->addLayout(horizontalLayout_13);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(verticalLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_18->addWidget(label_16);

        txt_transportadora = new QLineEdit(verticalLayoutWidget_3);
        txt_transportadora->setObjectName(QString::fromUtf8("txt_transportadora"));

        horizontalLayout_18->addWidget(txt_transportadora);

        pushButton_9 = new QPushButton(verticalLayoutWidget_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_18->addWidget(pushButton_9);


        verticalLayout_8->addLayout(horizontalLayout_18);


        horizontalLayout_7->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_14->addWidget(label_12);

        txt_pesobruto = new QLineEdit(verticalLayoutWidget_3);
        txt_pesobruto->setObjectName(QString::fromUtf8("txt_pesobruto"));

        horizontalLayout_14->addWidget(txt_pesobruto);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(verticalLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_15->addWidget(label_13);

        txt_tara = new QLineEdit(verticalLayoutWidget_3);
        txt_tara->setObjectName(QString::fromUtf8("txt_tara"));

        horizontalLayout_15->addWidget(txt_tara);


        verticalLayout_9->addLayout(horizontalLayout_15);


        horizontalLayout_7->addLayout(verticalLayout_9);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(verticalLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        txt_observacao = new QLineEdit(verticalLayoutWidget_3);
        txt_observacao->setObjectName(QString::fromUtf8("txt_observacao"));

        horizontalLayout_17->addWidget(txt_observacao);


        verticalLayout_7->addLayout(horizontalLayout_17);

        stackedWidget->addWidget(pesagem);
        fornecedor = new QWidget();
        fornecedor->setObjectName(QString::fromUtf8("fornecedor"));
        verticalLayoutWidget_5 = new QWidget(fornecedor);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(40, 80, 641, 431));
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

        pushButton = new QPushButton(verticalLayoutWidget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_32->addWidget(pushButton);

        cadastro_fornecedor = new QPushButton(verticalLayoutWidget_5);
        cadastro_fornecedor->setObjectName(QString::fromUtf8("cadastro_fornecedor"));

        horizontalLayout_32->addWidget(cadastro_fornecedor);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_32);

        stackedWidget->addWidget(fornecedor);
        motorista = new QWidget();
        motorista->setObjectName(QString::fromUtf8("motorista"));
        verticalLayoutWidget_2 = new QWidget(motorista);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, 90, 641, 431));
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

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_24->addWidget(pushButton_2);

        cadastro_motorista = new QPushButton(verticalLayoutWidget_2);
        cadastro_motorista->setObjectName(QString::fromUtf8("cadastro_motorista"));

        horizontalLayout_24->addWidget(cadastro_motorista);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_24);

        stackedWidget->addWidget(motorista);
        transportadora = new QWidget();
        transportadora->setObjectName(QString::fromUtf8("transportadora"));
        verticalLayoutWidget_4 = new QWidget(transportadora);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(60, 110, 641, 431));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_22 = new QLabel(verticalLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_3->addWidget(label_22);

        txt_nome_transportadora = new QLineEdit(verticalLayoutWidget_4);
        txt_nome_transportadora->setObjectName(QString::fromUtf8("txt_nome_transportadora"));

        horizontalLayout_3->addWidget(txt_nome_transportadora);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_25 = new QLabel(verticalLayoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_27->addWidget(label_25);

        txt_endereco_transportadora = new QLineEdit(verticalLayoutWidget_4);
        txt_endereco_transportadora->setObjectName(QString::fromUtf8("txt_endereco_transportadora"));

        horizontalLayout_27->addWidget(txt_endereco_transportadora);


        verticalLayout_2->addLayout(horizontalLayout_27);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_6);

        pushButton_10 = new QPushButton(verticalLayoutWidget_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_31->addWidget(pushButton_10);

        cadastro_transportadora = new QPushButton(verticalLayoutWidget_4);
        cadastro_transportadora->setObjectName(QString::fromUtf8("cadastro_transportadora"));

        horizontalLayout_31->addWidget(cadastro_transportadora);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_31);

        stackedWidget->addWidget(transportadora);

        retranslateUi(ticket);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ticket);
    } // setupUi

    void retranslateUi(QWidget *ticket)
    {
        ticket->setWindowTitle(QCoreApplication::translate("ticket", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ticket", "Cadastrar Transportadora ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ticket", "Cadastrar Fornecedor", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ticket", "Cadastrar Motorista", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ticket", "Imprimir Ticket", nullptr));
        pushButton_11->setText(QCoreApplication::translate("ticket", "Ver Tickets", nullptr));
        label_6->setText(QCoreApplication::translate("ticket", "Data Entrada", nullptr));
        label_7->setText(QCoreApplication::translate("ticket", "Fornecedor", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ticket", "Fornecedores", nullptr));
        label_8->setText(QCoreApplication::translate("ticket", "Placa", nullptr));
        label_9->setText(QCoreApplication::translate("ticket", "Placa 2", nullptr));
        label_10->setText(QCoreApplication::translate("ticket", "Placa 3", nullptr));
        label_11->setText(QCoreApplication::translate("ticket", "Motorista", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ticket", "Motoristas", nullptr));
        label_16->setText(QCoreApplication::translate("ticket", "Transportadora", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ticket", "Transportadoras", nullptr));
        label_12->setText(QCoreApplication::translate("ticket", "Peso Bruto", nullptr));
        label_13->setText(QCoreApplication::translate("ticket", "Tara", nullptr));
        label_15->setText(QCoreApplication::translate("ticket", "Observa\303\247\303\243o", nullptr));
        label_23->setText(QCoreApplication::translate("ticket", "Nome Fornecedor", nullptr));
        pushButton->setText(QCoreApplication::translate("ticket", "Voltar", nullptr));
        cadastro_fornecedor->setText(QCoreApplication::translate("ticket", "Cadastrar Fornecedor", nullptr));
        label_14->setText(QCoreApplication::translate("ticket", "CNPJ/CPF", nullptr));
        label_17->setText(QCoreApplication::translate("ticket", "Raz\303\243o social", nullptr));
        label_18->setText(QCoreApplication::translate("ticket", "Nome fantasia", nullptr));
        label_19->setText(QCoreApplication::translate("ticket", "Endere\303\247o", nullptr));
        label_20->setText(QCoreApplication::translate("ticket", "DDD", nullptr));
        label_21->setText(QCoreApplication::translate("ticket", "Telefone", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ticket", "Voltar", nullptr));
        cadastro_motorista->setText(QCoreApplication::translate("ticket", "Cadastrar Motorista", nullptr));
        label_22->setText(QCoreApplication::translate("ticket", "Nome Transportadora", nullptr));
        label_25->setText(QCoreApplication::translate("ticket", "Endere\303\247o", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ticket", "Voltar", nullptr));
        cadastro_transportadora->setText(QCoreApplication::translate("ticket", "Cadastrar Transportadora", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticket: public Ui_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
