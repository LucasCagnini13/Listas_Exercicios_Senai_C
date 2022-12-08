#include <Stdio.h>
#include <stdlib.h>


int main(){

    int es;
    float nu,nu2;

    printf(" + | [1]\n");
    printf(" - | [2]\n");
    printf(" * | [3]\n");
    printf(" / | [4]\n");
    printf("ESCOLHA : ");
    scanf("%i",&es);

    printf("digite dois numeros separados por virgula para completar a opereção : ");
    scanf("%f,%f",&nu,&nu2);

    switch(es){

    case 1:
            printf("RESULTADO : %.2f",nu+nu2);
        break;
    case 2:
            printf("RESULTADO : %.2f",nu-nu2);
        break;
    case 3:
            printf("RESULTADO : %.2f",nu*nu2);
        break;
    case 4:
            printf("RESULTADO : %.2f",nu/nu2);
        break;
    default :
        printf("OPERAÇÃO INVALIDA!!!");
    }

    return 0;
}
