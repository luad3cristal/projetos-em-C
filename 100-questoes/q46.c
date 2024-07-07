/*
Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado.
*/

#include <stdio.h>

main () {
  int a, b, sub, div;

  printf("Insira o valor de a e b: ");
  scanf("%d, %d", &a, &b);

  while (a <= 0 || b <= 0) {
    printf("Insira o valor de a e b: ");
    scanf("%d, %d", &a, &b);
  }

  div = a / b;
  do {
    sub = a - b;
    a = sub;
    b--;
    
  } while (div != sub);

  printf("%d \n", div);
  printf("%d \n", sub);
}