#include <stdio.h>
#include <stdlib.h>

float converter(float F){

   float C = (F – 32.0) * (5.0/9.0);
   return C;
}

int main(){

        printf("%.2f",converter(30));

    return 0;
}
