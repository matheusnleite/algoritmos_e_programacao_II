/*Faça uma função que receba um inteiro N como parâmetro, calcule e retorne o
resultado da seguinte serie:
S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)*/


#include <stdio.h>

// Função que calcula a série e retorna a soma
float serie(int n) {
    float soma = 0;
    printf("S = ");
    for (int i = 1; i <= n; i++) {
        // Calcula e imprime cada termo da série
        int numerador = (i * i) + 1;
        int denominador = i + 3;
        
        // Exibir o termo atual
        printf("%d/%d", numerador, denominador);
        if (i != n)
            printf(" + ");
        
        // Soma o valor do termo na série
        soma += (float)numerador / denominador;
    }
    printf("\n"); // Quebra de linha após a série
    return soma;  // Retorna a soma final
}

int main() {
    int n;

    // Solicita o valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // Chama a função e armazena o resultado
    float resultado = serie(n);

    // Imprime o resultado da série
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
