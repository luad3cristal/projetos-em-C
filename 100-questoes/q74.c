/*
Escreva um programa em C que armazene um vetor de até 30 inteiros. O programa deve fornecer as seguintes operações:
a. Inserir um elemento no final do vetor
b. Inserir um elemento em uma dada posição
c. Remover um elemento de uma posição indicada
d. Remover todos elementos iguais a um valor indicado
e. Gerar um novo array sem duplicidades a partir deste array
*/

#include <stdio.h>

main () {
  int v[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 12, 11}, v2[30], pos = -1, op = -1, i, conf = 0, valor;

  // for (int i = 0; i < 30; i++) {
  //   printf("Insira um valor para compor a array: ");
  //   scanf("%d", &v[i]);
  // }

  printf("Os valores dentro do vetor sao: \n");
  for (i = 0; i < 30; i++) {
    printf("v[%d] = {%d}\n", i, v[i]);
  }
  
  
  while (op == -1) {
    printf("\n\nDeseja fazer alguma operacao nesse vetor?\n");
    printf("0. Não fazer alterações\n");
    printf("1. Inserir um elemento no final do vetor\n");
    printf("2. Inserir um elemento em uma dada posição\n");
    printf("3. Remover um elemento de uma posição indicada\n");
    printf("4. Remover todos elementos iguais a um valor indicado\n");
    printf("5. Gerar um novo array sem duplicidades a partir deste array\n");

    printf("Resp: ");
    scanf("%d", &op);
  } 


  //Não fazer alterações
  if (op == 0) {
    printf("\n\nO vetor se manterá assim: \n");

    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v[i]);
    }
  }

  
  //Inserir um elemento no final do vetor
  if (op == 1) {
    printf("\n\nInsira o novo numero: ");
    scanf("%d", &v[29]);

    printf("Os valores do vetor agora sao: \n");
    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v[i]);
    }
  }

  //Inserir um elemento em uma dada posição
  if (op == 2) {
    while (pos < 0 || pos > 30) {
      printf("\n\nQual posicao voce deseja alterar o valor? ");
      scanf("%d", &pos);
    }

    printf("Insira o novo numero: ");
    scanf("%d", &v[pos]);

    printf("Os valores do vetor agora sao: \n");
    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v[i]);
    }
  }

  //Remover um elemento de uma posição indicada
  if (op == 3) {
    while (pos < 0 || pos > 30) {
      printf("\n\nQual posicao voce deseja remover o valor? ");
      scanf("%d", &pos);
    }

    v[pos] = 0;

    printf("Os valores do vetor agora sao: \n");
    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v[i]);
    }
  }

  //Remover todos elementos iguais a um valor indicado
  if (op == 4) {
      printf("\n\nInsira o numero a ser removido do vetor: ");
      scanf("%d", &valor);

    for (int i = 0; i < 30; i++) {
      if (valor == v[i]) 
        v[i] = 0;
    }

    printf("Os valores do vetor agora sao: \n");
    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v[i]);
    }  
  }

  //Gerar um novo array sem duplicidades a partir deste array
  if (op == 5) {
    for (i = 0; i < 30; i++) {
      for (int j = i + 1; j < 30; j++) {
        if (v[j] == v[i])
          v[j] = 0;
      }
    }

    for (i = 0; i < 30; i++) {
      v2[i] = v[i];
    }

    printf("\n\nOs valores do novo vetor sao: \n");
    for (i = 0; i < 30; i++) {
      printf("v[%d] = {%d}\n", i, v2[i]);
    }  
  }
  
}