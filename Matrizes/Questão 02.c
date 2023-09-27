#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int indiceVetor, vetorA[7], vetorB[7], matrizC[7][2];
    srand(10);
    for (indiceVetor = 0; indiceVetor < 7; indiceVetor++)
    {
        vetorA[indiceVetor] = random () % 30;
    }
    for (indiceVetor = 0; indiceVetor < 7; indiceVetor++)
    {
        vetorB[indiceVetor] = random () % 30;
    }
    for (indiceVetor = 0; indiceVetor < 7; indiceVetor++)
    {
        matrizC[indiceVetor][0] = vetorA[indiceVetor];
        matrizC[indiceVetor][1] = vetorB[indiceVetor];
        printf("%d , %d\n", matrizC[indiceVetor][0], matrizC[indiceVetor][1]);
    }
    return 0;
}