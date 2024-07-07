/*
Escreva um programa que calcula o desconto previdenciário de um funcionário. Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 334,29, o que seja menor
*/

#include <stdio.h>

int main(void) {
  float salario, desconto;
  printf("Insira o seu salario: ");
  scanf("%f", &salario);

  desconto = salario * 0.11;
  if (desconto > 334.29)
    printf("Seu desconto previdenciario excede o limite, logo, o valor do desconto sera de 334.29");
  else
  printf("O valor do seu desconto previdenciario eh de: %.2f", desconto);
}