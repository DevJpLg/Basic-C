#include <stdio.h>

//Escreva um programa que receba numeros do usuario enquanto eles forem positivos.
//No final o programa deve imprimir quantos numeros foram digitados.

int main() 
{
    int valorNumero, contador = 0;
    printf("\nDigite um número positivo (ou um número negativo para encerrar): ");
    scanf("%d", &valorNumero);
    while (valorNumero >= 0)
    {
        contador = contador + 1;  
        printf("\nDigite um número positivo (ou um número negativo para encerrar): ");
        scanf("%d", &valorNumero);
    }
    printf("\nForam digitados %d números.\n", contador);
    return 0;
}

