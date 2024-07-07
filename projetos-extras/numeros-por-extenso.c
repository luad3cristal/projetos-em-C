#include <stdio.h>

main() {
  int num, dig1, dig2;

  printf("Insira um numero de 1 a 100: ");
  scanf("%d", &num);

    dig1 = num / 10;
    dig2 = num % 10;

    switch (dig1) {			
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
    case 10:
      printf("cem");
    break;

    }

    if (dig1 == 0) {
    switch (dig2) {
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
    else if (dig1 == 1) {
    switch(num) {
      case 10:
        printf("dez");
      break;
      case 11:
        printf("onze");
      break;
      case 12:
        printf("doze");
      break;
      case 13:
        printf("treze");
      case 14:
        printf("catorze");
      break;
      case 15:
        printf("quinze");
      break;
      case 16:
        printf("dezesseis");
      break;
      case 17:
        printf("dezessete");
      break;
      case 18:
        printf("dezoito");
      break;
      case 19:
        printf("dezenove");
      break;
      }
    }
    else {
    switch (dig2) {
      case 1:
        printf(" e um");
      break;
      case 2:
        printf(" e dois");
      break;
      case 3:
        printf(" e tres");
      break;
      case 4:
        printf(" e quatro");
      break;
      case 5:
        printf(" e cinco");
      break;
      case 6:
        printf(" e seis");
      break;
      case 7:
        printf(" e sete");
      break;
      case 8:
        printf(" e oito");
      break;
      case 9:
        printf(" e nove");
      break;
      }
    }	


}