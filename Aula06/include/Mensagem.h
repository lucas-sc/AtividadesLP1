#ifndef MENSAGEM_H
#define MENSAGEM_H

#include "Data.h"
#include "Horario.h"
#include <string>

struct Mensagem {
   std::string conteudo;
   Data data;
   Horario horario; 
};

#endif
