/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/

#include <stdio.h>

int main(){
    //declarando array
    float array_float[10];

    //declarando ponteiro e associando-o a variavel
    float *p = array_float;


    for(int i=0;i<10;i++){
        printf("O endereco da posicao %d do array eh: %u\n",i,(p+i));
    }


    return 0;
}
