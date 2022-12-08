#include <stdio.h>
#include <stdlib.h>

int converterSegundos(int horas,int minutos,int segundos){

    int soma = ((horas * 60*60)+ (minutos * 60) + segundos);
    return soma;
}

int main(){

    printf("%i",converterSegundos(13,50,33));

    return 0;
}
