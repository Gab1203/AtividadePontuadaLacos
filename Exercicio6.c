#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*Exerc�cio 6:
Considerando um projeto de e-commerce, implemente um programa que solicite ao usu�rio
o c�digo do produto (1 - Camiseta, 2 - Cal�a, 3 - Sapato).
Com base na escolha do usu�rio, exiba a mensagem informando o produto selecionado e seu pre�o.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha o produto que deseja: \n");
    printf("1 - Camiseta \n");
    printf("2 - Cal�a \n");
    printf("3 - Sapato \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Camiseta: R$42,00 \n");
        break;
    case 2:
        printf("Cal�a: R$36,00");
        break;
    case 3:
        printf("Sapato: R$260,00");
    default:
        printf("Op��o inv�lida!");
        break;
    }
    return 0;
}