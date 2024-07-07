#include <stdio.h>

int main() {
  int num;

  printf("Insira um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("O numero eh divisivel por 2\n");
  } 
  if (num % 5 == 0) {
    printf("O numero eh divisivel por 5\n");
  }
  if (num % 10 == 0) {
    printf("O numero eh divisivel por 10\n");
  }
}