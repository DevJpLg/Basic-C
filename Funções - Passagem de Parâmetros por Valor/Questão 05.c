#include <stdio.h>

int receberNumeros(int x, int y)
{
    if (x % y == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int numeroX, numeroY;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numeroX);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &numeroY);
    if (receberNumeros(numeroX, numeroY))
    {
        printf("%d e divisivel por %d.\n", numeroX, numeroY);
    }
    else
    {
        printf("%d nao e divisivel por %d.\n", numeroX, numeroY);
    }
    return 0;
}