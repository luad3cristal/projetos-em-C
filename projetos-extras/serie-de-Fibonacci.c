#include <stdio.h>

main() {
  float qtd, rep = 0, num1 = 1.0, num2 = 1.0, num3;

  printf("Insira a quantidade de numeros da serie Fibonacci: ");
  scanf("%f", &qtd);

  while (rep < qtd) {
    if (rep < 2) {
      printf("1 ");
    }	
    else {	
      num3 = num2 + num1;
      num1 = num2;
      num2 = num3;

      printf("%.f ", num3);	
    }
    rep++;
  }
}