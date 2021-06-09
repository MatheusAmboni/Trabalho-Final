#ifndef TABELA_MOTORISTA_H
#define TABELA_MOTORISTA_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class tabela_motorista;
}

class tabela_motorista : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_motorista(QWidget *parent = nullptr);
    ~tabela_motorista();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tabela_motorista *ui;
};

#endif // TABELA_MOTORISTA_H
