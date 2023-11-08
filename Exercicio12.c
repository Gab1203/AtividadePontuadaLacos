/*Exercício 12: 
Desenvolva um programa que solicite ao usuário uma quantidade ]
de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. 
Utilize o for para repetir o processo de solicitação das notas.*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

float nota;
int contador = 0, i, quantidadeNotas;
float soma, media;

printf("Insira a quantidade de notas que deseja: \n");
scanf("%d", &quantidadeNotas);
for (i = 1; i <= quantidadeNotas; i++)
{
printf("Insira a %d° nota: \n", i);
scanf("%f", &nota);

contador++;
soma += nota;

}

media = soma/contador;
printf("A média dos valores é %.2f \n", media);


return 0;
}