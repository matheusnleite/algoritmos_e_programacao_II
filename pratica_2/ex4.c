/*Faça um ponteiro genérico. Declare três variáveis, um inteiro, um float e um double.
Faça o usuário digitar seus valores. Use o ponteiro para apontar para os endereços
dessas variáveis e imprima seus valores usando o ponteiro.*/

#include <stdio.h>

int main(){
    //declarando ponteiro
    void *p;

    //declarando variaveis
    int num_int;
    float num_float;
    double num_double;

    //lendo os valores
    printf("Digite o valor inteiro: ");
    scanf("%d",&num_int);
    printf("Digite o valor float: ");
    scanf("%f",&num_float);
    printf("Digite o valor double: ");
    scanf("%lf",&num_double);

    //imprimindo valores
    printf("\n########################\n\n");
    p = &num_int;
    printf("Valor inteiro: %d\n",*(int *)p);
    p = &num_float;
    printf("Valor float: %.2f\n",*(float *)p);
    p = &num_double;
    printf("Valor inteiro: %.2lf\n",*(double *)p);


    return 0;
}

