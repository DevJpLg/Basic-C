#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanhoDoVetor 5

void preencherVetor(int vetor[], int tamanhoVetor)
{
    int contador;
    for(contador = 0; contador <= tamanhoVetor; contador++)
    {
        vetor[contador] = rand () % 50;
    }
}

void vetorOriginal(int vetor[], int tamanhoVetor)
{
    int contador;
    printf("Vetor original: ");
    for (contador = 0; contador < tamanhoDoVetor; contador++)
    {
        printf("%d ", vetor[contador]);
    }
    printf("\n");
}

void alterarOrdem(int vetor[], int tamanhoVetor)
{
    int contador1, contador2;
    for (int contador1 = 0; contador1 < tamanhoVetor - 1; contador1++)
    {
        for (int contador2 = 0; contador2 < tamanhoVetor - contador1 - 1; contador2++)
        {
            if (vetor[contador2] < vetor[contador2 + 1])
            {
                int temp = vetor[contador2];
                vetor[contador2] = vetor[contador2 + 1];
                vetor[contador2 + 1] = temp;
            }
        }
    }
}

void vetorDecrescente(int vetor[], int tamanhoVetor)
{
    printf("Vetor ordenado em ordem decrescente: ");
    for (int contador = 0; contador < tamanhoVetor; contador++)
    {
        printf("%d ", vetor[contador]);
    }
    printf("\n");
}

int main()
{
    int vetor[tamanhoDoVetor];
    srand(time(NULL));
    preencherVetor(vetor, tamanhoDoVetor);
    vetorOriginal(vetor, tamanhoDoVetor);
    alterarOrdem(vetor, tamanhoDoVetor);
    vetorDecrescente(vetor, tamanhoDoVetor);
    return 0;
}