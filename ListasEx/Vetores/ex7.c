#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int qtdNegativos = 0;
    int somaPositivos = 0;

  for(int i = 0; i < 10;i++){

    printf("digite %i numero : ",i+1);
    scanf("%i",&vetor[i]);

    if(vetor[i] >= 0){

        somaPositivos += vetor[i];
    }else{

        qtdNegativos++;
    }
  }

    printf("soma dos positivos : %i",somaPositivos);
    printf("\n");
    printf("quantidade dos negativos : %i",qtdNegativos);
    return 0;
}
