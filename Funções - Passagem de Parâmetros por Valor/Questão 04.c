#include <stdio.h>

int numeroPerfeito(int numeroP)
{
    int contador, soma = 0;
    for (contador = 1; contador < numeroP; contador++)
    {
        if (numeroP % contador == 0)
        {
            soma = soma + contador;
        }
    }
    if (soma == numeroP)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numeroPerfeito(numero))
    {
        printf("%d eh um numero perfeito.\n", numero);
    }
    else
    {
        printf("%d nao eh um numero perfeito.\n", numero);
    }
    return 0;
}