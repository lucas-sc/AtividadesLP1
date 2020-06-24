#ifndef DIARIO_H
#define DIARIO_H

#include "Mensagem.h"
#include <string>

struct Diario{

    Diario(const std::string& nome_arquivo);//construtor. Deve ser com o mesmo nome da struct
    std::string nome_arquivo; //possibilita criar novos arquivos (diarios diferentes)
    Mensagem* mensagens;
    size_t quantidade_mensagens; //quantidade de mensagens do diario
    size_t capacidade_mensagens; //máximo de mensagens suportada pelo diario

    void add(const std::string& mensagem); //adiciona mensagens no array
    void escreveArquivo(); //guarda todas as mensagens no arquivo
};
#endif

