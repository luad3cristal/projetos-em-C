/*
Uma Cia de pulverização utiliza avião para pulverizar lavouras. Os custos de pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela:
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre.

Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.
*/

#include <stdio.h>

int main() {

  int tipo, acres;
  float valor, t1, t2, t3, t4;
  printf("Qual o tipo de praga a ser pulverizada? Insira de 1 a 4: ");
  scanf("%d", &tipo);

  printf("Quanto acres serao pulverizados?");
  scanf("%d", &acres);

  if (tipo == 1) {
    if (acres > 1000) {
      valor = (acres * 50);
      
      if (valor > 750) {
        t1 = valor - (valor * 0.05);
        t1 = t1 - (t1 * 0.1);
        printf("O valor a ser pago eh de: %.2f", t1);
        
      } 
      else {
        t1 = valor - (valor * 0.05);
        printf("O valor a ser pago eh de: %.2f", t1);
      }

    } else {
      
      valor = acres * 50;
      if (valor > 750) {
        t1 = valor - (valor * 0.1);
        printf("O valor a ser pago eh de: %.2f", t1);
        
      } 
      else {
        t1 = valor;
        printf("O valor a ser pago eh de: %.2f", t1);
      }
    }
  }
  else if (tipo == 2) {
    if (acres > 1000) {
      valor = acres * 100; 
      
      if(valor > 750) {
        t2 = valor - (valor * 0.05);
        t2 = t2 - (t2 * 0.1);
        printf("O valor a ser pago eh de: %.2f", t2);
      } 
      else {
        t2 = valor - (valor * 0.05);
        printf("O valor a ser pago eh de: %.2f", t2);
      }
    
    }
    else {
      valor = acres * 100;
      
      if (valor > 750) {
        t2 = valor - (valor * 0.1);
        printf("O valor a ser pago eh de: %.2f", t2);
      }
      else {
        t2 = valor;
        printf("O valor a ser pago eh de: %.2f", t2);
      }
    }
  }
  else if (tipo == 3) {
    if (acres > 1000) {
      valor = acres * 150;
      
      if (valor > 750) {
        t3 = valor - (valor * 0.05);
        t3 = t3 - (t3 * 0.1);
        printf("O valor a ser pago eh de: %.2f", t3);
      } else {
        t3 = valor - (valor * 0.05);
        printf("O valor a ser pago eh de: %.2f", t3);
      }
    }
    else {
      valor = acres * 150;
      
      if (valor > 750) {
        t3 = valor - (valor *0.05);
        printf("O valor a ser pago eh de: %.2f", t3);
      }
      else {
        t3 = valor;
        printf("O valor a ser pago eh de: %.2f", t3);
      }
    }
  }
  else if (tipo == 4) {
    if (acres > 1000) {
      valor = acres * 250;
      if (valor > 750) {
        t4 = valor - (valor * 0.05);
        t4 = t4 - (t4 * 0.1);
        printf("O valor a ser pago eh de: %.2f", t4);
      }
      else {
        t4 = valor - (valor *0.5);
        printf("O valor a ser pago eh de: %.2f", t4);
      }
    }
    else {
      valor = acres * 250;
      if (valor > 750) {
        t4 = valor - (valor * 0.1);
        printf("O valor a ser pago eh de: %.2f", t4);
      }
      else {
        t4 = valor;
        printf("O valor a ser pago eh de: %.2f", t4);
      }
    }
  }
}