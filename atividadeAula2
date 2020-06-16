#include <string>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]){

    std::string mensagem;
    std:: string parametro2 = "add";

    if(argc == 1) {
        cout << "Use: " << argv[0] << " add <mensagem>" <<endl;
        return -1;
    }

    if(argc == 2 && string(argv[1]) == parametro2) {

        cout << "Digite sua mensagem: ";
        getline (cin, mensagem);
        cout << "Mensagem adicionada" << endl;

    }

    if(argc == 3 && string(argv[1]) == parametro2) {
        cout << "Mensagem cadastrada: " << argv[2] << endl;
    }

    return 0;
}
