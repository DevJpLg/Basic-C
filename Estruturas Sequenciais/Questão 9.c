#include <stdio.h>

//Leia o salário mensal atual de um funcionário e o percentual de reajuste, e calcule o valor do novo salário.

int main ()
{
    float salarioAtual, salarioNovo, reajusteDoSalario;
    printf("Insira o salario atual: ");
    scanf("%f", &salarioAtual);
    printf("Insira o valor do reajuste: ");
    scanf("%f", &reajusteDoSalario);
    salarioNovo = salarioAtual + (salarioAtual + reajusteDoSalario / 100);
    printf("O novo salário será de: %.2f", salarioNovo);
    return 0;
}