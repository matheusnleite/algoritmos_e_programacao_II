/*Faça uma função que recebe um inteiro positivo e retorne 1 se o número for par e 0 se
for ímpar.
*/

#include <stdio.h>

int parImpar();

int main(){
    int N,result;

    printf("Digite um numero: ");

    scanf("%d",&N);

    result = parImpar(N);

    printf("Resultado: %d",result);

    return 0;
}

int parImpar(int N){
    if(N%2==0)
        return 1;
    else
    return 0;

}

