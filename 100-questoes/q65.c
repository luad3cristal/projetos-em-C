// Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array, bem como suas respectivas posições.

#include <stdio.h>

main () {
  int v[20] = {8, 9, 3, 6, 3, 1, 4, 02, 10, 69, 78, 45, 20, 91, 30, 99, 12, 43, 76, 41}, maior, menor, pos, pos1;

  maior = v[0];
  menor = v[0];

  for (int n = 0; n < 20; n++) {
    if (v[n] < menor) {
      menor = v[n];
      pos = n;
    }

    if (v[n] > maior) {
      maior = v[n];
      pos1 = n;
    }
  }

  printf("v[%d] = {%d}\nv[%d] = {%d}", pos, menor, pos1, maior);
}