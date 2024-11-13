#include <stdio.h>

main () {
  char str1[100] = "texto ",str2[100];
  int size = 0;

  for (int i = 0; str1[i] != '\0'; i++) {
    size++;
  }

  printf ("Entre com uma string: ");
  gets (str2);

  //se o espaço não existe, entra aqui
  if (str1[size - 1] != 32) {
    for (int i = 0; str2[i] != '\0' && str1[i] != '\0'; i++) {
      if (i == 0) 
        str1[size] = 32; //adiciona um espaco
      
      str1[size + 1] = str2[i]; // adiciona a letra depois do espaco
      size++;
    }
  } 

  // se já existir o espaço entra aqui.
  else {
    for (int i = 0; str2[i] != '\0' && str1[i] != '\0'; i++) {
      str1[size] = str2[i];
      size++;
    }
  }
  
  printf ("\n\n%s",str1);
}