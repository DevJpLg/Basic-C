#include <stdio.h>

//Escreva um programa que leia um peso na Terra, o número de um planeta e imprima o valor do peso nese planeta.

int main ()
{
    int numeroDoPlaneta;
    float valorPesoTerra, planetaMercurio, planetaVenus, planetaMarte, planetaJupiter, planetaSaturno, planetaUrano;
    printf("Digite o seu peso em Kg: ");
    scanf("%f", &valorPesoTerra);
    printf("Mercúrio: [1]\nVênus: [2]\nMarte: [3]\nJúpiter: [4]\nSaturno: [5]\nUrano: [6]\nDigite um número de um planeta mostrado acima: ");
    scanf("%d", &numeroDoPlaneta);
    switch (numeroDoPlaneta)
    {
        case 1:
            planetaMercurio = valorPesoTerra * 0.37;
            printf("\nO valor do seu peso no planeta Mercúrio será de: %.2f Kg\n", planetaMercurio);
            break;
        case 2:
            planetaVenus = valorPesoTerra * 0.88;
            printf("\nO valor do seu peso no planeta Vênus será de: %.2f Kg\n", planetaVenus);
            break;
        case 3:
            planetaMarte = valorPesoTerra * 0.38;
            printf("\nO valor do seu peso no planeta Marte será de: %.2f Kg\n", planetaMarte);
            break;
        case 4:
            planetaJupiter = valorPesoTerra * 2.64;
            printf("\nO valor do seu peso no planeta Júpiter será de: %.2f Kg\n", planetaJupiter);
            break;
        case 5:
            planetaSaturno = valorPesoTerra * 1.15;
            printf("\nO valor do seu peso no planeta Saturno será de: %.2f Kg\n", planetaSaturno);
            break;
        case 6:
            planetaUrano = valorPesoTerra * 1.17;
            printf("\nO valor do seu peso no planeta Urano será de: %.2f Kg\n", planetaUrano);
            break;
        default:
            printf("\nNúmero do planeta inválido!\n");
            break;  
    }
    return 0;
}