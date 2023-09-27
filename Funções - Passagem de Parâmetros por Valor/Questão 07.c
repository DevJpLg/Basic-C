#include <stdio.h>

int funcaoFatorial(int numero)
{
    int fatorial = 1, contador;
    if (numero < 0)
    {
        return -1;
    }
    for ( contador = 1; contador <= numero; contador++)
    {
        fatorial = fatorial * contador;
    }
    return fatorial;
}

int main()
{
    int valor, resultado;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    resultado = funcaoFatorial(valor);
    if (resultado == -1)
    {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    }
    else
    {
        printf("O valor do fatorial de %d eh: %d\n", valor, resultado);
    }
    return 0;
}
