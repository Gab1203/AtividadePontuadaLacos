#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*Exercício 13:
Crie um programa que solicite do usuário dois números inteiros e
informe qual destes números é o maior e qual é o menor.
*/
int main()
{

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int maiorNumero;
    int menorNumero;

    printf("Insira o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("\nInsira o segundo número: ");
    scanf("%d", &segundoNumero);

    system("cls || clear");

    maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    printf("Maior número: %d", maiorNumero);
    printf("\nMenor número: %d\n", menorNumero);

    return 0;
}