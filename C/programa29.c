#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int main()
{
    int vetor[LENGTH];
    int maior, menor;

    puts("[ INSERCAO ]");
    for(int i = 0; i < LENGTH; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    puts("");

    for(int i = 0; i < LENGTH; i++)
    {
        if(i == 0)
        {
            maior = menor = vetor[i];
        }
        else
        {
            if(maior < vetor[i])
            {
                maior = vetor[i];
            }
            if(menor > vetor[i])
            {
                menor = vetor[i];
            }
        }
    }

    puts("[ RESULTADO ]");
    printf("Maior Numero: %d\n", maior);
    printf("Menor numero: %d", menor);
}