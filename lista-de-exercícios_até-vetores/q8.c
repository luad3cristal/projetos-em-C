// Preencher um vetor com os numeros de 10 a 20, e depois mostrar os elementos pares do vetor de trás prá frente. E também mostrar os números ímpares. 

#include <stdio.h>

 main() {
  int v[11], n = 9;

   for (int i = 0; i < 11; i++) {
     n++;
     v[i] = n;
   }

   for (int i = 10; i >= 0; i--) {
     
     for (int j = 10; j >= 0; j--) {
       if (i < 10)
         break;
         
       else {
         if (j == 10)
           printf("Os numeros pares sao:\n");
         if (v[j] % 2 == 0)
           printf("%d\n", v[j]);
       }
       
     }

     if (i == 10)
       printf("\nOs numeros impares sao:\n");
     if (v[i] % 2 == 1)
       printf("%d\n", v[i]);
   }
}