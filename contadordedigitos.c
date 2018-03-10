#include <stdio.h>

int main(void){

    unsigned long contador = 0, valor;
    printf("Insira o número a ser contado: ");
     scanf("%ld", &valor);
     if (valor == 0) contador = 1;
     else
         while (valor != 0){
             contador += 1;
             valor /= 10;
         }
     printf("%ld\n", contador);
     return 0;
}
