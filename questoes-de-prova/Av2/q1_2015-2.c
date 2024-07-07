// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa em C que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.

#include <stdio.h>

main () {
  float chico = 1.5, ze = 1.1;
  int ano = 0;
  
  while (chico > ze) {
    chico += 0.2;
    ze += 0.3;
    ano++;
  }

  printf("Demoram %d anos para o ze ser maior que o chico", ano);
}