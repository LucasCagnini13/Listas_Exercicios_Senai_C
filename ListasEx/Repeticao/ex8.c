#include <Stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;

    for(int i =10;i > 0;i--){

        int nu = 0;

        printf("digite um numero, faltam %i : ",i);
        scanf("%i\n",&nu);
        soma += nu;
    }

    printf("RESULTADO DA MEDIA : %.2f",soma/10);
    return 0;

}



