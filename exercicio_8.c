/*
8. Escreva um programa que declare uma matriz unidimensional de 10 elementos inteiros
e inicialize-a com valores numéricos de 1 a 10 usando apenas um ponteiro e um laço de repetição.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void main()
{
    int mat[TAM], *m, i;
    m=mat;
    for(i=0; i<TAM; i++)
    {
        *(m+i) = i+1;
        printf("%d ", *(m+i) );
    }
    for(i=0; i<TAM; i++)
    {
        printf("\t%d ", mat[i]);
    }
}

/*void main()
{
    int m[TAM], i;
    for(i=0; i<TAM; i++)
    {
        m[i]=(i+1);
        printf("%d ", m[i]);
    }
}*/
