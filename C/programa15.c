#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int auxiliar;
    int tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]);

    for(int inputVetor = 0; inputVetor < 10; inputVetor++)
    {
        printf("Digite o [%d] numero: ", inputVetor+1);
        scanf("%d", &vetor[inputVetor]);
    }

    for(int comparacao = 0; comparacao < tamanhoVetor; comparacao++)
    {
        for(int sort = 0; sort < tamanhoVetor - comparacao - 1; sort++)
        {
            if(vetor[sort] > vetor[sort + 1])
            {
                auxiliar = vetor[sort];
                vetor[sort] = vetor[sort + 1];
                vetor[sort + 1] = auxiliar;
            }
        }
    }

    for(int leitor = 0; leitor < tamanhoVetor; leitor++)
    {
        if(leitor == 0)
        {
            printf("\n[%d, ", vetor[leitor]);
        }
        else
        {
            if(leitor == tamanhoVetor - 1)
            {
                printf("%d]", vetor[leitor]);
            }
            else
            {
                printf("%d, ", vetor[leitor]);
            }
        }
    }

    return 0;
}