/*Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir a string sem suas vogais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_vogais(char *str){
    int i, j = 0;

    for (i = 0; *(str+i) !='\0'; i++)
    {
        if(strchr("AEIOUaeiou", *(str+i))==NULL){ //funcao que pega uma string e olha dentro da outra string se ela tem algum valor igual, se nao retornara NULL
            *(str+j) = *(str+i);
            j++;
        }
    }
    *(str+j) = '\0';
    
}
int main(){
        int tamanho;

        printf("Digite o tamanho da string: ");
        scanf("%d", &tamanho);
        getchar(); //limpa o buffer do teclado para evitar problemas

        //ponteiro e alocacao dinamica
        char *p_string = (char *) malloc((tamanho+1)*sizeof(char));

        //se nao tiver espaço na memoria
        if(p_string == NULL){
                printf("Erro ao alocar memória!\n");
                return 1;
            }

        //lendo a string
        printf("Digite a string: ");
        scanf(" %[^\n]s",p_string);

        remove_vogais(p_string);

        printf("String sem vogais: %s",p_string);

        free(p_string);
    
    return 0;
}