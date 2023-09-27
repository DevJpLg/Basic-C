#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int indiceVetor1, indiceVetor2, x, y, tentativas = 0;
    char matriz[4][4];
    srand(time(NULL));
    for (indiceVetor1 = 0; indiceVetor1 < 4; indiceVetor1++)
    {
        for (indiceVetor2 = 0; indiceVetor2 < 4; indiceVetor2++)
        {
            matriz[indiceVetor1][indiceVetor2] = 'x';
        }
    }
    for (indiceVetor1 = 0; indiceVetor1 < 2; indiceVetor1++)
    {
        x = rand() % 4;
        y = rand() % 4;
        matriz[x][y] = 'y';
    }
    while (1)
    {
        printf("Digite as coordenadas (x y): ");
        scanf("%d %d", &x, &y);
        tentativas++;
        if (matriz[x][y] == 'y')
        {
            printf("Vc acertou!\n");
            break;
        }
    }
    printf("Foram necessarias %d tentativas para descobrir a posicao do caractere y.\n", tentativas);
    return 0;
}