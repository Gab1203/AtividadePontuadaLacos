/*Exercício 7:
Em um projeto para um jogo, é necessário criar um menu,
crie um programa que exiba um menu com opções
(1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações).
Solicite ao usuário que escolha uma opção e, utilizando o switch case,
execute a funcionalidade correspondente à opção escolhida.
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
        printf("Menu\n\n1 - Novo Jogo\n\n2 - Carregar Jogo\n\n3 - Configurações\n\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
        system("cls || clear");
        printf("Você escolheu a opção %d \n\n", opcao);

        switch (opcao)
        {
        case 1:
            printf("Você selecionou a opção de Novo Jogo\nJogo inciando em instantes...\n");

            break;

        case 2:
            printf("Você selecionou a opção de Carregar Jogo\nJogo Carregando em instantes...\n");

            break;

        case 3:
            printf("Você selecionou a opção de Configurações\nConfigurações iniciando em instantes...\n");

            break;
        default:
            printf("Opção inválida, reescreva! \n");
            Sleep(3000);
            system("cls || clear");

            break;
        }

    } while (opcao < 1 || opcao > 3);

    return 0;
}