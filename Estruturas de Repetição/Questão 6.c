#include <stdio.h>

//Crie um programa que leia os limites inferior e superior de um intervalo e imprima todos os numeros pares no intervalo aberto e seu somatorio.
//Suponha que os dados digitados sao para um intervalo crescente, ou seja, o primeiro valor e menor que o segundo.

int main() 
{
    int contador, limiteInferior, limiteSuperior, valorSoma = 0;
    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &limiteInferior);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &limiteSuperior);
    if (limiteInferior % 2 != 0) 
    {
        limiteInferior++;
    }
    for (contador = limiteInferior; contador <= limiteSuperior; contador += 2)
    {
        valorSoma += contador;
    }
    printf("\nA soma dos números pares eh: %d\n", valorSoma);
    return 0;
}
