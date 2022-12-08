#include <Stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int nu;

  printf("digite um número : ");
  scanf("%i",&nu);

  if(nu > 0){
    printf("potencia : %f\n",pow(nu,2));

    printf("raiz quadrada : %f",sqrt(nu));
  }else{

    printf("número negativo");
  }

    return 0;
}
