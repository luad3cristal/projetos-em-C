#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct trab2 {
  int *vetor;
  int posicao;
  int tamanho;
} trab2;

trab2 principal[max];

typedef struct elemento {
  int valor;
  int qtd;
  struct elemento *prox;
} elemento;

void inicializar(trab2 *lista) {
  for (int i = 0; i < max; i++) {
    lista[i].vetor = NULL;
    lista[i].posicao = 0;
    lista[i].tamanho = 0;
  }
}

elemento *criarNo(int valor) {
  elemento *novo = (elemento *)malloc(sizeof(elemento));
  novo->valor = valor;
  novo->qtd = 1;
  novo->prox = NULL;
  return novo;
}

elemento *listaOrdenada(elemento **topo, int valor) {
  elemento *atual = *topo, *anterior = NULL;

  while (atual != NULL && atual->valor < valor) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual != NULL && atual->valor == valor) {
    atual->qtd++;
    return *topo;
  } else {
    elemento *novo = criarNo(valor);

    if (anterior == NULL) {
      novo->prox = atual;
      *topo = novo;
    } else {
      anterior->prox = novo;
      novo->prox = atual;
    }
    return *topo;
  }
}

void imprimir(elemento *topo) {
  if (topo == NULL)
    return;
  elemento *atual = topo;
  while (atual != NULL) {
    printf("Valor: %d; Qtd: %d\n", atual->valor, atual->qtd);
    atual = atual->prox;
  }
}

void destruir(elemento **topo) {
  elemento *atual = *topo;
  while (atual != NULL) {
    elemento *remover = atual;
    atual = atual->prox;
    free(remover);
  }
  *topo = NULL;
}

int main() {
  inicializar(principal);

  for (int i = 0; i < max; i++) {
    principal[i].tamanho = 5;
    principal[i].posicao = 5;
    principal[i].vetor = (int *)malloc(principal[i].tamanho * sizeof(int));
    for (int j = 0; j < 5; j++) {
      principal[i].vetor[j] = i * 10 + j;
    }
  }

  elemento *lista = NULL;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < principal[i].posicao; j++) {
      lista = listaOrdenada(&lista, principal[i].vetor[j]);
    }
  }

  imprimir(lista);
  destruir(&lista);

  for (int i = 0; i < max; i++) {
    free(principal[i].vetor);
  }

  return 0;
}