#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main()
{
    int vetor[LEN];
    // int metade = (int) (LEN / 2);
    int aux;

    for(int i = 0; i < LEN; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    puts("");

    for(int i = 0; i < LEN - 1; i++)
    {
        // Primeira forma de ser feito!
        /*if(metade > i)
        {
            aux = vetor[i];
            vetor[i] = vetor[LEN - i - 1];
            vetor[LEN - i - 1] = aux;
        }*/

        // Segunda forma de ser feito!
        for(int j = 0; j < LEN - i - 1; j++)
        {
            if(vetor[j] < vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    puts("[ RESULTADO ]");
    for(int i = 0; i < LEN; i++)
    {
        printf("Numero: %d\n", vetor[i]);
    }
}