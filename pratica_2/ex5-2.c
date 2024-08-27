/*Faça um código que ordene um array de valores inteiros (que foram inseridos pelo
usuário) de tamanho 10. No código você deve usar um ponteiro par manipular o array.
Sempre que precisar trocar valores de lugar, deve-se usar um ponteiro também. */

#include <stdio.h>

int main(){
    //declarando array
    int array[10];
    int cont=0; //contador para auxiliar na troca de valores


    //declarando ponteiro para array e auxiliar
    int *p_array = array;

    //lendo array
    for(int i=0;i<10;i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",(p_array + i));
    }


    //ordenando os valores
    for(int i=0;i<10;i++){
    cont = i;
        while(cont<10){
            if(*(p_array+i)>*(p_array+cont)){ //compara um valor na posicao i com todos os valores do array usando o cont como indice
            /* a = a+b
               b = a-b
               a=a-b
               */
                *(p_array+i) = *(p_array + i) +  *(p_array + cont);
                *(p_array + cont) = *(p_array + i)  - *(p_array + cont);
                *(p_array + i) = *(p_array + i)  - *(p_array + cont);

            }
            cont++;
        }
    }

    //imprimindo valores
    printf("Valores ordenados\n");
    for(int i=0;i<10;i++){
        printf("%d\n",*(p_array+i));

    }

    return 0;
}
