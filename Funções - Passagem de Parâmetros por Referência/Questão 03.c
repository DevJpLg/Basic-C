#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanhoDoVetor 10

void gerarNumerosAleatorios(int vetorNumero[], int tamanhoVetor)
{
    int contador;
    printf("\nNumeros gerados: \n");
    for (contador = 0; contador < tamanhoVetor; contador++)
    {
        vetorNumero[contador] = rand() % 30;
        printf("%d    ", vetorNumero[contador]);
    }
}

int main()
{
    int vetorNumeros[tamanhoDoVetor], contador;
    srand(time(NULL));
    gerarNumerosAleatorios(vetorNumeros, tamanhoDoVetor);
    printf("\n\nNumeros gerados na ordem inversa: \n");
    for (contador = tamanhoDoVetor - 1; contador >= 0; contador--)
    {
        printf("%d    ", vetorNumeros[contador]);
    }
    return 0;
}