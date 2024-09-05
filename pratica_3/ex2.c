/*Faça um programa que leia do usuário o tamanho de um vetor (inteiros) a ser lido e faça a sua alocação dinâmica de memória. Depois, leia do usuário seus valores e imprima o vetor lido e mostre quantos dos números são pares e quantos são impares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho,contador_par,contador_impar;
    contador_par=contador_impar=0;

    //lendo o tamanho do vetor que sera alocado
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    //alocando dinamicamente memoria para o vetor
    int *p_vetor;
    p_vetor = (int *) malloc(tamanho*sizeof(int));
    
    //se nao tiver espaço na memoria
    if(p_vetor == NULL){
            printf("Erro ao alocar memória!\n");
            return 1;
        }

    //lendo valores do vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor da posicao %d: ",i);
        scanf("%d",p_vetor+i);
    }

    //imprimindo o vetor lido
    printf("\nIMPRIMINDO VALORES\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor da posicao %d: %d\n",i,*(p_vetor + i));
        if(*(p_vetor+i)%2==0)
            contador_par++;
        else contador_impar++;
    }

    printf("%d valores pares\n%d valores impares",contador_par,contador_impar);    

    //liberando espaço na memoria
    free(p_vetor);
    return 0;
}