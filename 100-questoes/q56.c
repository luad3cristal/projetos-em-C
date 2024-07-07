// Um número se diz perfeito se é igual à soma de seus divisores próprios. Divisores próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 = 6). Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28).

#include <stdio.h>

main () {
  int n, div = 1, calc = 0;
  printf("Insira o numero a ser calculado: ");
  scanf("%d", &n);

  while (div < (n / 2) + 1) {
    if (div == 1) {
      calc += div;
      div++;
    }
    if ((n % div == 0)) {
      calc += div;
      div++;
    }
    else {
      div++;
    }
  }
  
  if (calc == n) 
    printf("Esse eh um numero perfeito");
  else if (calc != n)
    printf("Esse nao eh um numero perfeito");
}