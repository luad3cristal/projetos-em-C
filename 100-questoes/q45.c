/*
Escreva um programa que leia 5 números, e imprima a média entre eles
*/

#include <stdio.h>

main () {
  int I, II, III, IV, V, media;
  printf("Insira 5 numeros: ");
  scanf("%d, %d, %d, %d, %d", &I, &II, &III, &IV, &V);

  media = (I + II + III + IV + V)/5;
  printf("%d", media);
  
}