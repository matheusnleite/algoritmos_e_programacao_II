/*Declare um ponteiro genérico com 40 bytes de espaço. Adicione 10 inteiros
nestes 40 bytes e imprima esses valores. Não declare mais nenhuma variável
além do ponteiro genérico.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    void *ponteiro;

    ponteiro = (void *)malloc(40*sizeof(void));

    for(int i=0;i<10;i++){
        *((int *)ponteiro +i) = i+1;
    }

    printf("Valores do ponteiro:\n");
    for(int i=0;i<10;i++){
        printf("%d\n",*((int *)ponteiro + i));
    }



    free(ponteiro);
    return 0;
}
