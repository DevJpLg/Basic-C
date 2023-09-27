#include <stdio.h>

//Faça um Programa que peça o comprimento a largura e a altura de uma caixa d’água retangular.

int main ()
{
    float comprimentoDaCaixa, larguraDaCaixa, alturaDaCaixa, volumeDaCaixa;
    printf("Insira o valor do comprimento da caixa: ");
    scanf("%f", &comprimentoDaCaixa);
    printf("Insira o valor do largura da caixa: ");
    scanf("%f", &larguraDaCaixa);
    printf("Insira o valor do altura da caixa: ");
    scanf("%f", &alturaDaCaixa);
    volumeDaCaixa = comprimentoDaCaixa * larguraDaCaixa * alturaDaCaixa;
    printf("O volume da caixa d'água será de: %.1f", volumeDaCaixa);
    return 0;
}