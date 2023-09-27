#include <stdio.h>

//Faca um programa que escreva todos os numeros multiplos de 7 entre 1 e N,
//sendo N um valor introduzido pelo usuario. Por exemplos: 7, 14, 21, 28, 35.

int main ()
{
    int valorDoNumero, valorN;
    printf("Insira o valor de um número inteiro: ");
    scanf("%d", &valorN);
    for (valorDoNumero = 1; valorDoNumero <= valorN; valorDoNumero++)
    {
        if (valorDoNumero % 7 == 0)
        {
            printf("\n%d", valorDoNumero);
        }
    }
    return 0;
}