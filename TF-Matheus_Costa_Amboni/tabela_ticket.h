#ifndef TABELA_TICKET_H
#define TABELA_TICKET_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class tabela_ticket;
}

class tabela_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit tabela_ticket(QWidget *parent = nullptr);
    ~tabela_ticket();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::tabela_ticket *ui;
};

#endif // TABELA_TICKET_H
