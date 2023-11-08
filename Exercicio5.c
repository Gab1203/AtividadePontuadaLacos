/*Exercício 5:
Enquanto você faz parte de uma equipe de desenvolvimento de software,
desenvolva um programa que solicite ao
usuário que escolha um idioma de preferência (1 - Inglês, 2 - Espanhol, 3 - Francês).
Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.*/

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
        printf("Lingua 1 - Inglês\n\nLíngua 2 - Espanhol\n\nLíngua 3 - Francês \n\n");
        printf("Escolha a língua que queira: \n");
        scanf("%d", &lingua);

        system("cls || clear");

        printf("Língua inserida: %d \n", lingua);

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
            printf("Língua inválida, reescreva!");
            Sleep(3000);
            system("cls || clear");
            break;
        }

    } while ((lingua < 1) || (lingua > 3));

    return 0;
}