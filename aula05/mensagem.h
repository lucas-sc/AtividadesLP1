#ifndef DIARIO.H
#define DIARIO.H
#include <string>

struct Data {
  int dia;
  int mes;
  int ano;  
};

struct Horario {
  int hora;
  int minuto;
  int segundo;
};

struct Mensagem {
  Data data;
  Horario horario;
  std::string conteudo;

  bool verifica_datas(const Mensagem &other_mensagem);
};

#endif
