// Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre no vetor.

#include <stdio.h>

main() {
  int v[15], count = 0, n;

  for (int i = 0; i < 15; i++) {
    printf("Insira um nº inteiro: ");
    scanf("%d", &v[i]);
  }
  
  for (int i = 0; i < 15; i++) {
    n = v[i];
    count = 0;
    for (int j = 0; j < 15; j++) {
      if (v[i] == v[j]) {
        count++;
      }
    }

    printf("\nNº: %d - Rep: %d", n, count);
  }
}