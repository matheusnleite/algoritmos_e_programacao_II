/*Crie um Struct chamado aluno. Faça uma matriz 3x3 do tipo aluno. Adicione valores à matriz. Usando um ponteiro percorra a matriz e imprima seu conteúdo.*/

#include <stdio.h>

int main(){
   //criando o struct aluno
   typedef struct 
   {
    int num;
   }aluno;
   

   //criando matriz do tipo aluno
   aluno matriz[3][3];

   //lendo a matriz
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
    {
        printf("Valor da posicao %d %d: ",i,j);
        scanf("%d",&matriz[i][j].num);
    } 
   }

    //criando ponteiro para percorrer a matriz
    int *p_matriz;

    //imprimindo matriz
    printf("\nIMPRIMINDO A MATRIZ\n");
    for (int i = 0; i < 3; i++)
    {
        p_matriz = &matriz[i]->num; //atribuindo a posicao de memoria do primeiro endereco da linha i ao ponteiro
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",*(p_matriz+j));
        }
      printf("\n")      ;
    }
    
   


    return 0;
}
