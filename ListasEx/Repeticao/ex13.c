#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vezes = 0;
    int qtdigual = 0;
    int maior = -99999;

    printf("quantas vaolores voc  quer ler? : ");
    scanf("%i",&vezes);
    printf("\n");

    for(int i = 0; i < vezes;i++){

        int nu;

        printf("[%i]escreva um n˙mero : ",nu+1);
        scanf("%i",&nu);
        printf("\n");

        if(nu > maior){

                maior = nu;
                qtdigual = 1;

            }else if(nu == maior){
                qtdigual++;
        }

    }

    printf("Maior : %i",maior);
    printf("\n");
    printf("quantidade de vezes que o maior foi digitado : %i",qtdigual);

    return 0;

}
