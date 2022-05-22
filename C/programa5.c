#include <stdio.H>
#include <stdlib.H>

int main(){
    int ladoTriangulo[3];
    _Bool condicao;

    for(int input = 0; input < 3; input++){
        printf("Informe o %d valor: ", input+1);
        scanf("%d", &ladoTriangulo[input]);
    }

    condicao = ladoTriangulo[0] < (ladoTriangulo[1] + ladoTriangulo[2]);

    if(condicao == 1)
    {
        if(ladoTriangulo[0] == ladoTriangulo[1] && ladoTriangulo[0] == ladoTriangulo[2])
        {
            printf("O triangulo e equilatero");
        }
        else if(ladoTriangulo[0] == ladoTriangulo[1] || ladoTriangulo[0] == ladoTriangulo[2] || ladoTriangulo[1] == ladoTriangulo[2])
        {
            printf("O triangulo e isosceles");
        }
        else
        {
            printf("O triangulo e escaleno");
        }
        
    }
    else{
        printf("Impossivel formar um triangulo");
    }

    return 0;
}