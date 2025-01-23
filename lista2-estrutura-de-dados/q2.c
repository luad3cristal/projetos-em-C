#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node *prox;
  struct Node *prev;
} Node;


Node *criarNo(int valor) {
  Node *novo = (Node*)malloc(sizeof(Node));
  novo->valor = valor;
  novo->prev = novo->prox = NULL;
  return novo;  
}

void inserirOrdenado (Node **topo, int valor) {
  Node *novo = criarNo(valor);

  if (*topo == NULL) {
    *topo = novo;
    novo->prev = novo->prox = novo;
  }
  else {
    Node *atual = *topo;
    //como o topo só vai ser NULL se tiver vazio, o código roda assim:
    do {
      if (atual->valor >= valor) break;
      atual = atual->prox;
    } while (atual != *topo);

    novo->prox = atual;
    novo->prev = atual->prev;
    atual->prev->prox = novo;
    atual->prev = novo;

    if (atual == *topo && valor < atual->valor) *topo = novo;
  }
}

Node *buscar(Node *topo, int valor) {
  if (topo == NULL) return NULL;
  Node *atual = topo;
  do {
    if (atual->valor == valor) return atual;
    atual = atual->prox;
  } while (atual != topo);
  return NULL;
}
// se não pediu main, não faremos main.