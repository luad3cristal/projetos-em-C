#include <stdio.h>
#include <stdlib.h>

void alocaEspaco (int **p, int tam) {
  *p = (int *)malloc(tam * sizeof(int));
}

int main () {
  int *p = NULL;
  int num;
  scanf("%d", &num);

  alocaEspaco(&p, num);
  return 0;
}