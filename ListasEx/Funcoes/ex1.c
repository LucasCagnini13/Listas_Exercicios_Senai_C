#include <Stdio.h>
#include <stdlib.h>

float maior(float nu, float nu2){

    if(nu > nu2){

        return nu;
    }else{

        return nu2;
    }
}

int main(){

        printf("%.2f",maior(2,4));

    return 0;
}
