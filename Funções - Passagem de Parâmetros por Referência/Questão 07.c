#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void trocarCaracteres(char *palavraA, char *palavraB)
{
    char auxiliar;
    auxiliar = *palavraA;
    *palavraA = *palavraB;
    *palavraB = auxiliar;
}

void embaralharPalavra(char palavra[])
{
    int contador1, contador2, tamanho;
    tamanho = strlen(palavra);
    srand(time(NULL));
    for (contador1 = 0; contador1 < tamanho; contador1++)
    {
        contador2 = contador1 + rand() % (tamanho - contador1);
        trocarCaracteres(&palavra[contador1], &palavra[contador2]);
    }
}

int main()
{
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf(" %49[^\n]s", palavra);
    embaralharPalavra(palavra);
    printf("Palavra embaralhada: %s\n", palavra);
    return 0;
}