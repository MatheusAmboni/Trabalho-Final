/********************************************************************************
** Form generated from reading UI file 'tabela_fornecedor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELA_FORNECEDOR_H
#define UI_TABELA_FORNECEDOR_H

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

class Ui_tabela_fornecedor
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tw_fornecedor;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *tabela_fornecedor)
    {
        if (tabela_fornecedor->objectName().isEmpty())
            tabela_fornecedor->setObjectName(QString::fromUtf8("tabela_fornecedor"));
        tabela_fornecedor->resize(897, 624);
        verticalLayoutWidget = new QWidget(tabela_fornecedor);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 20, 811, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tw_fornecedor = new QTableWidget(verticalLayoutWidget);
        tw_fornecedor->setObjectName(QString::fromUtf8("tw_fornecedor"));

        verticalLayout->addWidget(tw_fornecedor);

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


        retranslateUi(tabela_fornecedor);

        QMetaObject::connectSlotsByName(tabela_fornecedor);
    } // setupUi

    void retranslateUi(QWidget *tabela_fornecedor)
    {
        tabela_fornecedor->setWindowTitle(QCoreApplication::translate("tabela_fornecedor", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tabela_fornecedor", "Excluir", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tabela_fornecedor", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tabela_fornecedor: public Ui_tabela_fornecedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELA_FORNECEDOR_H
