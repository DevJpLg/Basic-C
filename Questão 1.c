#include <stdio.h>

//Leia um valor de temperatura em graus Celsius e converta-o em graus Fahrenheit e Kelvin.

int main ()
{
    float  grausCelsius,  grausFahrenheit, grausKelvin;
    printf("Digite o valor da temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);
    grausFahrenheit = (9*grausCelsius + 160)/5;
    grausKelvin = grausCelsius + 273;
    printf("O resultado da conversão de temperaturas foi de:\nFahrenheit: %.1f graus\nKelvin: %.1f graus", grausFahrenheit, grausKelvin);
    return 0;
}