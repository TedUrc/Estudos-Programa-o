#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    float impostoMinasGerais = 1.07;
    float impostoSaoPaulo = 1.12;
    float impostoRioDeJaneiro = 1.15;
    float impostoMatoGrossoSul = 1.08;
    float precoProduto;
    float produtoComImposto;
    char nomeProduto[2];

    printf("Estado (Destino): ");
    gets(nomeProduto);
    printf("Valor do produto: ");
    scanf("%f", &precoProduto);
    
    for(int index = 0; index < sizeof(nomeProduto) / sizeof(nomeProduto[0]); index++)
    {
        nomeProduto[index] = toupper(nomeProduto[index]);
    }
    

    if(strcmp(nomeProduto, "RJ") == 0)
    {
        produtoComImposto = impostoRioDeJaneiro * precoProduto;
        printf("\nValor do Produto em %s: %.2f", nomeProduto, produtoComImposto);
    }
    else if(strcmp(nomeProduto, "SP") == 0)
    {
        produtoComImposto = impostoSaoPaulo * precoProduto;
        printf("\nValor do Produto em %s: %.2f", nomeProduto, produtoComImposto);
    }
    else if(strcmp(nomeProduto, "MS") == 0)
    {
        produtoComImposto = impostoMatoGrossoSul * precoProduto;
        printf("\nValor do Produto em %s: %.2f", nomeProduto, produtoComImposto);
    }
    else if(strcmp(nomeProduto, "MG") == 0)
    {
        produtoComImposto = impostoMinasGerais * precoProduto;
        printf("\nValor do Produto em %s: %.2f", nomeProduto, produtoComImposto);
    }
    else
    {
        printf("\nErro: esse estado nao existe!");
    }
}