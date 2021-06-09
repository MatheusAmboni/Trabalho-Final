#ifndef CONEXAO_H
#define CONEXAO_H

#include <QtSql>

class Conexao{
public:

    QSqlDatabase bancoDeDados;
    QString banco;

    //conexão com o banco de dados
    Conexao(){
        //endereço do arquivo banco de dados
        banco = "/home/matheus/Documentos/Tf/build-TF-Matheus_Costa_Amboni-Desktop_Qt_5_15_2_GCC_64bit-Debug/database";
        //nome do programa para conexão
        bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    }

    void fechar(){
        bancoDeDados.close();
    }

    bool abrir(){
       bancoDeDados.setDatabaseName(banco);
       if(!bancoDeDados.open()){
          return false;
       }
       else{
          return true;
       }
    }

    bool aberto(){
        if(bancoDeDados.isOpen()){
            return true;
        }
        else{
            return false;
        }
    }
};

#endif // CONEXAO_H
