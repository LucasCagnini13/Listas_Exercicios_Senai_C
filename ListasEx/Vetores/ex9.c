#include <Stdio.h>
#include <stdlib.h>

int main(){

    int contagem = 0;
    int vet[100];


    for(int i = 0;contagem < 100;i++ ){

        if(i % 7 == 0){

            vet[contagem] = i;
            printf("[%i] = %i",contagem,vet[contagem]);
            printf("\n");
            contagem++;
        }
    }

    return 0;
    }
