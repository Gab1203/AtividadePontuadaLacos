#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Exerc�cio 2:
Voc� � um desenvolvedor de e-commerce e est� trabalhando em um novo sistema de descontos.
 O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana.
  Se a compra for feita em um fim de semana, o desconto ser� de 15% sobre o valor da compra acima de R$ 100,00.
*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numero;
    float totalAPagar;
    float desconto;
    float valor = 0.0;
    char dia[250];

    printf("Digite o valor da compra: R$");
    scanf("%f", &valor);

    printf("\nSegunda-feira ( 1 )");
    printf("\nTer�a-feira   ( 2 )");
    printf("\nQuarta-feira  ( 3 )");
    printf("\nQuinta-feira  ( 4 )");
    printf("\nSexta-feira   ( 5 )");
    printf("\nS�bado        ( 6 )");
    printf("\nDomingo       ( 7 )\n");

    printf("\nInsira o n�mero correspondente ao dia da semana: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:

        strcpy(dia, "Dia de semana");
        break;

    case 2:

        strcpy(dia, "Dia de semana");
        break;

    case 3:

        strcpy(dia, "Dia de semana");
        break;

    case 4:

        strcpy(dia, "Dia de semana");
        break;

    case 5:

        strcpy(dia, "Dia de semana");
        break;

    case 6:

        strcpy(dia, "Final de semana");
        break;

    case 7:

        strcpy(dia, "Final de semana");
        break;

    default:
        break;
    }

    if (valor > 100 && strcmp(dia, "Dia de semana") == 0)
    {
        desconto = valor * 10 / 100;
    }

    if (valor > 100 && strcmp(dia, "Final de semana") == 0)
    {
        desconto = valor * 15 / 100;
    }

    totalAPagar = (valor)-desconto;

    printf("\nTipo do dia: %s", dia);
    printf("\nDesconto: R$ %.2f\n", desconto);
    printf("\nTotal a pagar: R$ %.2f\n", totalAPagar);

    return 0;
}