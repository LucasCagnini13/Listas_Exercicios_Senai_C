#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu = 0;

    printf("escreva um numero : ");
    scanf("%i",&nu);
    printf("\n");


    for(int i = 2;i < nu;i++){

        if(nu % i == 0){

           printf("não é primo!");
           return 0;
        }
    }
    printf("é primo");

    return 0;

}
