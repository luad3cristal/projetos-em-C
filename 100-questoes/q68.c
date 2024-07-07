// Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de cada uma das duas quinzenas

#include <stdio.h>

main() {
  float v[30] = {.34, .45, .56, .67, .78, .89, .90, .01, .12, .23, .09, .98, .87, .76, .65, .54, .43, .32, .21, .10, .22, .66, .44, .88, .77, .11, .33, .55, .99, .94}, media, media1, maior, menor;
  int  dia = 1, menos = 0, mais = 0;

  maior = v[0];
  menor = v[0];
  media = v[0];
  media1 = v[15];
  
  for (int n = 0; n < 30; n++) {
    if (v[n] > maior) { 
      maior = v[n];
      mais = n + 1;
    }
    
    if (v[n] < menor) {
      menor = v[n];
      menos = n + 1;
    }
    

    if (n < 15) 
      media = (media + v[n])/2;
    
    if (n >= 15) 
      media1 = (media1 + v[n])/2;
      
  }
  printf("O dia que mais choveu foi: %d\n", mais);
  printf("O dias que menos choveu foi: %d\n", menos);
  printf("A media da primeira quinzena foi: %.3f\n", media);
  printf("A media da segunda quinzena foi: %.3f", media1);
}