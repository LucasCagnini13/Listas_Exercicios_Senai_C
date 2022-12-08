#include<stdio.h>
#include <stdlib.h>

int soma20(int *nu){
    *nu += 20;
    return nu;

    }

int main(){

    int nu = 0;

    printf("digite um numeor: ");
    scanf("%d", &nu);
    soma20(&nu);
    printf("Somando 20 o valor fica : %d ", nu);

    return 0;

}

