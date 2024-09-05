/*Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste modo:

a. Inicie com um vetor de tamanho 10 alocado dinamicamente;

b. Caso o vetor alocado esteja cheio, realoque o vetor do tamanho adicionado
espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador_tamanho=10;
    int *p_vetor = (int *)malloc(contador_tamanho*sizeof(int));
    int i = 0;
    
    if(p_vetor == NULL){
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

    while (1)
    {
        if(i==contador_tamanho){
            contador_tamanho+=10;
            p_vetor = realloc(p_vetor,contador_tamanho*sizeof(int));
            if(p_vetor == NULL){
                printf("Erro ao realocar memoria!\n");
                return 1;
            }
        }

        printf("Digite um numero: ");
        scanf("%d", (p_vetor+i));
        if(*(p_vetor+i)==0)
            break;

        i++;

    }
    
    printf("\nVetor digitado:\n");
    for (int j = 0; j < i; j++)
    {
        printf("Valor da posicao %d: %d\n",j,*(p_vetor+j));
    }
    
    free(p_vetor);
    return 0;
}