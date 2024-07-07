/*
Escreva um programa, que leia o número de termos da série (n) e imprima como saída, o cálculo do número de Euler para cada um dos n primeiros elementos da série.
*/

#include <stdio.h>

main () {
  int n = 1.0, aux = n, mult = n, rep, atual;
  float e = 1.0;

  printf("Insira a quantidade de repeticoes a serem realizadas: ");
  scanf("%d", &rep);

  for (atual = 0; atual < rep; atual++) {
    mult -= 1.0;
    while (mult > 0) {
      n = n * mult;
      mult -= 1.0;
    }

    if (mult == 0) {
      e += 1.0/n;
      n = aux + 1.0;
      aux = n;
      mult = n;
    }
  }

  printf("%f", e);
}