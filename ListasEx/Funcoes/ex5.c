#include <stdio.h>
#include <stdlib.h>

void exclamacao(int vezes){

    for(int i = 0;i < vezes ;i++){
        for(int j = 0;j <= i;j++){

                printf("!");
        }
        printf("\n");
    }
}

int main(){

    exclamacao(5);

    return 0;
}
