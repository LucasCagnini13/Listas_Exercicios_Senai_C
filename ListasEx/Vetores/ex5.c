#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vetor[9];
    int qtdPares = 0;

    for(int i = 0;i < 10;i++){

        printf("escreva o %i núemro : ",i+1);
        scanf("%i",&vetor[i]);
        if(vetor[i] % 2 == 0){

             qtdPares++;
        }
    }

   printf("a quantidade de núemros pares no vetor é %i",qtdPares);


    return 0;
}


