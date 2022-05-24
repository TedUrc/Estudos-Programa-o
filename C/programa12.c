#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef
struct vagao
{
    struct vagao *anteriorVagao;
    int numeroVagao;
    char *produtoVagao;
    struct vagao *proximoVagao;
} vagao;

vagao *primeiro;

vagao *inserir_formulario(vagao *referencia, int numeroVg, char *produtoNome)
{
    vagao *novoVagao = (vagao *)malloc(sizeof(vagao));
    novoVagao->produtoVagao = (char *)malloc(sizeof(char));

    if(referencia == NULL)
    {
        novoVagao->anteriorVagao = NULL;
        novoVagao->numeroVagao = numeroVg;
        strcpy(novoVagao->produtoVagao, produtoNome);
        novoVagao->proximoVagao = NULL;
        return novoVagao;
    }
    else
    {
        while(referencia->proximoVagao != NULL)
        {
            referencia = referencia->proximoVagao;
        }
        novoVagao->anteriorVagao = referencia;
        novoVagao->numeroVagao = numeroVg;
        strcpy(novoVagao->produtoVagao, produtoNome);
        novoVagao->proximoVagao = NULL;
        referencia->proximoVagao = novoVagao;
    }
}

vagao *excluir_vagao(vagao *referencia, int numeroVagao)
{
    vagao *novoVagao = referencia;
    if(referencia == NULL)
    {
        puts("ERRO: Nao existe vagao preenchido!");
    }
    else
    {
        if(referencia->numeroVagao == numeroVagao)
        {
            novoVagao = novoVagao->proximoVagao;
            novoVagao->anteriorVagao = referencia->anteriorVagao;
            free(referencia);
            return novoVagao;
        }
        else
        {
            while(referencia->proximoVagao != NULL || referencia->numeroVagao != numeroVagao)
            {
                if(novoVagao->proximoVagao->numeroVagao != numeroVagao)
                {
                    novoVagao = novoVagao->proximoVagao;
                }
                referencia = referencia->proximoVagao;
            }

            novoVagao->proximoVagao = referencia->proximoVagao;
            referencia->proximoVagao->anteriorVagao = novoVagao;
            free(referencia);
        }
    }
}

void informe_vagao(int numVagao)
{
    _Bool continua = 1, retorne = 1;

    while(continua == 1)
    {
        if(primeiro == NULL)
        {
            continua = 0;
        }
        else
        {
            if(numVagao == primeiro->numeroVagao && retorne == 1)
            {
                printf("Numero Vagao: %d\n", primeiro->numeroVagao);
                printf("Nome do Produto: %s\n", primeiro->produtoVagao);
            }

            if(retorne == 1)
            {
                if(primeiro->proximoVagao != NULL)
                {
                    primeiro = primeiro->proximoVagao;
                }
                else
                {
                    retorne = 0;
                }
            }
            else
            {
                if(primeiro->anteriorVagao == NULL)
                {
                        continua = 0;
                }
                else
                {
                    primeiro = primeiro->anteriorVagao;
                }
            }
        }
    }
}

int main()
{
    primeiro = inserir_formulario(primeiro, 1, "Ferro");
    inserir_formulario(primeiro, 2, "Bauxita");
    inserir_formulario(primeiro, 3, "Malaquita");

    primeiro = excluir_vagao(primeiro, 1);
    informe_vagao(1);
    return 0;
}
