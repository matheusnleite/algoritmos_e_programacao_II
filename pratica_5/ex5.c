/*Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito e um número inteiro não negativo que pode ser expresso como o quadrado
de outro número inteiro. Ex: 1, 4, 9...*/

#include <stdio.h>
#include <math.h>

int quadradoPerfeito();

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(quadradoPerfeito(n))
        printf("Eh quadrado perfeito!\n");
    else
        printf("Nao eh quadrado perfeito!\n");

    return 0;
}

int quadradoPerfeito(int n){
    int raiz = sqrt(n);
    if(raiz*raiz == n)
        return 1;
    else return 0;

}
