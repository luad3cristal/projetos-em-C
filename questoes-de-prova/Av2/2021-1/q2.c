/*
Um jogo da adivinhação foi criado por um engenheiro de telecomunicações chamado Mordechai Meirovitz, na Romênia em 1971. O jogo ganhou o prestigiado prêmio do "Jogo do Ano" em 1974 e foi um enorme sucesso comercial, sendo vendido em mais de 40 países. Trata-se de um jogo de lógica cujo seu objetivo como jogador é descobrir a senha secreta escolhida por um oponente. A senha a ser descoberta é formada por uma sequência de caracteres de algum alfabeto. Para descobrir qual foi a senha, você "chuta" uma provável senha para o seu oponente. O chute é uma sequência de caracteres com o mesmo número de caracteres da senha. E os caracteres devem pertencer ao mesmo alfabeto. Após cada chute seu, você receberá uma resposta, que consiste de 2 inteiros (E,B) indicando o quão bom foi o seu chute. Se um caractere do chute existe na senha na mesma posição (da string), então ele conta como "excelente" (E). Caso contrário, se o caractere existe na senha, mas em uma posição diferente, ele conta como "bom" (B). Um dado caractere do chute não é contado duas vezes (ou seja, se ele foi contado como excelente, não é contado como bom). A tabela abaixo ilustra o jogo com alguns exemplos.

SENHA CHUTE SAIDA
1233  3243  (2,1)
1233  3000  (0,1)
1233  4455  (0,0)
1233  1233  (4,0)

Baseado nas respostas recebidas, o jogador pode deduzir qual foi a senha escolhida pelo oponente. O objetivo do jogo é encontrar a senha com o número mínimo de chutes. Já o seu objetivo é um pouco mais simples: escrever um programa que receba a senha do primeiro jogador (considere uma senha de 10 caracteres). Em seguida, o programa deve receber os chutes do segundo jogador. Para cada chute, deve gerar uma saída de acordo com as o explicado acima. O jogo termina quando o segundo jogador acertar a senha digitada pelo primeiro (todas as posições com Excelente). O programa deve terminar, indicando o número de tentativas utilizadas pelo segundo jogador, para adivinhar a senha digitada pelo primeiro
*/

#include <stdio.h>

main () {
  int password, senha[10], guess, chute[10];
  int i, rep, bom, exc;

  //Senha
  printf("Insira a senha de 10 caracteres: ");
  scanf("%d", &password);

  while (password > 9999999999 || password < 1000000000) {
    printf("\nEsta senha eh invalida. Insira uma nova senha: ");
    scanf("%d", &password);
  }

  for (i = 9; i > -1; i--) {
    if (password >= 10)
      senha[i] = password % 10;
    else 
      senha[i] = password;
    password /= 10;
  }

  exc = 0;
  bom = 0;
  rep = 0;
  while (exc < 10) {
    printf("\n\nInsira um palpite de 10 caracteres: ");
    scanf("%d", &guess);

    while (guess > 9999999999 || guess < 1000000000) {
      printf("\nEste palpite eh invalido. Insira um novo palpite: ");
      scanf("%d", &guess);
    }

    for (i = 9; i > -1; i--) {
      if (guess >= 10) 
        chute[i] = guess % 10;
      else
        chute[i] = guess;
      guess /= 10;
    }
    
    for (i = 0; i < 10; i++) {
      if (senha[i] == chute[i]) {
        exc++;
        continue;
      }

      for (int j = 0; j < 10; j++) {
        if (senha[i] == chute[j]) {
          if (j != i) {
            bom++;
            break;
          }
        }
      }
    }

    printf("(%d, %d)", exc, bom);
    rep++;
    if (exc < 10) {
      exc = 0;
      bom = 0;
    }
  }

  printf("\n Voce acertou em %d tentativas", rep);
}