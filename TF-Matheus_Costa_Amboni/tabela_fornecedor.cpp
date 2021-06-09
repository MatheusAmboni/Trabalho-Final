#include "tabela_fornecedor.h"
#include "ui_tabela_fornecedor.h"
#include "editar_fornecedor.h"
#include <QtSql>
#include <QMessageBox>

tabela_fornecedor::tabela_fornecedor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela_fornecedor)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from Fornecedor");
    if(query.exec()){
        int linha=0;
        ui->tw_fornecedor->setColumnCount(2);
        while(query.next()){
            ui->tw_fornecedor->insertRow(linha);
            ui->tw_fornecedor->setItem(linha,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_fornecedor->setItem(linha,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_fornecedor->setRowHeight(linha, 20);
            linha++;
        }
        ui->tw_fornecedor->setColumnWidth(0,30);
        ui->tw_fornecedor->setColumnWidth(1,150);

        QStringList cabecalho={"ID", "Nome"};
        ui->tw_fornecedor->setHorizontalHeaderLabels(cabecalho);
        ui->tw_fornecedor->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_fornecedor->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_fornecedor->verticalHeader()->setVisible(false);
        ui->tw_fornecedor->setStyleSheet("QTableView {selection-background-color:blue}");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao pesquisar na tabela");
    }
}

tabela_fornecedor::~tabela_fornecedor()
{
    delete ui;
}

void tabela_fornecedor::on_pushButton_2_clicked()
{
    int linha1=ui->tw_fornecedor->currentRow();
    int id=ui->tw_fornecedor->item(linha1, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from Fornecedor where id_fornecedor="+QString::number(id)+"");
    if(query.exec()){
        ui->tw_fornecedor->removeRow(linha1);
        QMessageBox::information(this, "", "Fornecedor removido");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao excluir fornecedor");
    }
}

void tabela_fornecedor::on_pushButton_3_clicked()
{
    int linha2=ui->tw_fornecedor->currentRow();
    int id=ui->tw_fornecedor->item(linha2, 0)->text().toInt();
    editar_fornecedor f_editar_fornecedor(this,id);
    f_editar_fornecedor.exec();
    QSqlQuery query;
    query.prepare("select * from Fornecedor where id_fornecedor="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->tw_fornecedor->setItem(linha2, 1, new QTableWidgetItem(query.value(1).toString()));
    }
}

