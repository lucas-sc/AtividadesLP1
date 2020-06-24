#ifndef DIARIO_H
#define DIARIO_H
#include <string>
#include <mensagem.h>
#include <list>

struct Diario {
    std::list <Mensagem> conteudo;
    std::string nome_arquivo;

    std::string solicitaMensagem();
    int contadorDatas(string data);
    int escreveArquivo (int contador, string data, string hora, string mensagem);
    int listaMensagem(string mensagem);
};
