#include "editar_motorista.h"
#include "ui_editar_motorista.h"
#include <QtSql>
#include <QMessageBox>

static int id;

editar_motorista::editar_motorista(QWidget *parent, int id_motorista) :
    QDialog(parent),
    ui(new Ui::editar_motorista)
{
    ui->setupUi(this);
    id=id_motorista;
    QSqlQuery query;
    query.prepare("select * from Motorista where id_motorista="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_cpf_motorista->setText(query.value(1).toString());
        ui->txt_razao_social->setText(query.value(2).toString());
        ui->txt_nome_motorista->setText(query.value(3).toString());
        ui->txt_endereco->setText(query.value(4).toString());
        ui->txt_ddd->setText(query.value(5).toString());
        ui->txt_telefone->setText(query.value(6).toString());
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao selecionar fornecedor");
    }

}

editar_motorista::~editar_motorista()
{
    delete ui;
}

void editar_motorista::on_cadastro_motorista_clicked()
{
    QString nome=ui->txt_nome_motorista->text();
    QString ddd=ui->txt_ddd->text();
    QString razao_social=ui->txt_razao_social->text();
    QString telefone=ui->txt_telefone->text();
    QString endereco=ui->txt_endereco->text();
    QString cpf=ui->txt_cpf_motorista->text();

    QSqlQuery query;
    query.prepare("update Motorista set cnpj_cpf='"+cpf+"', razao_social='"+razao_social+"', nome='"+nome+"', endereco='"+endereco+"', ddd='"+ddd+"', telefone='"+telefone+"' where id_motorista="+QString::number(id));
    if(query.exec()){
        this->close();
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao atualizar motorista");
    }
}
