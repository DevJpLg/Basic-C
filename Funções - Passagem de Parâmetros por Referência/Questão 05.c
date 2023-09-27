#include <stdio.h>
#include <string.h>

#define tamanhoNome 5
#define tamanhoMaximoNome 50

int encontrarNome(char listaDeNomes[][tamanhoMaximoNome], int tamanho, char* nomeProcurado)
{
    int posicao;
    for (posicao = 0; posicao < tamanho; posicao++)
    {
        if (strcmp(listaDeNomes[posicao], nomeProcurado) == 0)
        {
            return posicao;
        }
    }
    return -1;
}

int main()
{
    int posicao;
    char nomeProcurado[tamanhoMaximoNome], listaDeNomes[tamanhoNome][tamanhoMaximoNome] =
    {
        "Joao", "Pedro", "Caio", "Fabio", "Lucas"
    };
    printf("Digite o nome que deseja procurar: ");
    scanf(" %[^\n]", nomeProcurado);
    posicao = encontrarNome(listaDeNomes, tamanhoNome, nomeProcurado);
    if (posicao != -1)
    {
        printf("O nome '%s' foi encontrado na posicao %d da lista.\n", nomeProcurado, posicao + 1);
    }
    else
    {
        printf("O nome '%s' nao foi encontrado na lista.\n", nomeProcurado);
    }
    return 0;
}