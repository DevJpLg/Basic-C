#include <stdio.h>

//Dado o salario fixo, o valor das vendas efetuadas pelo vendedor de uma empresa e sabendo-se que ele recebe
//uma comissao de 3% sobre o total das vendas até R$1.500,00 e 5% sobre o que ultrapassar este valor, calcular e
//escrever o seu salario total.

int main ()
{
  float valorSalario, valorDasVendas, salarioTotal, valorUltrapassado;
  printf("Insira o valor do salário fixo: ");
  scanf("%f", &valorSalario);
  printf("Insira o valor das vendas: ");
  scanf("%f", &valorDasVendas);
  if (valorDasVendas <= 1500)
  {
    salarioTotal = valorSalario + (valorDasVendas * 0.03);
    printf("O seu salário total será de: %.2f", salarioTotal);
  }
  else
  {
    if (valorDasVendas > 1500)
    {
      valorUltrapassado = valorDasVendas - 1500;
      salarioTotal = valorSalario + (valorUltrapassado * 0.05) + (1500 * 0.03);
      printf("O seu salário total será de: %.2f", salarioTotal);
    }
  }
  return 0;
}