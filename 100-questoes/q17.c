/* 
Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima (considere existir notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
*/

#include <stdio.h>

int main(void) {
  int valor, n100, n50, n20, n10, n5, n2, n1;

  printf("Insira o valor a ser retirado da sua conta: ");
  scanf("%d", &valor);

  n100 = valor / 100;
  valor = valor % 100;

  n50 = valor / 50;
  valor = valor % 50;

  n20 = valor / 20;
  valor = valor % 20;

  n10 = valor / 10;
  valor = valor % 10;

  n5 = valor / 5;
  valor = valor % 5;

  n2 = valor / 2;
  valor = valor % 2;

  n1 = valor / 1;

  printf("Sera: \n");
  if (n100 != 0)
    printf("%d nota(s) de 100\n", n100);
  if (n50 != 0)
    printf("%d nota(s) de 50\n", n50);
  if(n20 != 0)
    printf("%d nota(s) de 20\n", n20);
  if (n10 != 0)
    printf("%d nota(s) de 10\n", n10);
  if(n5 != 0)
    printf("%d nota(s) de 5\n", n5);
  if (n2 != 0)
    printf("%d nota(s) de 2\n", n2);
  if (n1 != 0)
    printf("%d nota(s) de 1", n1);
}