/* Faça uma função chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando
vários símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais
de igual sequenciais serão mostrados.*/

#include <stdio.h>

void imprime();

int main(){
    int N;

    printf("Digite a quantidade de simbolos: ");
    scanf("%d",&N);

    imprime(N);

    return 0;
}

void imprime(int N){
    for(int i=1;i<=N;i++)
        printf("=");
}

