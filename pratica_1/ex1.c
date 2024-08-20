/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para
inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação.
*/

#include <stdio.h>

int main(){

    //declarando as variaveis
    int num = 10;
    float flt = 3.14;
    char letra = 'M';

    //declarando os ponteiros e associando variáveis
    int *p_num = &num;
    float *p_flt = &flt;
    char *p_letra = &letra;

    //imprimindo variavies antes das modificacoes
    printf("-----------ANTES-----------\n");
    printf("NUM = %d\n",num);
    printf("FLT = %.2f\n",flt);
    printf("LETRA = %c\n",letra);

    //editando os valores via ponteiro
    *p_num = 18;
    *p_flt = 5.47;
    *p_letra = 'D';

    //imprimindo variavies depois das modificacoes
    printf("-----------DEPOIS-----------\n");
    printf("NUM = %d\n",num);
    printf("FLT = %.2f\n",flt);
    printf("LETRA = %c\n",letra);


    return 0;
}
