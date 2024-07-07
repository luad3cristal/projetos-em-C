#include <stdio.h>

main() {
  int n, binario[8], hexa[2] , octal[3], x, i;

  printf("\t Character \t  Decimal \t Hex. \t   Octal \t Binario\n\t");
  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }

  //print dos numeros
  for (n = 48; n < 58; n++) {
    printf("\n\t");
    
    x = n;
    for (i = 7; i > -1; i--){
      binario[i] = x % 2;
      x = x / 2;
    }

    x = n;
    for (i = 2; i > -1; i--) {
      octal[i] = x % 8;
      x /= 8;
    }

    x = n;
    for (i = 1; i > -1; i--) {
      hexa[i] = x % 16;
      x /= 16;
    }
    

    //print char
    printf("\t %c \t\t ", n);

    //print decimal
    printf("    %d \t  ", n);  

    // print hexadecimal
    for (i = 0; i < 2; i++) {
      switch (hexa[i]) {
        case 15: 
          printf("F"); 
        break;
        case 14: 
          printf("E"); 
        break;
        case 13: 
          printf("D"); 
        break;
        case 12: 
          printf("C");
        break;
        case 11: 
          printf("B"); 
        break;
        case 10: 
          printf("A"); 
        break;
        default: 
          printf("%d", hexa[i]);
      }
    }
    printf("\t\t");  


    //print octal
    for (i = 0; i < 3; i++) {
      printf("%d", octal[i]);
    }
    
    printf("  \t ", n);  
    
    //print binario
    for (i = 0; i < 8; i++) {
      printf("%d", binario[i]);
    }
    
    printf("\n\t");
  }
  
  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }

  printf("\n\n\n");

  //print das letras maiusculas
  printf("\t Character \t  Decimal \t Hex. \t   Octal \t Binario\n\t");
  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }

  for (n = 65; n < 91; n++) {
    printf("\n\t");

      x = n;
      for (i = 7; i > -1; i--){
        binario[i] = x % 2;
        x = x / 2;
      }

      x = n;
      for (i = 2; i > -1; i--) {
        octal[i] = x % 8;
        x /= 8;
      }

      x = n;
      for (i = 1; i > -1; i--) {
        hexa[i] = x % 16;
        x /= 16;
      }


      //print char
      printf("\t %c \t\t ", n);

      //print decimal
      printf("    %d \t  ", n);  

      // print hexadecimal
      for (i = 0; i < 2; i++) {
        switch (hexa[i]) {
          case 15: 
            printf("F"); 
          break;
          case 14: 
            printf("E"); 
          break;
          case 13: 
            printf("D"); 
          break;
          case 12: 
            printf("C");
          break;
          case 11: 
            printf("B"); 
          break;
          case 10: 
            printf("A"); 
          break;
          default: 
            printf("%d", hexa[i]);
        }
      }
      printf("\t\t");  


      //print octal
      for (i = 0; i < 3; i++) {
        printf("%d", octal[i]);
      }

      printf("  \t ", n);  

      //print binario
      for (i = 0; i < 8; i++) {
        printf("%d", binario[i]);
      }

      printf("\n\t");
  }

  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }

  printf("\n\n\n");

  //print das letras minusculas
  printf("\t Character \t  Decimal \t Hex. \t   Octal \t Binario\n\t");
  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }

  for (n = 97; n < 123; n++) {
    printf("\n\t");

      x = n;
      for (i = 7; i > -1; i--){
        binario[i] = x % 2;
        x = x / 2;
      }

      x = n;
      for (i = 2; i > -1; i--) {
        octal[i] = x % 8;
        x /= 8;
      }

      x = n;
      for (i = 1; i > -1; i--) {
        hexa[i] = x % 16;
        x /= 16;
      }


      //print char
      printf("\t %c \t\t ", n);

      //print decimal
      printf("    %d \t  ", n);  

      // print hexadecimal
      for (i = 0; i < 2; i++) {
        switch (hexa[i]) {
          case 15: 
            printf("F"); 
          break;
          case 14: 
            printf("E"); 
          break;
          case 13: 
            printf("D"); 
          break;
          case 12: 
            printf("C");
          break;
          case 11: 
            printf("B"); 
          break;
          case 10: 
            printf("A"); 
          break;
          default: 
            printf("%d", hexa[i]);
        }
      }
      printf("\t\t");  


      //print octal
      for (i = 0; i < 3; i++) {
        printf("%d", octal[i]);
      }

      printf("  \t ", n);  

      //print binario
      for (i = 0; i < 8; i++) {
        printf("%d", binario[i]);
      }

      printf("\n\t");
  }

  for (n = 0; n < 54; n++) {
    printf("%c", 45);
  }
}