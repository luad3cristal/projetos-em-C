#include <stdio.h>

main() {
  int num, binario[8], i;

  printf("Escolha um numero: ");
  scanf("%d", &num);

  for (i = 7; i > -1; i--){
    binario[i] = num % 2;
    num = num / 2;
  }

  for (i = 0; i < 8; i++) {
    printf("%d", binario[i]);
  }
  
}