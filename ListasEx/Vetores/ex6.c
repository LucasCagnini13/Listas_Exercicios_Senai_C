#include <Stdio.h>
#include <stdlib.h>

int main(){

   int vetor[10];
   int maior;
   int menor;

   for(int i = 0;i < 10;i++){

    printf("escreva o %i numero : ",i+1);
    scanf("%i",&vetor[i]);

    if(i == 0){

        maior = vetor[i];
        menor = vetor[i];
    }else if( vetor[i] > maior){

        maior = i;
    }else if(vetor[i] < menor){

        menor = i;
    }
   }

   printf("maior n�mero : %i / menor n�mero : %i",maior,menor);

    return 0;
}


