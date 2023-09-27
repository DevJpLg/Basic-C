#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[100], comparador;
    printf("Digite o seu nome: ");
    scanf("%99[^\n]s", nome);
    for (comparador = 0; comparador < strlen(nome); comparador++) 
    {
        printf("%c\n", nome[comparador]);
    }
    return 0;
}