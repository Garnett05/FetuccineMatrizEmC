/*
Série de Fetuccine em C
Desenvolvido por Charlles Lima
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int n1, n2, aux, c;
printf("How many elements will the sequence have? ");
scanf("%i", &aux);
printf("First element of the sequence: ");
scanf("%i", &n1);
printf("Second element of the sequence: ");
scanf("%i", &n2);

int fetuc[aux];
fetuc[0] = n1;
fetuc[1] = n2;

c = 2;
while (c < aux){
  if (c % 2 == 0){
    fetuc[c] = fetuc[c-1] + fetuc[c-2];
  }
  else {
    fetuc[c] = fetuc[c-1] - fetuc[c-2];
  }
  c++;
}

  return 0;
}
