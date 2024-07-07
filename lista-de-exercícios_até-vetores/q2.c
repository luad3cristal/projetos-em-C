/*
Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um
programa que receba o código e o valor de quinze transações, calcule e mostre:
a. O valor total das compras à vista;
b. O valor total das compras a prazo;
c. O valor total das compras efetuadas; e
d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão
pagas em três vezes. 
*/

#include <stdio.h>

main () {
  int cod, i;
  float v[15], vista = 0, prazo = 0, total = 0, prestacao = 0;

  for (i = 0; i < 15; i++) {
    printf ("Insira o tipo de transacao que foi realizada: \n1 - Transacao a vista \n2 - Transacao a prazo \nResp: ");
    scanf("%d", &cod);

    if (cod == 1) {
      printf("Qual foi o valor da transacao? ");
      scanf("%f", &v[i]);
      printf("\n\n");

      vista += v[i];
      total += v[i];
    }

    else if (cod == 2) {
      printf("Qual foi o valor da transacao? ");
      scanf("%f", &v[i]);
      printf("\n\n");

      prazo += v[i];
      total += v[i];
    }
  }

  prestacao = prazo / 3;

  printf("O valor total das compras a vista foi R$ %.2f", vista);
  printf("\nO valor total das compras a prazo foi R$ %.2f", prazo);
  printf("\nO valor total das compras efetuadas foi R$ %.2f", total);
  printf("\nO valor da primeira prestacao das compras a prazo foi R$ %.2f", prestacao);
}