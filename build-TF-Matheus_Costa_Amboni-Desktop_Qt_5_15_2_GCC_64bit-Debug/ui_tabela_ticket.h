/********************************************************************************
** Form generated from reading UI file 'tabela_ticket.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELA_TICKET_H
#define UI_TABELA_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tabela_ticket
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_ticket;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *tabela_ticket)
    {
        if (tabela_ticket->objectName().isEmpty())
            tabela_ticket->setObjectName(QString::fromUtf8("tabela_ticket"));
        tabela_ticket->resize(951, 699);
        verticalLayoutWidget = new QWidget(tabela_ticket);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 10, 901, 671));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tw_ticket = new QTableWidget(verticalLayoutWidget);
        tw_ticket->setObjectName(QString::fromUtf8("tw_ticket"));

        verticalLayout->addWidget(tw_ticket);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(tabela_ticket);

        QMetaObject::connectSlotsByName(tabela_ticket);
    } // setupUi

    void retranslateUi(QWidget *tabela_ticket)
    {
        tabela_ticket->setWindowTitle(QCoreApplication::translate("tabela_ticket", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tabela_ticket", "Excluir", nullptr));
        pushButton->setText(QCoreApplication::translate("tabela_ticket", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tabela_ticket: public Ui_tabela_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELA_TICKET_H
