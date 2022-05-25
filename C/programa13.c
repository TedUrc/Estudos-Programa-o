#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0;
    int numeroSequencia;

    printf("Informe um numero: ");
    scanf("%d", &numeroSequencia);

    while(numeroSequencia > 0)
    {
        if(numeroSequencia % 2 == 0)
        {
            contador += 1;
        }
        numeroSequencia -= 1;
    }

    printf("Contador: %d", contador);

    return 0;
}