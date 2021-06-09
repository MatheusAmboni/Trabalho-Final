#ifndef TICKET_H
#define TICKET_H

#include <QDialog>
#include <QObject>
#include "conexao.h"

namespace Ui {
class ticket;
}

class ticket : public QDialog
{
    Q_OBJECT

public:
    explicit ticket(QWidget *parent = nullptr);
    ~ticket();
    Conexao con;

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_cadastro_fornecedor_clicked();

    void on_cadastro_motorista_clicked();

    void on_cadastro_transportadora_clicked();


    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_btn_cadastro_fornecedor_clicked();

    void on_pushButton_11_clicked();



private:
    Ui::ticket *ui;
};

#endif // TICKET_H
