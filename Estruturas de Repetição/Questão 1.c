#include <stdio.h>

//Prepare um programa para perguntar 10 numeros e informar a soma total destes numeros.
//(Utilizar a estrutura de repeticao for)

int main () 
{
    int controlador, valorNumero, somaDosNumeros = 0;
    for (controlador = 1; controlador <= 10; controlador++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valorNumero);
        somaDosNumeros = somaDosNumeros + valorNumero;
    }
    printf("O valor da soma total destes números é: %d", somaDosNumeros);
    return 0;
}