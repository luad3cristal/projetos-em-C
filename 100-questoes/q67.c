// Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro vetor.

#include <stdio.h>

main() {
  int v[10] = {8, 9, 3, 6, 3, 1, 4, 02, 10, 69}, v1[10] = { 78, 45, 20, 91, 30, 99, 12, 43, 76, 41}, v2[10];

  for (int n = 0; n < 10; n++) {
    if (v[n] > v1[n]) 
      v2[n] = v[n];
    else
      v2[n] = v1[n];
  
    printf("v[%d] = {%d}\n", n, v2[n]);
  }
}