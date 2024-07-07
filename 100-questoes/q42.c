/*
Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem decrescente).
*/

#include <stdio.h>

main () {
  int x;
  for(x = 100; x != 0; x--){
    if (x != 1)
      printf("%d - ", x);
    else
      printf("%d", x);
  }
}