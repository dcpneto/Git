#include <stdio.h>
#include <stdlib.h>

int main (){
  int nAl, i, *nota, max, min, media;
  printf ("Informe a quantidade de alunos: \n");
  scanf ("%i", &nAl);
  nota = malloc (nAl);

  for (i = 0; i<nAl; i++){
    printf("Insira a nota do aluno %i \n",i +1);
    scanf("%i",&nota[i]);

    if(nota[i] > max){
        max = nota[i];
    }
    if(nota[i] < min){
        min = nota[i];
    }

    media += nota[i];    
  }
  
  media/= nAl;
  
  printf("A media da turma foi: %i \n",media);
  printf("A maior nota foi: %i\n",max);
  printf("A menor nota foi: %i\n",min);

  free(nota); 

}
