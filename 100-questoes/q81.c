#include <stdio.h>

main () {
  char string[2][100];
  int espaco = 0;
  int i = 0, j = 0; 

  printf("insira uma string: ");
  gets(string[0]);

  do {
    if (string[0][i] != 32) {
      string[1][j] = string[0][i];
      j++;
      i++;
      espaco = 0;
    } else {
        i++;
        if (espaco < 1) {
          string[1][j] = 32;
          espaco++;
          j++;
        }
        else if (espaco >= 1) {
          espaco++;
        }
      }
    
  } while (string[0][i] != '\0');

  puts(string[1]);
}