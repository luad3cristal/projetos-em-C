/*
A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são fornecidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos anteriores, ou seja:
1. Ai = Ai-1 + Ai-2, para i ímpar
2. Ai = Ai-1 - Ai-2, para i par
Criar um algoritmo em PORTUGOL que imprima os N primeiros termos da série de FETUCCINE, sabendo-se que para existir esta série serão necessários pelo menos três termos
*/

#include <stdio.h>

main () {
  int rep, primeiro, segundo, calc; 
  printf("Quantas repeticoes ocorrerao? (min 3) ");
  scanf("%d", &rep);

  printf("Insira o penultimo numero: ");
  scanf("%d", &primeiro);
  
  printf("Insira o antepenultimo numero: ");
  scanf("%d", &segundo);


  for (int i = 0; i < rep; i++) {
    if (i % 2 == 1) {
      calc = primeiro + segundo;
      segundo = primeiro;
      primeiro = calc;
      printf("%d ", calc);
    }
    else if (i % 2 == 0) {
      calc = primeiro - segundo;
      segundo = primeiro;
      primeiro = calc;
      printf("%d ", calc);
    }
  }
}