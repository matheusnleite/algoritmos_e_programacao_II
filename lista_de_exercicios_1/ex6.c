/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B.*/

#include <stdio.h>

int soma_do_dobro(int *P_A, int *P_B){
    *P_A = *P_A * 2;
    *P_B = *P_B * 2;
    int soma = *P_A + *P_B;
    return soma;
}

int main(){
    //declarando valores
    int a,b;

    //lendo valores
    printf("Valor A: ");
    scanf("%d",&a);
    printf("Valor B: ");
    scanf("%d",&b);

    //imprimindo a soma do dobro
    printf("A soma do dobro dos valores lidos eh: %d",soma_do_dobro(&a,&b));

    return 0;
}