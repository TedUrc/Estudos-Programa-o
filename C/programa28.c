#include <stdio.h>
#include <stdlib.h>

int somaDobro(int *primNum, int *segNum)
{
    *primNum *= 2;
    *segNum *= 2;
    return (*primNum + *segNum);
}

int main()
{
    int A;
    int B;

    printf("Informe o primeiro numero: ");
    scanf("%d", &A);
    printf("Informe o segundo numero: ");
    scanf("%d", &B);

    printf("A soma do dobro: %d", somaDobro(&A, &B));
}