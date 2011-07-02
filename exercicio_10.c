/*
10. Construa um programa que troque o conteúdo de duas variáveis inteiras
“varA” e “varB”, somente se o endereço de memória de “varA” é maior que o de “varB”,
caso contrário, subtraia uma unidade das variáveis. Ao final, exiba o endereço e o valor das variáveis.
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int varA=5, varB=10;//, *varC;
    int *a, *b, *c;
    a=&varA;
    b=&varB;

    printf("\tVALORES INICIAIS\n");
    printf("Endereco de varA: %d\n", &a);
    printf("Conteudo de varA: %d\n", *a);
    printf("Endereco de varB: %d\n", &b);
    printf("Conteudo de varB: %d\n", *b);

    if(a>b)
    {
        c=a;
        a=b;
        b=c;
        printf("\tTROCA\n");
        printf("Endereco de varA: %d\n", &a);
        printf("Conteudo de varA: %d\n", *a);
        printf("Endereco de varB: %d\n", &b);
        printf("Conteudo de varB: %d\n", *b);
    }
    else
    {
        *a = (*a)-1;
        *b = (*b)-1;
        printf("\tSUBTRAI\n");
        printf("Endereco de varA: %d\n", &a);
        printf("Conteudo de varA: %d\n", *a);
        printf("Endereco de varB: %d\n", &b);
        printf("Conteudo de varB: %d\n", *b);
    }
}
