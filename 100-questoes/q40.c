/*
Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o numero por extenso.
*/

#include <stdio.h>
int main() {
  int num, m, c, d, u;
  printf("Insira um numero de 1 a 1000: ");
  scanf("%d", &num);

  if (num > 1000) {
    printf("Numero fora do escopo. Insira outro numero: ");
    scanf("%d", &num);
  }
  if (num <= 1000) {
    m = num / 1000;
    c = (num/100) % 10;
    d = (num / 10) % 10;
    u = num % 10;

    if (m == 1) {
      printf("mil");
    }	

    if (m != 0 && ((m*10) + c) % 10) {
      printf(" e ");
    }

    switch(c) {
      case 1:
        printf("cem");
      break;
      case 2:
        printf("duzentos");
      break;
      case 3:
        printf("trezentos");
      break;
      case 4:
        printf("quatrocentos");
      break;
      case 5:
        printf("quinhentos");
      break;
      case 6:
        printf("seiscentos");
      break;
      case 7:
        printf("setecentos");
      break;
      case 8:
        printf("oitocentos");
      break;
      case 9:
        printf("novecentos");
      break;
    }

    if (c != 0 && ((c*10) + d) % 10) {
      printf(" e ");
    }

    if(d == 1) {
      switch (u) {
        case 0:
          printf("dez");
        break;
        case 1:
          printf("onze");
        break;
        case 2:
          printf("doze");
        break;
        case 3:
          printf("treze");
        break;
        case 4:
          printf("catorze");
        break;
        case 5:
          printf("quinze");
        break;
        case 6:
          printf("dezesseis");
        break;
        case 7:
          printf("dezessete");
        break;
        case 8:
          printf("dezoito");
        break;
        case 9:
          printf("dezenove");
        break;
      }
    }
    switch (d) {
      case 2:
        printf("vinte");
      break;
      case 3:
        printf("trinta");
      break;
      case 4:
        printf("quarenta");
      break;
      case 5:
        printf("cinquenta");
      break;
      case 6:
        printf("sessenta");
      break;
      case 7:
        printf("setenta");
      break;
      case 8:
        printf("oitenta");
      break;
      case 9:
        printf("noventa");
      break;
    }				

    if (d != 0 && d != 1 && ((d * 10) + u) % 10) {
      printf(" e ");
    }

    if (d != 1) {
      switch (u) {
        case 1:
          printf("um");
        break;
        case 2:
          printf("dois");
        break;
        case 3:
          printf("tres");
        break;
        case 4:
          printf("quatro");
        break;
        case 5:
          printf("cinco");
        break;
        case 6:
          printf("seis");
        break;
        case 7:
          printf("sete");
        break;
        case 8:
          printf("oito");
        break;
        case 9:
          printf("nove");
        break;
      }
    }		
  }
}