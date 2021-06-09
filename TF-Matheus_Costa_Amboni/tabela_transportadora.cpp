#include "tabela_transportadora.h"
#include "ui_tabela_transportadora.h"
#include "editar_transportadora.h"
#include <QMessageBox>
#include <QtSql>

tabela_transportadora::tabela_transportadora(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela_transportadora)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from Transportadora");
    if(query.exec()){
        int linha=0;
        ui->tw_transportadora->setColumnCount(3);
        while(query.next()){
            ui->tw_transportadora->insertRow(linha);
            ui->tw_transportadora->setItem(linha,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_transportadora->setItem(linha,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_transportadora->setItem(linha,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_transportadora->setRowHeight(linha, 20);
            linha++;
        }
        ui->tw_transportadora->setColumnWidth(0,30);
        ui->tw_transportadora->setColumnWidth(1,150);

        QStringList cabecalho={"ID", "NOME", "ENDERECO"};
        ui->tw_transportadora->setHorizontalHeaderLabels(cabecalho);
        ui->tw_transportadora->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_transportadora->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_transportadora->verticalHeader()->setVisible(false);
        ui->tw_transportadora->setStyleSheet("QTableView {selection-background-color:blue}");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao pesquisar na tabela");
    }
}

tabela_transportadora::~tabela_transportadora()
{
    delete ui;
}

void tabela_transportadora::on_pushButton_2_clicked()
{
    int linha1=ui->tw_transportadora->currentRow();
    int id=ui->tw_transportadora->item(linha1, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from Transportadora where id_transportadora="+QString::number(id)+"");
    if(query.exec()){
        ui->tw_transportadora->removeRow(linha1);
        QMessageBox::information(this, "", "Transportadora removida");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao excluir transportadora");
    }
}

void tabela_transportadora::on_pushButton_3_clicked()
{
    int linha2=ui->tw_transportadora->currentRow();
    int id=ui->tw_transportadora->item(linha2, 0)->text().toInt();
    editar_transportadora f_editar_transportadora(this,id);
    f_editar_transportadora.exec();
    QSqlQuery query;
    query.prepare("select * from Transportadora where id_transportadora="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->tw_transportadora->setItem(linha2, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_transportadora->setItem(linha2, 2, new QTableWidgetItem(query.value(2).toString()));
    }
}
