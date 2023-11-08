#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


/*Exerc�cio 3: 
Em um projeto de classifica��o de alunos, desenvolva um programa que receba a nota de um aluno e determine sua classifica��o com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razo�vel"
   - Nota menor que 5: "Insuficiente"
*/

int main(){
    setlocale(LC_ALL, "portuguese");

    int i;
    float nota;
    float soma;
    float media;

    for (i = 1; i <= 3; i++) {
        do {
            printf("Insira a %d� nota do aluno: \n", i);
            scanf("%f", &nota);
        
            if (nota < 0 || nota > 10) {
                printf("Nota invalida! \nReescreva!\n\n");
                }  
        } while (nota < 0 || nota > 10);
        soma = soma + nota;
        media = soma /3;
    }
    printf("M�dia do aluno �: %0.2f \n", media);
    
    if (media >= 9){
        printf("Excelente!");
    } else if (media >= 7){
        printf("Bom!");
    } else if (media >= 5) {
        printf("Razo�vel!");
    } else if (media < 5) {
        printf("Insuficiente!");
    }

    return 0;
}