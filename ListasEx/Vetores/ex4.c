#include <Stdio.h>
#include <stdlib.h

int main(){

    int vetor[7];
    int a = 0;
    int b = 0 ;

    for(int i = 0;i < 8;i++){

        printf("digite o numero %i: ",i+1);
        scanf("%i",&vetor[i]);
    }
    printf("\n");
    printf("escreva um n�mero de 1 a 8 : ");
    scanf("%i",&a);
    printf("escreva outro n�mero de 1 a 8 : ");
    scanf("%i",&b);
    printf("a soma entre as posi��es do vetor � %i",vetor[a-1]+vetor[b-1]);





    return 0;
}


