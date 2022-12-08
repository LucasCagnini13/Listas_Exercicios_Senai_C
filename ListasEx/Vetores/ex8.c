#include <Stdio.h>
#include <stdlib.h>

int main(){

    int vet[10];
    int vet2[10];
    int vet3[10];

    printf("PREENCHA O PRIMEIRO VETOR : ");
    printf("\n");
    for(int i = 0;i < 10;i++){

        printf("elemento %i : ",i+1);
        scanf("%i",&vet[i]);
        printf("\n");
    }

    system("cls");

    printf("PREENCHA O SEGUNDO VETOR : ");
    printf("\n");
    for(int i = 0;i < 10;i++){

        printf("elemento %i : ",i+1);
        scanf("%i",&vet2[i]);
        printf("\n");
    }

    system("cls");
    printf("Vetor C : ");
    printf("\n");

    for(int i = 0;i < 10;i++){

        vet3[i] = vet[i] - vet2[i];
        printf("[%i] = %i",i,vet3[i]);
        printf("\n");

    }
    return 0;
}
