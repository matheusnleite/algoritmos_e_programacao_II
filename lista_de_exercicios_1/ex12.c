/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.*/

#include <stdio.h>

int ordena(int *a, int *b, int *c){
    int aux; //variavel auxiliar para ajudar a trocar os valores

    if (*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*a > *c){
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c){
        aux = *b;
        *b = *c;
        *c = aux;
    }

    //verificando se os valores são iguais
    if (*a==*b && *b==*c){
        return 1;
    }else{
        return 0;
    }
    
    

}

int main(){
    //variaveis
    int a,b,c;
    int resultado; //variavel que vai receber 1 ou 0


    //lendo variaveis
    printf("Variavel A: ");
    scanf("%d",&a);
    printf("Variavel B: ");
    scanf("%d",&b);
    printf("Variavel C: ");
    scanf("%d",&c);

    resultado = ordena(&a,&b,&c);

    //imprimindo se os valores sao iguais ou diferentes
    if(resultado==1){
        printf("Os valores sao iguais\n");
    }
    if(resultado==0){
        printf("Os valores sao diferentes\n");
    }

    //imprimindo em ordem crescente
    printf("Valores ordenados: \n");
    printf("%d\n%d\n%d",a,b,c);
    




    return 0;
}