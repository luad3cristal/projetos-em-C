#include <stdio.h>

main () {
  int A[3][4] = {
  {1,  2,  3,  4},
  {5,  6,  7,  8},
  {9,  10, 11, 12}
  }, B[3][4] = {
  {13, 14, 15, 16},
  {17, 18, 19, 20},
  {21, 22, 23, 24}
  };
  int soma[3][4] = {{0}}, dif[3][4] = {{0}};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      soma[j][i] = A[j][i] + B[j][i];
      dif[j][i] = B[j][i] - A[j][i];
      printf("soma %d, diferenca %d\n", soma[j][i], dif[j][i]);  
    }
  }
}