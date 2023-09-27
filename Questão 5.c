#include <stdio.h>

//Prepare um algoritmo para calcular o espaço percorrido por um móvel em movimento retilíneo uniforme.

int main ()
{
    float valorEspacoPercorrido, valorEspacoInicial, valorVelocidade, valorTempo;
    printf("Digite o espaço inicial (So): ");
    scanf("%f", &valorEspacoInicial);
    printf("Digite a velocidade (V): ");
    scanf("%f", &valorVelocidade);
    printf("Digite o tempo (T): ");
    scanf("%f", &valorTempo);
    valorEspacoPercorrido = valorEspacoInicial + valorVelocidade * valorTempo;
    printf("O espaço percorrido (S) será de: %.1f", valorEspacoPercorrido);
    return 0;
}