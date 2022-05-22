#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reprDiaSemana[7] = {1, 2, 3, 4, 5, 6, 7};
    int numero;

    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &numero);

    switch(reprDiaSemana[numero])
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Dia da Semana");
            break;
    }

    return 0;
}