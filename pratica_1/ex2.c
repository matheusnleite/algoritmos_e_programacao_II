/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e 
exiba o maior endereço. Use operadores relacionais de comparação para contemplar o 
exercício.*/

#include <stdio.h>

int main(){
    //declarando as variaveis
    int a = 10;
    int b = 20;

    //declarando ponteiros das variaveis
    int *p_A = &a;
    int *p_B = &b;

    //imprimindo endereços para verificar 
    printf("Endereco da variavel A: %u\n",p_A);
    printf("Endereco da variavel B: %u\n",p_B);    
    
    //verificando qual endereco eh maior
    if(p_A>p_B){
        printf("O endereco da variavel A eh maior");
    }
    else printf("O endereco da variavel B eh maior");
    return 0;
}   