#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN_CHAR 65

void ano_nascimento()
{
    struct tm *tempo;
    time_t seconds;
    time(&seconds);
    tempo = localtime(&seconds);

    int idade;
    char nome[LEN_CHAR];
    int nasc;

    printf("[ FORMULARIO ]\n");
    printf("Informe o seu nome: ");
    fgets(nome, LEN_CHAR, stdin);
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    nasc = tempo->tm_year + 1900 - idade;

    printf("Data de seu nascimento: %d", nasc);
}

int main()
{
    ano_nascimento();

    return 0;
}