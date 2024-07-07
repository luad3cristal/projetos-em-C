/*
Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada. Na opção 1: receber duas notas, calcular e mostrar a média aritmética. Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada. Na opção 3: sair do programa. 
*/

#include <stdio.h>

main () {
  float aritmetica, ponderada, n1 = -1, n2 = -1, n3 = -1, p1 = 0, p2 = 0, p3 = 0;
  int op;

  printf("Menu de Opcoes: \n1. Media aritmetica \n2. Media ponderada \n3. Sair");
  printf("\nResp: ");
  scanf("%d", &op);

  if (op == 1) {
    while (n1 < 0) {
      printf("\n\nInsira a primeira nota: ");
      scanf("%f", &n1);
    }
    while (n2 < 0) {
      printf("\nInsira a segunda nota: ");
      scanf("%f", &n2);
    }

    aritmetica = (n1 + n2)/2;
    printf("\nO valor da media aritmetica eh: %.2f", aritmetica);
  }

  if (op == 2) {
    while (n1 < 0) {
      printf("\n\nInsira a primeira nota: ");
      scanf("%f", &n1);
    } 
    while (p1 == 0) {
      printf("Insira o peso da primeira nota: ");
      scanf("%f", &p1);
    }
    
    while (n2 < 0) {
      printf("\nInsira a segunda nota: ");
      scanf("%f", &n2);
    }
    while (p2 == 0) {
      printf("Insira o peso da segunda nota: ");
      scanf("%f", &p2);
    }
    
    while (n3 < 0) {
      printf("\nInsira a terceira nota: ");
      scanf("%f", &n3);
    }
    while (p3 == 0) {
      printf("Insira o peso da terceira nota: ");
      scanf("%f", &p3);
    }

    ponderada = ((n1 * p1) + (n2 * p2) + (n3 * p3))/3;
    printf("\nO valor da media ponderada eh: %.2f", ponderada);
  }

  if (op == 3) {
    printf("Você saiu do programa!");
  }
}