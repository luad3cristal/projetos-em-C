#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int valores[100];
  int topoA, topoB;
  int limiteA, limiteB;
} pilha;

void inicializar(pilha *p) {
  p->topoA = -1;
  p->topoB = 49;
  p->limiteA = 49;
  p->limiteB = 99;
}

int emptyA(pilha *p) {return p->topoA == -1;}
int emptyB(pilha *p) {return p->topoB == 49;}

int cheioA(pilha *p) {return p->topoA == p->limiteA;}
int cheioB(pilha *p) {return p->topoB == p->limiteB;}

int pushA(pilha *p, int valor) {
  if(cheioA(p)) return -1;

  if (p->topoA <= p->limiteA) {
    p->valores[++p->topoA] = valor;
    return 1;
  }
   
  return -1;
}
int pushB(pilha *p, int valor) {
  if(cheioB(p)) return -1;

  if (p->topoB <= p->limiteB) {
    p->valores[++p->topoB] = valor;
    return 1;
  }

  return -1;
}

int popA(pilha *p) {
  if (emptyA(p)) return -1;

  return p->valores[p->topoA--];
}
int popB(pilha *p) {
  if (emptyB(p)) return -1;

  return p->valores[p->topoB--];
}