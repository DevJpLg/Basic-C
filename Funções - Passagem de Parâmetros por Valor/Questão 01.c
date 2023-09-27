#include <stdio.h>

int funcaoSoma(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main ()
{
    int contador, soma, numero1, numero2, numero3;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    printf("Digite terceiro número: ");
    scanf("%d", &numero3);
    printf("A soma dos 3 números é: %d", funcaoSoma(numero1, numero2, numero3));
    return 0;
}