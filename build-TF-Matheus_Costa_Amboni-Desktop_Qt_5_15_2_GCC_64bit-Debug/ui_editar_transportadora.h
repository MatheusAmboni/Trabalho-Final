/********************************************************************************
** Form generated from reading UI file 'editar_transportadora.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITAR_TRANSPORTADORA_H
#define UI_EDITAR_TRANSPORTADORA_H

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

class Ui_editar_transportadora
{
public:
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
    QPushButton *cadastro_transportadora;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *editar_transportadora)
    {
        if (editar_transportadora->objectName().isEmpty())
            editar_transportadora->setObjectName(QString::fromUtf8("editar_transportadora"));
        editar_transportadora->resize(924, 639);
        verticalLayoutWidget_4 = new QWidget(editar_transportadora);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(180, 100, 641, 431));
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

        cadastro_transportadora = new QPushButton(verticalLayoutWidget_4);
        cadastro_transportadora->setObjectName(QString::fromUtf8("cadastro_transportadora"));

        horizontalLayout_31->addWidget(cadastro_transportadora);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_31);


        retranslateUi(editar_transportadora);

        QMetaObject::connectSlotsByName(editar_transportadora);
    } // setupUi

    void retranslateUi(QWidget *editar_transportadora)
    {
        editar_transportadora->setWindowTitle(QCoreApplication::translate("editar_transportadora", "Form", nullptr));
        label_22->setText(QCoreApplication::translate("editar_transportadora", "Nome Transportadora", nullptr));
        label_25->setText(QCoreApplication::translate("editar_transportadora", "Endere\303\247o", nullptr));
        cadastro_transportadora->setText(QCoreApplication::translate("editar_transportadora", "Editar Transportadora", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editar_transportadora: public Ui_editar_transportadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITAR_TRANSPORTADORA_H
