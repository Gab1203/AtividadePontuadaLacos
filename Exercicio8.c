#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*
Exercício 8:
Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem
regressiva a partir desse número até zero. */

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;

    do
    {
        printf("\nInsira um número inteiro e positivo: ");
        scanf("%d", &numero);

        if (numero <= 0)
        {
            printf("Número inválido, reescreva! \n");
        }

    } while (numero <= 0);

    system("cls || clear");

    printf("\nContagem regressiva\n");
    sleep(1);

    for (i = numero; i >= 0; i--)
    {
        printf("%d \n", i);
        sleep(1);
    }

    return 0;
}