 #include <stdio.h>

//Faça um programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino,
//M - Masculino, Sexo Inválido. Obs: O programa deve funcionar para letras maiúsculas e minúsculas.

int main ()
{
    char valorDoSexo;
    printf("Digite um sexo, sendo 'M' para Masculino e 'F' para Feminino: ");
    scanf(" %c", &valorDoSexo);
    if ((valorDoSexo == 'M') || (valorDoSexo == 'm'))
    {
        printf("\nO sexo digitado é o Masculino!\n");
    }
    else
        if ((valorDoSexo == 'F') || (valorDoSexo == 'f'))
        {
            printf("\nO sexo digitado é o Feminino!\n");
        }
        else
        {
            printf("\nO sexo informado é inválido!\n");
        }
    return 0;
}