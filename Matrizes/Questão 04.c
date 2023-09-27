#include <stdio.h>

int main()
{
    int indiceVetor1, indiceVetor2;
    float alturas[5][10], maiorAltura;
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        printf("\nDelegação %d:\n", indiceVetor1 + 1);
        for (indiceVetor2 = 0; indiceVetor2 < 10; indiceVetor2++)
        {
            printf("Atleta %d: ", indiceVetor2 + 1);
            scanf("%f", &alturas[indiceVetor1][indiceVetor2]);
        }
    }
    printf("\n");
    for (indiceVetor1 = 0; indiceVetor1 < 5; indiceVetor1++)
    {
        maiorAltura = alturas[indiceVetor1][0];
        for (indiceVetor2 = 1; indiceVetor2 < 10; indiceVetor2++)
        {
            if (alturas[indiceVetor1][indiceVetor2] > maiorAltura)
            {
                maiorAltura = alturas[indiceVetor1][indiceVetor2];
            }
        }
        printf("Maior altura da delegação %d: %.2f\n", indiceVetor1 + 1, maiorAltura);
    }
    return 0;
}
