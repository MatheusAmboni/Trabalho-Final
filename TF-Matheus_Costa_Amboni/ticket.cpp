#include "ticket.h"
#include "ui_ticket.h"
#include <QMessageBox>
#include <QtSql>
#include "tabela_fornecedor.h"
#include "tabela_transportadora.h"
#include "tabela_motorista.h"
#include "tabela_ticket.h"
#include <QFileDialog>

ticket::ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticket)
{
    ui->setupUi(this);
    if(!con.aberto()){
    if(!con.abrir()){
    QMessageBox::warning(this, "ERROR", "Erro ao abrir banco de Dados");
    }
    }
}

ticket::~ticket()
{
    delete ui;
}

void ticket::on_pushButton_5_clicked(){
    //imprimir ticket
    QString data=ui->txt_data->text();
    QString fornecedor=ui->txt_fornecedor->text();
    QString placa=ui->txt_placa->text();
    QString placa2=ui->txt_placa2->text();
    QString placa3=ui->txt_placa3->text();
    QString motorista=ui->txt_motorista->text();
    QString transportadora=ui->txt_transportadora->text();
    QString observacao=ui->txt_observacao->text();
    QString pesobruto=ui->txt_pesobruto->text();
    QString tara=ui->txt_tara->text();
    QFile arquivo(QFileDialog::getOpenFileName(this, tr("Open Image"),QString()));
    if(!arquivo.open(QIODevice::ReadOnly))
    {
        QMessageBox::warning(this, "", "Erro");
    }

    QByteArray inByteArray = arquivo.readAll();
    //inserir na tabela
    QSqlQuery query;
    query.prepare("select * from Motorista where nome='"+motorista+"'");
    if(query.exec()){
        query.first();
        if(query.value(1).toString()!=""){
            motorista=query.value(1).toString();
            query.prepare("select * from Transportadora where nome_transp='"+transportadora+"'");
            if(query.exec()){
                query.first();
                if(query.value(1).toString()!=""){
                    transportadora=query.value(1).toString();
                    query.prepare("select * from Fornecedor where nome='"+fornecedor+"'");
                    if(query.exec()){
                        query.first();
                        if(query.value(1).toString()!=""){
                            fornecedor=query.value(1).toString();
                            query.prepare("insert into Ticket (data, fornecedor, placa, placa2, placa3, motorista, transportadora, observacao, pesobruto, tara, imagedata) values"
                                          "('"+data+"','"+fornecedor+"','"+placa+"','"+placa2+"','"+placa3+"','"+motorista+"','"+transportadora+"','"+observacao+"','"+pesobruto+"','"+tara+"', :imageData)");
                            query.bindValue(":imageData", inByteArray);
                            if(!query.exec()){
                                QMessageBox::critical(this, "ERRO", "Erro ao inserir no Banco de Dados");
                            }else{
                            QMessageBox::information(this, "GRAVADO", "inserido no Banco de Dados");
                            ui->txt_data->text();
                            ui->txt_fornecedor->text();
                            ui->txt_placa->text();
                            ui->txt_placa2->text();
                            ui->txt_placa3->text();
                            ui->txt_motorista->text();
                            ui->txt_transportadora->text();
                            ui->txt_observacao->text();
                            ui->txt_pesobruto->text();
                            ui->txt_tara->text();
                            }
                        }else{
                            QMessageBox::information(this, "Erro", "fornecedor nao encontrado");
                        }
                    }else{
                        QMessageBox::information(this, "Erro", "Falha na criacao do ticket");
                    }
                }else{
                    QMessageBox::information(this, "Erro", "transportadora nao encontrada");
                }
            }else{
                QMessageBox::information(this, "Erro", "Falha na criacao do ticket");
            }
        }else{
            QMessageBox::information(this, "Erro", "motorista nao encontrado");
        }
    }else{
        QMessageBox::information(this, "Erro", "Falha na criacao do ticket");
    }
}

void ticket::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void ticket::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void ticket::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void ticket::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ticket::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void ticket::on_pushButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}


void ticket::on_cadastro_fornecedor_clicked()
{
    QString username_fornecedor=ui->txt_username_fornecedor->text();
     //INSERIR NA TABELA
     QSqlQuery query;
     query.prepare("insert into Fornecedor (nome) values" "('"+username_fornecedor+"')");
     if(!query.exec()){
     QMessageBox::critical(this, "ERRO", "Erro ao inserir no Banco de Dados");
     }else{
     QMessageBox::information(this, "GRAVADO", "inserido no Banco de Dados");
     //limpar todos os campos e posicipn
     ui->txt_username_fornecedor->clear();
     }
}

void ticket::on_cadastro_motorista_clicked()
{
    QString cpf_motorista=ui->txt_cpf_motorista->text();
    QString razao_social=ui->txt_razao_social->text();
    QString nome_motorista=ui->txt_nome_motorista->text();
    QString endereco_motorista=ui->txt_endereco->text();
    QString ddd=ui->txt_ddd->text();
    QString telefone=ui->txt_telefone->text();

     //INSERIR NA TABELA
     QSqlQuery query;
     query.prepare("insert into Motorista (cnpj_cpf, razao_social, nome, endereco, ddd, telefone) values" "('"+cpf_motorista+"', '"+razao_social+"', '"+nome_motorista+"', '"+endereco_motorista+"', '"+ddd+"', '"+telefone+"')");
     if(!query.exec()){
     QMessageBox::critical(this, "ERRO", "Erro ao inserir no Banco de Dados");
     }else{
     QMessageBox::information(this, "GRAVADO", "inserido no Banco de Dados");
     //limpar todos os campos e posicipn
     ui->txt_nome_transportadora->clear();
     ui->txt_endereco_transportadora->clear();
     }

}

void ticket::on_cadastro_transportadora_clicked()
{
    QString username_transportadora=ui->txt_nome_transportadora->text();
    QString endereco_transportadora=ui->txt_endereco_transportadora->text();
     //INSERIR NA TABELA
     QSqlQuery query;
     query.prepare("insert into Transportadora (nome_transp, endereco_transp) values" "('"+username_transportadora+"', '"+endereco_transportadora+"')");
     if(!query.exec()){
     QMessageBox::critical(this, "ERRO", "Erro ao inserir no Banco de Dados");
     }else{
     QMessageBox::information(this, "GRAVADO", "inserido no Banco de Dados");
     //limpar todos os campos e posicipn
     ui->txt_nome_transportadora->clear();
     ui->txt_endereco_transportadora->clear();
     }
}

void ticket::on_pushButton_7_clicked()
{
    tabela_fornecedor objtabela_fornecedor;
    objtabela_fornecedor.exec();
}

void ticket::on_pushButton_9_clicked()
{
    tabela_transportadora objtabela_transportadora;
    objtabela_transportadora.exec();
}

void ticket::on_pushButton_8_clicked()
{
    tabela_motorista objtabela_motorista;
    objtabela_motorista.exec();
}

void ticket::on_pushButton_11_clicked()
{
    tabela_ticket objtabela_ticket;
    objtabela_ticket.exec();
}
