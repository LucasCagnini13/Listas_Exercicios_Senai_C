#include <Stdio.h>
#include <stdlib.h>


int main(){

    int nu;
    printf("escreva um numero : ");
    scanf("%i",&nu);

    for(;nu >= 0;nu--){

        printf("%i\n",nu);
    }

    return 0;
}
