#include <stdio.h>

//Construa um programa que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR.

int main ()
{
    int valorNumeroInteiro;
    printf("Digite um número: ");
    scanf("%d", &valorNumeroInteiro);
    if (valorNumeroInteiro % 2 == 0) 
    {
        printf("\n%d é PAR.\n", valorNumeroInteiro);
    } 
    else 
    {
        printf("\n%d é IMPAR.\n", valorNumeroInteiro);
    }
    return 0;
}