/*Escreva um programa que contenha duas
variaveis inteiras. Leia essas variáveis do
teclado. Em seguida, exiba o conteúdo alocado
no maior endereço*/

#include <stdio.h>

int main() {
    int a,b;
    int *maior_endereco;

    printf("Digite os valores: ");
    scanf("%d %d",&a,&b);
    maior_endereco = &a;

    if(maior_endereco<&b){
        maior_endereco = &b;
        printf("O maior endereco eh da variavel B: %u",maior_endereco);
    }
    else{
        printf("O maior endereco eh da variavel A: %u",maior_endereco);
    }



    return 0;
}