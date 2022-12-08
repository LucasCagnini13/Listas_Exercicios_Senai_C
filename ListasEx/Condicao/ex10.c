#include <Stdio.h>
#include <stdlib.h>


int main(){

    int nu;

    printf("digite um numero : ");
    scanf("%i",&nu);

    if(nu % 3 == 0 && nu % 5 == 0){
        printf("divisivel por 3 e por 5");

    }else if(nu % 5 == 0){
        printf("divisivel por 5");

    }else if(nu % 3 == 0 ){
          printf("divisivel por 3");

    }else{
        printf("n„ı divisivel");
    }
    return 0;
}
