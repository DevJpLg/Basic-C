#include <stdio.h>

//Faça um programa que peça um valor e mostre na tela se o valor é positivo, negativo ou nulo.

int main () 
{
    float valorNumero;
    printf("Digite um valor: ");
    scanf("%f", &valorNumero);
    if (valorNumero > 0)
    {
        printf("\nO valor %.2f é positivo!\n", valorNumero);
    }
    else
        if (valorNumero < 0)
        {
            printf("\nO valor %.2f é negativo!\n", valorNumero);
        }
        else
        {
            printf("\nO valor %.2f é nulo!\n", valorNumero);
        }
    return 0;
}