#include <stdio.h>

int main(){
    int a, b, c;

    printf("Informe o primeiro valor: ");
    scanf ("%d",&a);
    printf("Informe o segundo valor: ");
    scanf ("%d",&b);
    printf("Informe o terceiro valor: ");
    scanf ("%d",&c);
    if( a + b >c || a + c > b || b + c > a){
        printf("A soma dos valores inseridos pode criar um triangulo");
    }else{
        printf("Valores incompatíveis para criação de um triangulo");
    }
}
