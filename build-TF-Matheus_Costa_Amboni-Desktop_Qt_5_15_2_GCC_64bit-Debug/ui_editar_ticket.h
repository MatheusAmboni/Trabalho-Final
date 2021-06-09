/********************************************************************************
** Form generated from reading UI file 'editar_ticket.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_TICKET_H
#define UI_EDITAR_TICKET_H

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

class Ui_editar_ticket
{
public:
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
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *txt_transportadora;
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
    QPushButton *pushButton;

    void setupUi(QWidget *editar_ticket)
    {
        if (editar_ticket->objectName().isEmpty())
            editar_ticket->setObjectName(QString::fromUtf8("editar_ticket"));
        editar_ticket->resize(864, 602);
        verticalLayoutWidget_3 = new QWidget(editar_ticket);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 10, 771, 481));
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

        pushButton = new QPushButton(editar_ticket);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 540, 111, 25));

        retranslateUi(editar_ticket);

        QMetaObject::connectSlotsByName(editar_ticket);
    } // setupUi

    void retranslateUi(QWidget *editar_ticket)
    {
        editar_ticket->setWindowTitle(QCoreApplication::translate("editar_ticket", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("editar_ticket", "Data Entrada", nullptr));
        label_7->setText(QCoreApplication::translate("editar_ticket", "Fornecedor", nullptr));
        label_8->setText(QCoreApplication::translate("editar_ticket", "Placa", nullptr));
        label_9->setText(QCoreApplication::translate("editar_ticket", "Placa 2", nullptr));
        label_10->setText(QCoreApplication::translate("editar_ticket", "Placa 3", nullptr));
        label_11->setText(QCoreApplication::translate("editar_ticket", "Motorista", nullptr));
        label_16->setText(QCoreApplication::translate("editar_ticket", "Transportadora", nullptr));
        label_12->setText(QCoreApplication::translate("editar_ticket", "Peso Bruto", nullptr));
        label_13->setText(QCoreApplication::translate("editar_ticket", "Tara", nullptr));
        label_15->setText(QCoreApplication::translate("editar_ticket", "Observa\303\247\303\243o", nullptr));
        pushButton->setText(QCoreApplication::translate("editar_ticket", "Atualizar Ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editar_ticket: public Ui_editar_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_TICKET_H
