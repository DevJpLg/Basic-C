#include <stdio.h>
#include <string.h>

int main () 
{
    float peso, mediaPeso, somaPesos = 0, menosPesado = 3, maisPesado = 0;
    char sexo[20], nome[20], nacionalidade[20], pessoaMaisPesada[20], brasileiraMaisLeve[20];
    int contador, numeroDePessoas;
    printf("Digite um numero de pessoas: ");
    scanf("%d", &numeroDePessoas);
    for (contador = 1; contador <= numeroDePessoas; contador++) 
    {
        printf("\nDigite o seu nome: ");
        scanf(" %19[^\n]s", nome);
        if (strcmp(nome, "SAIR") == 0) 
        {
            printf("Programa encerrado!\n");
            break;
        }
        printf("Digite o seu sexo (Homem ou Mulher): ");
        scanf(" %19[^\n]s", sexo);
        printf("Digite o seu peso em Kg: ");
        scanf("%f", &peso);
        printf("Digite o a sua nacionalidade: ");
        scanf(" %19[^\n]s", nacionalidade);
        if ((strcmp(sexo, "Mulher") == 0 || strcmp(sexo, "mulher") == 0) && (strcmp(nacionalidade, "brasileira") == 0))
        {
            if (peso < menosPesado)
            {
                menosPesado = peso;
                strcpy(brasileiraMaisLeve, nome);
            }
        }
        if (peso > maisPesado) 
        {
            maisPesado = peso;
            strcpy(pessoaMaisPesada, nome);
        }
        somaPesos = somaPesos + peso;
    }
    mediaPeso = somaPesos / (contador - 1);
    printf("A média dos pesos é de: %.2f Kg\n", mediaPeso);
    printf("O nome da pessoa mais pesada é o(a): %s\n", pessoaMaisPesada);
    printf("A brasileira mais leve é a: %s\n", brasileiraMaisLeve);
    return 0;
}