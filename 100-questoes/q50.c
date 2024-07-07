/* Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados tenha como resultado da soma dos valores dos dados o número lido. Por exemplo, se a entrada for o número 7, o programa deve imprimir as seguintes combinações:
• 16
• 25
• 34
• 43
• 52
• 61
*/

#include <stdio.h>

main () {
  int num, a, b, rep = 1;

  printf("Insira um numero a seguir: ");
  scanf("%d", &num);

  while (rep < num) {
    a = num - rep;
    b = num - a;

    printf("%d ", a);
    printf("%d \n", b);
    
    rep++;
  }
}