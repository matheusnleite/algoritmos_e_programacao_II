/*Declare duas variáveis inteiras. Leia dois valores inteiros do usuário e armazene nestas 
variáveis. Use dois ponteiros para trocar o conteúdo dessas duas variáveis. Imprima as 
variáveis e suas posições de memória antes e depois de trocar os valores.
*/

#include <stdio.h>

int main(){

    //declarando variaveis
    int a,b;

    //lendo variaveis
    printf("Valor A: ");
    scanf("%d",&a);
    printf("Valor B: ");
    scanf("%d",&b);

    //declarando ponteiros e associando-os as variaveis
    int *P_A = &a;
    int *P_B = &b;

    //imprimindo variaveis e posições de memoria antes da troca
    printf("===========ANTES===========\n");
    printf("Variavel A: %d\nPosição de memória da variavel A: %u\n",a, P_A);
    printf("Variavel B: %d\nPosição de memória da variavel B: %u\n",b,P_B);

    //trocando os valores das variaveis usando ponteiros

    int aux = *P_A;
    *P_A = *P_B;
    *P_B = aux;

    //imprimindo valores e posições depois da troca
    printf("===========DEPOIS===========\n");
    printf("Variavel A: %d\nPosição de memória da variavel A: %u\n",a, P_A);
    printf("Variavel B: %d\nPosição de memória da variavel B: %u\n",b,P_B);



    return 0;
}