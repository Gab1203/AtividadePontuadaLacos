#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*Exercício 6:
Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário
o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato).
Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.*/

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("Escolha o produto que deseja: \n");
    printf("1 - Camiseta \n");
    printf("2 - Calça \n");
    printf("3 - Sapato \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Camiseta: R$42,00 \n");
        break;
    case 2:
        printf("Calça: R$36,00");
        break;
    case 3:
        printf("Sapato: R$260,00");
    default:
        printf("Opção inválida!");
        break;
    }
    return 0;
}