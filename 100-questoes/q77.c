#include <stdio.h>

main() {
  char string[100], invertido[100];
  int size = -1;
  int j = 0, i = 0;

  printf("Insira a string: ");
  gets(string);

  do {
    size++;
  } while(string[size] != '\0');

  i = size - 1;
  do {
    invertido[j] = string[i];
    i--;
    j++;
  } while (i >= 0);
    
  puts(invertido);
}