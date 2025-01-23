// faça um código com uma pilha para verificar se uma expressão é bem formada com uso de parentêses.
// ((()))(()) 
// push e pop podem ser usadas diretamente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  char data[100];
  int topo;
} Node;

void inicializar(Node *p) {
  p->topo = -1;
}

int empty(Node *p) {return p->topo == -1;}
int full(Node *p) {return p->topo == 99;}

void push (Node *p, char valor) {
  if (full(p)) return;
  
  p->data[++p->topo] = valor;
}

char pop (Node *p) {
  if (empty(p)) return '\0';

  return p->data[p->topo--];
}

int checagem(Node *p) {
  char data[100];

  int fechar = 0, abrir = 0;
  
  for (int i = p->topo; i > -1; i--) {
    data[i] = pop(p);
    if (data[i] == ')') fechar++;
    else if (data[i] == '(') abrir++;
  }

  for (int i = 0; i <= fechar + abrir - 1; i++) {
    push(p, data[i]);
  }
  
  return fechar == abrir;
}

void adicionarString(Node *p, const char *expr) {
    for (int i = 0; i < strlen(expr); i++) {
        push(p, expr[i]);
    }
}

int main() {
  Node pilha;
  inicializar(&pilha);

  // Adicionar a string "((()))(())" na pilha
  adicionarString(&pilha, "((()))(())");


  printf("\n%d", checagem(&pilha));

  return 0;
}