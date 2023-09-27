#include <stdio.h>

int main ()
{
    int programaBanco, valorDeposito = 0, valorRetirada = 0, valorSaldo = 0, valorExtrato = 0;
    do 
    {
        printf("\nBem-Vindo ao programa do Banco Eletrônico, aqui estao algumas opções: \n[1] Deposito\n[2] Retirada\n[3] Saldo\n[4] Extrato\n[5] Sair do Programa\nDigite um número para acessar uma opçao: ");
        scanf("%d", &programaBanco);
        switch (programaBanco)
        {
        case 1:
            valorDeposito++; 
            printf("\nVocê selecionou a opção de Depósito!\n");
            break;
        case 2:
            valorRetirada++;
            printf("\nVocê selecionou a opção de Retirada!\n");
            break;
        case 3:
            valorSaldo++;
            printf("\nVocê selecionou a opção de Saldo!\n");
            break;
        case 4:
            valorExtrato++;
            printf("\nVocê selecionou a opção de Extrato!\n");
            break;
        case 5:
            printf("\nVocê selecionou a opção de sair do programa!\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
        }
    }
    while (programaBanco != 5);
    printf("Operações efetuadas: \nDepósito: %d\nRetirada: %d \nSaldo: %d \nExtrato: %d \n", valorDeposito, valorRetirada, valorSaldo, valorExtrato);
    return 0;
}