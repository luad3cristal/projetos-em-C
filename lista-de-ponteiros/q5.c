#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura lista
typedef struct lista {
  int info;
  struct lista *prox;
} lista;

// Função para inserir um elemento na lista de forma ordenada
void insere(lista **topo, int valor) {
  lista *novo = (lista *)malloc(sizeof(lista));

  if (!novo) {
    printf("Erro ao alocar memória.\n");
    return;
  }

  novo->info = valor;
  novo->prox = NULL;

  if (*topo == NULL || (*topo)->info >= valor) {
    novo->prox = *topo;
    *topo = novo;
  } 
  
  else {
    lista *atual = *topo;
    
    while (atual->prox && atual->prox->info < valor) {
      atual = atual->prox;
    }
    
    novo->prox = atual->prox;
    atual->prox = novo;
  }
}

void exibe(lista *topo) {
  while (topo) {
    printf("%d -> ", topo->info);
    topo = topo->prox;
  }
}

int main(void) {
  lista *topo = NULL;

  insere(&topo, 30);
  insere(&topo, 90);
  insere(&topo, 20);

  printf("Lista encadeada: ");
  exibe(topo);

}