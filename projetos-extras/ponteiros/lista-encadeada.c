#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int valor;
  struct node *prox;
} node;

node *criarNo(int valor) {
  node *novo = (node *)malloc(sizeof(node));
  novo->valor = valor;
  novo->prox = NULL;
  return novo;
}

void inserir(node **topo, int valor) {
  node *novo = criarNo(valor);

  if (*topo == NULL) {
    *topo = novo;
  } else {
    node *atual = *topo;

    while (atual->prox != NULL)
      atual = atual->prox;

    atual->prox = novo;
  }
}

void inserirOrdenado(node **topo, int valor) {
  node *novo = criarNo(valor);

  if (*topo == NULL || (*topo)->valor >= valor) {
    novo->prox = *topo;
    *topo = novo;
  } else {
    node *atual = *topo;

    while (atual->prox != NULL && atual->prox->valor < valor) {
      atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
  }
}

int excluir(node **topo, int valor) {
  if (*topo == NULL) return -1;
  
  node *atual = *topo;

  if (atual->valor == valor) {
    *topo = atual->prox;
    free(atual);
    return 1;
  }
  
  while (atual->prox != NULL && atual->prox->valor != valor)
    atual = atual->prox;
  
  if (atual->prox == NULL) return -1;

  node *remover = atual->prox;
  atual->prox = remover->prox;
  free(remover);
  return 1;
}