#ifndef TABELA_FORNECEDOR_H
#define TABELA_FORNECEDOR_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class tabela_fornecedor;
}

class tabela_fornecedor : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_fornecedor(QWidget *parent = nullptr);
    ~tabela_fornecedor();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



private:
    Ui::tabela_fornecedor *ui;
};

#endif // TABELA_FORNECEDOR_H
