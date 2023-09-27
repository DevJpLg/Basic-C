#include <stdio.h>

//Prepare um programa para calcular a soma dos numeros entre 1 e N inclusive.
//O valor de N deve ser perguntado no inicio do programa.

int main ()
{
    int valorN, valorDoNumero, valorDaSoma = 0;
    printf("Insira o valor de um número inteiro: ");
    scanf("%d", &valorN);
    for (valorDoNumero = 1; valorDoNumero <= valorN; valorDoNumero++)
    {
        valorDaSoma = valorDaSoma + valorDoNumero;
    }
    printf("O valor da soma entre 1 e %d é de: %d", valorN, valorDaSoma);
    return 0;
}