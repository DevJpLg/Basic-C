#include <stdio.h>

//Faca a multiplicacao entre dois numeros usando somente soma.

int main() 
{
    int valor1, valor2, contador, resultado = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    for (contador = 0; contador < valor2; contador++) 
    {
        resultado = resultado + valor1;
    }
    printf("O resultado da multiplicacao é: %d\n", resultado);
    return 0;
}

