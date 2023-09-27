#include <stdio.h>

//Tendo como dados de entrada a altura o sexo e o peso de uma pessoa, construa um algoritmo que calcule seu
//peso ideal, utilizando as seguintes formulas:
//. Para homens: (72.7*h) - 58
//. Para mulheres: (62.1*h) - 44.7 (h = altura)
//Informe se o peso da pessoa esta dentro, acima ou abaixo do peso (Considere a margem de erro de 1 Kg para
//mais ou para menos como estando no peso ideal).

int main ()
{
  float peso, altura, pesoIdeal;
  char sexo;
  printf("Digite o seu peso em Kg: ");
  scanf("%f", &peso);
  printf("Digite o seu altura em cm: ");
  scanf("%f", &altura);
  printf("Digite o seu sexo (M para Masculino e F para Feminino): ");
  scanf(" %c", &sexo);
  if ((sexo == 'M') || (sexo == 'm'))
  {
    pesoIdeal = (72.7 * altura) - 58;
  }
  else
  {
    if ((sexo == 'F') || (sexo == 'f'))
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else
    {
        printf("O sexo inserido é inválido!");
    }
  }
  printf("\nO seu peso ideal é: %.2f Kg \nE o seu peso atual é de: %.2f Kg", pesoIdeal, peso);
  if (pesoIdeal > peso + 1 && pesoIdeal > peso - 1)
  {
    printf("\nEntão você está abaixo do peso ideal!");
  }
  else
  {
    if (pesoIdeal < peso - 1 && pesoIdeal < peso + 1)
    {
      printf("\nEntão você está acima do peso ideal!");
    }
    else
    {
      printf("\nEntão você está dentro do peso ideal!");
    }
  }
  return 0;
}