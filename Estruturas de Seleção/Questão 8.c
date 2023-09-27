#include <stdio.h>

//Dado o peso e a altura do usuário imprima seu Índice de Massa Corporal. IMC = peso/altura2

int main ()
{
    float massaCorporal, peso, altura;
    printf("Insira o seu peso: ");
    scanf("%f", &peso);    
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    massaCorporal = peso/(altura * altura);
    printf("O seu IMC é de: %.2f", massaCorporal);
    return 0;
}