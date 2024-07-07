//Construa um programa que receba um número e verifique se ele é um número triangular. (Um número é triangular quando é resultado do produto de três números consecutivos. Exemplo: 24 = 2 x 3 x 4)

#include <stdio.h>

main () {
  int n, calc = 0, v = 1;
  printf("Insira o numero a ser calculado: ");
  scanf("%d", &n);

  while (calc < n) {
    calc = v * (v + 1) * (v + 2);

    v++;
    }
  
  if (calc > n) {
    printf("O numero nao eh triangular");
  
  }
  if (calc == n) {
    printf("O numero eh triangular");
  }

}