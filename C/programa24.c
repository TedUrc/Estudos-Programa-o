#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade;

    puts("[ DOACAO DE SANGUE ]");
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade > 17 && idade < 61)
    {
        puts("Voce pode doar sangue!");
    }
    else
    {
        puts("Voce nao pode doar sangue!");
    }
}