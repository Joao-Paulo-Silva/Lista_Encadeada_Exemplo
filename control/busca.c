#include "busca.h"

/* 
 * Função buscaProduto retorna um  endereço de um Produto, se encontrado na lista
 * de produtos a partir do nome.
 */
Produto * buscaProduto(Lista * listaProdutos, char * nome){
Lista * aux = listaProdutos;
  while(aux != NULL){
    Produto * pdt = (Produto *) aux->tipoGenerico;
    if(strcmp(pdt->nome, nome) == 0){
      return pdt;
    }
    aux = aux->proximo;
  }
  return NULL;
}

/* 
 * Função buscaUsuarios retorna um  endereço de um Usuario, se encontrado na lista
 * de usuários a partir do nome.
 */
Usuario * buscaUsuarios(Lista * listaUsuarios, char * nome){
  Lista * aux = listaUsuarios;
  while(aux != NULL){
    Usuario * user = (Usuario *) aux->tipoGenerico;
    if(strcmp(user->nome, nome) == 0){
      return user;
    }
    aux = aux->proximo;
  }
  return NULL;
}