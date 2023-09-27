#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int indiceVetor1, indiceVetor2, matrizA[5][3], matrizB[5][3], matrizC[5][3];
    srand(10);
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 3; indiceVetor2++)
        {
            matrizA[indiceVetor1][indiceVetor2] = random () % 10;
        }
    }
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 3; indiceVetor2++)
        {
            matrizB[indiceVetor1][indiceVetor2] = random () % 10;
        }
    }
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 3; indiceVetor2++)
        {
            matrizC[indiceVetor1][indiceVetor2] = matrizA[indiceVetor1][indiceVetor2] + matrizB[indiceVetor1][indiceVetor2];
            printf("\n%d", matrizC[indiceVetor1][indiceVetor2]);
        }
    }
    return 0;
}