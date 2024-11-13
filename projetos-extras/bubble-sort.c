#include <stdio.h>

main () {
  int v[10], count = 0, aux;
  while (count < 10) {
    printf("Insira um valor: ");
    scanf("%d", &v[count]);
    count++;
  }

  for (int i = 0; i < 10 ; i++) {
    for (int j = 0; j < 10; j++) {
      if (v[j] < v[j + 1]) {
        aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
      }
    }
  }

  count = 0;
  while (count < 10) {
    printf("%d ", v[i]);
    count++;
  }
}