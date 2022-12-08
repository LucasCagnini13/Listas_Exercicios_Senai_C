#include <Stdio.h>
#include <stdlib.h>

int main(){

    int menor = 99999;
    int matriz[3][3];


    for(int i = 0;i < 3;i++){

            printf("coloque a linha %i : ",i);

        for(int j = 0;j < 3;j++){

            scanf("%i",&matriz[i][j]);
            if(matriz[i][j] < menor){

                menor = matriz[i][j];

        }
            printf("\n");
    }
    }
       system("cls");

        for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){

                printf("%i ",matriz[i][j]);
            }
            printf("\n");
        }

            printf("menor numero : %i",menor);

    return 0;
}
