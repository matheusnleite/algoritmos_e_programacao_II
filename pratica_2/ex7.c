/*Crie um Struct chamado valores que contém um inteiro e um double. Faça um vetor de 4 posições do tipo valores e crie um ponteiro que aponta para este vetor. Adicione 4 elementos neste vetor. Imprima o conteúdo do vetor usando o ponteiro. Imprima também a posição de memória de cada elemento do vetor (usando o ponteiro).*/

#include <stdio.h>

int main(){

    //definindo struct
    typedef struct
    {
        int num_int;
        double num_double;
    }valores;
    
    //criando um vetor do tipo valores
    valores vetor[4];

    //criando um ponteiro para o vetor
    valores *p_vetor = vetor;

    //lendo o vetor
    for (int i = 0; i < 4; i++)
    {
        printf("Valor inteiro da posicao %d: ",i);
        scanf("%d",&(p_vetor+i)->num_int);
        printf("Valor double da posicao %d: ",i);
        scanf("%lf",&(p_vetor+i)->num_double);
    }

    printf("#############################\n");

    //imprimindo o conteudo do vetor
   for (int i = 0; i < 4; i++)
   {
    printf("ELEMENTO %d\n",i);
    printf("Valor inteiro: %d\nPosicao: %u\nValor double: %.2lf\nPosicao: %u\n",(p_vetor+i)->num_int,&(p_vetor+i)->num_int,(p_vetor+i)->num_double,&(p_vetor+i)->num_double);
    printf("###################\n");
   }


   
    
    

    return 0;
}
