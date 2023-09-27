#include <stdio.h>

int main ()
{
    float precos[500], arrecadado[500], total = 0;
    int contador, quantidades[500];
    for (contador = 0; contador < 500; contador++)
    {
        printf("\nDigite o preço e a quantidade vendida de 500 produtos:\n");
        printf("Preço do produto %d: ", contador + 1);
        scanf("%f", &precos[contador]);
        printf("Quantidade vendida do produto %d: ", contador + 1);
        scanf("%d", &quantidades[contador]);
        arrecadado[contador] = precos[contador] * quantidades[contador];
        total += arrecadado[contador];
    }
    printf("Valor arrecadado com cada produto:\n");
    for (contador = 0; contador < 500; contador++)
    {
        printf("Produto %d: %.2f\n", contador + 1, arrecadado[contador]);
    }
    printf("Valor total arrecadado: %.2f\n", total);
    return 0;
}