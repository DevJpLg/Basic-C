#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[30], sexo[30], contador;
    int valorHomem = 0, valorMulher = 0;
    for (contador = 1; contador <= 10; contador++)
    {
        printf("\nDigite o seu nome: ");
        scanf(" %29[^\n]s", nome);
        printf("Digite o seu sexo (Homem ou Mulher): ");
        scanf(" %29[^\n]s", sexo);
        if (strcmp(sexo, "Homem") == 0 || strcmp(sexo, "homem") == 0)
        {
            valorHomem++;
        }
        else
        {
            if (strcmp(sexo, "Mulher") == 0 || strcmp(sexo, "mulher") == 0)
            {
                valorMulher++;
            }
        }
    }
    printf("\nTotal de homens: %d\nTotal de mulheres: %d\n", valorHomem, valorMulher);
    return 0;
}