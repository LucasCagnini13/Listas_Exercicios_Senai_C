#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu = 0;

    printf("escreva um numero : ");
    scanf("%i",&nu);
    printf("\n");
    printf("NUMEROS DIVISIVEIS POR %i : ",nu);

    for(int i = 0;i <= nu;i++){

        if(nu % i == 0){

            printf("%i",i);
            printf("\n");
        }
    }

    return 0;

}
