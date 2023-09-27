#include <stdio.h>
#include <string.h>

int main () 
{
    char nome1[20], nome2[20];
    printf("Digite a primeira palavra: ");
    scanf(" %19[^\n]s", nome1);
    printf("Digite a segunda palavra: ");
    scanf(" %19[^\n]s", nome2);
    if (strlen(nome1) < strlen(nome2))
    {
        printf("A menor palavra é: %s\n", nome1);
    } 
    else
    {
        if (strlen(nome1) > strlen(nome2)) 
        {
            printf("A menor palavra é: %s\n", nome2);
        }
    }
    return 0;
}