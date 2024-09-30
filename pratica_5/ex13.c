/*Faça uma função não-recursiva que receba um número inteiro positivo ímpar N e
retorne o fatorial duplo desse número. O fatorial duplo é definido como o produto de
todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o
fatorial duplo de 5 é: 5!! = 1 * 3 * 5 = 15*/

#include <stdio.h>


int fatorial_duplo(int n) {
    int resultado = 1;

    
    for (int i = 1; i <= n; i += 2) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int n;

    
    printf("Digite um número inteiro ímpar positivo: ");
    scanf("%d", &n);

    // Verifica se o número é positivo e ímpar
    if (n <= 0 || n % 2 == 0) {
        printf("O número deve ser ímpar e positivo.\n");
    } else {
        // Chama a função fatorial_duplo e imprime o resultado
        printf("Fatorial duplo de %d = %d\n", n, fatorial_duplo(n));
    }

    return 0;
}
