#include <stdio.h>
#include <stdlib.h>

#define size 10

typedef struct node {
  int inicio, fim, tam;
  int limiteInicio, limiteFim;
} node;

void inicializar(node *fila, int limiteInicio, int limiteFim) {
  fila->inicio = limiteInicio;
  fila->fim = limiteInicio - 1;
  fila->tam = 0;
  fila->limiteInicio = limiteInicio;
  fila->limiteFim = limiteFim;
}

int vazia(node *fila) { return fila->tam == 0; }

int cheia(node *fila) {
  return fila->tam == (fila->limiteFim - fila->limiteInicio + 1);
}

int inserir(node *fila, int vetor[], int valor) {
  if (cheia(fila))
    return 0;

  fila->fim =
      (fila->fim + 1) > fila->limiteFim ? fila->limiteInicio : fila->fim + 1;
  vetor[fila->fim] = valor;
  fila->tam++;
  return 1;
}

int pesquisar(node *fila, int vetor[], int valor) {
  if (vazia(fila))
    return 0;

  int idx = fila->inicio;
  for (int i = 0; i < fila->tam; i++) {
    if (vetor[idx] == valor)
      return 1;
    idx = (idx + 1) > fila->limiteFim ? fila->limiteInicio : idx + 1;
  }
  return 0;
}

int excluir(node *fila, int vetor[], int *valor) {
  if (vazia(fila))
    return 0;

  *valor = vetor[fila->inicio];
  fila->inicio = (fila->inicio + 1) > fila->limiteFim ? fila->limiteInicio
                                                      : fila->inicio + 1;
  fila->tam--;
  return 1;
}

int main(void) {
  int vetor[20];
  node fila1, fila2;

  inicializar(&fila1, 0, 9);
  inicializar(&fila2, 10, 19);

  // Inserindo valores nas filas
  inserir(&fila1, vetor, 10);
  inserir(&fila1, vetor, 20);
  inserir(&fila2, vetor, 30);
  inserir(&fila2, vetor, 40);

  // Removendo valores das filas
  int valor = 10;
  if (excluir(&fila1, vetor, &valor)) {
    printf("Valor removido da Fila 1: %d\n", valor);
  } else {
    printf("Valor não encontrado na Fila 1: %d\n", valor);
  }
  if (excluir(&fila2, vetor, &valor)) {
    printf("Valor removido da Fila 2: %d\n", valor);
  } else {
    printf("Valor não encontrado na Fila 2: %d\n", valor);
  }

  // Pesquisando valores nas filas
  if (pesquisar(&fila1, vetor, 20)) {
    printf("Valor 20 encontrado na Fila 1\n");
  } else {
    printf("Valor 20 não encontrado na Fila 1\n");
  }
  if (!pesquisar(&fila2, vetor, 50)) {
    printf("Valor 50 não encontrado na Fila 2\n");
  } else {
    printf("Valor 50 encontrado na Fila 1\n");
  }

  return 0;
}