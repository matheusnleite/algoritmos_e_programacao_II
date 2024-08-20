/*Declare um inteiro a=10. Declare o ponteiro pa que aponta para a. Imprima os valores
*pa e pa. Declare o ponteiro *ppa do tipo inteiro. Faça ppa apontar para pa (dessa
forma => ppa = &pa). Imprima *ppa e ppa. Em todas as impressões usa o %d.*/

#include <stdio.h>

int main(){

        //declarando variavel
        int a = 10;

        //declarando ponteiro
        int *pa = &a;

        //imprimindo os valores *pa e pa
        printf("Valor de *pa: %d\n",*pa);
        printf("Valor de pa: %u\n",pa);

        //declarando ponteiro ppa
        int **ppa = &pa;

        //imprimindo valores *ppa e ppa
        printf("Valor de *ppa: %u\n",*ppa);
        printf("Valor de ppa: %u\n",ppa);



    return 0;
}
