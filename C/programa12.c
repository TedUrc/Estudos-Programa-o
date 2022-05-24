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

int main()
{
    vagao v1, v2, v3;
    _Bool continua = 1, imprime = 1;
    int numVagao;

    v1.anteriorVagao = NULL;
    v1.numeroVagao = 1;
    strcpy(v1.produtoVagao, "Ferro");
    v1.proximoVagao = &v2;

    v2.anteriorVagao = &v1;
    v2.numeroVagao = 2;
    strcpy(v2.produtoVagao, "Bauxita");
    v2.proximoVagao = &v3;

    v3.anteriorVagao = &v2;
    v3.numeroVagao = 3;
    strcpy(v3.produtoVagao, "Algodao");
    v3.proximoVagao = NULL;

    primeiro = &v1;

    numVagao = 2;
    while(continua == 1)
    {
        if(primeiro == NULL)
        {
            continua = 0;
        }
        else
        {
            if(numVagao == primeiro->numeroVagao && imprime == 1)
            {
                printf("Numero do Vagao: %d\n", primeiro->numeroVagao);
                printf("Nome do Produto: %s\n\n", primeiro->produtoVagao);
            }

            if(imprime == 0)
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
            else
            {
                if(primeiro->proximoVagao != NULL)
                {
                    primeiro = primeiro->proximoVagao;
                }
                else
                {
                    imprime = 0;
                }
            }

        }
    }

    return 0;
}
