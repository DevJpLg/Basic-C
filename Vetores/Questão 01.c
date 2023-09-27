#include <stdio.h>

int main ()
{
    char nome[50][20];
    int indiceVetor;
    for (indiceVetor = 0; indiceVetor < 50; indiceVetor++)
    {
        printf("Digite um nome: ");
        scanf(" %19[^\n]s", nome[indiceVetor]);
    }
    for (indiceVetor = 50; indiceVetor >= 0; indiceVetor--)
    {
        printf("%s \n", nome[indiceVetor]);
    }
    return 0;
}