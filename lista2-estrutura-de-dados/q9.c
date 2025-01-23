#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
  int data[10];
  int inicio, fim;
} fila;

void inicializar(fila *f) {
  f->inicio = -1;
  f->fim = -1;
}

int filaVazia(fila *f) {return f->inicio == -1;}
int filaCheia(fila *f) {return f->fim == 9;}

int enfileirar (fila *f, int valor) {
  if (filaCheia(f)) return 0;

  if(f->inicio == -1) 
    f->inicio++;

  f->data[++f->fim] = valor;
  return 1;
}

int desenfileirar (fila *f) {
  if (filaVazia(f)) return 0;

  int valor = f->data[f->inicio];
  if (f->fim == f->inicio) {
    f->fim--;
    f->inicio--;
  } 
  else {
    f->inicio++;
  }

  return valor;  
}

int main(void) {
  fila filaMaior, filaMenor;
  inicializar(&filaMaior);
  inicializar(&filaMenor);

  int escolha, valor;
  while(1) {
    printf("\nEscolha uma opcao:\n");
    printf("1. Inserir na fila\n");
    printf("2. Retirar da fila\n");
    printf("3. Sair\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite o valor: ");
        scanf("%d", &valor);

        printf("Escolha a fila (1 para maior prioridade, 2 para menor prioridade): ");
        int filaEscolha;
        scanf("%d", &filaEscolha);

        if (filaEscolha == 1) {
            enfileirar(&filaMaior, valor);
        } 
        else if (filaEscolha == 2) {
            enfileirar(&filaMenor, valor);
        } 
        else {
            printf("Opcao invalida.\n");
        }
    } 
    else if (escolha == 2) {
        if (!filaVazia(&filaMaior)) {
            printf("Retirado da fila de maior prioridade: %d\n", desenfileirar(&filaMaior));
        } 
        else if (!filaVazia(&filaMenor)) {
            printf("Fila de maior prioridade vazia. Retirado da fila de menor prioridade: %d\n", desenfileirar(&filaMenor));
        } 
        else {
            printf("Ambas as filas estao vazias!\n");
        }
    } 
    else if (escolha == 3) {
        break;
    } 
    else {
        printf("Opcao invalida.\n");
    }
  }
  
}