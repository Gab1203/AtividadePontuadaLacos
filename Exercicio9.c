#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Exercício 9:
Em um projeto sobre números primos, implemente um programa que
solicite ao usuário um número inteiro e verifique se ele é um número primo.
Exiba a mensagem "Número primo" caso seja primo, ou "Número não primo" caso contrário.*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero, i, resultado = 0;

    printf("Insira um número inteiro: \n");
    scanf("%d", &numero);

    system("cls || clear");

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            resultado++;
            break;
        }
    }

    if ((resultado == 0) && (numero != 1))
    {
        printf("O número %d é primo!", numero);
    } else
    {
        printf("O número %d não é primo!", numero);
    }

    return 0;
}