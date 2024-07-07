// Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não

#include <stdio.h>

main () {
  int a, div = 2;

  printf("Insira um numero a seguir: ");
  scanf("%d", &a);

  if (a <= 1) {
    printf("O numero nao eh primo");
  }

  if (a > 1) {
    while (div < a && (a % div >= 1)) { //4 < 7 && 7 % 4 == 1
      div++; // 4
    }
    if (div == a)
      printf("O numero eh primo");
    if (div != a)
      printf("O numero nao eh primo"); 
  }
  
}

/* teste de mesa n = 7
d = 2
n = 7
2 <= 3 (já que é um inteiro)

  se 7 % 2 == 0 (não entra aqui)
  
  2 = 2 + 1

3 <= 3 (while mais uma vez)
  se 7 % 2 == 0 (continua sem entrar aqui)

  3 = 3 + 1

4 <= 3 (false e sai do while)

como ele é supostamente primo até provar o contrário e não foi possível provar o contrario, o numero eh primo

*/