// A famosa conjectura de Goldbach diz que todo inteiro par maior que 2 é soma de dois números primos. Testes foram feitos, mas ainda não se achou um contra-exemplo. Escreva um programa mostrando que a afirmação é verdadeira para todo número par entre 500 e 1000. O programa deve imprimir o número par e os dois primos que somados dão o número par

#include <stdio.h>

main () {
  int n = 500, n1 = n, n2, div;
  
  for (int i = 0; n < 1001; i++) {
    n1 -= 1;
    div = 2;
    
    while (div < n1 && (n1 % div >= 1)) 
      div++;
    
    if (div == n1) {
      n2 = n - n1;
      div = 2;
      
      while (div < n2 && (n2 % div >= 1)) 
        div++;

      if (div == n2 && (div > 1)) {
        printf("%d = %d + %d\n", n, n1, n2);
        n += 2;
        n1 = n;
        
      }
    }
  }
}