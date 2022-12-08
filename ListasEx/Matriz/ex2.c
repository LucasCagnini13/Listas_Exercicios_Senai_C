#include <Stdio.h>
#include <stdlib.h>

int main(){

    int maior = -99999;
    int matriz[4][4];
    int linha = 0;
    int coluna = 0;

    for(int i = 0;i < 4;i++){

            printf("coloque a linha %i : ",i);

        for(int j = 0;j < 4;j++){

            scanf("%i",&matriz[i][j]);
            if(matriz[i][j] > maior){

                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
            printf("\n");
    }
       system("cls");

        for(int i = 0;i < 4;i++){
            for(int j = 0;j < 4;j++){

                printf("%i ",matriz[i][j]);
            }
            printf("\n");
        }

            printf("maior numero : %i",maior);
            printf("\n");
            printf("linha : %i / coluna : %i",linha,coluna);

    return 0;
}
