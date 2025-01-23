// lifo, topo, empty, full, push, pop
#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct node {
  int data[max];
  int topo;
} node;

void inicializar (node *p) {
  p->topo = -1;
}

int empty(node *p) {return p->topo == -1;}
int full(node *p) {return p->topo == max - 1;}

void push(node *p, int valor) {
  if (full(p)) return;

  p->data[++p->topo] = valor;
}

int pop (node *p) {
  if (empty(p)) return -1;

  return p->data[p->topo--];  
}