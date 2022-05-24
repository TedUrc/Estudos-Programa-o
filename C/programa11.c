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

// insere valor dentro das estruturas. A primeira estrutura o valor é retornado, a partir do segundo os valores preenchidos são referenciados.
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

// exclui a estrutura que você escolheu. A estrutura excluída é escolhida pelo o número do vagão
vagao excluir_vagao(vagao *referencia, int numeroVagao)
{
    vagao *vagaoAnterior = referencia;
    puts("Procurando vagao");
    if(referencia == NULL)
    {
        puts("ERRO: Nao existe vagao preenchido!");
    }
    else
    {    
        while(referencia->proximoVagao != NULL || numeroVagao != referencia->numeroVagao)
        {
            if(vagaoAnterior->proximoVagao->proximoVagao != NULL)
            {
                vagaoAnterior = vagaoAnterior->proximoVagao;
            }
            referencia = referencia->proximoVagao;
        }

        vagaoAnterior->proximoVagao = referencia->proximoVagao;
        free(referencia);
    }
}

// imprime na tela os valores dentro das estruturas
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

    excluir_vagao(primeiro, 3);

    informa_vagao(primeiro);

    return 0;
}
