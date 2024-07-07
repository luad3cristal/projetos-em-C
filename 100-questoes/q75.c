// Escreva um programa que ordene um array de inteiros de 15 posições utilizando o método da bolha (bubble sort).

#include <stdio.h>

main () {
  int v[15] = {5, 8, 31, 45, 12, 78, 65, 2, 1, 78, 99, 32, 125, 0, 45}, i, j, aux;

  for (i = 0; i < 15; i++) {
    for (j = 0; j < 15; j++) {
      if (v[j] > v[i]) {
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }

  for (i = 0; i < 15; i++) {
    printf("v[%d] = {%d}\n", i, v[i]);
  }
}