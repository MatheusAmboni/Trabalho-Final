#include "tabela_motorista.h"
#include "ui_tabela_motorista.h"
#include "editar_motorista.h"
#include <QtSql>
#include <QMessageBox>

tabela_motorista::tabela_motorista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela_motorista)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from Motorista");
    if(query.exec()){
        int linha=0;
        ui->tw_motorista->setColumnCount(7);
        while(query.next()){
            ui->tw_motorista->insertRow(linha);
            ui->tw_motorista->setItem(linha,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_motorista->setItem(linha,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_motorista->setItem(linha,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_motorista->setItem(linha,3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_motorista->setItem(linha,4, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_motorista->setItem(linha,5, new QTableWidgetItem(query.value(5).toString()));
            ui->tw_motorista->setItem(linha,6, new QTableWidgetItem(query.value(6).toString()));
            ui->tw_motorista->setRowHeight(linha, 20);
            linha++;
        }
        ui->tw_motorista->setColumnWidth(0,30);
        ui->tw_motorista->setColumnWidth(1,150);

        QStringList cabecalho={"ID", "CNPJ/CPF", "RAZAO SOCIAL", "NOME", "ENDERECO", "DDD", "TELEFONE"};
        ui->tw_motorista->setHorizontalHeaderLabels(cabecalho);
        ui->tw_motorista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_motorista->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_motorista->verticalHeader()->setVisible(false);
        ui->tw_motorista->setStyleSheet("QTableView {selection-background-color:blue}");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao pesquisar na tabela");
    }
}

tabela_motorista::~tabela_motorista()
{
    delete ui;
}

void tabela_motorista::on_pushButton_2_clicked()
{
    int linha1=ui->tw_motorista->currentRow();
    int id=ui->tw_motorista->item(linha1, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from Motorista where id_motorista="+QString::number(id)+"");
    if(query.exec()){
        ui->tw_motorista->removeRow(linha1);
        QMessageBox::information(this, "", "Motorista removido");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao excluir motorista");
    }
}

void tabela_motorista::on_pushButton_3_clicked()
{
    int linha2=ui->tw_motorista->currentRow();
    int id=ui->tw_motorista->item(linha2, 0)->text().toInt();
    editar_motorista f_editar_motorista(this,id);
    f_editar_motorista.exec();
    QSqlQuery query;
    query.prepare("select * from Motorista where id_motorista="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->tw_motorista->setItem(linha2, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_motorista->setItem(linha2, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_motorista->setItem(linha2, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tw_motorista->setItem(linha2, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tw_motorista->setItem(linha2, 5, new QTableWidgetItem(query.value(5).toString()));
        ui->tw_motorista->setItem(linha2, 6, new QTableWidgetItem(query.value(6).toString()));
    }
}
