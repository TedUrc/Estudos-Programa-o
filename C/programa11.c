#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef
struct vagao
{
    int numeroVagao;
    char *produtoVagao;
    struct vagao *proximoVagao;
} vagao;

vagao *primeiro;

vagao *inserir_formulario(vagao *referencia, int numeroV, char *nomeProduto)
{
    vagao *novoVagao = (vagao *)malloc(sizeof(vagao));
    novoVagao->produtoVagao = (char *)malloc(sizeof(char));
    
    if(referencia == NULL)
    {
        novoVagao->numeroVagao = numeroV;
        strcpy(novoVagao->produtoVagao, nomeProduto);
        novoVagao->proximoVagao = NULL;
        referencia = novoVagao;
        return referencia;
    }
    else
    {
        while(referencia->proximoVagao != NULL)
        {
            referencia = referencia->proximoVagao;
        }

        novoVagao->numeroVagao = numeroV;
        strcpy(novoVagao->produtoVagao, nomeProduto);
        novoVagao->proximoVagao = NULL;
        referencia->proximoVagao = novoVagao;
    }
}

void informa_vagao(vagao *referencia)
{
    while(referencia != NULL)
    {
        printf("Numero Vagao: %d\n", referencia->numeroVagao);
        printf("Produto do Vagao: %s\n\n", referencia->produtoVagao);
        referencia = referencia->proximoVagao;
    }
}

int main()
{
    primeiro = inserir_formulario(primeiro, 1, "Ferro");
    inserir_formulario(primeiro, 2, "Bauxita");
    inserir_formulario(primeiro, 3, "Algodao");

    informa_vagao(primeiro);

    return 0;
}
