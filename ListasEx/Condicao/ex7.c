#include <Stdio.h>
#include <stdlib.h>


int main(){

    char meses[12][10] = {{"Janeiro"},{"Fevereiro"},{"Março"},{"Abril"},{"Maio"},{"Junho"},{"Julho"},{"Agosto"},{"Setembro"},{"Outubro"},{"Novembro"},{"Dezembro"}};
    int nu;

    printf("digite um numero : ");
    scanf("%i",&nu);

    for(int i = 0; i< 10;i++){

        printf("%c",meses[nu-1][i]);

    }




    return 0;
}
