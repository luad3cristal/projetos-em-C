// Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43). Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o programa em questão.

#include <stdio.h>

 main () {
  int x, y, z, div, N, i;

   printf("Escolha a quantidade de pares que serao mostrados: ");
   scanf("%d", &N);

   x = 1;
   y = x;
   i = 0;
   div = 2;
   
   while (N > i) {
     div = 2;
     x++;

     while (div < x && (x % div >= 1))
       div++;

     if (div == x) {
       z = y;
       y = x;
       

       if ((z + 2) == y) {
         printf("%d. (%d, %d)\n", i, z, y);
         i++;
       }
     }
     else {
       continue;
     }
   }
}