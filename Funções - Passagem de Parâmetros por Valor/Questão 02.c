#include <stdio.h>

char verificarNumero(float num)
{
    if (num > 0)
    {
        return 'P';
    }
    else
    {
        return 'N';
    }
}

int main ()
{
    float numero;
    char resultado;
    printf("\nDigite um valor: ");
    scanf("%f", &numero);
    resultado = verificarNumero (numero);
    printf("Resultado: %c\n", resultado);
    return 0;
}