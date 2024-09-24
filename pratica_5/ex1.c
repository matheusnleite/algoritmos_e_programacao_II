/*Crie uma função que recebe como parâmetro um número inteiro e retorne o seu
dobro.*/

#include <stdio.h>

int dobro();

int main(){
    int N;

    printf("Digite um numero: ");

    scanf("%d",&N);

    N=dobro(N);

    printf("Dobro do numero: %d",N);

    return 0;
}

int dobro(int N){
    N=N*2;
    return N;
}
