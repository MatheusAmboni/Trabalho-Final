#include "tabela_ticket.h"
#include "ui_tabela_ticket.h"
#include "editar_ticket.h"
#include "ticket.h"
#include <QMessageBox>
#include <QtSql>
#include <QPixmap>
#include <QLabel>

tabela_ticket::tabela_ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela_ticket)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from Ticket");
    if(query.exec()){
        query.first();
        int linha=0;
        ui->tw_ticket->setColumnCount(11);
        while(query.next()){
            ui->tw_ticket->insertRow(linha);
            ui->tw_ticket->setItem(linha,0, new QTableWidgetItem(query.value(0).toString()));
            ui->tw_ticket->setItem(linha,1, new QTableWidgetItem(query.value(1).toString()));
            ui->tw_ticket->setItem(linha,2, new QTableWidgetItem(query.value(2).toString()));
            ui->tw_ticket->setItem(linha,3, new QTableWidgetItem(query.value(3).toString()));
            ui->tw_ticket->setItem(linha,4, new QTableWidgetItem(query.value(4).toString()));
            ui->tw_ticket->setItem(linha,5, new QTableWidgetItem(query.value(5).toString()));
            ui->tw_ticket->setItem(linha,6, new QTableWidgetItem(query.value(6).toString()));
            ui->tw_ticket->setItem(linha,7, new QTableWidgetItem(query.value(7).toString()));
            ui->tw_ticket->setItem(linha,8, new QTableWidgetItem(query.value(8).toString()));
            ui->tw_ticket->setItem(linha,9, new QTableWidgetItem(query.value(9).toString()));
            ui->tw_ticket->setItem(linha,10, new QTableWidgetItem(query.value(10).toString()));
            ui->tw_ticket->setRowHeight(linha, 20);
            linha++;
        }
        ui->tw_ticket->setColumnWidth(0,30);
        ui->tw_ticket->setColumnWidth(1,150);

        QStringList cabecalho={"ID", "DATA", "FORNECEDOR", "PLACA", "PLACA2", "PLACA3", "MOTORISTA", "TRANSPORTADORA", "OBSERVACAO", "PESOBRUTO", "TARA"};
        ui->tw_ticket->setHorizontalHeaderLabels(cabecalho);
        ui->tw_ticket->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_ticket->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_ticket->verticalHeader()->setVisible(false);
        ui->tw_ticket->setStyleSheet("QTableView {selection-background-color:blue}");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao pesquisar na tabela");
    }
}

tabela_ticket::~tabela_ticket()
{
    delete ui;
}

void tabela_ticket::on_pushButton_2_clicked()
{
    int linha1=ui->tw_ticket->currentRow();
    int id=ui->tw_ticket->item(linha1, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from Ticket where id_ticket="+QString::number(id)+"");
    if(query.exec()){
        ui->tw_ticket->removeRow(linha1);
        QMessageBox::information(this, "", "Ticket removido");
    }else{
        QMessageBox::warning(this, "Erro", "Erro ao excluir ticket");
    }
}

void tabela_ticket::on_pushButton_clicked()
{
    int linha2=ui->tw_ticket->currentRow();
    int id=ui->tw_ticket->item(linha2, 0)->text().toInt();
    editar_ticket f_editar_ticket(this,id);
    f_editar_ticket.exec();
    QSqlQuery query;
    query.prepare("select * from Ticket where id_ticket="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->tw_ticket->setItem(linha2, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_ticket->setItem(linha2, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_ticket->setItem(linha2, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tw_ticket->setItem(linha2, 4, new QTableWidgetItem(query.value(4).toString()));
        ui->tw_ticket->setItem(linha2, 5, new QTableWidgetItem(query.value(5).toString()));
        ui->tw_ticket->setItem(linha2, 6, new QTableWidgetItem(query.value(6).toString()));
        ui->tw_ticket->setItem(linha2, 7, new QTableWidgetItem(query.value(7).toString()));
        ui->tw_ticket->setItem(linha2, 8, new QTableWidgetItem(query.value(8).toString()));
        ui->tw_ticket->setItem(linha2, 9, new QTableWidgetItem(query.value(9).toString()));
        ui->tw_ticket->setItem(linha2, 10, new QTableWidgetItem(query.value(10).toString()));
    }
}

