#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10], maior, menor;
    int vetorTamanho = sizeof(vetor) / sizeof(vetor[0]);

    for(int inputVetor = 0; inputVetor < vetorTamanho; inputVetor++)
    {
        printf("Informe o [%d] numero: ", inputVetor + 1);
        scanf("%d", &vetor[inputVetor]);
    }

    for(int descubra = 0; descubra < vetorTamanho; descubra++)
    {
        if(descubra == 0)
        {
            maior = menor = vetor[descubra];
        }
        else
        {
            if(maior < vetor[descubra])
            {
                maior = vetor[descubra];
            }
            else if(menor > vetor[descubra])
            {
                menor = vetor[descubra];
            }
        }
    }

    printf("\nMaior valor do Vetor: %d\n", maior);
    printf("Menor valor do Vetor: %d\n", menor);

    return 0;
}