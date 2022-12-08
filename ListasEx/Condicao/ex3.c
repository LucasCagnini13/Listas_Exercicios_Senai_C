#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu;

    printf("digite umnúmero : ");
    scanf("%i",&nu);

    if( nu % 2 == 0){
        printf("par");
    }else{

        printf("ímpar");
    }

    return 0;
}
