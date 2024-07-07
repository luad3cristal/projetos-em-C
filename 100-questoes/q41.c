/*
Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 100.
*/

#include <stdio.h>

main () {
  int x;
  for(x=1; x<101; x++)
    if (x < 100)
      printf("%d - ", x);
    else 
      printf("%d", x);
}