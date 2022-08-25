#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef
struct pessoa
{
    int id;
    int dia;
    int mes;
    int ano;
    struct pessoa *proxima_pessoa;
} pessoa;

pessoa *cadastro;
int static contador = 0;

int *cadastroPessoa(pessoa *cadastrando)
{   
    pessoa *novoCadastro = malloc(sizeof(pessoa));
    if(cadastrando == NULL)
    {
        contador++;
        novoCadastro->id = contador;
        printf("Informe o dia do seu nascimento: ");
        scanf("%d", &novoCadastro->dia);
        printf("Informe o mes do seu nascimento: ");
        scanf("%d", &novoCadastro->mes);
        printf("Informe o ano do seu nascimento: ");
        scanf("%d", &novoCadastro->ano);
        novoCadastro->proxima_pessoa = NULL;
        cadastrando = novoCadastro;
        return cadastrando;
    }
    else
    {
        contador++;
        while(cadastrando->proxima_pessoa != NULL)
        { 
            cadastrando = cadastrando->proxima_pessoa;
        }
        novoCadastro->id = contador;
        printf("Informe o dia do seu nascimento: ");
        scanf("%d", &novoCadastro->dia);
        printf("Informe o mes do seu nascimento: ");
        scanf("%d", &novoCadastro->mes);
        printf("Informe o ano do seu nascimento: ");
        scanf("%d", &novoCadastro->ano);
        novoCadastro->proxima_pessoa = NULL;
        cadastro->proxima_pessoa = novoCadastro;
    }
}

void informe_idade(pessoa *pessoa, int id)
{
    _Bool active = 0;
    int ano;

    if(contador > 1)
    {
        while(pessoa != NULL)
        {
            if(pessoa->id == id)
            {
                ano = pessoa->ano;
                active = 1;
            }
            pessoa = pessoa->proxima_pessoa;
        }
    }
    else if(contador == 1)
    {
        if(pessoa->id == id)
        {
            active = 1;
        }
    }
    
    if(active == 1)
    {
        struct tm *tempo;
        time_t segundos;
        time(&segundos);
        tempo = localtime(&segundos);
        tempo->tm_year += 1900;
    

        unsigned long int seg = 0;
        unsigned int dia = 0;
        int auxDia = 0;
        while(ano != tempo->tm_year)
        {
            seg++;
            if(seg == 86400)
            {
                dia += 1;
                auxDia += 1;
                seg = 0; 
            }
            if(auxDia == 365)
            {
                auxDia = 0;
                ano += 1;
            }
        }

        printf("\n[ PESSOA %d ]\n", id);
        printf("Dias de Idade: %LD", dia);
    }
    else
    {
        printf("\nNao achamos este ID!\n");
    }
}

int main()
{
    cadastro = cadastroPessoa(cadastro);
    informe_idade(cadastro, 1);
}