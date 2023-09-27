#include <stdio.h>

//Escreva um programa que receba um número e imprima se o número é ou não é múltiplo de 3.

int main ()
{
    int valorNumeroInteiro;
    printf("Digite um número: ");
    scanf("%d", &valorNumeroInteiro);
    if (valorNumeroInteiro % 3 == 0)
    {
        printf("\nO numero %d é múltiplo de 3!\n", valorNumeroInteiro);
    }
    else
    {
        printf("\nO numero %d não é multiplo de 3!\n", valorNumeroInteiro);
    }
    return 0;
}