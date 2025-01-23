#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node *prox;
} Node;

Node *buscar (Node *topo, int valor) {
  Node *atual = topo;

  while (atual != NULL ) {
    if (atual->valor == valor) return atual;
    atual = atual->prox;
  }
  return NULL;  
}

void inserir (Node **topo, int valor) {
  Node *novo = (Node*)malloc(sizeof(Node));
  novo->valor = valor;
  novo->prox = NULL;

  if (*topo == NULL) *topo = novo;
  else {
    Node *atual = *topo;
    while (atual->prox != NULL) atual = atual->prox;
    atual->prox = novo;
  }  
}

void excluir (Node *topo, int valor) {
  Node *atual = topo;
  Node *anterior = NULL;
  
  while (atual != NULL) {
    if (atual->valor == valor) {
      if (anterior == NULL) {
        topo = atual->prox;
      }
      else {
        anterior->prox = atual->prox;
      }

      free(atual);
      return;
    }
    anterior = atual;
    atual = atual->prox;
  }
}