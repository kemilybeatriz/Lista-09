/*
10. Construa um programa que troque o conte�do de duas vari�veis inteiras
�varA� e �varB�, somente se o endere�o de mem�ria de �varA� � maior que o de �varB�,
caso contr�rio, subtraia uma unidade das vari�veis. Ao final, exiba o endere�o e o valor das vari�veis.
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
