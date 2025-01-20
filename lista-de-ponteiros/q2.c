#include <stdio.h>

void troca (int *n1, int *n2) {
  int aux = *n1;
  *n1 = *n2;
  *n2 = aux;  
}

int main () {
  int a, b;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);

  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  printf("Antes da troca: a = %d, b = %d\n", a, b);
  troca(&a, &b);
  printf("Depois da troca: a = %d, b = %d\n", a, b);
}