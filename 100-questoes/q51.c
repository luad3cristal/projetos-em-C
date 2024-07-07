/* A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N sendo uma entrada do algoritmo).
*/

#include <stdio.h>

main () {
  int v[10], count = 0, pos;
  while (count < 10) {
    printf("Insira um valor: ");
    scanf("%d", &v[count]);
    count++;
  }

  printf("Qual posicao voce deseja ver o valor (0 -> 9)? ");
  scanf("%d", &pos);

  count = 0;
  while (count < 10) {
    if (count == pos) 
      printf("A posicao foi: %d. O valor eh: %d", pos, v[count]);

    count++;
  }
}