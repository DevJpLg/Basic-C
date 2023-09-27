#include <stdio.h>

//Se tivermos uma lista dos numeros naturais menores do que 10 que sao multiplos de 3 ou 5 obtemos 3,
//5, 6 e 9. A soma destes multiplos e 23. Imprima a soma dos multiplos de 3 ou 5 menores do que 1000.
//(Utilizar a estrutura de repeticao while)

int main ()
{
    int valorDoNumero = 1, somaDosMultiplos = 0;
    do
    {
        if ((valorDoNumero % 3 ==0) || (valorDoNumero % 5 == 0))
        {
            somaDosMultiplos = somaDosMultiplos + valorDoNumero;
        }
        valorDoNumero = valorDoNumero + 1;
    }
    while (valorDoNumero < 1000);
    printf("a soma dos múltiplos de 3 ou 5 menores do que 1000 é de: %d", somaDosMultiplos);
    return 0;
}