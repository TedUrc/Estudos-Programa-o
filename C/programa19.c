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
            referencia = referencia->dir;
            criar_arvore(referencia, numero);
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
            referencia = referencia->esq;
            criar_arvore(referencia, numero);
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
        informa_arvore(referencia->dir);
        informa_arvore(referencia->esq);
    }
    else
    {
        puts("Arvore VAZIA!");
    }
}

int main()
{
    primeiraArvore = criar_arvore(primeiraArvore, 1);
    criar_arvore(primeiraArvore, 2);
    criar_arvore(primeiraArvore, 3);
    criar_arvore(primeiraArvore, -1);

    informa_arvore(primeiraArvore);

    return 0;
}