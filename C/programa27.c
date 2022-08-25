#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numInt = 1;
    float numFloat = 1.0;
    char caractere = 'a';

    puts("[ ANTES ]");
    printf("Numero Inteiro: %d\n", numInt);
    printf("Numero Real: %0.1f\n", numFloat);
    printf("Caractere: %c\n", caractere);

    int *intPont = &numInt;
    float *floatPont = &numFloat;
    char *charPont = &caractere;

    *intPont = 2;
    *floatPont = 2.0;
    *charPont = 'b';

    puts("\n[ DEPOIS ]");
    printf("Numero Inteiro: %d\n", *intPont);
    printf("Numero Real: %0.1f\n", *floatPont);
    printf("Caractere: %c\n", *charPont);
}