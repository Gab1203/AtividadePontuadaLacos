#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*Exerc�cio 13:
Crie um programa que solicite do usu�rio dois n�meros inteiros e
informe qual destes n�meros � o maior e qual � o menor.
*/
int main()
{

    setlocale(LC_ALL, "portuguese");

    int primeiroNumero;
    int segundoNumero;
    int maiorNumero;
    int menorNumero;

    printf("Insira o primeiro n�mero: ");
    scanf("%d", &primeiroNumero);

    printf("\nInsira o segundo n�mero: ");
    scanf("%d", &segundoNumero);

    system("cls || clear");

    maiorNumero = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menorNumero = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;

    printf("Maior n�mero: %d", maiorNumero);
    printf("\nMenor n�mero: %d\n", menorNumero);

    return 0;
}