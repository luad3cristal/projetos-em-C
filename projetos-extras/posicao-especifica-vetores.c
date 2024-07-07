#include <stdio.h>

main () {
  int v[10], count = 0, pos;
  while (count < 10) {
    printf("Insira um valor: ");
    scanf("%d", &v[count]);
    count++;
  }

  printf("Qual posicao voce deseja ver o valor (0 -> 9)? ");
  scanf("%d", &pos);

  count = 0;
  while (count < 10) {
    if (count == pos) 
      printf("A posicao foi: %d. O valor eh: %d", pos, v[count]);

    count++;
  }
}