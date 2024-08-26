/*Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. */


#include <stdio.h>

//declarando funcao
int maior(int *p_A,int *p_B){
    if(*p_A<*p_B){
        int aux = *p_A;
        *p_A = *p_B;
        *p_B = aux;
    }
}

int main(){

    //declarando variaveis
    int a,b;



    //lendo variaveis
    printf("Variavel A: ");
    scanf("%d",&a);
    printf("Variavel B: ");
    scanf("%d",&b);

    //imprimindo variavies
    printf("Valor de A: %d\n",a);
    printf("Valor de B: %d\n",b);

    //chamando funcao
    maior(&a,&b);

    //imprimindo maior e menor
    printf("Maior valor: %d\n",a);
    printf("Menor valor: %d\n",b);
    
    return 0;
}