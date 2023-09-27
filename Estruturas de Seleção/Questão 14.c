#include <stdio.h>

//Faca um programa que peca para entrar com um ano com 4 dıgitos e determine se o mesmo e ou nao bissexto.

int main ()
{
  int valorDoAno;
  printf("Insira um número que tenha 4 dígitos: ");
  scanf("%d", &valorDoAno);
  if (valorDoAno % 400==0 )
  {
    printf("O ano %d é bissexto!", valorDoAno);
  }
  else
  {
    if (valorDoAno % 4==0 && valorDoAno % 100!=0)
    {
      printf("O ano %d é bissexto!", valorDoAno);
    }
    else
    {
      printf("O ano %d não é bissexto!", valorDoAno);
    }
  }
  return 0;
}