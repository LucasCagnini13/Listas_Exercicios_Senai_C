#include <Stdio.h>
#include <stdlib.h>

int main(){

    int maior = -99999;
    int menor = 99999;

    for(int i =10;i > 0;i--){

        int nu = 0;

        printf("digite um numero, faltam %i : ",i);
        scanf("%i",&nu);
        printf("\n");

        if(nu > maior){

            maior = nu;
        }
         if(nu < menor){

            menor = nu;
        }
    }

    printf("MAIOR: %i",maior);
    printf("\n");
    printf("MENOR: %i",menor);
    return 0;

}


