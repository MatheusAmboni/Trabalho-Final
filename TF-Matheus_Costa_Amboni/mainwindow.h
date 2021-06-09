#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QObject>
#include "conexao.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool logado;
    Ui::MainWindow *ui;
    Conexao con;
    QString nome,acesso;
    int id;

private slots:
    void on_btn_login_clicked();
    void on_btn_cadastro_clicked();

    void on_btn_logar_clicked();

    void on_btn_cancelar_login_clicked();

    void on_btn_salvar_clicked();

    void on_btn_cancelar_cadastro_clicked();


private:

};
#endif // MAINWINDOW_H
