#include <stdio.h>

int main ()
{
    int contador, A[20], B[20];
    for (contador = 0; contador < 20; contador++)
    {
        printf("\nDigite 20 elementos para o vetor A: ");
        scanf("%d", &A[contador]);
        B[19 - contador] = A[contador];
    }
    printf("O vetor B, com os elementos de A invertidos, fica: ");
    for (contador = 0; contador < 20; contador++)
    {
        printf("%d ", B[contador]);
    }
    return 0;
}