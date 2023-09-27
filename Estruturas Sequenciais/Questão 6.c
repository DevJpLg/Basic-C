#include <stdio.h>

//Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int main ()
{
    int valorDoNumero, numeroAntecessor, numeroSucessor;
    printf("Insira um número: ");
    scanf("%d", &valorDoNumero);
    numeroAntecessor = valorDoNumero - 1;
    numeroSucessor = valorDoNumero + 1;
    printf("O antecessor será: %d e o sucessor será: %d", numeroAntecessor, numeroSucessor);
    return 0; 
}