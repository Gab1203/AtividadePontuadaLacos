#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*Exercício 15:
Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo,
quilômetros para milhas e Celsius para Fahrenheit. O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores.
Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.*/

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao = 1;
    float conversaoParaQuilometros;
    float conversaoParaMilhas;
    float conversaoParaCelsius;
    float conversaoParaFahrenheit;
    float celsius;
    float fahrenheit;
    float quilometros;
    float milhas;

    do
    {
        printf("\nTABELA DE CONVERSÕES\n");
        printf("\n( 1 ) - Quilômetros(Km) - Milhas(Mi)");
        printf("\n( 2 ) - Milhas(Mi) - Quilômetros(km)");
        printf("\n( 3 ) - Celsius(°C) - Fahrenheit(°F)");
        printf("\n( 4 ) - Fahrenheit(°F) - Celsius(°C)");

        printf("\nInsira a opção desejada: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:

            printf("\nInsira a distância em Quilômetros(km): \n");
            scanf("%f", &quilometros);
            conversaoParaMilhas = quilometros / 1.609;
            printf("Conversão para Milhas(Mi): %.1f ", conversaoParaMilhas);

            break;

        case 2:
            printf("\nInsira a distância em Milhas(Mi): \n");
            scanf("%f", &milhas);
            conversaoParaQuilometros = milhas * 1.609;
            printf("Conversão para Quilômetros(km): %.1f ", conversaoParaQuilometros);

            break;

        case 3:
            printf("\nInsira a temperatura em Celsius(°C): \n");
            scanf("%f", &celsius);
            conversaoParaFahrenheit = ((celsius * 9 / 5) + 32);
            printf("Conversão para Fahrenheit (°F): %.1f ", conversaoParaFahrenheit);

            break;

        case 4:
            printf("\nInsira a temperatura em Fahrenheit(°F): \n");
            scanf("%f", &fahrenheit);
            conversaoParaCelsius = ((fahrenheit - 32) * 5 / 9);
            printf("Conversão para Celsius(°C): %.1f ", conversaoParaCelsius);
            break;
        case 0:
            printf("\nLeitura finalizada!\n");
            break;
        default:
            printf("Opção inválida, reescreva!");
            Sleep(3000);
            system("cls || clear");
            break;
        }

    } while (opcao != 0);

    return 0;
}
