#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Refaca o programa anterior para 100 numeros.(Utilizar a estrutura de repeticao while)

int main() 
{
    int contador = 1;
    int valorNumero, somaDosValores = 0;
    srand(time(NULL));
    while (contador <= 100) 
    {
        valorNumero = rand() % 100 + 1;
        somaDosValores = somaDosValores + valorNumero;
        contador++;
    }
    printf("A soma total dos números é: %d\n", somaDosValores);
    return 0;
}
