#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha {
  char info [100];
  int topo;
} pilha;

void inicializar (pilha *p) {
  p->topo = -1;
}

void push (pilha *p, char valor) {
  p->info[++p->topo] = valor;
}

char pop(pilha *p) {
  return p->info[p->topo--];
}

int verificarPalindromo(char *palavra) {
  pilha p;
  inicializar(&p);

  int tamanho = strlen(palavra);
  int meio = tamanho / 2;

  for (int i = 0; i < meio; i++) {
    push(&p, palavra[i]);
  }

  if (tamanho % 2 != 0) meio++;

  for (int i = meio; i < tamanho; i++) {
    if (pop(&p) != palavra[i]) return 0;
  }
  return 1;  
}