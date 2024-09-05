/*Faça um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:

a. Atribua para cada elemento do vetor o valor do seu índice.

b. Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 1500;//tamanho do vetor
    int limite = 10; //quantos elementos o codigo deve imprimir
    int *p_vetor = (int *)calloc(tamanho,sizeof(int)); //usando a funcao calloc

    //Atribuindo para cada elemento do vetor o valor do seu índice.
    for (int i = 0; i < tamanho; i++)
    {
        *(p_vetor+i) = i;
    }
    
    //Exibindo na tela os 10 primeiros e os 10 últimos elementos do vetor.
    printf("%d primeiros elementos do vetor: \n",limite);
    for (int i = 0; i < limite; i++)
    {
        printf("%d ", *(p_vetor+i));
    }

    printf("\n%d ultimos elementos do vetor: \n",limite);
    for (int i = tamanho-1; i > tamanho-(limite+1); i--)
    {
        printf("%d ", *(p_vetor+i));
    }
    
    free(p_vetor);
    return 0;
}