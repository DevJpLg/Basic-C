#include <stdio.h>

//Construa um programa que indique se um número digitado está compreendido no intervalo aberto de 0 a 100 (0 e 100 não estão na faixa de valores).

int main ()
{
    float valorInserido;
    printf("Digite um valor: ");
    scanf("%f", &valorInserido);
    if (valorInserido >= 1 && valorInserido <= 99)
    {
        printf("\nO valor %.2f está entre 0 e 100!\n", valorInserido);
    }
    else
    {
        printf("\nO valor %.2f não está entre 0 e 100!\n", valorInserido);
    }
    return 0;
}