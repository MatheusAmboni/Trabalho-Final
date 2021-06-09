#include "editar_ticket.h"
#include "ui_editar_ticket.h"
#include <QtSql>
#include <QMessageBox>

static int id;

editar_ticket::editar_ticket(QWidget *parent, int id_ticket) :
    QDialog(parent),
    ui(new Ui::editar_ticket)
{
    ui->setupUi(this);
    id=id_ticket;
    QSqlQuery query;
    query.prepare("select * from Ticket where id_ticket="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_data->setText(query.value(1).toString());
        ui->txt_fornecedor->setText(query.value(2).toString());
        ui->txt_motorista->setText(query.value(3).toString());
        ui->txt_observacao->setText(query.value(4).toString());
        ui->txt_pesobruto->setText(query.value(5).toString());
        ui->txt_placa->setText(query.value(6).toString());
        ui->txt_placa2->setText(query.value(7).toString());
        ui->txt_placa3->setText(query.value(8).toString());
        ui->txt_tara->setText(query.value(9).toString());
        ui->txt_transportadora->setText(query.value(10).toString());
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao selecionar ticket");
    }

}

editar_ticket::~editar_ticket()
{
    delete ui;
}

void editar_ticket::on_pushButton_clicked()
{
    QString data=ui->txt_data->text();
    QString fornecedor=ui->txt_fornecedor->text();
    QString motorista=ui->txt_motorista->text();
    QString observacao=ui->txt_observacao->text();
    QString pesobruto=ui->txt_pesobruto->text();
    QString placa=ui->txt_placa->text();
    QString placa2=ui->txt_placa2->text();
    QString placa3=ui->txt_placa3->text();
    QString tara=ui->txt_tara->text();
    QString transportadora=ui->txt_transportadora->text();

    QSqlQuery query;
    query.prepare("update Ticket set data='"+data+"', fornecedor='"+fornecedor+"', motorista='"+motorista+"', observacao='"+observacao+"', pesobruto='"+pesobruto+"', placa='"+placa+"', placa2='"+placa2+"', placa3='"+placa3+"', tara='"+tara+"', transportadora='"+transportadora+"' where id_ticket="+QString::number(id));
    if(query.exec()){
        this->close();
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao atualizar ticket");
    }
}
