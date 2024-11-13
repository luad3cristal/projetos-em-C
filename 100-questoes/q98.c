#include <stdio.h>

main () {
  int a[4][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
      {10, 11, 12}
  }, b[3][2] = {
      {1, 2},
      {3, 4},
      {5, 6}
  };
  int mult[4][2] = {{0}};

  for (int i = 0; i < 4; i++) { //linha de a
    for (int j = 0; j < 2; j++) { //coluna de b
      for (int k = 0; k < 3; k++) {
        mult[i][j] += a[i][k] * b[k][j]; 
      }
      printf("multiplicacao %d\n", mult[i][j]);
    } 
  }
}