/*
Série de Fetuccine em C
Desenvolvido por Charlles Lima
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int aux, c, s, qntd;
printf("How many elements will the sequence have? ");
scanf("%i", &qntd);
int fetuc[qntd];
printf("First element of the sequence: ");
scanf("%i", &fetuc[0]);
printf("Second element of the sequence: \n");
scanf("%i", &fetuc[1]);

c = 2;
while (c < qntd){ //Neste laço, estao sendo inseridos os demais elementos  da série no vetor fetuc
  if (c % 2 == 0){
    fetuc[c] = fetuc[c-1] + fetuc[c-2];
  }
  else {
    fetuc[c] = fetuc[c-1] - fetuc[c-2];
  }
  c++;
}

aux = 1;
  while (aux*aux < qntd){ //Laço para determinar o tamanho da matriz quadrada
    aux++;
  }
  int mat [aux][aux];
  s = 0;
  for (int i = 0; i < aux; i++){    
    for (int j = 0; j < aux; j++){
      if (s < qntd){
        mat[i][j] = fetuc[s];
      }
      else{
        mat[i][j] = 0;
      }
      s++;
    }
  }  

  printf("Matriz no formato normal:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[i][j]);
    }
  }
  printf("\n\nMatriz no formato oposto:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[i][j] * -1);
    }
  }
  printf("\n\nMatriz no formato transposto:");
  for (int i = 0; i < aux; i++){
      printf("\n");
      for (int j = 0; j < aux; j++){
       printf("%i ", mat[j][i]);
    }
  }

  return 0;
}