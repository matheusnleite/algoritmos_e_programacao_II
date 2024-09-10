/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário e a leia. Em seguida, incremente com um código que receba um valor inteiro do usuário, retorne “Existe” caso o valor esteja na matriz ou retorne “Não Existe” caso não esteja na matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //variaveis que vao definir o tamanho da matriz
    int linhas,colunas;

    //Recebe as dimensoes da matriz do usuario
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);
    printf("\n");

    //alocando dinamicamente a matriz
    int **matriz = (int **)malloc(linhas*sizeof(int *));

    for(int i=0; i<linhas; i++){
        matriz[i] = (int*)malloc(colunas*sizeof(int));
    }
    
    //lendo a matriz
    for(int i=0; i<linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",(*(matriz+i)+j)); //((endereço da linha) + j) por isso tem que usar o *
        }
    }

    //recebendo um valor do usuario
    int num;
    int existe=0;

    printf("\nDigite um numero para verificar se ele existe na matriz: ");
    scanf("%d", &num);

    //verificando se o numero existe na matriz
    for(int i=0; i<linhas; i++){
        for (int j = 0; j < colunas; j++)
        {
            if(*(*(matriz+i)+j) == num){
                printf("\nExiste\n");
                existe = 1;
            }
        }
    }

    if(existe == 0){
        printf("\nO valor %d nao existe na matriz\n",num);
    }
    

    for(int i=0; i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

