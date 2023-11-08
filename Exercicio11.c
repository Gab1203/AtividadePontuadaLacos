#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/*Exerc�cio 11:
Voc� � um desenvolvedor de um sistema de seguran�a e precisa criar um algoritmo que,
dado um c�digo de acesso, permita ao usu�rio entrar em um edif�cio.
 O algoritmo deve continuar repetindo at� que o usu�rio digite o c�digo de acesso correto.
*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    char codigoCerto[1001] = "Gab12";
    char codigoDigitado[1001];

    do
    {
        fflush(stdin);
        printf("Insira o c�digo de acesso ao pr�dio: \n");
        gets(codigoDigitado);

        system("cls || clear");
        strcmp(codigoCerto, codigoDigitado);
        printf("C�digo inserido: %s \n\n", codigoDigitado);
        if (strcmp(codigoCerto, codigoDigitado) == 0)
        {
            printf("Acesso permitido! \n");
        }
        else
        {
            printf("C�digo Incorreto, acesso negado! \n");
            Sleep(3000);
            system("cls || clear");
        }

    } while (strcmp(codigoCerto, codigoDigitado) != 0);

    return 0;
}