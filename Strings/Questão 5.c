#include <stdio.h>
#include <string.h>

int main ()
{
    char primeiraString[20], segundaString[20];
    int comprimentoString1, comprimentoString2;
    printf("Digite o primeiro nome: ");
    scanf("%19[^\n]s", primeiraString);
    printf("Digite o segundo nome: ");
    scanf(" %19[^\n]s", segundaString);
    comprimentoString1 = strlen(primeiraString);
    comprimentoString2 = strlen(segundaString);
    printf("\nO primeiro nome digitado foi: %s\nE o seu comprimento é de: %d letras.\nO segundo nome digitado foi: %s\nE o seu comprimento é de: %d letras.", primeiraString, comprimentoString1, segundaString, comprimentoString2);
    if (comprimentoString1 == comprimentoString2)
    {
        printf("\nOs dois nomes possuem o mesmo comprimento!");
    } 
    else 
    {
        printf("\nOs dois nomes possuem comprimentos diferentes!");
    }
    if (strcmp(primeiraString, segundaString) == 0)
    {
        printf("\nE os nomes são iguais!");
    }
    else
    {
        printf("\nE os nomes não são iguais!");
    }
    return 0;
}