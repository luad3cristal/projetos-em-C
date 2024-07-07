// Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o valor não ocorra no vetor (Busca Binária).

#include <stdio.h>

main () {
  int v[10], aux, num, i;

  for (i = 0; i < 10; i++) {
    printf("Insira um numero para compor o vetor: ");
    scanf("%d", &v[i]);
  }

  for (i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (v[j] > v[i]) {
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }

  printf("Escolha um numero: ");
  scanf("%d", &num);
  
  for (i = 0; i < 10; i++) {
    if (v[i] == num) {
      printf("O numero foi encontrado na posicao: %d", i);
      break;
    }

    if (i == 9 && v[i] != num)
      printf("-1");
  }
}