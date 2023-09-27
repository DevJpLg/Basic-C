#include <stdio.h>

//A prefeitura de Campos abriu uma linha de crédito para os funcionários estatutários. O valor máximo da
//prestação não poderá ultrapassar 30% do salário bruto. Fazer um programa que permita entrar com o salário
//bruto e o valor da prestação, e informar se o empréstimo pode ou não ser concedido.

int main ()
{
    float salarioBruto, novoValorSalario, valorPrestacao;
    printf("Digite o valor do salário: ");
    scanf("%f", &salarioBruto);
    printf("Digite o valor da prestação: ");
    scanf("%f", &valorPrestacao);
    novoValorSalario = (salarioBruto * 0.30);
    if (valorPrestacao <= novoValorSalario)
    {
        printf("\nVocê pode conseguir o empréstimo!\n");
    }
    else
    {
        printf("\nVocê não pode conseguir o empréstimo!\n");
    }
    return 0;
}