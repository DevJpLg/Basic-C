#include <stdio.h>

int multiplicacao(int num1, int num2)
{
    int resultado = 0, contador;
    for (int contador = 0; contador < num2; contador++)
    {
        resultado = resultado + num1;
    }
    return resultado;
}

int main ()
{
    int numero1, numero2, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    resultado = multiplicacao(numero1, numero2);
    printf("%d * %d = %d\n", numero1, numero2, multiplicacao(numero1, numero2));
    return 0;
}