#include <stdio.h>

typedef struct pilha {
  int info;
  struct pilha *prox;
} pilha;

void insere (pilha **topo, int valor) {
  pilha *novo = malloc(sizeof(pilha));
  novo->info = valor;
  novo->prox = *topo;
  *topo = novo;
}

void exibe (pilha *topo) {
  while (topo) {
    printf("%d -> ", topo->info);
    topo = topo->prox;
  }
}


int main(void) {
  pilha *topo = NULL;

  // o usuário que se lasque (com todo respeito)
  insere(&topo, 10); // Insere o valor 10
  insere(&topo, 20); // Insere o valor 20
  insere(&topo, 30); // Insere o valor 30

  printf("Pilha: ");
  exibe(topo); // Exibe a pilha
  
}