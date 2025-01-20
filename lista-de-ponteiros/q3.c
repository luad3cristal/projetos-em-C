#include <stdio.h>

void ordena (int *vetor, int size) {
  for (int i = 0; i < size; i++) {
    int key = vetor[i];
    int j = i - 1;
    while (j >= 0 && vetor[j] > key) {
      vetor[j + 1] = vetor[j];
      j--;
    }
    vetor[j + 1] = key;
  }
}


int main(void) {
  int n;

  printf("Quantos números você quer digitar? ");
  scanf("%d", &n);

  int *vetor = malloc(n *sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  ordena(vetor, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  }
}