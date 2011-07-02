/*
9. Como posso exibir os valores da matriz bidimensional “mat” declarada usando apenas laços de repetição?
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
 void main()
 {
     int m[TAM][TAM];
     int i, j;
     int *p, cont=0;
     // declara valores por matrizes
     /*p = &m[0];
     for(j=0; j<TAM; j++)
     {
         for(i=0; i<TAM; i++)
         {
             m[i][j] = i+1;
             printf("%d ", m[i][j]);
         }
         puts("\n");
     }*/
     //declara valores por ponteiros
     p = m;
     for(j=0; j<TAM; j++)
     {
         for(i=0; i<TAM; i++)
         {
             *(p+cont)=1;//i+1;
             cont++;
         }
     }
     //exibe valores
     for(j=0; j<TAM; j++)
     {
         for(i=0; i<TAM; i++)
         {
             printf("%d ", (*(p+cont)+1) );
         }
         puts("\n");
     }
 }
