#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu,nu2;

    printf("digite dois números : ");
    scanf("%i,%i",&nu,&nu2);

    if(nu > nu2){
        printf("o %i é maior",nu);
    }else{
        printf("o %i é maior",nu2);

    }

    return 0;
}
