int main(){

    int vetor[4];
    int soma = 0;

    for(int i = 0;i < 5;i++){

        printf("digite o n�mero %i :", i+1);
        scanf("%i",&vetor[i]);
        soma += vetor[i];
    }

    for(int i = 0;i < 5; i++){

        printf("%i\n",vetor[i]);
    }

    printf("a media entre os numeros digitados � %i ",(soma/5));

    return 0;
}

