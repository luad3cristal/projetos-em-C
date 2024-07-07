// Escreva um programa que calcule o resto da divisão de A por B (número inteiros e positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado

#include <stdio.h>

main () {
  int a, b, resto, sub;

  printf("Insira o valor de a e b: ");
  scanf("%d, %d", &a, &b);

  while (a <= 0 || b <= 0) {
    printf("Insira o valor de a e b: ");
    scanf("%d, %d", &a, &b);
  }
  
  resto = a % b;

  do {
    sub = a - b;
    a = sub;
  } while (resto != sub);

  printf("%d\n", resto);
  printf("%d", sub);
}