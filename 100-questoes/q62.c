// Faça um programa em C que leia um array de 10 posições e conte quantos números pares são elementos do array. Imprima esta quantidade.

#include <stdio.h>

main () {
  int v[10], soma = 0;

  for (int i = 0; i < 10; i++) {
    printf("Escolha um numero: ");
    scanf("%d", &v[i]);
  }

  for (int j= 0; j < 10; j++) {
    if (v[j] % 2 == 0) 
      soma += 1;
  }
  printf("\nA quantidade de numero pares e: %d", soma);
}