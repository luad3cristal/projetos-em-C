#include <stdio.h>

typedef struct lista {
  int info;
  struct lista *prev;
  struct lista *prox;
} lista;

void insere (lista **topo, int valor) {
  lista *novo = malloc(sizeof(lista));

  novo->info = valor;
  novo->prox = novo->prev = NULL;

  if (*topo == NULL || (*topo)->info >=valor) {
    novo->prox = *topo;
    if (*topo) (*topo)->prev = novo;
    *topo = novo;
  }
  else {
    lista *atual = *topo;

    while (atual->prox && atual->prox->info < valor) {
      atual = atual->prox;
    }

    novo->prox = atual->prox;
    if (atual->prox) atual->prox->prev = novo;

    atual->prox = novo;
    novo->prev = atual;
  }
}

void exibe (lista *topo) {
  while (topo) {
    printf("%d -> ", topo->info);
    topo = topo->prox;
  }
}


int main(void) {
  lista *topo = NULL;

  insere(&topo, 50);
  insere(&topo, 20);
  insere(&topo, 40);

  printf("Lista duplamente encadeada: ");
  exibe(topo);
}