#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroHoras, primeiroMinutos;
    int segundoHoras, segundoMinutos;

    puts("[ PRIMEIRO HORARIO ]");
    printf("Informe a hora: ");
    scanf("%d", &primeiroHoras);
    printf("Informe o minuto: ");
    scanf("%d", &primeiroMinutos);
    puts("");

    puts("[ SEGUNDO HORARIO ]");
    printf("Informe a hora: ");
    scanf("%d", &segundoHoras);
    printf("Informe o minuto: ");
    scanf("%d", &segundoMinutos);

    primeiroHoras += segundoHoras;
    primeiroMinutos += segundoMinutos; 
    while(primeiroMinutos >= 60)
    {
        if(primeiroMinutos >= 60)
        {
            primeiroHoras += 1;
            primeiroMinutos -= 60;
        }
    }

    if(primeiroHoras >= 10)
    {
        if(primeiroMinutos < 10)
        {
            printf("\nHorario: %d:0%d", primeiroHoras, primeiroMinutos);
        }
        else
        {
            printf("\nHorario: %d:%d", primeiroHoras, primeiroMinutos);
        }
    }
    else if(primeiroHoras < 10)
    {
        if(primeiroMinutos < 10)
        {
            printf("\nHorario: 0%d:0%d", primeiroHoras, primeiroMinutos);
        }
        else
        {
            printf("\nHorario: 0%d:%d", primeiroHoras, primeiroMinutos);
        }
    }

    return 0;
}