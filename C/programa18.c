#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saldoRetirar;
    int cedCem = 0;
    int cedCinq = 0;
    int cedVinte = 0;
    int cedDez = 0;
    int cedCinco = 0;
    int cedDois = 0;
    int cedUm = 0;

    printf("Informe o saldo que será retirado: ");
    scanf("%d", &saldoRetirar);

    while(saldoRetirar > 0)
    {
        if(saldoRetirar >= 100)
        {
            saldoRetirar -= 100;
            cedCem += 1;
        }
        else if(saldoRetirar >= 50)
        {
            saldoRetirar -= 50;
            cedCinq += 1;
        }
        else if(saldoRetirar >= 20)
        {
            saldoRetirar -= 20;
            cedVinte += 1;
        }
        else if(saldoRetirar >= 10)
        {
            saldoRetirar -= 10;
            cedDez += 1;
        }
        else if(saldoRetirar >= 5)
        {
            saldoRetirar -= 5;
            cedCinco += 1;
        }
        else if(saldoRetirar >= 2)
        {
            saldoRetirar -= 2;
            cedDois += 1;
        }
        else
        {
            saldoRetirar -= 1;
            cedUm += 1;
        }
    }

    printf("\nCedula de 100: %d\n", cedCem);
    printf("Cedula de 50: %d\n", cedCinq);
    printf("Cedula de 20: %d\n", cedDois);
    printf("Cedula de 10: %d\n", cedDez);
    printf("Cedula de 5: %d\n", cedCinco);
    printf("Cedula de 2: %d\n", cedDois);
    printf("Cedula de 1: %d\n", cedUm);
}