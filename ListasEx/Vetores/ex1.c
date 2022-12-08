#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];

    for(int i = 0;i < 6;i++){

        printf("digite o número %i :", i+1);
        scanf("%i",&vetor[i]);
    }

    for(int i = 0;i < 6; i++){

        printf("%i\n",vetor[i]);
    }

    return 0;
}
