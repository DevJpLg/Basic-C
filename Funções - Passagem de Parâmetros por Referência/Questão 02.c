#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanhoDoVetor 5

int preencherVetor(int vetorNumero[], int tamanhoVetor)
{
    int contador, numerosNegativos = 0;
    for (contador = 0; contador <= tamanhoVetor; contador++)
    {
        vetorNumero[contador] = rand () % 50 - 25;
        if (vetorNumero[contador] < 0)
        {
            numerosNegativos++;
        }
    }
    printf("Quantidade de numeros negativos: %d", numerosNegativos);
    return 0;
}

int main ()
{
    int vetorNumeros[tamanhoDoVetor];
    srand(time(NULL));
    preencherVetor(vetorNumeros, tamanhoDoVetor);
    return 0;
}