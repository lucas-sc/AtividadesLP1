    #include "../include/App.h"

    #include <iostream>
    #include <string>

    App::App(const std::string& filename) : diary(filename)
    {  
    }

    int App::run(int argc, char* argv[])
    {
        if (argc == 1) {
            return show_usage(argv[0]);
        }

        std::string action = argv[1];

        if (action == "add") {
            if (argc == 2) {
                add();
            } else {
                add(argv[2]);
            }
        } else if (action == "list") {
            list_messages();
        } else if (action == "search") {
        } else {
            return show_usage(argv[0]);
        }
        return 0;
    }

    void App::add()
    {
        std::string message;
        std::cout << "Enter your message:" << std::endl;
        std::getline(std::cin, message);

        add(message);
    }

    void App::add(const std::string message)
    {
        if (diary.messages_size == diary.messages_capacity) //verificando se ultrapassou limite de mensagens
        {
            Message *nova; //criando novo array para transferir mensagens
            nova = new Message[diary.messages_capacity*2]; //duplicando a capacidade do array em relação ao anterior

            for (size_t i = 0; i < diary.messages_size; i++) //transferindo mensagens
            {
                nova[i] = diary.messages[i];
            }
            delete[] diary.messages;
            diary.messages = nova;
            diary.messages_capacity = diary.messages_capacity*2;
        }
        diary.add(message);
        diary.write();
       
    }

    void App::list_messages()
    {
        for (size_t i = 0; i < diary.messages_size; ++i) {
            const Message& message = diary.messages[i];
            std::cout << "-" << message.content << std::endl;
        }
    }

    int App::show_usage(const std::string& command)
    {
        std::cout << "Commands for the program: " << std::endl;
        std::cout <<"1: " << command << " " << "add <your message>" << std::endl;
        std::cout <<"2: " << command << " " << "list" << std:: endl;

        return 1;
    }