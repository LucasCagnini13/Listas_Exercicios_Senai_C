#include <Stdio.h>
#include <stdlib.h>

int main(){

    int nu;

    printf("digite umn�mero : ");
    scanf("%i",&nu);

    if( nu % 2 == 0){
        printf("par");
    }else{

        printf("�mpar");
    }

    return 0;
}
