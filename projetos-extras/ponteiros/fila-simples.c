//fifo, enqueue, dequeue, empty, full

#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct node {
  int data[max];
  int inicio, fim;
} node;

void inicializar (node *f) {
  f->inicio = f->fim = -1;
}

int empty (node *f) {return f->inicio == -1;}
int full (node *f) {return f->fim == max - 1;}

void enqueue (node *f, int valor) {
  if (full(f)) return;

  if (f->inicio == -1) f->inicio = 0;
  f->data[++f->fim] = valor;
}
int dequeue (node *f) {
  if (empty(f)) return -1;

  int valor = f->data[f->inicio++];
  if (f->inicio == f->fim) {
    f->inicio = f->fim = -1;
  }
  return valor;
}