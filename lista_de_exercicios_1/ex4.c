/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A. */

#include <stdio.h>

//declarando a funcao troca
int troca(int *p_A, int *p_B){ //os ponteiros recebem o endereço de memoria das variaveis
    int aux = *p_A;
    *p_A = *p_B;
    *p_B = aux;
}

int main(){
    int a,b;


    //lendo variaveis
    printf("Variavel A: ");
    scanf("%d",&a);
    printf("Variavel B: ");
    scanf("%d",&b);

    //imprimindo os valores antes da troca
    printf("Valores ANTES da troca\nValor A: %d\nValor B: %d\n",a,b);

    //chamando a funcao
    troca(&a,&b); //eu passo os endereços de memoria pois as variavies da funcao vao ser ponteiros

    //imprimindo valores depois da troca
    printf("Valores DEPOIS da troca\nValor A: %d\nValor B: %d\n",a,b);

    return 0;
}