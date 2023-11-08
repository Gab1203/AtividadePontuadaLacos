#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*
Exerc�cio 8:
Desenvolva um programa que solicite ao usu�rio um n�mero inteiro positivo e fa�a uma contagem
regressiva a partir desse n�mero at� zero. */

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    int i;

    do
    {
        printf("\nInsira um n�mero inteiro e positivo: ");
        scanf("%d", &numero);

        if (numero <= 0)
        {
            printf("N�mero inv�lido, reescreva! \n");
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