#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu,nu2;

    printf("digite dois n�meros : ");
    scanf("%i,%i",&nu,&nu2);

    if(nu > nu2){
        printf("o %i � maior",nu);
    }else if(nu2 > nu){
        printf("o %i � maior",nu2);

    }else{

        printf("n�meros iguais");
    }

    return 0;
}
