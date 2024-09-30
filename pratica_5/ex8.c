/*Faça uma função que receba dois números inteiros por parâmetro e retorne à soma dos N números inteiros positivos existentes entre eles.*/

#include <stdio.h>

int soma();

int main(){
    int n1,n2;

    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);

    printf("\nSoma: %d\n",soma(n1,n2));

    return 0;
}

int soma(int n1, int n2){
    return n1+n2;
}