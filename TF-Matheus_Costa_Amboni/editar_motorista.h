#ifndef EDITAR_MOTORISTA_H
#define EDITAR_MOTORISTA_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class editar_motorista;
}

class editar_motorista : public QDialog
{
    Q_OBJECT

public:
    explicit editar_motorista(QWidget *parent = nullptr, int id_motorista=0);
    ~editar_motorista();

private slots:
    void on_cadastro_motorista_clicked();

private:
    Ui::editar_motorista *ui;
};

#endif // EDITAR_MOTORISTA_H
