// Preencher um vetor com números inteiros (8unidades); solicitar um número do teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir MSG que não existe

#include <stdio.h>

main() {
  int v[8] = {8, 45, 73, 9, 7, 23, 11, 36}, resp = 0, n;

  while (resp > 2 || resp <= 0) {
    printf("Deseja escolher um numero? \n1 - Sim\n2 - Nao \nResp: ");
    scanf("%d", &resp);
  }

  if (resp == 1) {
    printf("Escolha um numero: ");
    scanf("%d", &n);

    for(int i = 0; i < 8; i++){
      if (n == v[i]) {
        printf("Esse numero existe na posicao %d", i);
      }
      if ((n != v[7]) && i == 7) {
        printf("Esse numero nao existe no vetor");
      }
    }
    
  }

  if (resp == 2) {
    printf("Programa encerrado!");
  }
}