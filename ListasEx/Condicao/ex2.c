#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu,nu2;

    printf("digite dois números : ");
    scanf("%i,%i",&nu,&nu2);

    if(nu > nu2){
        printf("o %i é maior",nu);
    }else if(nu2 > nu){
        printf("o %i é maior",nu2);

    }else{

        printf("números iguais");
    }

    return 0;
}
