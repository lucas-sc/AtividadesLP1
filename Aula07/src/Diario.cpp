#include "Diario.h"
#include <iostream>

 Diario::Diario(const std::string& nome_arquivo): nome_arquivo(nome_arquivo), mensagens(nullptr), quantidade_mensagens(0) {
   
     capacidade_mensagens = 10;
     mensagens = new Mensagem[capacidade_mensagens];  //alocando dinamicamente
 }
 void Diario::add(const std::string& mensagem){
      // adicionar mensagem no array de mensagens
      for (size_t i = 0; i < capacidade_mensagens; ++i)
      {
            mensagens[quantidade_mensagens].conteudo = mensagem;
            quantidade_mensagens++;
      }
      
 }
 void Diario::escreveArquivo(){
     // gravar as mensagens no disco
 }