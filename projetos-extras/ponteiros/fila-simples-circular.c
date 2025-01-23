//fifo, enqueue, dequeue, empty, full

#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct node {
  int data[max];
  int inicio, fim;
} node;

void inicializar (node *f) {
  f->inicio = f->fim = 0;
}

int empty (node *f) {return f->inicio == f->fim;}
int full (node *f) {return (f->fim + 1) % max == f->inicio;}

void enqueue (node *f, int valor) {
  if (full(f)) return;

  f->data[f->fim] = valor;
  f->fim = (f->fim + 1) % max;
}

int dequeue (node *f) {
  if (empty(f)) return -1;

  int valor = f->data[f->inicio];
  f->inicio = (f->inicio + 1) % max;
  return valor;
}