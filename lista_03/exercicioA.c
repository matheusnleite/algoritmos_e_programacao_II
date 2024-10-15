#include <stdio.h>
#include <stdlib.h>


#define qtdalunos 1

float calculaMedia(float n1, float n2, float n3);

void situacao(float media, float frequencia);

typedef struct {
    char nome[50];
    float n1,n2,n3; //notas
    float media;
    float frequencia;

}Alunos;

int main(){
    float maiorNota=0, menorNota=0, mediaTurma=0;
    Alunos aluno[qtdalunos];

    for(int i=0;i<qtdalunos;i++){
        printf("Digite o nome do aluno %d: ",i+1);
        scanf(" %[^\n]s",aluno[i].nome);
        printf("Digite a nota 1: ");
        scanf("%f",&aluno[i].n1);
        printf("Digite a nota 2: ");
        scanf("%f",&aluno[i].n2);
        printf("Digite a nota 3: ");
        scanf("%f",&aluno[i].n3);
        printf("Digite a frequencia: ");
        scanf("%f",&aluno[i].frequencia);
        aluno[i].media = calculaMedia(aluno[i].n1, aluno[i].n2, aluno[i].n3);


    }

    for(int i=0;i<qtdalunos;i++){
        printf("Nome %s\n",aluno[i].nome);
        printf("N1: %.2f, N2: %.2f, N3: %.2f\n",aluno[i].n1,aluno[i].n2,aluno[i].n3);
        printf("Media: %.2f\n",aluno[i].media);
        printf("Frequencia: %.1f%%\n",aluno[i].frequencia);
        situacao(aluno[i].media, aluno[i].frequencia);
    }
}

float calculaMedia(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

void situacao(float media, float frequencia){
    if(media >= 6 && frequencia >= 75)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}

