/*Considere o código abaixo:
typedef struct No {
 int numero;
 struct No *p;
} no;
int main() {
 no * p1, * p2, * p3;
 p1 = (no *) malloc(sizeof(no));
 scanf("%d", &(p1->numero));
 p2 = (no *) malloc(sizeof(no));
 scanf("%d", &(p2->numero));
 p3 = (no *) malloc(sizeof(no));
 scanf("%d", &(p3->numero));
 p1->p = p2;
 p2->p = p3;
 p3->p = NULL;
 no * aux = p1;
 while(aux!= NULL) {
 printf("%d ", aux->numero);
 aux = aux->p;
 }
 return 0;
}
Refaça esse código substituindo os ponteiros p1, p2 e p3 por um vetor alocado
dinamicamente de tamanho N. N é um valor determinado pelo usuário.
Mantenha o objetivo do código em mente e reestruture ele para manter a sua
dinâmica.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int numero;
    struct No *p;
} no;

int main() {
    no *vetor;
    int N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&N);
    printf("\n");

    vetor = (no *)malloc(N*sizeof(no));

    for (int i = 0; i < N; i++)
    {
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&(vetor[i].numero));
        
    }

    for (int i = 0; i < N; i++)
    {
        if(i==N-1)
        {
            vetor[i].p = NULL;
        }else{
            vetor[i].p=(vetor+i+1);
        }
    }

    no *aux = vetor;
    while (aux != NULL) {
        printf("%d ", aux->numero);
        aux = aux->p;
    }
    printf("\n");

    free(vetor);

    return 0;
}
