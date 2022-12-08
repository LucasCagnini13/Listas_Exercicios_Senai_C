#include <Stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int nu = 0;

    for(int i = 0;i <= 50;i++){

        printf("%i + %i = ",soma,nu);
        soma += nu;
        printf("%i\n",soma);
        nu++;
    }
    return 0;

}


