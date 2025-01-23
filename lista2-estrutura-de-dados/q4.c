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
    else if (atual->valor > valor) return NULL;
    atual = atual->prox;
  }
  return NULL;  
}

void inserir (Node **topo, int valor) {
  Node *novo = (Node*)malloc(sizeof(Node));
  novo->valor = valor;

  if (*topo == NULL || (*topo)->valor > valor) {
    novo->prox = *topo;
    *topo = novo;
  }
  else {
    Node *atual = *topo;
    while (atual->prox != NULL && atual->prox->valor <= valor) {
      atual = atual->prox;
    }
    novo->prox = atual->prox;
    atual->prox = novo;
  }  
}