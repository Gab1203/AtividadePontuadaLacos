/*Exerc�cio 7:
Em um projeto para um jogo, � necess�rio criar um menu,
crie um programa que exiba um menu com op��es
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configura��es).
Solicite ao usu�rio que escolha uma op��o e, utilizando o switch case,
execute a funcionalidade correspondente � op��o escolhida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;

    do
    {
        printf("Menu\n\n1 - Novo Jogo\n\n2 - Carregar Jogo\n\n3 - Configura��es\n\n");
        printf("Escolha uma op��o: \n");
        scanf("%d", &opcao);
        system("cls || clear");
        printf("Voc� escolheu a op��o %d \n\n", opcao);

        switch (opcao)
        {
        case 1:
            printf("Voc� selecionou a op��o de Novo Jogo\nJogo inciando em instantes...\n");

            break;

        case 2:
            printf("Voc� selecionou a op��o de Carregar Jogo\nJogo Carregando em instantes...\n");

            break;

        case 3:
            printf("Voc� selecionou a op��o de Configura��es\nConfigura��es iniciando em instantes...\n");

            break;
        default:
            printf("Op��o inv�lida, reescreva! \n");
            Sleep(3000);
            system("cls || clear");

            break;
        }

    } while (opcao < 1 || opcao > 3);

    return 0;
}