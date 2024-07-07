/*
Escreva um programa que leia 3 números e calcule a média ponderada entre eles. Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.
*/

#include <stdio.h>

int main(void) {
  float n1, n2, n3, media;
  printf("Insira a seguir as tres notas do seu semestre: ");
  scanf("%f, %f, %f", &n1, &n2, &n3);

  if (n1 > n2 && n1 > n3){
    media = ((n1 * 5.0) + (n2 * 2.5) + (n3 * 2.5))/3;
    printf("A media final eh: %.2f", media);
  }
  if (n2 > n1 && n2 > n3) {
    media = ((n2 * 5.0) + (n3 * 2.5) + (n1 * 2.5))/3;
    printf("A media final eh: %.2f", media);
  }
  if (n3 > n1 && n3 > n2) {
    media = ((n3 * 5.0) + (n2 * 2.5) + (n1 * 2.5))/3;
    printf("A media final eh: %.2f", media);
  }
}