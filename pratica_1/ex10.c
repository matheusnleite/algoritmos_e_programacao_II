/*Declare um vetor do tipo double de 5 posições. Leia os valores deste vetor no teclado.
Declare um ponteiro para double. Faça o ponteiro apontar para o menor valor. Neste
programa você só pode usar os operadores relacionais entre o ponteiro e o vetor (dois
ou mais elementos do vetor não pode ser comparados entre si!).*/

#include <stdio.h>

int main(){
    //declarando um vetor de 5 posições
    double vetor[5];

    //lendo os valores do vetor
    printf("Digite 5 valores: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf",&vetor[i]);
    }

//declarando o ponteiro e apontando ele para o primeiro valor
    double *P_DOUBLE = &vetor[0];

    for (int i = 1; i < 5; i++)
    {
        if(*P_DOUBLE > vetor[i]){
            *P_DOUBLE = vetor[i];
        }
    }
    
    printf("O menor valor eh: %.2lf",*P_DOUBLE);

    return 0;
}