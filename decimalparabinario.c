#include<stdio.h>    
#include<stdlib.h>  

int main(){  

int bin[10],decimal,i;    
  
printf("Insira o numero decimal: ");    
scanf("%d",&decimal);    

for(i=0;decimal>0;i++){    
    bin[i]=decimal%2;    
    decimal=decimal/2;    
}    

printf("\nO numero binário é: ");    

for(i=i-1;i>=0;i--){    
    printf("%d",bin[i]);    
}    
return 0;  
}  