#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prepare um programa para somar os numeros compreendidos entre 1 e 1000.

int main() 
{
    int valorDoNumero, somaDosNumeros = 0;
    srand(time(NULL));
    for (valorDoNumero = 0; valorDoNumero < 1000; valorDoNumero++) 
    {
        valorDoNumero = rand() % 1000 + 1;
        somaDosNumeros = somaDosNumeros + valorDoNumero;
    }
    printf("A soma dos 1000 números aleatórios é: %d\n", somaDosNumeros);
    return 0;
}