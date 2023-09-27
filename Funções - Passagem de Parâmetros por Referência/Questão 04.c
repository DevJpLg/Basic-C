#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatriz(int A[5][5])
{
    int linha, coluna;
    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            A[linha][coluna] = rand() % 100;
            printf("%4d", A[linha][coluna]);
        }
        printf("\n");
    }
}

void encontrarMaior(int A[5][5], int *maiorValor, int *linhaDoMaiorValor, int *colunaDoMaiorValor)
{
    int linha, coluna;
    *maiorValor = A[0][0];
    *linhaDoMaiorValor = 0;
    *colunaDoMaiorValor = 0;
    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            if (A[linha][coluna] > *maiorValor)
            {
                *maiorValor = A[linha][coluna];
                *linhaDoMaiorValor = linha;
                *colunaDoMaiorValor = coluna;
            }
        }
    }
}

int main()
{
    int A[5][5], maiorValor, linhaDoMaiorValor, colunaDoMaiorValor;
    srand(time(NULL));
    gerarMatriz(A);
    printf("\n");
    encontrarMaior(A, &maiorValor, &linhaDoMaiorValor, &colunaDoMaiorValor);
    printf("O maior valor é %d e está na linha %d da coluna %d\n", maiorValor, linhaDoMaiorValor + 1, colunaDoMaiorValor + 1);
    return 0;
}