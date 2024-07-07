// Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em um segundo vetor e imprima este último.

#include <stdio.h>

main () {
  int v[10] = {8, 9, 3, 6, 3, 1, 4, 02, 10, 69}, v1[10];

  for (int i = 0; i < 10; i++) {
    v1[i] = v[i];

    printf("v1[%d] = {%d}\n", i, v1[i]);
  }
  
}