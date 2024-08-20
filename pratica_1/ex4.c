/*Faça um programa que leia 2 valores inteiros, logo após declare dois ponteiros A e B. 
Cada ponteiro recebe o endereço de uma das variáveis. Imprima o conteúdo para 
onde cada ponteiro aponta. Logo após troque os endereços dos ponteiros. Após isso, 
A conterá o valor de B e B terá o valor de A*/

#include <stdio.h>

int main(){

    //declarando variaveis
    int a,b;

    //lendo variaveis
    printf("Valor A: ");
    scanf("%d",&a);
    printf("Valor B: ");
    scanf("%d",&b);

    //declarando os ponteiros e associando eles as variáveis
    int *P_A = &a;
    int *P_B = &b;

    //imprimindo o conteúdo para onde os ponteiros apontam
    printf("===========ANTES DA TROCA===========\n");
    printf("Ponteiro A aponta para o valor: %d\n",*P_A);
    printf("Ponteiro B aponta para o valor: %d\n",*P_B);

    //trocando os endereços dos ponteiros

    int *aux = P_A;
    P_A = P_B;
    P_B = aux;

    //imprimindo o conteúdo dos ponteiros após a troca
    printf("===========DEPOIS DA TROCA===========\n");
    printf("Ponteiro A agora aponta para o valor: %d\n",*P_A);
    printf("Ponteiro B agora aponta para o valor: %d\n",*P_B);

    return 0;
}