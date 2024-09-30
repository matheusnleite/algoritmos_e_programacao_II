/*Faça uma função não-recursiva que receba um número inteiro positivo N e retorne o
fatorial deste número*/

#include <stdio.h>

// Função para calcular o fatorial de um número inteiro N
int fatorial(int n) {
    int resultado = 1;

    // Loop para calcular o fatorial de forma iterativa
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int n;

    // Solicita ao usuário o valor de N
    printf("Digite um numero: ");
    scanf("%d", &n);

    // Verifica se o número é positivo
    if (n < 0) {
        printf("Não existe fatorial de negativos.\n");
    } else {
        // Chama a função fatorial e imprime o resultado
        printf("Fatorial de %d = %d\n", n, fatorial(n));
    }

    return 0;
}
