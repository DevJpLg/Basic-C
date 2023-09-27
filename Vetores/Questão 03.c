#include <stdio.h>

int main ()
{
    int vetor[50], maior = 0, posicao[50], indice, contador = -1;
    for (indice = 0; indice < 50; indice++)
    {
        printf("\nDigite um número: ");
        scanf("%d", &vetor[indice]);
        if (vetor[indice] > maior)
        {
            maior = vetor[indice];
            contador = 0;
            posicao[contador] = indice;
        }
        else
        {
            if (vetor[indice] == maior)
            {
                contador++;
                posicao[contador] = indice;
            }
        }
    }
    printf("O maior número é %d e está nas posições: ", maior);
    for (indice = 0; indice <= contador; indice++)
    {
        printf("%d ", posicao[indice]);
    }
    printf("\n");
    return 0;
}
