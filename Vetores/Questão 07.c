#include <stdio.h>
#include <string.h>

int main ()
{
    char nomes[200][50], sexos[200];
    int contador;
    for (contador = 0; contador < 200; contador++)
    {
        printf("\nDigite o nome e o sexo (M/F) de 200 pessoas:\n");
        printf("Nome: ");
        scanf("%s", nomes[contador]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[contador]);
    }
    printf("Mulheres:\n");
    for (contador = 0; contador < 200; contador++)
    {
        if (sexos[contador] == 'F' || sexos[contador] == 'f')
        {
            printf("%s\n", nomes[contador]);
        }
    }
    printf("Homens:\n");
    for (contador = 0; contador < 200; contador++)
    {
        if (sexos[contador] == 'M' || sexos[contador] == 'm')
        {
            printf("%s\n", nomes[contador]);
        }
    }
    return 0;
}