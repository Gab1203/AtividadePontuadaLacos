#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*Exercício 14:
Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares.
 Além disto, deve ser exibido a média aritmética de números pares e impares.
 Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

 Deve-se interromper a leitura dos dados quando for digitado um valor negativo.*/
int main()
{
    setlocale(LC_ALL, "portuguese");

    int pares = 0;
    float mediaPares;
    float somaPar = 0;
    int impares = 0;
    float mediaImpares;
    float somaImpar = 0;
    float media;
    int valor;
    float soma = 0;
    float contador = 0;

    do
    {
        printf("Insira o %0.f° valor: \n", contador + 1);
        scanf("%d", &valor);

        if (valor > 0)
        {
            soma += valor;
            contador = contador + 1;

            if (valor % 2 == 0)
            {
                pares++;
                somaPar += valor;
            }
            else
            {
                impares++;
                somaImpar += valor;
            }
        }
    } while (valor > 0);

    media = soma / contador;
    mediaPares = somaPar / pares;
    mediaImpares = somaImpar / impares;

    printf("Quantidade de pares: %d \n", pares);
    printf("Quantidade de impares: %d \n", impares);
    if (pares != 0)
    {
        printf("Média dos números pares: %0.2f \n", mediaPares);
    }

    if (impares != 0)
    {
        printf("Média dos números impares: %0.2f \n", mediaImpares);
    }

    printf("Média de todos os números: %0.2f \n", media);

    return 0;
}