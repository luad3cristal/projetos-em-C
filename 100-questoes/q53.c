// Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva um programa, que imprima o tempo necessário para que a população do país A ultrapasse a população do país B.

#include <stdio.h>

main () {
  float a, b;
  int ano;
  a = 5000000;
  b = 7000000;
  
  for (ano = 0; b > a; ano++) {
    a = (a * 0.03) + a;
    b = (b * 0.02) + b;
  }
  printf("Foram necessarios %d anos", ano);
}