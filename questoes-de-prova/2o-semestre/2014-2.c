#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node *prox;
} Node;

int inserir(Node **head, int valor) {
  Node *novo = malloc(sizeof(Node));
  if (!novo)
    return 0;

  novo->valor = valor;
  novo->prox = *head;
  *head = novo;
  return 1;
}

int inserirOrdenado(Node **head) {
  Node *novo = malloc(sizeof(Node));
  if (!novo)
    return 0;

  int valor;
  printf("\nInsira um número: ");
  scanf("%d", &valor);

  novo->valor = valor;
  novo->prox = NULL;

  if (*head == NULL || (*head)->valor >= valor) {
    novo->prox = *head;
    *head = novo;
  } else {
    Node *atual = *head;

    while (atual->prox && atual->prox->valor < valor) {
      atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
  }
  return 1;
}

int removerElemento(Node **head) {
  if (*head == NULL)
    return -1; // Lista vazia
  else {
    Node *atual = *head;
    int valor;
    printf("\nInsira um número: ");
    scanf("%d", &valor);

    // Caso o valor a ser removido seja o primeiro elemento
    if (atual->valor == valor) {
      *head = atual->prox;
      free(atual);
      return 1;
    }

    // Procurar o valor na lista
    while (atual->prox != NULL && atual->prox->valor != valor) {
      atual = atual->prox;
    }

    if (atual->prox != NULL) {
      Node *remover = atual->prox;
      atual->prox = atual->prox->prox;
      free(remover);
      return 1;
    }

    return 0; // Número não encontrado
  }
}

void duplicarElementos(Node **head) {
  int valor = -1;
  while (valor != 0 && valor != 1) {
    printf("\nInsira 0 pra par e 1 pra impar: ");
    scanf("%d", &valor);
  }

  Node *atual = *head;

  if (valor == 0) {
    while (atual != NULL) {
      if (atual->valor % 2 == 0) {
        Node *novo = malloc(sizeof(Node));

        novo->valor = atual->valor * -1;
        novo->prox = atual->prox;
        atual->prox = novo;

        atual = novo->prox;
      } 
      else
        atual = atual->prox;
    }
  } else if (valor == 1) {
    while (atual != NULL) {
      if (atual->valor % 2 != 0) {
        Node *novo = malloc(sizeof(Node));

        novo->valor = atual->valor * -1;
        novo->prox = atual->prox;
        atual->prox = novo;

        atual = novo->prox;
      } 
      else
        atual = atual->prox;
    }
  }
}

void imprimir(Node *head) {
  while (head) {
    printf("%d", head->valor);
    if (head->prox != NULL) {
      printf(" -> ");
    }
    head = head->prox;
  }
}

int main() {
  Node *head = NULL;

  if (inserir(&head, 10)) {
    printf("O numero 10 foi inserido na lista.\n");
  } else {
    printf("O numero 10 não foi inserido na lista.\n");
  }

  if (inserirOrdenado(&head)) {
    printf("O numero foi inserido na lista.\n");
  } else {
    printf("O numero não foi inserido na lista.\n");
  }

  int remocao = removerElemento(&head);

  if (remocao == 1) {
    printf("O numero foi excluido da lista.\n");
  } else if (remocao == -1) {
    printf("A lista tá vazia\n");
  } else {
    printf("O numero não foi encontrado na lista.\n");
  }

  duplicarElementos(&head);
  imprimir(head);
}