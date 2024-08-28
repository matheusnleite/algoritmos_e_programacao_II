/*Crie o Struct funcionario que contém o nome e o salário do funcionário. Declare uma variável do tipo funcionario e faça um ponteiro para ele. Adicione e imprima as informações do funcionário que você acabou de declarar usando apenas o ponteiro.*/

#include <stdio.h>

int main(){

    //criando struct Funcionario
    typedef struct 
    {
        char nome[50];
        float salario;

    }Funcionario;

    //declarando uma variavel do tipo Funcionario
    Funcionario variavel_funcionario;

    //declarando ponteiro para variavel_funcionario
    Funcionario *ptr = &variavel_funcionario;

    //lendo valores do struct
    printf("Digite o nome do funcionario: ");
    scanf(" %[^\n]s", ptr->nome);
    printf("Qual o salario do funcionario %s: ",ptr->nome);
    scanf("%f", &ptr->salario);

    //imprimindo valores
    printf("\n##################################\n\n");

    printf("Nome do funcionario: %s\n",ptr->nome);
    printf("Salario: %.2f",ptr->salario);
    

    return 0;
}
