#include <stdio.h>

main() {
  char str[2][100];
  int size = 0, size2 = 0;

  printf("Insira uma string: ");
  gets(str[0]);
  printf("\nInsira uma string: ");
  gets(str[1]);

  // avalia o tamanho de ambas as strings
  do {
    size++;
  } while (str[0][size] != '\0');

  do {
    size2++;
  } while (str[1][size2] != '\0');

  // se o tamanho for diferente, elas sao diferentes
  if (size != size2) {
    printf("\nAs strings sao diferentes.");
  } else {
    for (int i = 0; i < size; i++) {
      // se alguma letra for diferente, sao diferentes e sai do loop
      if (str[0][i] != str[1][i]) {
        printf("\nAs strings sao diferentes");
        break;
      }
      // percorreu tudo, é igual e vai sair do loop? as strings sao iguais
      else if (i + 1 == size) {
        printf("\nAs strings sao iguais");
      }
    }
  }
    
}