#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QtSql>
#include "ticket.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    QPixmap pix(":/new/prefix1/logo_institucional_amboni.png");
    ui->label_pic->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
    QPixmap pix1(":/new/prefix1/arroz.png");
    ui->label_background->setPixmap(pix1.scaled(1000,1000,Qt::KeepAspectRatio));

    logado=false;
    if(!con.aberto()){
     if(!con.abrir()){
     QMessageBox::warning(this, "ERROR", "Erro ao abrir banco de Dados");
     }
     }
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_btn_login_clicked(){
       ui->stackedWidget->setCurrentIndex(1);
       QPixmap pix1(":/new/prefix1/arroz.png");
       ui->label_background_2->setPixmap(pix1.scaled(1000,1000,Qt::KeepAspectRatio));
}

void MainWindow::on_btn_cadastro_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QPixmap pix1(":/new/prefix1/arroz.png");
    ui->label_background_3->setPixmap(pix1.scaled(1000,1000,Qt::KeepAspectRatio));
}

void MainWindow::on_btn_logar_clicked(){
    if(!con.abrir()){
        QMessageBox::warning(this, "Erro", "Erro ao abrir o banco de dados");
    }
    else {
        QString username,senha;
        username=ui->txt_username_2->text();
        senha=ui->txt_senha_2->text();
        QSqlQuery query;
        query.prepare("select * from Usuario where username='"+username+"' and senha='"+senha+"'");
        if(query.exec()){
            query.first();
            if(query.value(1).toString()!=""){
                logado=true;
                nome=query.value(1).toString();
                id=query.value(0).toInt();
                con.fechar();
                ticket f_ticket;
                f_ticket.exec();
            }
            else{
                logado=false;
                ui->label_3->setText("login não efetuado");
                ui->txt_username_2->clear();
                ui->txt_senha_2->clear();

            }
        }
        else{
            QMessageBox::warning(this, "Erro", "Falha no login");
        }
    }
}

void MainWindow::on_btn_cancelar_cadastro_clicked(){
    logado=false;
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btn_salvar_clicked()
{
    QString username=ui->txt_username->text();
     QString senha=ui->txt_senha->text();
     //INSERIR NA TABELA
     QSqlQuery query;
     query.prepare("insert into Usuario (username,senha) values" "('"+username+"','"+senha+"')");
     if(!query.exec()){
     QMessageBox::critical(this, "ERRO", "Erro ao inserir no Banco de Dados");
     }else{
     QMessageBox::information(this, "GRAVADO", "inserido no Banco de Dados");
     //limpar todos os campos e posicipn
     ui->txt_username->clear();
     ui->txt_senha->clear();
     }
}

void MainWindow::on_btn_cancelar_login_clicked()
{
    //limpar todos os campos e posicipn
     ui->txt_username->clear();
     ui->txt_senha->clear();
     ui->txt_username->setFocus();
     ui->stackedWidget->setCurrentIndex(0);
}
