/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_pic;
    QPushButton *btn_login;
    QPushButton *btn_cadastro;
    QLabel *label_background;
    QWidget *page_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_username_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_senha_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_logar;
    QPushButton *btn_cancelar_login;
    QLabel *label_background_2;
    QWidget *page_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *txt_username;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btn_salvar;
    QPushButton *btn_cancelar_cadastro;
    QLabel *label_background_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(818, 624);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 821, 621));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        verticalLayoutWidget_4 = new QWidget(page_1);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(150, 110, 501, 391));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_pic = new QLabel(verticalLayoutWidget_4);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));

        verticalLayout->addWidget(label_pic);

        btn_login = new QPushButton(verticalLayoutWidget_4);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        verticalLayout->addWidget(btn_login);

        btn_cadastro = new QPushButton(verticalLayoutWidget_4);
        btn_cadastro->setObjectName(QString::fromUtf8("btn_cadastro"));

        verticalLayout->addWidget(btn_cadastro);


        verticalLayout_2->addLayout(verticalLayout);

        label_background = new QLabel(page_1);
        label_background->setObjectName(QString::fromUtf8("label_background"));
        label_background->setGeometry(QRect(-10, 10, 811, 611));
        stackedWidget->addWidget(page_1);
        label_background->raise();
        verticalLayoutWidget_4->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayoutWidget = new QWidget(page_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 170, 321, 191));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_username_2 = new QLineEdit(verticalLayoutWidget);
        txt_username_2->setObjectName(QString::fromUtf8("txt_username_2"));

        horizontalLayout_4->addWidget(txt_username_2);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        txt_senha_2 = new QLineEdit(verticalLayoutWidget);
        txt_senha_2->setObjectName(QString::fromUtf8("txt_senha_2"));
        txt_senha_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(txt_senha_2);


        verticalLayout_6->addLayout(horizontalLayout_5);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_logar = new QPushButton(verticalLayoutWidget);
        btn_logar->setObjectName(QString::fromUtf8("btn_logar"));

        horizontalLayout_6->addWidget(btn_logar);

        btn_cancelar_login = new QPushButton(verticalLayoutWidget);
        btn_cancelar_login->setObjectName(QString::fromUtf8("btn_cancelar_login"));

        horizontalLayout_6->addWidget(btn_cancelar_login);


        verticalLayout_6->addLayout(horizontalLayout_6);

        label_background_2 = new QLabel(page_2);
        label_background_2->setObjectName(QString::fromUtf8("label_background_2"));
        label_background_2->setGeometry(QRect(0, 10, 801, 601));
        stackedWidget->addWidget(page_2);
        label_background_2->raise();
        verticalLayoutWidget->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayoutWidget_3 = new QWidget(page_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(100, 130, 591, 211));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        txt_username = new QLineEdit(verticalLayoutWidget_3);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        verticalLayout_4->addWidget(txt_username);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_7->addWidget(label_2);

        txt_senha = new QLineEdit(verticalLayoutWidget_3);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        verticalLayout_7->addWidget(txt_senha);


        horizontalLayout_7->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        horizontalLayout_8->addLayout(verticalLayout_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));

        horizontalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btn_salvar = new QPushButton(verticalLayoutWidget_3);
        btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));

        horizontalLayout_9->addWidget(btn_salvar);

        btn_cancelar_cadastro = new QPushButton(verticalLayoutWidget_3);
        btn_cancelar_cadastro->setObjectName(QString::fromUtf8("btn_cancelar_cadastro"));

        horizontalLayout_9->addWidget(btn_cancelar_cadastro);


        verticalLayout_5->addLayout(horizontalLayout_9);

        label_background_3 = new QLabel(page_3);
        label_background_3->setObjectName(QString::fromUtf8("label_background_3"));
        label_background_3->setGeometry(QRect(0, 0, 811, 621));
        stackedWidget->addWidget(page_3);
        label_background_3->raise();
        verticalLayoutWidget_3->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QString());
        btn_login->setText(QCoreApplication::translate("MainWindow", "Login usu\303\241rio", nullptr));
        btn_cadastro->setText(QCoreApplication::translate("MainWindow", "Cadastro usu\303\241rio", nullptr));
        label_background->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">USUARIO</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Senha:</span></p></body></html>", nullptr));
        label_3->setText(QString());
        btn_logar->setText(QCoreApplication::translate("MainWindow", "Logar", nullptr));
        btn_cancelar_login->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        label_background_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
        btn_salvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        btn_cancelar_cadastro->setText(QCoreApplication::translate("MainWindow", "Cancelar", nullptr));
        label_background_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
