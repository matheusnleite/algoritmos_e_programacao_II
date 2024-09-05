/*Crie um programa que:
a. Aloque dinamicamente um vetor de 5 números inteiros
b. Peça para o usuário digitar os 5 números no espaço alocado
c. Mostre na tela os 5 números
d. Libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    //declarando ponteiro e fazendo alocação dinamica
    int *p_vetor = (int *) malloc(5*sizeof(int));

    int i;
    //verificando se tem espaço para alocar
    if(p_vetor == NULL){
        printf("ERRO! Memória insuficiente!\n");
        return 1;
    }

    //lendo valores
    for(i=0;i<5;i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",p_vetor + i);
    }

    //imprimindo valores

    for(i=0;i<5;i++){
        printf("Valor da posicao %d: %d\n",i,*(p_vetor+i));
    }

    //liberando espaço na memoria
    free(p_vetor);




    return 0;
}
