#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int info[100];
  int topo;
} pilha;

void inicializar(pilha *p) { p->topo = -1; }

void push(pilha *p, int valor) {
  if (p->topo <= 99)
    p->info[++p->topo] = valor;
  else
    printf("Erro\n");
}

int pop(pilha *p) {
  if (p->topo > -1)
    return p->info[p->topo--];
  else
    printf("Erro\n");
  return -1;
}

void ordenacao(pilha *p1, pilha *p2, pilha *p3) {
  inicializar(p3);

  while (p1->topo > -1 && p2->topo > -1) {

    if (p1->info[p1->topo] < p2->info[p2->topo])
      push(p3, pop(p1));
    else
      push(p3, pop(p2));
  }

  while (p1->topo > -1)
    push(p3, pop(p1));
  while (p2->topo > -1)
    push(p3, pop(p2));
}