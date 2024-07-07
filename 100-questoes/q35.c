/* 
Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, mostre uma mensagem de erro. 
*/

#include <stdio.h>

int main(void) {
  int dw; // day of the week :)
  printf("Insira o numero correspondente ao dia da semana atual: ");
  scanf("%d", &dw);
  if (dw > 7) {
    printf("Numero fora do escopo. Insira outro numero: ");
    scanf("%d", &dw);
  }
  if (dw <= 7) {
    switch(dw){
      case 1: printf("\ndomingo"); break;
      case 2: printf("\nsegunda"); break;
      case 3: printf("\nterça"); break;
      case 4: printf("\nquarta"); break;
      case 5: printf("\nquinta"); break;
      case 6: printf("\nsexta"); break;
      case 7: printf("\nsabado"); break;
    }
  }
}