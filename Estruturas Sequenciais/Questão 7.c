#include <stdio.h>

//Implemente um programa que lê três valores e calcule a média ponderada para pesos 1, 2 e 3.

int main ()
{
    float mediaDasNotas, notaP1, notaP2, notaP3;
    printf("Insira o valor da primeira prova: ");
    scanf("%f", &notaP1);
    printf("Insira o valor da segunda prova: ");
    scanf("%f", &notaP2);
    printf("Insira o valor da terceira prova: ");
    scanf("%f", &notaP3);
    mediaDasNotas = (notaP1 * 1 + notaP2 * 2 + notaP3 * 3) / 6;
    printf("A média das provas do aluno foi de: %.1f", mediaDasNotas);
    return 0;
}