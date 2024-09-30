/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por
exemplo, a saída para n = 6 seria:
     *
    ***
   *****
  *******
 *********
***********
*/

#include <stdio.h>

void triangulo();

int main() {
    int n;
    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);
    triangulo(n);

    return 0;
}

void triangulo(int n) {
    for (int i = 1; i <= n; i++) //quantas linhas vai ter o triangulo
    {
        for (int j = 1; j <= n-i; j++) //quantos espaços vai ter para o triangulo ficar no centro
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) //quantos * imprimir
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
}