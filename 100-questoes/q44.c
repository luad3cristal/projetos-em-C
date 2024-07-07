/*
Escreva um programa que imprima todos os números de 1 até 100, inclusive, e a soma de todos eles.
*/

#include <stdio.h>

main () {
  int x, soma = 0;
  for (x = 0; x < 101; x++){
    if (x < 100)
      printf("%d - ", x);
    else 
      printf("%d\n\n", x);
    
    soma = soma + x;
    
  }
  printf("%d", soma);
}