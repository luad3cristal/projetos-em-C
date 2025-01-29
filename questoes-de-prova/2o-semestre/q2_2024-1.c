#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct listaPrincipal {
  int *vetor;
  int posicao;
  int tamanho;
  int qtd;
  float media;
} listaPrincipal;

listaPrincipal principal[max];

typedef struct listaEncadeada {
  int valor;
  struct listaEncadeada *prox;
} listaEncadeada;

void inicializar(listaPrincipal *principal) {
  for (int i = 0; i < max; i++) {
    principal[i].vetor = NULL;
    principal[i].posicao = 0;
    principal[i].tamanho = 0;
    principal[i].qtd = 0;
    principal[i].media = 0.0;
  }
}

listaEncadeada *criarNo(int valor) {
  listaEncadeada *novo = (listaEncadeada *)malloc(sizeof(listaEncadeada));
  novo->valor = valor;
  novo->prox = NULL;
  return novo;
}

listaPrincipal *pegaDados(listaPrincipal *principal) {
  listaPrincipal *aux = (listaPrincipal *)malloc(max * sizeof(listaPrincipal));
  ;
  inicializar(aux);

  for (int i = 0; i < max; i++) {
    aux[i].vetor = (int *)malloc(principal[i].posicao * sizeof(int));
    aux[i].posicao = 0;
    aux[i].media = 0.0;

    for (int j = 0; j < principal[i].posicao; j++) {
      aux[i].media += principal[i].vetor[j];
    }
    if (principal[i].posicao > 0)
      aux[i].media /= principal[i].posicao;

    for (int j = 0; j < principal[i].posicao; j++) {
      if (principal[i].vetor[j] > aux[i].media)
        aux[i].vetor[aux[i].posicao++] = principal[i].vetor[j];
    }
  }

  return aux;
}

void insereLista(listaEncadeada **topo, listaPrincipal *aux) {
  for (int i = 0; i < max; i++) {
    for (int j = 0; j < aux[i].posicao; j++) {
      listaEncadeada *novo = criarNo(aux[i].vetor[j]);
      if (*topo == NULL) {
        *topo = novo;
      } else {
        listaEncadeada *atual = *topo;

        while (atual->prox != NULL)
          atual = atual->prox;

        atual->prox = novo;
      }
    }
  }
}

int main() {
  inicializar(principal);

  listaPrincipal *aux = pegaDados(principal);

  listaEncadeada *topo = NULL;
  insereLista(&topo, aux);
}