#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]){

    std::string mensagem;
    std::string param_add = "add";
    std::string param_list = "list";
    fstream arquivo;
    arquivo.open("mensagem.txt", ios::out | ios::app | ios::in);
    
    if (!arquivo.is_open()){//verificando abertura de arquivo
        cout << "Erro ao acessar arquivo" << endl;
        return 1;
    }

    if(argc == 1) {//mostrando usabilidade da aplicação para o usuário
        cout << "Use" << endl;
        cout << "1. " << argv[0] << " add <mensagem>" << endl;
        cout << "2. " << argv[0] << " list" << endl;
        return 1;
    }

    if(argc == 2 && string(argv[1]) == param_add) {//"add"
        cout << "Digite sua mensagem: ";
        getline (cin, mensagem);
        cout << "Mensagem adicionada" << endl;
        arquivo << mensagem << endl;
        return 1;
    }

    if(argc == 3 && string(argv[1]) == param_add) {//"add <mensagem>"
        cout << "Mensagem cadastrada: " << argv[2] << endl;
        arquivo << argv[2] << endl;
        return 1;
    }

    if(argc == 2 && string(argv[1]) == param_list) {//listando mensagens
       // int numero_linha = 0; 
        while (!arquivo.eof())
        {
         //   ++numero_linha;
            getline(arquivo, mensagem);
            if (mensagem.size() == 0)
            {
                continue;
            }
            cout << mensagem << endl;
        }

    }

    arquivo.close();

    return 0;
}