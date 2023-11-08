/*Exerc�cio 5:
Enquanto voc� faz parte de uma equipe de desenvolvimento de software,
desenvolva um programa que solicite ao
usu�rio que escolha um idioma de prefer�ncia (1 - Ingl�s, 2 - Espanhol, 3 - Franc�s).
Com base na escolha do usu�rio, exiba a mensagem de boas-vindas no idioma selecionado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int lingua;

   

    do
    {
        printf("Lingua 1 - Ingl�s\n\nL�ngua 2 - Espanhol\n\nL�ngua 3 - Franc�s \n\n");
        printf("Escolha a l�ngua que queira: \n");
        scanf("%d", &lingua);

        system("cls || clear");

        printf("L�ngua inserida: %d \n", lingua);

        switch (lingua)
        {
        case 1:
            printf("Welcome! \n");

            break;
        case 2:
            printf("Bienvenido! \n");
            break;

        case 3:
            printf("Bienvenue! \n");

            break;

        default:
            printf("L�ngua inv�lida, reescreva!");
            Sleep(3000);
            system("cls || clear");
            break;
        }

    } while ((lingua < 1) || (lingua > 3));

    return 0;
}