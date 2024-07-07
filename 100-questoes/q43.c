/*
Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 100.
*/

#include <stdio.h>

main () {
  int x;
  for (x = 0; x < 101; x++) {
    if (x % 2 == 0 && x < 100)
      printf("%d - ", x);
    else if (x == 100)
      printf("%d", x);
    else continue;
  }
}