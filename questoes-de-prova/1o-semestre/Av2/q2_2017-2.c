// Um número n é dito abundante se ele for um número inteiro positivo para o qual a soma dos seus divisores excede o seu dobro (2n). Assim 10 não é abundante pois (1+2+5+10 = 17 não é maior que 20 = 2*10), mas 12 é abundante pois (1+2+3+4+6+12=28 é maior que 24 = 2 *12). Escreva um programa em C, que leia um valor K qualquer, e gere uma sequência com os primeiro K números abundantes

#include <stdio.h>

main () {
  int n, dobro, soma, div, k, rep;

  printf("Escolha quantas repetições irão acontecer: ");
  scanf("%d", &k);

  rep = 1;
  n = 0;
  soma = 0;
  while (rep <= k) {
    n++;
    dobro = 2 * n;
    
    for (div = 1; div <= n; div++) {
      if (n % div == 0) {
        soma += div;
      }
    }

    if (soma > dobro) {
      printf("%d. %d\n", rep, n);
      rep++;
      soma = 0;
      continue;
    }
    else {
      soma = 0;
      continue;
    }
  }
}