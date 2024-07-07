/* 
Um número primo é um número que possui somente dois divisores: ele mesmo e o número 1. Um número primo p é um número primo de Chen se o próximo número ímpar (p + 2) é primo ou o produto de dois primos (subprimo). Escreva um programa em C, que leia um número e verifique se ele é um número primo de Chen. Por exemplo:
2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2). 3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.
*/

#include <stdio.h>

main () {
  int n, div, soma, produto, primo, subprimo;

  printf("Escolha um numero inteiro e positivo: ");
  scanf("%d", &n);

  while (n < 0) {
    printf("Numero invalido. Escolha um numero inteiro e positivo: ");
    scanf("%d", &n);
  }

  //descobrindo se o numero é primo
  div = 2;
  while (div < n && (n % div >= 1))
    div++;

  if (div == n) { // confimou que numero é primo
    soma = n + 2;

    //confimar se p + 2 = primo
    div = 2;
    while (div < soma && (soma % div >= 1))
      div++;

    if (soma == div) { //se for primo...
      printf("O numero %d e um primo de Chen", n);
    }
    else { //se não...
      produto = n * n;
      primo = 1;

      while (primo < produto) { //vamo tentar achar o numero primo que confirma o produto sendo um subprimo
        primo++;
        div = 2;
        while (div < primo && (primo % div >= 1))
          div++;

        if (div == primo) {
          subprimo = primo * primo;

          if (subprimo == produto) {
            printf("O numero %d e um primo de Chen", n);
          }
        }
      }
      
    }
  }
  else {
    printf("O numero %d nao e um primo de Chen", n);
  }
}