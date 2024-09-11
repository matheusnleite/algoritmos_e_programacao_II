/*Faça um programa que:

e Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N e informado pelo usuário);

e Crie uma matriz de distâncias entre cidades de tamanho N x N;

e Calcule a distância entre cada duas cidades e armazene na matriz;

e Exiba na telaa matriz de distancias obtida;

O vetor de estruturas e matriz de distâncias devem ser alocados dinamicamente.

Obs: para calcular a distancia entre duas cidades no plano cartesiano eu usei a fórmula da distância euclidiana.fórmula da distância euclidiana.


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    char nome[50];
    int X,Y;
}cidades;

double calculaDistancia(cidades cidade1, cidades cidade2){
    return sqrt(pow(cidade1.X-cidade2.X,2)+ pow(cidade1.Y-cidade2.Y,2));
}

int main(){
    int N;

    printf("Digite a quantidade de cidades: ");
    scanf("%d",&N);

    //alocando o vetor de estruturas
    cidades *cidade;
    cidade = malloc(N*sizeof(cidades));

    if(cidade == NULL){
        printf("Erro ao alocar!");
        return 1;
    }

    //lendo os valores
    for (int i = 0; i < N; i++)
    {
        printf("\nDigite o nome da cidade %d: ",i+1);
        scanf(" %[^\n]s",(cidade+i)->nome);
        printf("Digite a coordenada X de %s: ",(cidade+i)->nome);
        scanf("%d",&(cidade+i)->X);
        printf("Digite a coordenada Y de %s: ",(cidade+i)->nome);
        scanf("%d",&(cidade+i)->Y);
    }

    //criando matriz de distancia
    double **distancia;
    distancia = (double **)malloc(N*sizeof(double *));

    

    for (int i = 0; i < N; i++)
    {
        distancia[i] = (double *)malloc(N*sizeof(double));
    }

    if(distancia == NULL){
        printf("Errou ao alocar matriz distancia!");
        return 1;
    }
    
    //calculando a distancia entre as cidades
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            *(*(distancia+i)+j) = calculaDistancia(*(cidade+i), *(cidade+j));
        }
        
    }
    
    //imprimindo resultado    
    printf("\nDistancia entre as cidades: \n\n");

    

    for (int i = 0; i < N; i++)
    {
    
        for (int j = 0; j < N; j++)
        {
            printf("%.2lf ",*(*(distancia + i) + j));
        }
        printf("\n");
    }
    

    // Liberando a memória alocada
    for (int i = 0; i < N; i++) {
        free(distancia[i]);
    }
    free(distancia);
    free(cidade);
    return 0;
}
