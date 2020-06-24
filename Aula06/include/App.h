#ifndef APP_H
#define APP_H

#include "Diario.h"
#include <string>

struct App {
    Diario diario;
    App(const std::string& nome_arquivo); //construtor. Deve ser com o mesmo nome da struct
    int run(int argc, char* argv[]); /*funcao padrao similar a funcao main;
                                     Recebe os argumentos e retorna um inteiro para 
                                     indicar se o programa rodou corretamente ou não*/
    int uso();
    void add(const std::string mensagem);
    void add(const std::string mensagem);
};
#endif