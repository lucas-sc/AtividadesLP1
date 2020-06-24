#include "../include/App.h"

int main(int argc, char* argv[]){

    App aplicativo ("diario.txt"); /*passando nome do arquivo como parametro
                                    para o construtor do App.h
                                    É possível obter esse parametro pelo argv ou
                                    arquivo de configuração*/
    return aplicativo.run(argc, argv); //rodando o app
}