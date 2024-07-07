// Sendo S = 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 ... 1/N^N, um somatório de N (informado pelo usuário) termos, escreva um programa para calcular S para um número N.

#include <stdio.h>

main () {
  float s = 1.0;
  int calc, rep, div;

  printf("Insira quantos repeticoes ocorrerao: ");
  scanf("%d", &rep);

  for (int i = 0; i <= rep; i++) {
    calc = 0.0;
    div = i;
    while (calc < i - 1) {
      div = div * i;
      calc++;
    }

    if (i > 1)
      s = s + 1.0/div;

  }
  printf("O valor final eh: %.3f", s);

}