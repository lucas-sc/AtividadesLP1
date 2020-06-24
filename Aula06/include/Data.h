#ifndef DATA_H
#define DATA_H

#include <string>

struct Data {
    unsigned dia;
    unsigned mes;
    unsigned ano;

    void formata_string(const std::string& data); 
};

#endif
