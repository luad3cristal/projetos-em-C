/*
Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um programa que leia as notas destes exames e imprima a classificação do aluno, sabendo que a média é 70.
Classificação: 
A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações
*/

#include <stdio.h>

main () {
  float I, II, III, IV, V;

  printf("Insira a sua nota dos 5 exames: ");
  scanf("%f, %f, %f, %f, %f", &I, &II, &III, &IV, &V);

  if ((I + II + III + IV + V)/5 >= 70)
    printf("Classificacao A");
  else if (I >= 70 && II >= 70 && IV >= 70)
    printf("Classificacao B");
  else if (I >= 70 && II >= 70 && (III >= 70 || IV >= 70))
    printf("Classificacao C");
  else 
    printf("Reprovado");
}