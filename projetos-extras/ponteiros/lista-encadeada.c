#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int valor;
  struct node *prox;
} node;

node *criarNo (int valor) {
  node *novo = (node *)malloc(sizeof(node));
  novo->valor = valor;
  novo->prox = NULL;
  return novo;
}

void inserir (node **topo, int valor) {
  node *novo = criarNo(valor);

  if (*topo == NULL)
    *topo = novo;
  else {
    node *atual = *topo;

    while (atual->prox != NULL) atual = atual->prox;

    atual->prox = novo;
  }
}