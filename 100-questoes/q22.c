/*
Escreva um programa que leia um número e exiba o seu módulo.
*/

#include <stdio.h>

int main(void) {
  int num;
  printf("Insira um numero para ser inserido o modulo: ");
  scanf("%d", &num);

  if (num < 0) {
    num = -num;
    printf("O modulo do numero eh: %d", num);
  } 
  else if (num > 0) {
    printf("O modulo do numero eh: %d", num); 
  } 
    
}
