#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu,nu2;

    printf("digite dois n�meros : ");
    scanf("%i,%i",&nu,&nu2);

    if(nu > nu2){
        printf("o %i � maior",nu);
    }else{
        printf("o %i � maior",nu2);

    }

    return 0;
}
