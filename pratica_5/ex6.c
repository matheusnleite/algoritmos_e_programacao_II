/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a
convertida em graus Fahrenheit. A formula de conversão é: F = C ∗ (9.0/5.0) + 32.0,
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>

float converteTemp();

int main(){
    int C;

    printf("Digite a temperatura em graus Celsius: ");

    scanf("%d",&C);

    float F = converteTemp(C);

    printf("Temperatura em Fahrenheit: %.1f\n",F);

    return 0;
}

float converteTemp(int C){
    float F = C * (9.0/5.0) + 32.0;
    return F;
}
