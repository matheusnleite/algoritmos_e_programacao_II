/*A) Elabore um programa que manipule os dados para uma sala de 40 alunos. 
O programa deve receber como entrada (via leitura):
• os nomes dos alunos
• as três notas parciais
• a frequência de cada aluno
O programa deve calcular e imprimir para cada aluno:
• O nome
• A média final
• A frequência
• Se está aprovado ou reprovado (Regras UFU)
O programa deve calcular e imprimir Imprimir a maior nota parcial e a menor nota
parcial dos alunos com média final acima da média da turma*/

#include <stdio.h>



#define qtdalunos 40

float calculaMediaEMaiorEMenorNota(float *p_media, float n1, float n2, float n3, float *p_maiorNota, float *p_menorNota);

void situacao(float media, float frequencia);

typedef struct {
    char nome[50];
    float n1,n2,n3; //notas
    float media, maiorNota, menorNota;
    float frequencia;

}Alunos;

int main(){
    float mediaTurma=0;

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
        calculaMediaEMaiorEMenorNota(&aluno[i].media,aluno[i].n1, aluno[i].n2, aluno[i].n3, &aluno[i].maiorNota, &aluno[i].menorNota);
        mediaTurma += aluno[i].media;
        printf("\n");


    }
     mediaTurma /= qtdalunos;



    for(int i=0;i<qtdalunos;i++){
        printf("\n##################\n");
        printf("Nome: %s\n",aluno[i].nome);
        printf("N1: %.2f, N2: %.2f, N3: %.2f\n",aluno[i].n1,aluno[i].n2,aluno[i].n3);
        printf("Media: %.2f\n",aluno[i].media);
        printf("Frequencia: %.1f%%\n",aluno[i].frequencia);
        situacao(aluno[i].media, aluno[i].frequencia);
        printf("##################\n");
    }

    printf("\nMedia da turma: %.2f\n",mediaTurma);
    //imprimindo os alunos acima da media da turma
    printf("Alunos acima da media da turma: \n");
     for(int i=0;i<qtdalunos;i++){
        if(aluno[i].media >= mediaTurma){
            printf("\n##################\n");
            printf("Nome: %s\n",aluno[i].nome);
            printf("Media: %.2f\n",aluno[i].media);
            printf("Maior Nota: %.2f\n",aluno[i].maiorNota);
            printf("Menor Nota: %.2f\n",aluno[i].menorNota);
            printf("##################\n");
        }
        
    }
}

float calculaMediaEMaiorEMenorNota(float *p_media, float n1, float n2, float n3, float *p_maiorNota, float *p_menorNota){
    *p_media = (n1+n2+n3)/3;
    *p_maiorNota = *p_menorNota = n1;

    if(n1 > *p_maiorNota) *p_maiorNota = n1;
    if(n2 > *p_maiorNota) *p_maiorNota = n2;
    if(n3 > *p_maiorNota) *p_maiorNota = n3;
    
    if(n1 < *p_menorNota) *p_menorNota = n1;
    if(n2 < *p_menorNota) *p_menorNota = n2;
    if(n3 < *p_menorNota) *p_menorNota = n3;
}

void situacao(float media, float frequencia){
    if(media >= 6 && frequencia >= 75)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}


