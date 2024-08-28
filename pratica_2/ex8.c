/*Faça um Struct chamado ponteiros. Este Struct contém 3 ponteiros, um para inteiro, um para float e um para char. Crie três variáveis: um inteiro, um float e um char. Crie uma variável do tipo ponteiros e faça ponteiros guardar as posições de memórias das três variáveis primarias.*/

#include <stdio.h>

int main(){
    //criando o struct
    typedef struct{
        int *p_int;
        float *p_float;
        char *p_char;

    }ponteiros;

    //criando variaveis
    int num_int;
    float num_float;
    char caractere;

    //criando variavel tipo ponteiro
    ponteiros var_p;

    //fazendo os ponteiros guardar as posicoes de memorias das variaveis
    (var_p).p_int = &num_int;
    (var_p).p_float = &num_float;
    (var_p).p_char = &caractere;

    //imprimindo os enderecos
    printf("Endereco do inteiro: %u\n",var_p.p_int);
    printf("Endereco do float: %u\n",var_p.p_float);
    printf("Endereco do char: %u\n",var_p.p_char);
    


    return 0;
}
