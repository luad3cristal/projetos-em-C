/*
Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante e o valor da prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido.
*/

#include <stdio.h>

main() {
  float renda, emprestimo, prestacao, calc1, calc2, calc3;

  printf("Insira o valor da sua renda mensal: ");
  scanf("%f", &renda);
  printf("Insira o valor do emprestimo solicitado: ");
  scanf("%f", &emprestimo);
  printf("Quantas prestacoes voce deseja pagar? ");
  scanf("%f", &prestacao);

  calc1 = (emprestimo / prestacao);
  calc2 = renda * 0.3;
  
  if (emprestimo < renda)
    printf("O emprestimo nao pode ser concedido");
    
  else if ((emprestimo * 11) > renda) 
    printf("O emprestimo nao pode ser concedido");
    
  else if (emprestimo > renda){
    if (calc1 > calc2)
      printf("O emprestimo nao pode ser concedido");
      
    else
      printf("O emprestimo pode ser concedido");
  } 

}