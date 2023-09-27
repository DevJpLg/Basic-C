#include <stdio.h>

//Faça um programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino,
//M - Masculino, Sexo Inválido. Obs: O programa deve funcionar para letras maiúsculas e minúsculas.

int main ()
{
    char valorDoSexo;
    printf("Digite um sexo, sendo 'M' para Masculino e 'F' para Feminino: ");
    scanf("%c", &valorDoSexo);
    switch (valorDoSexo)
    {
        case 'M':
        case 'm':
            printf("\nO sexo digitado é o Masculino!\n");
            break;
        case 'F':
        case 'f':
            printf("\nO sexo digitado é o Feminino!\n");
            break;
        default:
            printf("\nO sexo informado é inválido!\n");
            break;
    }
    return 0;
}