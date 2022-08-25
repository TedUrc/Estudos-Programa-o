#include <stdio.h>

#define LIN 3
#define COL 3

int main()
{
    int matriz[LIN][COL];
    int soma = 0;

    for(int i = 0; i < COL; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            printf("Matriz[%d][%d]: ", j, i);
            scanf("%d", &matriz[j][i]);
        }

    }

    for(int i = 0; i < COL; i++)
    {
        for(int j = 0; j < LIN; j++)
        {
            if(i == j)
            {
                soma += matriz[j][i];
            }
        }
    }

    printf("\nSoma da Diagonal Principal: %d", soma);
    return 0;
}