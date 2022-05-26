#include <stdio.h>
#include <stdlib.h>

typedef
struct pessoa
{
    char *nomeVetor;
    int *idadeVetor;
    struct pessoa *proximaPessoa;
    struct pessoa *anteriorPessoa;
} pessoa;

pessoa *primeiraPessoa;

pessoa *cadastra_pessoa(pessoa *referencia, char *nomePessoa, int idadePessoa)
{
    pessoa *novaPessoa = (pessoa *)malloc(sizeof(pessoa));
    novaPessoa->nomeVetor = (char *)malloc(sizeof(pessoa));

    if(referencia == NULL)
    {
        strcpy(novaPessoa->nomeVetor, nomePessoa);
        novaPessoa->idadeVetor = idadePessoa;
        novaPessoa->proximaPessoa = NULL;
        novaPessoa->anteriorPessoa = NULL;
        return novaPessoa;
    }
    else
    {
        while(referencia->proximaPessoa != NULL)
        {
            referencia = referencia->proximaPessoa;
        }

        strcpy(novaPessoa->nomeVetor, nomePessoa);
        novaPessoa->idadeVetor = idadePessoa;
        novaPessoa->proximaPessoa = NULL;
        novaPessoa->anteriorPessoa = referencia;
        referencia->proximaPessoa = novaPessoa;
    }
}

void sort_pessoa(pessoa *referencia)
{
    pessoa *trocaPessoa = (pessoa *)malloc(sizeof(pessoa));
    trocaPessoa->nomeVetor = (char *)malloc(sizeof(char));
    int auxiliar;
    int contagem = 0;
    trocaPessoa = referencia;

    while(referencia->proximaPessoa != NULL)
    {
        if(contagem > 0)
        {
            while(trocaPessoa->anteriorPessoa != NULL)
            {
                trocaPessoa = trocaPessoa->anteriorPessoa;
            }
        }

        while(trocaPessoa->proximaPessoa != NULL)
        {
            if(referencia->idadeVetor > trocaPessoa->proximaPessoa->idadeVetor)
            {
                auxiliar = referencia->idadeVetor;
                referencia->idadeVetor = trocaPessoa->proximaPessoa->idadeVetor;
                trocaPessoa->proximaPessoa->idadeVetor = auxiliar;
            }
            trocaPessoa = trocaPessoa->proximaPessoa;
        }
        referencia = referencia->proximaPessoa;
        contagem++;
    }
}

void informa_pessoa(pessoa *referencia)
{
    while(referencia != NULL)
    {
        printf("Nome: %s - Idade: %d\n", referencia->nomeVetor, referencia->idadeVetor);
        referencia = referencia->proximaPessoa;
    }
}

int main()
{
    int idade = 0, contagem = 1;
    char *nome;

    while(idade >= 0)
    {
        printf("[ USUARIO %d ]\n", contagem);
        printf("Informe o nome do usuario: ");
        scanf("%s", nome);
        printf("Informe a idade de %s: ", nome);
        scanf("%d", &idade);
        puts("");

        if(idade >= 0)
        {
            if(contagem == 1)
            {
                primeiraPessoa = cadastra_pessoa(primeiraPessoa, nome, idade);
            }
            else
            {
                cadastra_pessoa(primeiraPessoa, nome, idade);
            }
        }
        contagem++;
    }

    sort_pessoa(primeiraPessoa);

    informa_pessoa(primeiraPessoa);

    return 0;
}