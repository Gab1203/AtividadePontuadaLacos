#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


/*Exerc�cio 4: 
Em um projeto de controle de acesso, 
crie um programa que solicite ao usu�rio sua idade e verifique se ele tem permiss�o 
para acessar um determinado recurso. 
Se a idade for maior ou igual a 18, exiba a mensagem "Acesso permitido". 
Caso contr�rio, exiba a mensagem "Acesso negado". */

int
main ()
{

  setlocale (LC_ALL, "portuguese");
  
  int idade;
  
 printf("Insira sua idade: \n");
 scanf("%d", &idade);
 system("cls || clear");

 printf("Sua idade: %d \n", idade);

  if (idade >= 18 )
  {
    printf("Acesso permitido! \n");
  } else {
    printf("Acesso negado! \n");
  }
  
  
  
  
  
  return 0;
  
  }