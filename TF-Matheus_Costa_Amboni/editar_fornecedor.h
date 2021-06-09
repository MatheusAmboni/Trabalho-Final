#ifndef EDITAR_FORNECEDOR_H
#define EDITAR_FORNECEDOR_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class editar_fornecedor;
}

class editar_fornecedor : public QDialog
{
    Q_OBJECT

public:
    explicit editar_fornecedor(QWidget *parent = nullptr, int id_fornecedor=0);
    ~editar_fornecedor();

private slots:
    void on_cadastro_fornecedor_clicked();
private:
    Ui::editar_fornecedor *ui;
};

#endif // EDITAR_FORNECEDOR_H
