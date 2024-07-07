/*
Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0)
*/

#include <stdio.h>

main() {
  float x, y;

  printf("Insira o valor de x: ");
  scanf("%f", &x);

  printf("Insira o valor de y: ");
  scanf("%f", &y);

  if (y == 0 && (x > 0 || x < 0))
    printf("O valor de x se encontra no eixo");

  else if (x == 0 && (y > 0 || y < 0))
    printf("O valor de y se encontra no eixo");

  else if (x == 0 && y == 0 )
    printf("O valor se encontra na origem");

  else if (x > 0 && y > 0)
    printf("O valor se encontra no primeiro quadrante");
    
  else if (x < 0 && y > 0)
    printf("O valor se encontra no segundo quadrante");
    
  else if (x < 0 && y < 0) 
    printf("O valor se encontra no terceiro quadrante");
    
  else 
    printf("O valor se encontra no quarto quadrante");
}