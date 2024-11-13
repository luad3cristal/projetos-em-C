#include <stdio.h>

main () {
  int num, rep, div;
  num = 1;
  rep = 1;
  
  while (rep < 21) {
    div = 2;
        
    while (div < num && (num % div >= 1))
      div++;

    if (div == num) {
      printf("%d. %d \n", rep, num);
      num++;
      rep++;
    }
    else 
      num++;
  }
}