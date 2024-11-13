#include <stdio.h>

main () {
  char string[2][100];
  int j = -1, i = 0, size = -1;
  int true = 1;

  printf("insira a primeira string: ");
  gets(string[0]);

  printf("insira a segunda string: ");
  gets(string[1]);

  do {
    size++;
  } while (string[1][size] != '\0');
  
  
  do {
    j++;
    if (string[1][i] == string[0][j]) {
      true = 0;
      i++;
      if (i + 1 == size){
        break;
      }
    } else if (i > 0 && string[1][i] != string[0][j]){
      true = 1;
      i = 0;
    }
  } while (string[0][j] != '\0' && string);

  if (true == 0) 
    printf("a string aparece");
  else 
    printf("a string nao aparece");
}