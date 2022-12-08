#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu;
    printf("escreva o número de 1 a 7 : ");
    scanf("%i",&nu);

    switch(nu){

    case 1:
        printf("Domingo");
    break;
     case 2:
        printf("Segunda-Feira");
    break;
     case 3:
        printf("Terça-Feira");
    break;
     case 4:
        printf("Quarta-Feira");
    break;
     case 5:
        printf("Quinta-Feira");
    break;
     case 6:
        printf("Sexta-Feira");
    break;
     case 7:
        printf("Sabado");
    break;

    }

    return 0;
}
