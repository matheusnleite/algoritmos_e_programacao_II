/*Faça um programa que leia dois números Ne M e: e —Aloque espaço e leia uma matriz de inteiros NxM; e —Aloque espaço e construa uma matriz transposta M x N de inteiros. * Mostre a sduas matrizes imprimidas na tela. e Localize os três maiores números na primeira matriz e mostre a linha e a coluna onde estão.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int M,N;

    printf("Digite o numero de linhas (N) da matriz: ");
    scanf("%d", &N);
    printf("Digite o numero de colunas (M) da matriz: ");
    scanf("%d", &M);

    //alocando a primeira matriz e lendo
    int *matriz = (int *)malloc(N*M*sizeof(int));

    if(matriz == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        for(int j=0; j<M; j++){
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&matriz[i*M+j]);
        }
    }

    //alocando matriz transposta
    int *matriz_transposta = (int *)malloc(M*N*sizeof(int));

    if(matriz_transposta == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    //construindo a matriz transposta
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            matriz_transposta[i*N+j] = matriz[j*M+i];
        }
    }

    //imprimindo as duas matrizes
    printf("\nPRIMEIRA MATRIZ\n");
    for (int i = 0; i < N; i++)
    {
        for(int j=0; j<M; j++){
            printf("%2d ",matriz[i*M+j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ TRANSPOSTA\n");
    for (int i = 0; i < M; i++)
    {
        for(int j=0; j<N; j++){
            printf("%2d ",matriz_transposta[i*N+j]);
        }
        printf("\n");
    }

    //localizando e mostrando os maiores números na primeira matriz
    int maiores[3]= {0};
    int posicoes[3][2]= {{0,0},{0,0},{0,0}};

    for (int i = 0; i < N; i++)
    {
        for(int j=0; j<M; j++){
            int valor = matriz[i*M+j];
            if(valor>maiores[0]){
                maiores[2]=maiores[1];
                maiores[1]=maiores[0];
                maiores[0]=valor;
                
                posicoes[2][0]=posicoes[1][0];
                posicoes[2][1]=posicoes[1][1];

                posicoes[1][0]=posicoes[0][0];
                posicoes[1][1]=posicoes[0][1];

                posicoes[0][0]=i;
                posicoes[0][1]=j;
            }
            else if(valor>maiores[1] && maiores[0]>valor){
                maiores[2]=maiores[1];
                maiores[1]=valor;

                posicoes[2][0]=posicoes[1][0];
                posicoes[2][1]=posicoes[1][1];

                posicoes[1][0]=i;
                posicoes[1][1]=j;
            }
            else if(valor>maiores[2] && maiores[1]>valor){
                maiores[2]=valor;

                posicoes[2][0]=i;
                posicoes[2][1]=j;
            }
        }
    }
    
    printf("\nOs 3 maiores valores da matriz sao: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Valor %d: %d\n",i+1,maiores[i]);
        printf("Linha: %d Coluna: %d\n\n",posicoes[i][0]+1,posicoes[i][1]+1);
        
    }
    

    free(matriz_transposta);
    free(matriz);
    return 0;
}