#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 45

typedef
struct pessoa
{
    int id;
    char nome[LENGTH];
    int idade;
    float altura;
    struct pessoa *anterior_pessoa;
    struct pessoa *proxima_pessoa;
} pessoa;

pessoa *cadastro;

int *cadastro_pessoa(pessoa *cadastrando, char nome[LENGTH], int idade, float altura)
{
    static unsigned int id = 1;
    pessoa *novoCadastro = malloc(sizeof(pessoa));

    if(cadastrando == NULL)
    {
        novoCadastro->id = id;
        strcpy(novoCadastro->nome, nome); 
        novoCadastro->idade = idade;
        novoCadastro->altura = altura;
        novoCadastro->anterior_pessoa = NULL;
        novoCadastro->proxima_pessoa = NULL;
        cadastrando = novoCadastro;
        id++;
        return cadastrando;
    }
    else
    {
        while(cadastrando->proxima_pessoa != NULL)
        {
            cadastrando = cadastrando->proxima_pessoa;
        }

        novoCadastro->id = id;
        strcpy(novoCadastro->nome, nome);
        novoCadastro->idade = idade;
        novoCadastro->altura = altura;
        novoCadastro->proxima_pessoa = NULL;
        novoCadastro->anterior_pessoa = cadastrando;
        cadastrando->proxima_pessoa = novoCadastro;
        id++;
    }
}

void informe_criterio(int id)
{
    pessoa *informa = cadastro;
    _Bool existe = 0;

    while(informa != NULL)
    {
        if(informa->id == id)
        {
            existe = 1;
            printf("[ ID %d ]\n", informa->id);
            printf("Nome: %s\n", informa->nome);
            printf("Idade: %d\n", informa->idade);
            printf("Altura: %0.2f\n", informa->altura);
            if(informa->idade >= 18 && informa->altura >= 1.70)
            {
                puts("Pode participar da competicao!\n");
            }
            else
            {
                puts("Nao pode participar da competicao!\n");
            }
        }
        informa = informa->proxima_pessoa;
    }

    if(existe == 0)
    {
        puts("Essa pessoa nao existe no nosso banco de dados!\n");
    }
}


int main()
{
    cadastro = cadastro_pessoa(cadastro, "Joana", 18, 1.58);
    cadastro_pessoa(cadastro, "Marcelo", 18, 1.81);

    informe_criterio(1);
    informe_criterio(2);
    informe_criterio(3);
    return 0;
}