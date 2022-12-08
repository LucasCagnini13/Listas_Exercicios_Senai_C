#include <Stdio.h>
#include <stdlib.h>

int main(){

     int qtdMaior = 0;
     int matriz[4][4];

     for(int i = 0;i < 3;i++){

            printf("coloque a linha %i : ",i);

        for(int j = 0;j < 3;j++){

            scanf("%i",&matriz[i][j]);

            if(matriz[i][j] > 10){

                qtdMaior++;
            }


        }
            printf("\n");
    }

    printf("quantidade maiores que 10 : %i",qtdMaior);


    return 0;
}
