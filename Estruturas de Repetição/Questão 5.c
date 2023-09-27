#include <stdio.h>

//Escreva um programa que imprima todos os numeros inteiros de 200 a 100 (em ordem decrescente).

int main ()
{
    int valorDoNumero;
    for (valorDoNumero = 200; valorDoNumero >= 100; valorDoNumero--)
    {
        printf("\n%d", valorDoNumero);
    }
    return 0;
}