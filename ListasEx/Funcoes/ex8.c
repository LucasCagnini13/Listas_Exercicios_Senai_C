#include<stdio.h>
#include <stdlib.h>

int somaVetor (int *nu)
{
  int i;
  int soma = 0;

  for (i = 0; i <= 9; i++)
    soma = soma + nu[i];

  return soma;
}


void main(){

    int vet[10];
    int soma;
    for(int i = 0; i <= 9; i++){
        printf("digite um numero [%i] : ", 10 - i);
        scanf("%i", &vet[i]);
        printf("\n");
    }

    soma = somaVetor(vet);

     printf("A soma dos valores do vetor é : %d", soma);

}
