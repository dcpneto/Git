#include <stdio.h>

int main(void){
int comeco,fim;

printf("Informe o valor inicial: ");
scanf ("%d",&comeco);
printf("Informe o valor final: ");
scanf ("%d",&fim);

for (comeco=0;comeco<=fim;comeco++){
    if(comeco%3==0 && comeco>1){
    printf("\n %d é multiplo de 3", comeco);
    }    
}
return 0;
}
