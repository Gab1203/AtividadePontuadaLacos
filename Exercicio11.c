#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Exercício 11:
Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que,
dado um código de acesso, permita ao usuário entrar em um edifício.
 O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.
*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    char codigoCerto[1001] = "Gab12";
    char codigoDigitado[1001];

    do
    {
        fflush(stdin);
        printf("Insira o código de acesso ao prédio: \n");
        gets(codigoDigitado);

        system("cls || clear");
        strcmp(codigoCerto, codigoDigitado);
        printf("Código inserido: %s \n\n", codigoDigitado);
        if (strcmp(codigoCerto, codigoDigitado) == 0)
        {
            printf("Acesso permitido! \n");
        }
        else
        {
            printf("Código Incorreto, acesso negado! \n");
            Sleep(3000);
            system("cls || clear");
        }

    } while (strcmp(codigoCerto, codigoDigitado) != 0);

    return 0;
}