#include <stdio.h>

//Elabore um programa que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
//infantil A = 5-7 anos; infantil B = 8-10 anos; juvenil A = 11-13 anos; juvenil B = 14-17 anos; adulto = maiores de 18 anos.

int main ()
{
    int valorDaIdade;
    printf("Insira a sua idade: ");
    scanf("%d", &valorDaIdade);
    if (valorDaIdade >= 5 && valorDaIdade <= 7)
    {
        printf("\nA sua categoria é infantil A\n");
    }
    else
        if (valorDaIdade >= 8 && valorDaIdade <= 10)
        {
            printf("\nA sua categoria é infantil B\n");
        }
        else
            if (valorDaIdade >= 11 && valorDaIdade <= 13)
            {
                printf("\nA sua categoria é juvenil A\n");
            }
            else
                if (valorDaIdade >= 14 && valorDaIdade <= 17)
                {
                    printf("\nA sua categoria é juvenil B\n");
                }
                else
                    if (valorDaIdade >= 18)
                    {
                        printf("\nA sua categoria é Adulta\n");
                    } 
                    else
                    {
                        printf("\nA sua idade é inválida\n");
                    }
    return 0;
}