/*Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do ´
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco. */

#include <stdio.h>

int main(){
    //declarando as variaveis
    int a;
    int b;

    //declarando ponteiros das variaveis
    int *p_A = &a;
    int *p_B = &b;

    //lendo as variaveis
    printf("Valor A: ");
    scanf("%d",p_A);
    printf("Valor B: ");
    scanf("%d",p_B);

    //imprimindo endereços para verificar 
    printf("Endereco da variavel A: %u\n",p_A);
    printf("Endereco da variavel B: %u\n",p_B);    
    
    //verificando qual endereco eh maior
    if(p_A>p_B){
        printf("O endereco da variavel A eh maior e o seu valor eh: %d\n",*p_A);
    }
    else printf("O endereco da variavel B eh maior e o seu valor eh: %d\n",*p_B);
    return 0;
}   