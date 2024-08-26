/*Crie um programa que contenha. um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/

#include <stdio.h>

int main(){
    //criando o array
    float array_float[10];

    //criando um ponteiro e associando ao array
    float *P_ARRAY = array_float;

    //imprimindo o endereçp de cada posicao do array
    for (int i = 0; i < 10; i++)
    {
        printf("Endereco da posicao %d: %u\n",i,(P_ARRAY + i));
    }
    



    return 0;
}