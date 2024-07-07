// Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando idade igual a zero. 

#include <stdio.h>

main() {
  int age, soma = 0;

  printf("Insira 0 para encerrar o programa \nInsira a idade a ser calculada: "); 
  scanf("%d", &age);

  soma += age;
  
  while (age != 0) {
    printf("\n\nInsira 0 para encerrar o programa \nInsira a idade a ser calculada: "); 
    scanf("%d", &age);

    soma = (soma + age)/2;
  }

  printf("\nA media das idades eh: %d", soma);
}