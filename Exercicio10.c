#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>



/*Exercício 10: 
Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). 
Utilize o switch case para realizar a operação desejada e exibir o resultado.
*/

    int main(){

        setlocale(LC_ALL, "portuguese");

        float PrimeiroNumero;
        float SegundoNumero;
        int operacao;
        float soma;
        float subtracao;
        float multiplicacao;
        float divisao;

        printf("Insira o primeiro número: ");
        scanf("%f", &PrimeiroNumero);

        printf("\nInsira o segundo número: ");
        scanf("%f", &SegundoNumero);


       printf("\n( 1 ) - Soma");
       printf("\n( 2 ) - Subtração");
       printf("\n( 3 ) - Multiplicação");
       printf("\n( 4 ) - Divisão\n");
       
        do
        {
          
        printf("\nEscolha uma operação matemática: ");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 1:
            
        soma = PrimeiroNumero + SegundoNumero;
        printf("\nResultado da soma: %.1f\n", soma);

            break;

        case 2:

        subtracao = PrimeiroNumero - SegundoNumero;
        printf("\nResultado da subtração: %.1f\n", subtracao);

            break;

        case 3:

        multiplicacao = PrimeiroNumero * SegundoNumero;
        printf("\nResultado da multiplicação: %.1f\n", multiplicacao);

            break;

        case 4:

        divisao = PrimeiroNumero / SegundoNumero;
        printf("\nResultado da divisão: %.1f\n", divisao);

            break;
        
        default:
            printf("\nOperação inválida, reescreva!\n");
            break;
        }
    
        
        } while (operacao <= 0 || operacao > 4);


        return 0;
    }