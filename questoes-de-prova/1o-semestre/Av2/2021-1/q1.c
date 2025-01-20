/*
Você foi contratado para desvendar os três desafios do VETOR.
O Primeiro desafio:
1- Dado dois arrays de números inteiros com 10 elementos imprima os números do primeiro array que não estão presentes no segundo array. Lembrando que os números não podem ser repetidos no vetor 1 e vetor 
2.
Vetor 1-
2 3 4 5 6 12 1 23 11 32Vetor 2-
2 31 4 51 16 12 1 23 111 323
Reposta:
3 5 6 11

O Segundo desafio:
2- Após resolver a etapa um você deve realizar a soma do vetor 1 e vetor 2 e imprimir os valores do Vetor 1 , Vetor2 e o nome vetor que pode ser chamado de resultado.

O Terceiro desafio:
3- Para finalizar, você deve informar quais são os números primos no Vetor1, Vetor2 e Vetor Resultado. 
*/

#include <stdio.h>

main () {
  int v[10] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 32}, v2[10] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323}; // desafio 1
  int v3[10]; // desafio 2
  int div; // desafio 3

  // desafio 1
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (v[i] == v2[j]) {
        break;
      }

      if ((v[i] != v2[j]) && j == 9) {
        printf("%d ", v[i]);
      }
    }
  }

  //desafio 2
  for (int i = 0; i < 10; i++) {
    v3[i] = v[i] + v2[i];

    printf("Os valores do vetor 1 eh: %d\n", v[i]);
    printf("Os valores do vetor 2 eh: %d\n", v2[i]);
    printf("\n- A soma dos dois vetores eh: %d\n\n", v3[i]);
  }

  //desafio 3
  for (int i = 0; i < 10; i++) {
    //primeiro vetor
    div = 2;
    while (div < v[i] && (v[i]) % div >= 1) 
      div++;

    if (div == v[i]) 
      printf("\nO numero %d do primeiro vetor eh primo\n", v[i]);

    //segundo vetor
    div = 2;
    while (div < v2[i] && (v2[i]) % div >= 1) 
      div++;

    if (div == v2[i]) 
      printf("\nO numero %d do segundo vetor eh primo\n", v2[i]);

    //vetor resultado
    div = 2;
    while (div < v3[i] && (v3[i]) % div >= 1) 
      div++;

    if (div == v3[i]) 
      printf("\nO numero %d do vetor resultado eh primo\n", v3[i]);
  }
}