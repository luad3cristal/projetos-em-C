#include <stdio.h>

main() {
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'}, string[100];
  int ocorrencia = 0;

  printf("Insira uma string: ");
  gets(string);

  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == vogais[0] || string[i] == vogais[1] || string[i] == vogais[2] || string[i] == vogais[3] || string[i] == vogais[4]) 
      ocorrencia++;
  }

  printf("\nExistem %d ocorrencias nessa string.", ocorrencia);
}
