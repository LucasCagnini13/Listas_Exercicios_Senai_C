#include <Stdio.h>
#include <stdlib.h>


int main(){

    int es;
    double valor;

    printf("digite um valor : ");
    scanf("%d",&valor);

    printf("ESCOLHA O ESTADO \n");
    printf("MG - [1]\n");
    printf("SP - [2]\n");
    printf("JR - [3]\n");
    printf("MS - [4]\n");
    scanf("%i",&es);

    switch(es){

    case 1 :
        printf("preço final : %d",valor + ( valor * 0.07));
        break;
    case 2 :
        printf("preço final : %d",valor + ( valor * 0.12));
        break;
    case 3:
         printf("preço final : %d",valor + ( valor * 0.15));
        break;
    case 4 :
         printf("preço final : %d",valor + ( valor * 0.08));
        break;
    default:
        printf("estado invalido");
    }

    return 0;
}
