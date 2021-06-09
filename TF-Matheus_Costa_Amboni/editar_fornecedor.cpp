#include "editar_fornecedor.h"
#include "ui_editar_fornecedor.h"
#include <QtSql>
#include <QMessageBox>

static int id;

editar_fornecedor::editar_fornecedor(QWidget *parent, int id_fornecedor) :
    QDialog(parent),
    ui(new Ui::editar_fornecedor)
{
    ui->setupUi(this);
    id=id_fornecedor;
    QSqlQuery query;
    query.prepare("select * from Fornecedor where id_fornecedor="+QString::number(id));
    if(query.exec()){
        query.first();
        ui->txt_username_fornecedor->setText(query.value(1).toString());
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao selecionar fornecedor");
    }

}

editar_fornecedor::~editar_fornecedor()
{
    delete ui;
}

void editar_fornecedor::on_cadastro_fornecedor_clicked()
{
    QString nome=ui->txt_username_fornecedor->text();

    QSqlQuery query;
    query.prepare("update Fornecedor set nome='"+nome+"' where id_fornecedor="+QString::number(id));
    if(query.exec()){
        this->close();
    }else{
        QMessageBox::warning(this,"ERRo", "Erro ao atualizar fornecedor");
    }
}
