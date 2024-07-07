// Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os números de 10 a 19. Somar os vetores acima.

#include <stdio.h>

 main() {
  int v[10], v2[10], soma, n = 0, n2 = 9;

   for (int i = 0; i < 10; i++) {
     n += 2;
     n2++;

     v[i] = n;
     v2[i] = n2;

     soma = v[i] + v2[i];
     printf("A soma dos vetores e: %d\n", soma);
   }
}