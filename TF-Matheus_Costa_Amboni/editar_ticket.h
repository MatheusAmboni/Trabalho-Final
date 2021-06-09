#ifndef EDITAR_TICKET_H
#define EDITAR_TICKET_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class editar_ticket;
}

class editar_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit editar_ticket(QWidget *parent = nullptr, int id_ticket=0);
    ~editar_ticket();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editar_ticket *ui;
};

#endif // EDITAR_TICKET_H
