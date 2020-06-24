#ifndef HORARIO_H
#define HORARIO_H

#include <string>

struct Horario {
    unsigned hora;
    unsigned minuto;
    unsigned segundo;

    void formata_string(const std::string& horario); 
};

#endif