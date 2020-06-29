    #include "../include/Diary.h"
    #include "../include/Others.h"
    
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <sstream>
    
    Diary::Diary(const std::string& name) : filename(name), messages(nullptr), messages_size(0), messages_capacity(10)
    {
        messages = new Message[messages_capacity];
        Date date;
        Time time;
        
        std::string line; //auxiliar para ler linhas do arquivo
        std::string date_aux;
        std::ifstream file(filename); //incializando arquivo

        if (file.is_open()) //testando abertura de arquivo
        {
            while (!file.eof())
            {
                getline(file, line);
                if (line.size() == 0) //verificando se a linha está em branco
                {
                    continue;
                }
                if (line[0] == '#') //verificando se a linha lida é referente a uma data
                {
                    date_aux = (line.substr(2));
                } 
                if (line[0] == '-') //verificando se a linha lida refere-se a mensagem
                {
                    messages[messages_size].date.set_from_string(date_aux); //messages_size funciona como contador
                    messages[messages_size].time.set_from_string(line.substr(2,8));
                    messages[messages_size].content = line.substr(11); 
                    messages_size++;
                }
            } 
            std::cout << messages_size << std::endl;
        } else {
                std::cout << "No pre-existing files found. Creating new file ..." <<std::endl; 
            }
        file.close();
    }

    Diary::~Diary()
    {
        delete[] messages;
    }

    void Diary::add(const std::string& message)
    {
        if (messages_size >= messages_capacity) {
            return;
        }
        Message m;
        m.content = message;
        m.date.set_from_string(get_current_date());
        m.time.set_from_string(get_current_time());
        messages[messages_size] = m;
        messages_size++;
    }

    void Diary::write()
    {
        std::ofstream file{filename};
        if (file.is_open())
        {
           for (size_t i = 0; i < messages_size; i++)
            {
                if (i == 0)
                {
                    file << "# " << messages[0].date.to_string() << std::endl;
                    file << "- " << messages[0].time.to_string() << " " << messages[0].content << std::endl;
                } else {
                    if (messages[i].date.to_string() == messages[i-1].date.to_string())
                    {
                        file << "- " << messages[i].time.to_string() << " " << messages[i].content<< std::endl;
                    } else {
                        file << "# " << messages[i].date.to_string() << std::endl;
                        file << "- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
                    }
                }
            }
            file.close();
        } else {
            std::cout << "The file could not be opened" << std::endl;
        }
    }