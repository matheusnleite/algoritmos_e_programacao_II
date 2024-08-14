/*Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal. */


#include <bits/stdc++.h>
//declarando a funcao de soma

int soma(int *P_A, int b){
    *P_A = *P_A+b;
}

int main(){

    //declarando valores
    int a=3,b=2;

    

    //chamando funcao
    soma(&a,b);

    printf("A soma eh: %d\n",a);

    return 0;
}