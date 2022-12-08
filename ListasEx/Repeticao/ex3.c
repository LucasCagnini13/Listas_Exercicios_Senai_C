#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu;
    int numero = 1;
    printf("escreva um numero : ");
    scanf("%i",&nu);

    for(int i = 0;i < nu;i++){

        int nu = 0;

        printf("%i\n",numero);
        numero += 2;
    }

    return 0;
}

