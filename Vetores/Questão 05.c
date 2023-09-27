#include <stdio.h>

int main ()
{
    int A[20], B[20], Soma[20], contador, iguais = 0;
    for (contador = 0; contador < 20; contador++)
    {
        printf("\nDigite 20 elementos para o vetor A: ");
        scanf("%d", &A[contador]);
    }
    for (contador = 0; contador < 20; contador++)
    {
        printf("\nDigite 20 elementos para o vetor B: ");
        scanf("%d", &B[contador]);
        Soma[contador] = A[contador] + B[contador];
        if (A[contador] == B[contador])
        {
            iguais++;
        }
    }
    printf("O vetor Soma, com a soma dos elementos de A e B, é:\n");
    for (contador = 0; contador < 20; contador++)
    {
        printf("%d ", Soma[contador]);
    }
    printf("\n");
    printf("A quantidade de vezes que A e B possuem os mesmos números nas mesmas posições é: %d", iguais);
    return 0;
}