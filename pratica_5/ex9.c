/*Escreva uma função que gera um triangulo lateral de altura 2*n-1 e n largura. Por
exemplo, a saída para n = 4 seria:
*
**
***
****
***
**
*
*/

#include <stdio.h>

void triangulo();

int main(){
    int n;
    printf("Informe a altura do triangulo: ");
    scanf("%d", &n);
    triangulo(n);
}

void triangulo(int n){
    for(int i=1;i<2*n-1;i++){
        if (i<=n)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else{
            for (int j = 2*n-1-i; j > 0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
}