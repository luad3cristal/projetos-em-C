#include <stdio.h>

main () {
  char string[2][100];
  int inicial, final;
  int i, j;

  printf("Insira a string: ");
  gets(string[0]);

  printf("\na onde comeca? a onde termina? ");
  scanf("%d, %d", &inicial, &final);

  j = 0;
  i = inicial;
  do {
    string[1][j] = string[0][i];
    i++;
    j++;
  } while (i < final);

  puts(string[1]);
}