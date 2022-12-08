#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y){

    int resultado = x;

    if(y == 0){

        return 0;
    }else if(y == 1){

        return x;
    }

    for(int i = 2;i <= y; i++){

        resultado *=  x;
    }

    return resultado;

}

int main(){

    printf("%i",potencia(2,6));

    return 0;
}
