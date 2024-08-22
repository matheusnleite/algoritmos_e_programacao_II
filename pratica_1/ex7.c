/*Declare um inteiro. Verifique se sua posição de memória é divisível por 5.*/

#include <stdio.h>

int main(){
    //declarando variavel
    int num;
    //declarando ponteiro
    int *P_NUM = &num;
    //imprimindo o endereço de memoria da variavel NUM para verificar se é divisivel por 5
    printf("Endereco: %u\n",P_NUM);
    //fazendo a verificação se é divisível por 5
    if ((unsigned int)P_NUM % 5 == 0)
        printf("Eh divisivel por 5\n");
    else printf("Nao eh divisivel por 5\n");


    return 0;
}