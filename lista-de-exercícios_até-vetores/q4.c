/*
Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; Vverde; e C-castanho) e a cor dos cabelos (P-preto; C-castanho; L-louro; e R-ruivo) de seis pessoas, e que calcule e mostre: 
a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
b. A médias das idades das pessoas com altura inferior a 1,50 m;
c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
d. A quantidade de pessoas ruivas e que não possuem olhos azuis. 
*/

//testei não, fds.

#include <stdio.h>

main () {
  int age, weight, height, eyes, hair, a = 0, b = 0, d = 0, count = 0;
  float c = 0;

  for (int i = 0; i < 6; i++) {
    printf("Insira a idade: ");
    scanf("%d", &age);

    printf("Insira o peso em kg: ");
    scanf("%d", &weight);

    printf("Insira a altura em cm: ");
    scanf("%d", &height);

    printf("Insira a cor dos olhos. \n1 - azul \n2 - preto \n3 - verde \n4 - castanho \nResp: ");
    scanf("%d", &eyes);

    while (eyes < 0 || eyes >= 5) {
      printf("Insira a cor dos olhos. \n1 - azul \n2 - preto \n3 - verde \n4 - castanho \nResp: ");
      scanf("%d", &eyes);
    }
  
    printf("Insira a cor dos cabelos: \n1 - preto \n2 - castanho \n3 - louro \n4 - ruivo \nResp: ");
    scanf("%d", &hair);

    while (hair < 0 || hair >= 5) {
      printf("Insira a cor dos cabelos: \n1 - preto \n2 - castanho \n3 - louro \n4 - ruivo \nResp: ");
      scanf("%d", &hair);
    }

    if (age > 50 && weight < 60) {
      a++;
    }
    
    if (height < 150) {
      b += age;
      count++;
    }

    if (eyes == 1) {
      c++;
    }

    if (eyes != 1 && hair == 4) {
      d++;
    }
  }

  b /= count;
  c = (c / 6) * 100;

  printf("a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg foi: %d", a);
  printf("b. As médias das idades das pessoas com altura inferior a 1,50 m foi: %d", b);
  printf("c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas foi: %.f", c);
  printf("d. A quantidade de pessoas ruivas e que não possuem olhos azuis foi: %d", d);
}