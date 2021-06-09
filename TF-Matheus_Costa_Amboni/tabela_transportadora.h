#ifndef TABELA_TRANSPORTADORA_H
#define TABELA_TRANSPORTADORA_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class tabela_transportadora;
}

class tabela_transportadora : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_transportadora(QWidget *parent = nullptr);
    ~tabela_transportadora();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tabela_transportadora *ui;
};

#endif // TABELA_TRANSPORTADORA_H
