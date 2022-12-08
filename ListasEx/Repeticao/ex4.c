#include <Stdio.h>
#include <stdlib.h>

int main(){

  int vezes = 0;

  for(int i = 0; vezes < 5; i++){

    if(i % 3 == 0){

        printf("%i\n",i);
        vezes++;
    }
  }
    return 0;
}


