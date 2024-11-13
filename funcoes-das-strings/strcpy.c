#include <stdio.h>

main () {
  char str1[100],str2[100] = "texto ";

  printf ("\n%s", str2);

  printf ("\n\nEntre com uma string: ");
  gets (str1);

  for (int i = 0; str1[i] != '\0'; i++) {
    str2[i] = str1[i];
  }

  printf ("\n\n%s", str2);
} 