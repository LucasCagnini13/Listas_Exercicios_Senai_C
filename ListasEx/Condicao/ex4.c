#include <Stdio.h>
#include <stdlib.h>

int main(){

    double salario, prestacao;

    printf("digite o salrio : ");
    scanf("%d",&salario);

    printf("digite o valor do emprestimo : ");
    scanf("%d",&prestacao);

    if(prestacao > (salario * 0.20)){

        printf("imprestimo negado");
    }else{
        printf("imprestimo feito!!!");
    }

    return 0;
}
