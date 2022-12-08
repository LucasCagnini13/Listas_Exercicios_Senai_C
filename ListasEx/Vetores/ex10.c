#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vet[10];
    int vetRpetidos[10];
    int qtdRepetidos = 0;

    for(int i = 0;i < 10;i++){

        printf("digite o valor [%i] : ",i+1);
        scanf("%i",&vet[i]);

    }

    for(int i = 0; i < 10;i++){

        printf("[%i] = %i",i,vet[i]);
        printf("\n");
    }

    for(int i = 0;i < 10; i++){
        for(int j = i+1;j < 10;j++){

            if(vet[i] == vet[j]){


                    vetRpetidos[qtdRepetidos] = vet[i];
                    qtdRepetidos++;

                    break;
            }
        }
    }

    for(int i = 0; i <=qtdRepetidos;i++){

        printf("%i\n",vetRpetidos[qtdRepetidos]);
    }



    return 0;
}
