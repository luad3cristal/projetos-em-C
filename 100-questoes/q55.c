// Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores próprios do outro. Os divisores próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e 220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142, efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 18416 são amigos, por exemplo).

#include <stdio.h>

main () {
  int n1, n2, div = 1, calc = 0, calc2 = 0;

  printf("Insira o primeiro numero amigo: ");
  scanf("%d", &n1);

  printf("Insira o segundo numero amigo: ");
  scanf("%d", &n2);

  while (div < (n1 / 2) + 1) {
    if (div == 1){
      calc += div;
      div++;
    }
    if (n1 % div == 0) {
      calc+= div;
      div++;
    }
    else {
      div++;
    }
  }

  if (calc == n2)
    printf("\nOs numeros sao amigos");
  else
    printf("\nOs numeros nao sao amigos");
  
  
}