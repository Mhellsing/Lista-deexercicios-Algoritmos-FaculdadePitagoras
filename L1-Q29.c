/*Algoritmo de repetição com retorno de mensagem ao usuário
Marcus Vinícius Paula Pereira
Análise e Desenvolvimento de Sistemas - Noturno
*/

#include <stdio.h>

int main()
{
  int num;
  do
  {
    printf("\nInsira um número inteiro: ");
    scanf("%d", &num);

    if(num > -1)
    {
      printf("\nEste valor está acima do esperado. \n");
    }
    else
      if(num <-1)
    {
      printf("\nEste valor está abaixo do esperado. \n");
    }

  } while(num != -1);
  printf("\nPrograma encerrado.\n");

  return 0;
}