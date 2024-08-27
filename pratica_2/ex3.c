/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.*/

#include <stdio.h>

int main(){
    //declarando array
    int array_int[5];

    //criando ponteiro e apontando para o array
    int *P_ARRAY = array_int;

    //lendo o array
    for (int i = 0; i < 5; i++)
    {
        printf("Valor da posicao %d: ",i);
        scanf("%d",(P_ARRAY + i));
    }
    printf("\n#####################\n\n");

    //imprimindo o dobro dos valores do array

    for (int i = 0; i < 5; i++)
    {
        printf("O dobro do valor da posicao %d eh: %d\n",i,2*(*(P_ARRAY + i)));
    }




    return 0;
}
