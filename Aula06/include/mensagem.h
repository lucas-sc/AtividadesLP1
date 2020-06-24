#ifndef MENSAGEM.H
#define MENSAGEM.H
#include <string>
#include <data.h>

struct Mensagem {
  Data data;
  Horario horario;
  std::string conteudo;
};

#endif