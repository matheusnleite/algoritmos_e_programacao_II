/*Considere as declarações abaixo:
int num = 8;
int *pi;
int **ppi;
int ***pppi;
Faça pi apontar para num, ppi apontar para pi e pppi apontar para ppi.
Imprima o endereço de memória de cada variável e o conteúdo. Usando o
ponteiro pppi acesse o conteúdo armazenado em num e imprima.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 8;
    int *pi;
    int **ppi;
    int ***pppi;

    pi = &num;
    ppi = &pi;
    pppi = &ppi;

    printf("Endereco de memoria do ponteiro PPPI: %u\n", &pppi);
    printf("Endereco de memoria do ponteiro PPI: %u\n", pppi);
    printf("Endereco de memoria do ponteiro PI: %u\n", ppi);
    printf("Endereco de memoria da variavel NUM: %u\n", pi);
    printf("Valor da variavel A: %d\n", *pi);


    return 0;
}
