#include <Stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int vezes = 0;

    for(int i =10;i > 0;i--){

        int nu = 0;

        printf("digite um numero, faltam %i : ",i);
        scanf("%i",&nu);
        printf("\n");

        if(nu > 0){
            soma += nu;
            vezes++;
        }
    }

    printf("RESULTADO DA MEDIA : %.2f",(float)soma/vezes);
    return 0;

}
