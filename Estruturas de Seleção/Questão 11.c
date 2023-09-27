#include <stdio.h>

// Construa um programa que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.

int main ()
{
    int valorDoNumero;
    printf("Digite um número: ");
    scanf("%d", &valorDoNumero);
    if (valorDoNumero % 2==0)
    {
        printf("O número %d é PAR!", valorDoNumero);
    }
    else
    {
        printf("O número %d é ÍMPAR!", valorDoNumero);
    }
    return 0;
}