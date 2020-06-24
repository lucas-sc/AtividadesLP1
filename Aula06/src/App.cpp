#include "../include/App.h"

#include <iostream>
#include <string>

App::App(const std::string& nome_arquivo): diario(nome_arquivo) { //inicializando diario junto com metodo App
 } 

int App::run(int argc, char* argv[]){
     
     if (argc == 1){
         return uso();
     }
     std::string acao = argv[1];

     if (acao == "add"){
        if(argc == 2) {
            add();
        } else {
            add(argv[2]);
        }

     } else if (acao == "list"){
         lista_mensagens();

     } else {
         return uso();
     }
     
     return 0;
 }

void App::add() {
    std::string mensagem;
    std::cout << "Digite sua mensagem:" << std:: endl;
    std::getline(std::cin, mensagem);

    add(mensagem);
}

void App::add (const std::string mensagem) {
    diario.add(mensagem);
    diario.escreveArquivo();
}

void App::lista_mensagens() {//adicionar horario depois
    for (size_t i = 0; i < diario.quantidade_mensagens; ++i){
        Mensagem& mensagem = diario.mensagens[i];
        std::cout << "-" << mensagem.conteudo << std::endl;
    }
}

int App::uso() {
    return 1;
}