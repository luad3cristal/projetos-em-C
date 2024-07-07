/*
Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
*/    

#include <stdio.h>

int main () {
  int num;
  printf("Insira um numero negativo ou positivo a seguir: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("O numero eh negativo");
  }
  if (num > 0) {
    printf("O numero eh positivo");
  }
}