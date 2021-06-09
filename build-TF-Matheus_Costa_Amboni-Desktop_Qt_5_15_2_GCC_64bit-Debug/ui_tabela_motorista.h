/********************************************************************************
** Form generated from reading UI file 'tabela_motorista.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELA_MOTORISTA_H
#define UI_TABELA_MOTORISTA_H

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

class Ui_tabela_motorista
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_motorista;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *tabela_motorista)
    {
        if (tabela_motorista->objectName().isEmpty())
            tabela_motorista->setObjectName(QString::fromUtf8("tabela_motorista"));
        tabela_motorista->resize(935, 697);
        verticalLayoutWidget = new QWidget(tabela_motorista);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 60, 811, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tw_motorista = new QTableWidget(verticalLayoutWidget);
        tw_motorista->setObjectName(QString::fromUtf8("tw_motorista"));

        verticalLayout->addWidget(tw_motorista);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(tabela_motorista);

        QMetaObject::connectSlotsByName(tabela_motorista);
    } // setupUi

    void retranslateUi(QWidget *tabela_motorista)
    {
        tabela_motorista->setWindowTitle(QCoreApplication::translate("tabela_motorista", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tabela_motorista", "Excluir", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tabela_motorista", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tabela_motorista: public Ui_tabela_motorista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELA_MOTORISTA_H
