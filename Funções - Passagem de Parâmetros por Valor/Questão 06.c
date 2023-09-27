#include <stdio.h>

int funcaoPrimo(int numeroPrimo)
{
    int contador;
    if (numeroPrimo <= 1)
    {
        return 0;
    }
    for (contador = 2; contador * contador <= numeroPrimo; contador++)
    {
        if (numeroPrimo % contador == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    int numero, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (funcaoPrimo(numero))
    {
        printf("%d eh um número primo.\n", numero);
    }
    else
    {
        printf("%d não eh um número primo.\n", numero);
    }
    return 0;
}