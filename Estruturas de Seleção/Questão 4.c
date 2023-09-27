#include <stdio.h>

//Faça um programa que verifique se uma letra digitada é vogal ou consoante.

int main ()
{
    char letraInserida;
    printf("Digita uma letra: ");
    scanf(" %c", &letraInserida);
    if ((letraInserida == 'a') || (letraInserida == 'e') || letraInserida == ('i') || letraInserida == 'o' || letraInserida == ('u') || 
    (letraInserida == 'A') || (letraInserida == 'E') || (letraInserida == 'I') || (letraInserida == 'O') || (letraInserida == 'U'))
    {
        printf("\nA letra digitada e uma vogal!\n");
    }
    else
    {
        printf("\nA letra digitada e uma consoante!\n");
    }
    return 0;
}