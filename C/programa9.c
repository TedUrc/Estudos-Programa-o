#include <stdio.h>
#include <stdlib.h>

int main(){

    int decisao;
    float primeiroNumero, segundoNumero;
    float resultado;

    do
    {
        printf("1 - Soma de dois numeros\n");
        printf("2 - Diferenca entre dois numeros\n");
        printf("3 - Produto entre dois numeros\n");
        printf("4 - Divisao entre dois numeros\n");
        printf("5 - Sair\n");
        printf("Sua opcao: ");
        scanf("%d", &decisao);

        if(decisao < 5)
        {
            printf("\nInforme o primeiro numero: ");
            scanf("%f", &primeiroNumero);
            printf("Informe o segundo numero: ");
            scanf("%f", &segundoNumero);
        }

        if(decisao == 1)
        {
            resultado = primeiroNumero + segundoNumero;
            printf("Soma: %f\n\n", resultado);
        }
        else if(decisao == 2)
        {
            resultado = primeiroNumero - segundoNumero;
            printf("Diferenca: %f\n\n", resultado);
        }
        else if(decisao == 3)
        {
            resultado = primeiroNumero * segundoNumero;
            printf("Produto: %f\n\n", resultado);
        }
        else if(decisao == 4)
        {
            while(segundoNumero == 0)
            {
                printf("\nERRO: Divisao por zero!\n");
                printf("Informe o primeiro numero: ");
                scanf("%f", &primeiroNumero);
                printf("Informe o segundo numero: ");
                scanf("%f", &segundoNumero);
            }
            resultado = primeiroNumero / segundoNumero;
            printf("Divisao: %f\n\n", resultado);
        }
        else if(decisao > 5)
        {
            printf("ERRO: Escolha uma opcao correta!\n\n");
        }
    } while (decisao != 5);
    
}