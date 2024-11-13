#include <stdio.h>

main () {
  char string[2][100];
  char maiuscula, minuscula;

  gets(string[0]);
  gets(string[1]);

  for (int i = 0; string[0][i] != '\0'; i++) {
    maiuscula = string[0][i] - 32;
    minuscula = string[0][i] + 32;
    if ((maiuscula != string[1][i]) && (minuscula == string[1][i]) && (string[0][i] == string[1][i]) ) {
      printf("as string sao diferntes");
      break;
    }
    else if (string[0][i + 1] == '\0') {
      printf("as string sao iguaos");
      break;
    }
  }
}