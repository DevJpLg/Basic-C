#include <stdio.h>

//Faça um algoritmo para ler os valores para as variáveis A e B.

int main ()
{
    float valorDeA, valorDeB, trocaDosValores;
    printf("Insira o valor de A: ");
    scanf("%f", &valorDeA);
    printf("Insira o valor de B: ");
    scanf("%f", &valorDeB);
    trocaDosValores = valorDeA;
    valorDeA = valorDeB;
    valorDeB = trocaDosValores;
    printf("Valores após a inversão:\nA: %.1f\nB: %.1f", valorDeA, valorDeB);
    return 0;  
}