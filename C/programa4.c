#include <stdio.h>
#include <stdlib.h>

int main(){
    float primeiraProva, segundaProva, terceiraProva;
    float mediaPond;

    printf("Informe a nota da primeira nota: ");
    scanf("%f", &primeiraProva);
    printf("Informe a nota da segunda nota: ");
    scanf("%f", &segundaProva);
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &terceiraProva);

    mediaPond = (primeiraProva + segundaProva + terceiraProva) / (1 + 1 + 3);
    if(mediaPond >= 6){
        printf("Media: %.1f", mediaPond);
        printf("\nAprovado!");
    }
    else{
        printf("Media: %.1f", mediaPond);
        printf("\nReprovado!");
    }
    return 0;
}