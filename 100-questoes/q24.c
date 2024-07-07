/*
Escreva um programa que leia três números e mostre o maior entre eles.
*/

#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  printf("Insira 3 numeros a seguir: ");
  scanf("%d, %d, %d", &n1, &n2, &n3);

  if (n1 > n2 && n1> n3) 
    printf("O maior numero eh: %d", n1);
  if (n2 > n3 && n2 > n1) 
    printf("O maior numero eh: %d", n2);
  if (n3 > n2 && n3 > n1)
    printf("O maior numero eh: %d", n3);
}