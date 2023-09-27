#include <stdio.h>

int main ()
{
    int indiceVetor1, indiceVetor2, indiceVetor3, matriz[5][4][2];
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 4; indiceVetor2++)
        {
            for (indiceVetor3 = 0; indiceVetor3 < 2; indiceVetor3++)
            {
                printf("Digite um valor: ");
                scanf("%d", &matriz[indiceVetor1][indiceVetor2][indiceVetor3]);
            }
        }
    }
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 4; indiceVetor2++)
        {
            printf("%d ", matriz[indiceVetor1][indiceVetor2][0]);
        }
        printf("\n");
    }
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 4; indiceVetor2++)
        {
            printf("%d ", matriz[indiceVetor1][indiceVetor2][1]);
        }
        printf("\n");
    }
    return 0;
}