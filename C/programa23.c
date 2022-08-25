#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_valor;

    printf("Informe um numero: ");
    scanf("%d", &num_valor);
    if(num_valor > 0)
    {
        puts("[ POSITIVO ]");
        printf("Numero: %d", num_valor);
    }
    else if(num_valor < 0)
    {
        puts("[ NEGATIVO ]");
        printf("Numero: %d", num_valor);
    }
    else
    {
        puts("[ NULO ]");
        printf("Numero: %d", num_valor);
    }
    puts("");
}