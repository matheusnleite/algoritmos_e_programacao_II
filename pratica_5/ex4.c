/*Faça uma função que verifica se um valor inteiro é primo ou não.*/

#include <stdio.h>

int verificaPrimo();

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(verificaPrimo(n))
        printf("Eh primo!\n");
    else
        printf("Nao eh primo!\n");

    return 0;
}

int verificaPrimo(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
