/*Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor do tipo void, depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual a 10 elementos, se não tiver, peça ao usuário para digitar novamente o tamanho do vetor. Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores flutuantes aleatórios (usando a função rand) entre O e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int tamanho;
    int *p_tamanho=&tamanho;

    while (1)
    {
        printf("\nDigite o tamanho do vetor: ");
        scanf("%d", &tamanho);

        if (*p_tamanho<10)
        {
            printf("O vetor deve ter no minimo tamanho 10\n");
            continue;
        }

        void *p_vetor = (float *)malloc(*(p_tamanho)*sizeof(float));

        if(p_vetor == NULL){
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

         // Inicializa a semente de números aleatórios com base no tempo
        srand(time(NULL));

        for (int i = 0; i < 10; i++)
        {
            *((float *)p_vetor+i) = ((float)rand()/RAND_MAX)*100;
        }
        
        printf("\nValores dos primeiros 10 elementos do vetor:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%.2f\n",*((float *)p_vetor+i));
        }
        
        free(p_vetor);
        break;
    }
    
    free(p_tamanho);
    return 0;
}