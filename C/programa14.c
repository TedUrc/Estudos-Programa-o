#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int multiplicacao = 1;
    int primeiroInput, segundoInput;

    printf("Informe o primeiro numero: ");
    scanf("%d", &primeiroInput);
    printf("Informe o segundo numero: ");
    scanf("%d", &segundoInput);
    puts("");
    for(int contador = primeiroInput; contador+1 < segundoInput; contador++)
    {
        if(contador % 2 == 0)
        {
            soma += contador;
        }
        else
        {
            multiplicacao *= contador;
        }
    }
    multiplicacao *= primeiroInput * segundoInput;
    soma += primeiroInput + segundoInput;

    printf("Soma dos numeros pares e os digitados: %d\n", soma);
    printf("Multiplicacao dos numeros impares e os digitados: %d\n", multiplicacao);

    return 0;
}