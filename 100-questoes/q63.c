// Escreva um programa que leia dois vetores de números reais de mesma dimensão (10 posições), e imprima o vetor resultante da soma destes vetores.

#include <stdio.h>

main () {
  int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, v1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, v2[10];

  for (int i = 0; i < 10; i++) {
    v2[i] = v[i] + v1[i];
    printf("v[%d] = {%d}\n", i, v2[i]);
  }
}