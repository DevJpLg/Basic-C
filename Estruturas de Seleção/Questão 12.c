#include <stdio.h>

//Dados três valores A, B e C, construa um programa, que imprima os valores de forma ascendente (do menor para o maior).

int main ()
{
  int valorA, valorB, valorC;
  printf("Digite o valor de A: ");
  scanf("%d", &valorA);
  printf("Digite o valor de B: ");
  scanf("%d", &valorB);
  printf("Digite o valor de C: ");
  scanf("%d", &valorC);
  if ((valorA < valorB) && (valorA < valorC))
  {
    printf("%d", valorA);
    if (valorB < valorC)
    {
      printf(" %d %d", valorB, valorC);
    }
    else
    {
      printf(" %d %d", valorC, valorB);
    }
  }
  if ((valorB < valorA) && (valorB < valorC))
  {
    printf("%d", valorB);
    if (valorA < valorC)
    {
      printf(" %d %d", valorA, valorC);
    }
    else
    {
      printf(" %d %d", valorC, valorA);
    }
  }
  if ((valorC < valorB) && (valorC < valorA))
  {
    printf("%d", valorC);
    if (valorB < valorA)
    {
      printf(" %d %d", valorB, valorA);
    }
    else
    {
      printf(" %d %d", valorA, valorB);
    }
  }
  return 0;
}
