#include <stdio.h>

main() {
  int raiz, sub, calc, n;

  printf("Escolha um numero inteiro: ");
  scanf("%d", &n);

  sub = 1;
  for (raiz = 0; raiz < n; raiz++) {
    n = n - sub;

    sub += 2;  
  }

  if (n == 0) {
    printf("O valor exato da raiz eh %d", raiz);
  }
  else {
    printf("O valor aproximado da raiz eh %d", raiz);
  }
}