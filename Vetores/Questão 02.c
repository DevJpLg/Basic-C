#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vetorNumeros[200], linha;
    float mediaNumeros = 0;
    srand(10);
    for (linha = 0; linha < 200; linha++)
    {
        vetorNumeros[linha] = rand() % 200;
        mediaNumeros += vetorNumeros[linha];
    }
    mediaNumeros = mediaNumeros/200;
    printf("Media: %f\n", mediaNumeros);
    printf("Valores acima da media:\n");
    for (linha = 0; linha < 200; linha++)
    {
        if (vetorNumeros[linha] > mediaNumeros)
        {
            printf("Posicao: %d, Valor: %d\n", linha, vetorNumeros[linha]);
        }
    }
    return 0;
}