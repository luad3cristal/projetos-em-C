/*
Fazer um programa que calcule e escreva a seguinte soma: 

2^1/50 + 2^2/49 + 2^3/48 + ... + 2^50/1
*/

#include <stdio.h>

main () {
  float div, num = 2.0, exp, soma;
  int count = 0;

  soma = 2.0/50.0;
  for (div = 49.0; div > 0.0; div--) {
    count++;
    
    num = 2.0;
    exp = 50.0 - div;
    while (exp > 0.0) {
      num = num * 2;
      exp--;
    }


    soma = soma + (num/div);

    printf("%d - %.2f\n\n", count, soma);
  }
}