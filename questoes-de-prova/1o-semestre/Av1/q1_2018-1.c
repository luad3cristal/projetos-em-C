/*
Definimos a paridade de um inteiro n como a soma dos seus bits em representação binária computada módulo (resto da divisão inteira) dois. Como exemplo, o número 21 = (10101)2 possui três 1s na sua representação binária e portanto ele possui paridade 1 (3 módulo 2 = 1).
Neste problema, você deverá escrever um programa em C, que calcule a paridade de um inteiro entre 0 e 31 e então gerar um novo inteiro com paridade 0, formado através do acréscimo de 0 ou 1 (para gerar a paridade 0) no bit menos significativo do novo inteiro. Em seguida deverá imprimir este novo número.
Por exemplo, se a entrada for 21 = (10101)2, a saída deverá ser 43 = (101011)2. Caso a entrada seja 15 = (1111)2, a saída deverá ser 30 = (11110)
*/

#include <stdio.h>

main() {
  int num, bin1, dm, m, c, d, u, paridade, num2, bin2;
  printf("Insira um numero entre 0 e 31: ");
  scanf("%d", &num);

  if (num > 31) {
    printf("Numero fora do escopo. Insira um numero entre 0 e 31: ");
    scanf("%d", &num);
  }
  if (num <= 31) {
    u = num % 2;
    d = (num / 2) %2;
    c = (num / 4) % 2;
    m = (num / 8) % 2;
    dm = (num / 16) % 2;

    paridade = 0;

    if (u == 1) {
      paridade = paridade + 1;
    }
    if (d == 1) {
      paridade = paridade + 1;
    }
    if (c == 1) {
      paridade = paridade + 1;
    }
    if (m == 1){
      paridade = paridade + 1;
    }
    if (dm == 1) {
      paridade = paridade + 1;
    }

    paridade = paridade % 2;

    if (paridade == 1) {
      num2 = (num * 2) + 1;
      bin2 = (dm * 100000) + (m * 10000) + (c * 1000) + (d * 100) + (u * 10) + 1;

      printf("O numero em inteiro eh: %d e em binario eh: %d", num2, bin2);
    }
    else if (paridade == 0) {
      num2 = num * 2;
      bin2 = (dm * 100000) + (m * 10000) + (c * 1000) + (d * 100) + (u * 10);

      printf("O numero em inteiro eh: %d e em binario eh: %d", num2, bin2);
    }
  }
}