#include <stdio.h>

main () {
  char string[100], palavra[100];
  int tamanho = 0, posicao = 0;
  int maior = 0, posicao2 = 0;
  int i = 0, j;

  printf("insira uma string: ");
  gets(string);
  
  while (string[i] != '\0') {
    if (string[i] != 32) {
      if (tamanho == 0)
        posicao = i;

      tamanho++;
    } else {
      if (tamanho > maior) {
        maior = tamanho;
        posicao2 = posicao;

      }
        tamanho = 0;
    }
    i++;
  }

  if (tamanho > maior) {
    maior = tamanho;
    posicao2 = posicao;

    tamanho = 0;
  }

  for (int i = posicao2, j = 0; i <= maior + posicao2; i++, j++) {
    palavra[j] = string[i];
  }

  puts(palavra);
}