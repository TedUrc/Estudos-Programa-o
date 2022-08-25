#include <stdio.h>
#include <stdlib.h>

void trocaNumero(int *primNumero, int *segNumero)
{
    int aux = *primNumero;
    *primNumero = *segNumero;
    *segNumero = aux;
}

int main()
{
    int primeiroNumero;
    int segundoNumero;

    printf("Informe o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Informe o segundo numero: ");
    scanf("%d", &segundoNumero);

    trocaNumero(&primeiroNumero, &segundoNumero);
    puts("\n[ RESULTADO ]");
    printf("Primeiro Numero: %d\n", primeiroNumero);
    printf("Segundo Numero: %d", segundoNumero);
}