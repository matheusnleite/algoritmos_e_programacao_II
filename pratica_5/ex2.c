/*Faça uma função para verificar se um número e positivo ou negativo. Sendo que o
valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

#include <stdio.h>

int posNeg();

int main(){
    int N,result;

    printf("Digite um numero: ");

    scanf("%d",&N);

    result = posNeg(N);

    printf("Resultado: %d",result);

    return 0;
}

int posNeg(int N){
    if(N>0)
        return 1;
    else if(N<0)
        return -1;
    else if(N==0)
        return 0;
}

