#include <stdio.h>

//Prepare um programa para perguntar dois números e informar qual deles é o maior ou se os números são iguais.

int main ()
{
    float primeiroNumero, segundoNumero;
    printf("Digite o valor do primeiro número: ");
    scanf("%f", &primeiroNumero);
    printf("\nDigite o valor do segundo número: ");
    scanf("%f", &segundoNumero);
    if (primeiroNumero > segundoNumero)
    {
        printf("\nO primeiro número é o maior!\n");
    }
    else
        if (primeiroNumero < segundoNumero)
        {
            printf("\nO segundo número é o maior!\n");
        }
        else
        {
            printf("\nOs números são iguais!\n");
        }
    return 0;
}