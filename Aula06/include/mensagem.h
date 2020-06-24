#ifndef MENSAGEM_H
#define MENSAGEM_H
#include <string>
#include <data.h>

struct Mensagem {
  Data data;
  Horario horario;
  std::string conteudo;
};

#endif
