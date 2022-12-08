#include<stdio.h>
#include <stdlib.h>

int alter(int *nu){
    if (*nu > 0){
        *nu *= 5;
    }
    else{
        *nu = 0;
    }

}

int main(){

    int nu = 0;

    printf("digite um numero : ");
    scanf("%i", &nu);
    alter(&nu);
    printf("RESULTADO : %i ", nu);

    return 0;

}

