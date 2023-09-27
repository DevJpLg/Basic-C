#include <stdio.h>

//Elabore um programa que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
//infantil A = 5-7 anos; infantil B = 8-10 anos; juvenil A = 11-13 anos; juvenil B = 14-17 anos; adulto = maiores de 18 anos.

int main ()
{
    int valorDaIdade;
    printf("Insira a sua idade: ");
    scanf("%d", &valorDaIdade);
    switch (valorDaIdade)
    {
    case 5:
    case 6:
    case 7:
        printf("\nA sua categoria é infantil A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("\nA sua categoria é infantil B\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("\nA sua categoria é juvenil A\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("\nA sua categoria é juvenil B\n");
        break;
    default:
        if (valorDaIdade >= 18)
            printf("\nA sua categoria é Adulta\n");
        else
            printf("\nA sua idade é inválida\n");
        break;
    }
    return 0;
}