/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

int main(){
    //variavel
    int array_int[5];

    //ponteiro
    int *P_ARRAY = array_int;

    //lendo array
    for (int i = 0; i < 5; i++)
    {
        printf("Valor da posicao %d: ",i);
        scanf("%d",(P_ARRAY + i));
    }
    printf("\n#####################\n\n");

    //imprimindo endereco dos valores pares

    for (int i = 0; i < 5; i++)
    {
        if(*(P_ARRAY+i)%2==0){
            printf("O endereco do valor %d eh: %u\n",*(P_ARRAY + i),(P_ARRAY + i));
        }
    }
    



    return 0;
}