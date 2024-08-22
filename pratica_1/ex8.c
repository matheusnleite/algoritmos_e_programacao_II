/*Faça um programa que irá ler dois valores flutuantes "a" e "b". Logo após o programa
deve efetuar um cálculo com estes dois valores e imprimir o resultado. O cálculo é
selecionado conforme atende os seguintes requisitos:
- Soma se a posição de memória de "a" e "b" for divisível por 3;
- Subtração se a posição de memória de "a" ou "b" for divisível por 5;
- Multiplicação se o valor absoluto da subtração entre as posições de memória de "a"
e "b" for maior que 4;
- Divisão de "a" com "b" caso não atende nenhum requisito.*/

#include <stdio.h>
#include <math.h>

int main(){
    //declarando variaveis
    float a,b;
    float operacao; //variavel que vai realizar a operação com as variaveis a e b

    //lendo variaveis
    printf("Valor A: ");
    scanf("%f",&a);
    printf("Valor B: ");
    scanf("%f",&b);

    //declarando ponteiros e associando as variaveis
    float *P_A = &a;
    float *P_B = &b;

    //imprimindo endereços para verificar
    printf("Endereco A: %u\nEndereco B: %u\n",P_A,P_B);

    if((unsigned int)P_A % 3 == 0 && (unsigned int)P_B % 3 ==0){    //SOMA
        operacao = a + b;
        printf("==========OPERACAO SOMA==========\n");
        printf("Resultado: %.2f\n",operacao);
        printf("=================================\n");
    }else if((unsigned int)P_A % 5 == 0 || (unsigned int)P_B % 5 == 0){        //SUBTRAÇÃO
            operacao = a-b;
            printf("==========OPERACAO SUBTRACAO==========\n");
            printf("Resultado: %.2f\n",operacao);
            printf("======================================\n"); 
    }else if(abs((unsigned int)P_A - (unsigned int)P_B) > 4){        //MULTIPLICAÇÃO
            operacao = a*b;
            printf("==========OPERACAO MULTIPLICACAO==========\n");
            printf("Resultado: %.2f\n",operacao);
            printf("================================////======\n"); 
    }else{        //DIVISAO
            operacao = a/b;
            printf("==========OPERACAO DIVISAO==========\n");
            printf("Resultado: %.2f\n",operacao);
            printf("====================================\n"); 
    }         


    return 0;
}