#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[13] = {23, 10, 45, 0, -9, 7, 89, -4, 2, 102, 14, 0, 36};
    int procNum;
    _Bool interruptor;

    puts("[ BUSCADOR NUMERO ]");
    printf("Informe o numero: ");
    scanf("%d", &procNum);

    for(int i = 0; i < 13; i++)
    {
        if(vetor[i] == procNum)
        {
            interruptor = 1;
            break;
        }
    }

    if(interruptor == 1)
    {
        puts("\nEsse numero existe no vetor!");
        printf("Numero: %d", procNum);
    }
    else
    {
        puts("\nEsse numero nao existe no vetor!");
        printf("Numero: %d", procNum);
    }
}