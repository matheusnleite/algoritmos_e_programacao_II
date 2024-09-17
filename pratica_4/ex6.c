/*Implemente o Struct valor, que contêm um número flutuante e um ponteiro do
tipo struct valor. Declare a variável PV do tipo struct valor e atribua um valor
real ao número e o endereço de memória da variável PV ao ponteiro*/

#include <stdio.h>
#include <stdlib.h>

typedef struct valor{
    float num_float;
    struct valor *ponteiro;
}Valor;

int main(){
    Valor pv;

    pv.num_float = 4.5;
    pv.ponteiro = &pv;

    printf("Valor PV: %.2f\n",pv.num_float);
    printf("Endereco de PV: %u\n",pv.ponteiro);

    return 0;
}

