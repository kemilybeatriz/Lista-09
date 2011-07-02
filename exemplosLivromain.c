#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    scanf("%d", &num);
    syntax_error(num);
}
void syntax_error(int num)
{
    char *err[] =
    {
        "Arquivo nao pode ser aberto.",
        "Erro de leitura.",
        "Erro de escrita.",
        "Falha da midia."
    };
    printf("%s", err[num]);
}
