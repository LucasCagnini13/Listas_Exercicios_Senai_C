#include <Stdio.h>
#include <stdlib.h>

int main(){

     int qtdNegativos = 0;
     int matriz[3][3];

     for(int i = 0;i < 3;i++){

            printf("coloque a linha %i : ",i);

        for(int j = 0;j < 3;j++){

            scanf("%i",&matriz[i][j]);

            if(matriz[i][j] < 0){

                qtdNegativos++;
            }


        }
            printf("\n");
    }

    printf("quantidade de numeros negativos : %i",qtdNegativos);


    return 0;
}
