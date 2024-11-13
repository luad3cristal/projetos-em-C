#include <stdio.h>

main () {
  char string[2][100];
  int count = 0;

  printf("Insira a string: ");
  gets(string[0]);

  printf("\ninsira o character: ");
  gets(string[1]);

  for (int i = 0; string[0][i] != '\0'; i++) {
    if (string[1][0] == string[0][i])
      count++;
  }

  printf("\n %d", count);
}