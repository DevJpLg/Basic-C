#include <stdio.h>
#include <string.h>

int main () 
{
    float contador, altura, mediaAltura, somaAltura = 0, menorAltura = 3, maiorAltura = 0;
    char nome[20], nomeMaisAlto[20];
    for (contador= 1; contador <= 2; contador++) 
    {
        printf("Digite o nome de uma pessoa: ");
        scanf(" %19[^\n]s", nome);
        printf("Digite a altura da pessoa (Ex: 1.80): ");
        scanf("%f", &altura);
        somaAltura = somaAltura + altura;
        if (altura < menorAltura) 
        {
            menorAltura = altura;
        }
        if (altura > maiorAltura) 
        {
            maiorAltura = altura;
            strcpy(nomeMaisAlto, nome);
        }
    }
    mediaAltura = somaAltura / 2;
    printf("A media das alturas é de: %.2f metros.\nA altura da pessoa mais baixa é de: %.2f metros.\nO nome da pessoa mais alta é o(a): %s.", mediaAltura, menorAltura, nomeMaisAlto);
    return 0;
}