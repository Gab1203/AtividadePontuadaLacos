#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Exerc�cio 9:
Em um projeto sobre n�meros primos, implemente um programa que
solicite ao usu�rio um n�mero inteiro e verifique se ele � um n�mero primo.
Exiba a mensagem "N�mero primo" caso seja primo, ou "N�mero n�o primo" caso contr�rio.*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero, i, resultado = 0;

    printf("Insira um n�mero inteiro: \n");
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
        printf("O n�mero %d � primo!", numero);
    } else
    {
        printf("O n�mero %d n�o � primo!", numero);
    }

    return 0;
}