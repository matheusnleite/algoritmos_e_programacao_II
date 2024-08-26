/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>

int main(){
    //criando a matriz
    float matriz_float[3][3];

    //criando um ponteiro
    float *P_MATRIZ;

    //imprimindo o endereçp de cada posicao do array
    for (int i = 0; i < 3; i++)
    {
        P_MATRIZ = matriz_float[i]; //o ponteiro aponta para o primeiro elemento da linha i
        for (int j = 0; j < 3; j++)
        {
            printf("Endereco da linha %d coluna %d: %u\n",i,j, (P_MATRIZ + j));
        }
        
    }
    



    return 0;
}