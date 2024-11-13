#include <stdio.h>

int main() {
  int binario, b8, b7, b6, b5, b4, b3, b2, b1, decimal;
  printf("Insira o numero em binario que sera convertido para decimal: ");
  scanf("%d", &binario);
  b1 = (binario / 10000000);
  b2 = (binario / 1000000) % 10;
  b3 = (binario / 100000) % 10;
  b4 = (binario / 10000) % 10;
  b5 = (binario / 1000) % 10;
  b6 = (binario / 100) % 10;
  b7 = (binario / 10) % 10;
  b8 = binario % 10;


  decimal = (b1 * 128) + (b2 * 64) + (b3 * 32) + (b4 * 16) + (b5 * 8) + (b6 * 4) + (b7 * 2) + b8;
  printf("O valor em decimal eh: %d", decimal);
}