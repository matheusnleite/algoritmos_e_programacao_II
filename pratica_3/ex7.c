/*Faça um programa para ler valores primos do usuário. Um menu deve ser usado para inserir os números (Também deve conter a opção “sair'). O usuário pode inserir quantos números quiser, mas eles precisam ser primos, caso não seja peça para ler o valor novamente. Você irá começar com um vetor de tamanho 1. Sempre que quiser inserir um novo número primo, o programa deve realocar o tamanho do vetor e inserir o valor. Os valores devem ser inseridos em ordem crescente, por isso nem sempre o programa irá inserir no final do vetor. Para isso, faça um Shift em parte do vetor que facilita a inserção do novo número. Quando o usuário selecionar sair, imprima os valores do vetor, que devem estar em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //biblioteca que tem a funcao sleep

int verifica_primo(int num){
    if(num < 2){
        return 0;
    }
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void inserir_ordenado(int *tamanho, int numero, int **vetor_primos){
    int contador=0;
    while(contador<*tamanho && *(*vetor_primos+contador)<numero){
        contador++;
    }

    //adicionando o novo numero no vetor

    *vetor_primos=realloc(*vetor_primos,(*tamanho+1)*sizeof(int));
    if(*vetor_primos==NULL){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    for(int j=*tamanho;j>contador;j--){
        *(*vetor_primos+j) = *(*vetor_primos+(j-1)) ;
    }

    //colocando o novo numero no vetor
    *(*vetor_primos+contador)=numero;
    (*tamanho)++;
    

}
int main(){
    
    int opcao=0,numero;
    int *vetor_primos = (int *)malloc(1*sizeof(int));
    int tamanho=0;//variavel para marcar o tamanho do vetor de primos

    while(1){
        system("cls");
        printf("OPCOES:\n1-Inserir numero primo\n2-Imprimir os numeros inseridos e sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d",&opcao);

        if(opcao==1){
            system("cls");
            printf("Digite um numero primo: ");
            scanf("%d",&numero);
            if(verifica_primo(numero)){
                inserir_ordenado(&tamanho,numero,&vetor_primos);
                printf("Numero %d inserido com sucesso!\n",numero);
                sleep(2);
            }else{
                printf("Numero %d nao e primo. Tente novamente.\n",numero);
                sleep(2);
                continue;
            }  
        }
        else if (opcao==2)
        {
            system("cls");
            printf("\nValores primos digitados:\n");
            for (int i = 0; i < tamanho; i++)
            {
                printf("%d\n",*(vetor_primos+i));
            }
            break;
        }
        else{
            printf("Opcao invalida. Tente novamente.\n");
            sleep(2);
            continue;
        }
        
    }

    free(vetor_primos);
    return 0;
}