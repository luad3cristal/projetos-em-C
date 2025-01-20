#include <stdio.h>

int main(void) {
  int var1;
  char var2;
  char var3[10];
  float var4;
  double var5;

  int *p_var1 = &var1;
  char *p_var2 = &var2;
  char *p_var3 = var3;
  float *p_var4 = &var4;
  double *p_var5 = &var5;

  printf("Digite um inteiro: ");
  scanf("%d", &var1);

  printf("Digite um caractere: ");
  scanf(" %c", &var2);

  printf("Digite uma string: ");
  scanf("%s", var3);

  printf("Digite um float: ");
  scanf("%f", &var4);

  printf("Digite um double: ");
  scanf("%lf", &var5);

  printf("\nValores usando variáveis primitivas:\n");
  printf("Inteiro: %d\n", var1);
  printf("Caractere: %c\n", var2);
  printf("String: %s\n", var3);
  printf("Float: %.2f\n", var4);
  printf("Double: %.2lf\n", var5);

  printf("\nAgora, utilizando os ponteiros:\n");
  printf("Digite um inteiro: ");
  scanf("%d", p_var1);

  printf("Digite um caractere: ");
  scanf(" %c", p_var2);

  printf("Digite uma string: ");
  scanf("%s", p_var3);

  printf("Digite um float: ");
  scanf("%f", p_var4);

  printf("Digite um double: ");
  scanf("%lf", p_var5);

  printf("\nValores usando ponteiros:\n");
  printf("Inteiro: %d\n", *p_var1);
  printf("Caractere: %c\n", *p_var2);
  printf("String: %s\n", p_var3);
  printf("Float: %.2f\n", *p_var4);
  printf("Double: %.2lf\n", *p_var5);
}