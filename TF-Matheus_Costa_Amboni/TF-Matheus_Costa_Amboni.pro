QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    editar_fornecedor.cpp \
    editar_motorista.cpp \
    editar_ticket.cpp \
    editar_transportadora.cpp \
    main.cpp \
    mainwindow.cpp \
    tabela_fornecedor.cpp \
    tabela_motorista.cpp \
    tabela_ticket.cpp \
    tabela_transportadora.cpp \
    ticket.cpp

HEADERS += \
    conexao.h \
    editar_fornecedor.h \
    editar_motorista.h \
    editar_ticket.h \
    editar_transportadora.h \
    mainwindow.h \
    tabela_fornecedor.h \
    tabela_motorista.h \
    tabela_ticket.h \
    tabela_transportadora.h \
    ticket.h

FORMS += \
    editar_fornecedor.ui \
    editar_motorista.ui \
    editar_ticket.ui \
    editar_transportadora.ui \
    mainwindow.ui \
    tabela_fornecedor.ui \
    tabela_motorista.ui \
    tabela_ticket.ui \
    tabela_transportadora.ui \
    ticket.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
