#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int data[3];
    int semana;

    for(int index = 0; index < 3; index++){
        if(index == 0)
        {
            printf("Informe o dia: ");
            scanf("%d", &data[index]);
        }
        else if(index == 1)
        {
            printf("Informe o mes: ");
            scanf("%d", &data[index]);
        }
        else
        {
            printf("Informe o ano: ");
            scanf("%d", &data[index]);
        }
    }

    if(data[0] < 10 && data[1] < 10)
    {
        printf("\n0%d/0%d/%d\n", data[0], data[1], data[2]);
    }
    else if (data[0] < 10)
    {
        printf("\n0%d/%d/%d\n", data[0], data[1], data[2]);
    }
    else
    {
        printf("\n%d/0%d/%d\n", data[0], data[1], data[2]);
    }
    
    semana = 31 - data[0];
    if(semana == 7){
        printf("Primeira semana!");
    }
    else if(semana == 14)
    {
        printf("Segunda semana!");
    }
    else if(semana == 21)
    {
        printf("Terceira semana!");
    }
    else
    {
        printf("Quarta semana");
    }
    
    return 0;
}
