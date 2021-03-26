/*Algoritmo de repetição
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

    if(num != -1)
    {
      printf("\nvocê escolheu o número %d\n", num);
    }
  } while(num != -1);
  printf("\nPrograma encerrado.\n");

  return 0;
}