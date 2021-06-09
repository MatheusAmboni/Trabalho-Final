#ifndef EDITAR_TRANSPORTADORA_H
#define EDITAR_TRANSPORTADORA_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class editar_transportadora;
}

class editar_transportadora : public QDialog
{
    Q_OBJECT

public:
    explicit editar_transportadora(QWidget *parent = nullptr, int id_transportadora=0);
    ~editar_transportadora();

private slots:
    void on_cadastro_transportadora_clicked();

private:
    Ui::editar_transportadora *ui;
};

#endif // EDITAR_TRANSPORTADORA_H
