#include <stdio.h>
#include <stdlib.h>

typedef
struct arvore
{
    int info;
    struct arvore *dir;
    struct arvore *esq;
} arvore;

arvore *primeiraArvore;

arvore *criar_arvore(arvore *referencia, int numero)
{
    arvore *criarArvore = (arvore *)malloc(sizeof(arvore));

    if(referencia == NULL)
    {
        criarArvore->info = numero;
        criarArvore->dir = NULL;
        criarArvore->esq = NULL;
        return criarArvore;
    }
    else
    {
        if(referencia->dir != NULL && referencia->info < numero)
        {
            criar_arvore(referencia->dir, numero);
        }
        else if(referencia->dir == NULL && referencia->info < numero)
        {
            criarArvore->info = numero;
            criarArvore->dir = NULL;
            criarArvore->esq = NULL;
            referencia->dir = criarArvore;
        }

        if(referencia->esq != NULL && referencia->info > numero)
        {
            criar_arvore(referencia->esq, numero);
        }
        else if(referencia->esq == NULL && referencia->info > numero)
        {
            criarArvore->info = numero;
            criarArvore->dir = NULL;
            criarArvore->esq = NULL;
            referencia->esq = criarArvore;
        }
    }
}

void informa_arvore(arvore *referencia)
{
    if(referencia != NULL)
    {
        printf("Numero: %d\n", referencia->info);
        if(referencia->dir != NULL)
        {
            informa_arvore(referencia->dir);
        }
        if(referencia->esq != NULL)
        {
            informa_arvore(referencia->esq);
        }
    }
    else
    {
        puts("Arvore VAZIA!");
    }
}

arvore *deleta_arvore(arvore *referencia)
{
    if(referencia != NULL)
    {
        if(referencia->dir != NULL)
        {
            deleta_arvore(referencia->dir);
        }
        if(referencia->esq != NULL)
        {
            deleta_arvore(referencia->esq);
        }
        free(referencia);
        if(referencia == primeiraArvore)
        {
            return NULL;
        }
    }
    else
    {
        puts("Estrutura VAZIA!");
    }
}

int main()
{
    primeiraArvore = criar_arvore(primeiraArvore, 1);
    criar_arvore(primeiraArvore, 2);
    criar_arvore(primeiraArvore, 3);
    criar_arvore(primeiraArvore, -1);

    primeiraArvore = deleta_arvore(primeiraArvore);

    informa_arvore(primeiraArvore);

    return 0;
}
