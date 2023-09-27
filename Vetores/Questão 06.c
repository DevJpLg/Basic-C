#include <stdio.h>
#include <string.h>

int main ()
{
    int contador, idades[30];
    char nomes[30][50];
    float media, soma = 0;
    for (contador = 0; contador < 30; contador++)
    {
        printf("\nDigite o nome e a idade de 30 pessoas:\n");
        printf("Nome: ");
        scanf("%s", nomes[contador]);
        printf("Idade: ");
        scanf("%d", &idades[contador]);
        soma += idades[contador];
    }
    media = (float)soma / 30;
    printf("Pessoas com idade acima da média (%.2f): ", media);
    for (contador = 0; contador < 30; contador++)
    {
        if (idades[contador] > media)
        {
            printf("%s\n", nomes[contador]);
        }
    }
    return 0;
}