#include <stdio.h>
#include <stdlib.h>

#define COL 3
#define LIN 3

void somaLC(int matriz[LIN][COL])
{
    int soma = 0;

    for(int i = 0; i < COL; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            soma += matriz[j][i];
        }

        printf("Linha %d: %d\n", i+1, soma);
        soma = 0;
    }

    puts("");

    for(int i = 0; i < COL; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            soma += matriz[i][j];
        }

        printf("Coluna %d: %d\n", i+1, soma);
        soma = 0;
    }
}

int main()
{
    int matriz[LIN][COL];

    for(int i = 0; i < COL; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            printf("Matriz [%d][%d]: ", j, i);
            scanf("%d", &matriz[j][i]);
        }
    }

    somaLC(matriz);
}