#include <stdio.h>

main () {
  int size = 0;
  char nome[100];

  printf("Insira seu nome: ");
  gets(nome);

  do {
    size++;
  } while(nome[size] != '\0');
  printf("%d", size);
}