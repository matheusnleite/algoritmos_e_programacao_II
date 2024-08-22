/*Crie três variáveis do tipo inteiro. Leia os valores das variáveis. Declare dois ponteiros.
O código deve imprimir o maior valor, no entanto não se pode usar nenhum operador
relacional nas variáveis. Dessa forma use os ponteiros para encontrar o maior valor.*/

#include <stdio.h>

int main(){
    //declarando variaveis
    int a,b,c;
    int maior;

    //lendo variaveis
    printf("Valor A: ");
    scanf("%d",&a);
    printf("Valor B: ");
    scanf("%d",&b);
    printf("Valor C: ");
    scanf("%d",&c);

    //declarando ponteiros
    int *P_1 = &a;
    int *P_2 = &b;

    //descobrindo quem é o maior
    if(*P_1 - *P_2 > 0){ //se der maior que 0 significa que *P_1(a) é maior que *P_2(b)
        maior = *P_1;
        P_2 = &c;
        if(maior - *P_2 > 0){   //se der maior que 0 significa que MAIOR(a) é maior que *P_2(c)
            printf("O maior valor eh: %d\n",maior);
        }else{  //se der menor que 0 significa que *P_2(c) é maior que MAIOR(a)
            maior = *P_2;
            printf("O maior valor eh: %d\n",maior);
        }
    } else{ //se der menor que 0 significa que *P_2(b) é maior que *P_1(a)
        maior = *P_2;
        P_1 = &c;
        if(maior - *P_1 > 0){ //se der maior que 0 significa que MAIOR(b) é maior que *P_1(c)
            printf("O maior valor eh: %d\n",maior);
        }
        else{   //se der menor que 0 significa que *P_1(c) é maior que MAIOR(b)
            maior = *P_1;
            printf("O maior valor eh: %d\n",maior);
        }
        }
        return 0;
    }

