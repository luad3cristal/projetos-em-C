// Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o valor não ocorra no vetor (Busca Sequencial).

#include <stdio.h>

main () {
  int v[10], num;

  for (int i = 0; i < 10; i++) {
    printf("Escolha um numero para compor o vetor: ");
    scanf("%d", &v[i]);
  }
  
  printf("Insira um numero: ");
  scanf("%d", &num);

  for (int i = 0; i < 10; i++) {
    if (v[i] == num) {
      printf("O valor foi encontrado na posição: %d", i);
      break;
    }

    if (i == 9) {
      if (v[i] != num) 
        printf("-1");
    }
  }
}