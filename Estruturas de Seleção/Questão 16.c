#include <stdio.h>

//Criar um programa que leia um numero inteiro entre 1 e 12 e escreva o nome do mes correspondente. 
//Caso o usuario digite um numero fora desse intervalo, devera aparecer uma mensagem informando que nao existe mes com este numero.

int main ()
{
  int valorDoMes;
  printf("Insira um número de 1 a 12: ");
  scanf("%d", &valorDoMes);
  switch (valorDoMes)
    {
    case 1:
      printf("O mês escolhido é Janeiro!");
      break;
    case 2:
      printf("O mês escolhido é Fevereiro!");
      break;
    case 3:
      printf("O mês escolhido é Março!");
      break;
    case 4:
      printf("O mês escolhido é Abril!");
      break;
    case 5:
      printf("O mês escolhido é Maio!");
      break;
    case 6:
      printf("O mês escolhido é Junho!");
      break;
    case 7:
      printf("O mês escolhido é Julho!");
      break;
    case 8:
      printf("O mês escolhido é Agosto!");
      break;
    case 9:
      printf("O mês escolhido é Setembro!");
      break;
    case 10:
      printf("O mês escolhido é Outubro!");
      break;
    case 11:
      printf("O mês escolhido é Novembro!");
      break;
    case 12:
      printf("O mês escolhido é Dezembro");
      break;
    default:
      printf("O mês escolhido é inválido!");
      break;
    }
  return 0;
}