#include <stdio.h>

main() {
  int binario[8], decimal, octal[3], mult, num, opcao, i, x;

  printf("Escolha o digito que representa o tipo do numero \n1 - Binario Puro \n2 - Decimal \n3 - Octal \nResp: ");
  scanf("%d", &opcao);

  while (opcao < 0 || opcao > 3) {
    printf("Escolha o digito que representa o tipo do numero \n1 - Binario Puro \n2 - Decimal \n3 - Octal \nResp: ");
    scanf("%d", &opcao);
  }

  printf("\n\nAgora insira o numero a ser convertido: ");
  scanf("%d", &num);

  if (opcao == 1) {
    // organizando dentro do vetor
    x = num;
    for (i = 0; i < 9; i++) {
      binario[i] = x % 10;
      x = x / 10;
    }

    //convertendo para decimal
    decimal = binario[0];
    mult = 1;
    for (i = 1; i < 8; i++) {
      mult *= 2;
      decimal += binario[i] * mult; 
    }

    //convertendo para octal
    x = decimal;
    for (i = 2; i > -1; i--) {
      octal[i] = x % 8;
      x /= 8;
    }

    printf("\nO numero foi: %d \nO numero em decimal sera: %d \nO numero em octal sera: ", num, decimal);
    for (i = 0; i < 3; i++) {
      printf("%d", octal[i]);
    }
  }

  else if (opcao == 2) {
    //convertendo para binario
    x = num;
    for (i = 7; i > -1; i--) {
      binario[i] = x % 2;
      x /= 2;
    }

    //convertendo para octal
    x = num;
    for (i = 2; i > -1; i--) {
      octal[i] = x % 8;
      x /= 8;
    }


    
    printf("\nO numero foi: %d \nO numero em binario puro sera: ", num);
    for (i = 0; i < 9; i++) {
      printf("%d", binario[i]);
    }
    
    printf("\nO numero em octal sera: ");
    for (i = 0; i < 3; i++) {
      printf("%d", octal[i]);
    }
  }

  else if (opcao == 3) {
    //organizando dentro do vetor de octal
    x = num; 
    for (i = 0; i < 3; i++) {
      octal[i] = x % 10;
      x /= 10;
    }

    //convertendo para decimal
    decimal = octal[0];
    mult = 1;
    for (i = 1; i < 3; i++) {
      mult *= 8;
      decimal += octal[i] * mult;
    }

    //convertendo para binario
    x = decimal;
    for (i = 7; i > -1; i--) {
      binario[i] = x % 2;
      x /= 2;
    }

    printf("\nO numero foi: %d \nO numero em binario puro sera: ", num);
    for (i = 0; i < 9; i++) {
      printf("%d", binario[i]);
    }

    printf("\nO numero em decimal sera: %d", decimal);
  }
}