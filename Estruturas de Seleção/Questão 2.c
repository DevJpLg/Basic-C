#include <stdio.h>

//Faça um programa que converta uma medida de metros para centímetros.

int main ()
{
    float valorMetros, valorCentimetros;
    printf("Digite o valor em metros que você deseja converter: ");
    scanf("%f", &valorMetros);
    valorCentimetros = valorMetros * 100;
    printf("O valor da conversão para centímetors será de: %.1f centímetors", valorCentimetros);
    return 0; 
}
