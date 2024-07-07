/*
Escreva um programa em C que leia um array de 20 inteiros, calcule e imprima:
a. A moda dos elementos no array (elemento mais freqüente).
b. A mediana dos elementos no array (elemento central)
c. A média
*/

#include <stdio.h>

main () {
  int v[20], moda, x, n, y, aux, i, j;
  float mediana, media;

  // lendo os valores
  for (i = 0; i < 20; i++) {
    printf("Insira um valor: ");
    scanf("%d", &v[i]);
  }
  
  //ordenando a array
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      if (v[j] > v[i]) {
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }

  //iniciando os calculos
  media = v[0];
  mediana = (v[9] + v[10]);
  moda = v[0];

  //verificando a media e a moda
  for (i = 0; i < 20; i++) {
    media = (media + v[i]);
    x = 0;
    y = 0;

    for (j = 0; j < 20; j++) {
      if (v[j] == moda) {
        x++;
      }
      else if (v[i] != moda) {
        n = v[i];
        if (v[j] == n) {
          y++;
        }
      } 

      if (y > x) {
        moda = n;
      }
    }
  }
  
  //não dá para dividir no própio cálculo sem dar um resultado errado
  media /= 20;
  mediana /= 2;

  printf("A media: %.1f \nA mediana: %.1f \nA moda: %d", media, mediana, moda);
}