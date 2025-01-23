#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int valor;
  struct node *prev, *prox;
} node;

node *criarNo (int valor) {
  node *novo = (node *)malloc(sizeof(node));
  novo->valor = valor;
  novo->prev = novo->prox = NULL;
  return novo;
}

void inserir (node **topo, int valor) {
  node *novo = criarNo(valor);

  if (*topo == NULL) {
    *topo = novo;
  }
  else {
    node *atual = *topo;

    while (atual->prox != NULL) atual = atual->prox;

    atual->prox = novo;
    novo->prev = atual;
  }
}