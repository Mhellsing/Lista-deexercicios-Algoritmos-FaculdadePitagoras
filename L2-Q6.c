/* 6. Altere o algoritmo anterior, caso ainda não tenha feito, para que ele impessa o usuário de informar 
valores negativos, ou, valores acima de 20. Quando isso acontecer o usuário deve ser 
informado do erro, e perguntado se deseja ou não continuar. Marcus Vinícius Paula Pereira - 27/09/2020 */

#include <stdio.h>

int main()
{
  int num1, num2;

  do
  {
    printf("\nOBS - Valores negativos ou acima de 20 serão considerados inválidos.\n");
    printf("Digite um valor: ");
    scanf("%i", &num1);
    
    if(num1 >= 1 && num1 <= 20)
    {
      for(int x = 1; x <= num1; x++)
      {
        for(int y = 1; y <= x; y++)
        {
          printf("* ");
        }
        printf("\n");
      }
      break;
    }

    if(num1 < 0 || num1 >20)
    {
      printf("\nValor inválido\n");
      printf("\nDeseja continuar?\n1-Sim e 2-Não");
      scanf("%i", &num2);  
          
    }
  }while(num2 != 2);

  printf("Programa encerrado.");

  return 0;
}