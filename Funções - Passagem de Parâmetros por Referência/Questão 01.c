#include <stdio.h>

void juntarValores(float* valorA, float* valorB)
{
    float valorAuxiliar;
    valorAuxiliar = *valorA;
    *valorA = *valorB;
    *valorB = valorAuxiliar;
}

int main ()
{
    float valorA, valorB;
    printf("Digite o valor de A: ");
    scanf("%f", &valorA);
    printf("Digite o valor de B: ");
    scanf("%f", &valorB);
    juntarValores(&valorA, &valorB);
    printf("\nValor de A: %.2f\nValor de B: %.2f", valorA, valorB);
    return 0;
}