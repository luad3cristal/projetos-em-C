// Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na posição (um por linha)

#include <stdio.h>

main () {
  int v[20] = {0};
  int i = 0;
  
  while (i < 20) {
    printf("%d. %d\n", i, v[i]);
    i++;
  }
}