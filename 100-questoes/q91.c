#include <stdio.h>

main () {
  int A[5][5] = {
  {1,  2,  3,  4,  5}, {6,  7,  8,  9,  10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}
  };
  int somaLinhas[5] = {0}, somaColunas[5] = {0};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      somaColunas[i] += A[j][i];
      somaLinhas[i] += A[i][j];
    }
    printf("colunas %d, linhas %d\n", somaColunas[i], somaLinhas[i]);
  }
}