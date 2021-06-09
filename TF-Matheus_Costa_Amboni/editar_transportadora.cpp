#include "editar_transportadora.h"
#include "ui_editar_transportadora.h"
#include <QtSql>
#include <QMessageBox>

static int id;

editar_transportadora::editar_transportadora(QWidget *parent, int id_transportadora) :
    QDialog(parent),
    ui(new Ui::editar_transportadora)
{
    ui->setupUi(this);
    id=id_transportadora;
    QSqlQuery query;
    query.prepare("select * from Transportadora where id_transportadora="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_nome_transportadora->setText(query.value(1).toString());
        ui->txt_endereco_transportadora->setText(query.value(2).toString());
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao selecionar transportadora");
    }
}

editar_transportadora::~editar_transportadora()
{
    delete ui;
}

void editar_transportadora::on_cadastro_transportadora_clicked()
{
    QString nome=ui->txt_nome_transportadora->text();
    QString endereco=ui->txt_endereco_transportadora->text();

    QSqlQuery query;
    query.prepare("update Transportadora set nome_transp='"+nome+"', endereco_transp='"+endereco+"' where id_transportadora="+QString::number(id));
    if(query.exec()){
        this->close();
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao atualizar transportadora");
    }
}
