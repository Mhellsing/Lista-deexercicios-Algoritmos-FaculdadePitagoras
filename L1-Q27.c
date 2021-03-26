/*Conversão de if aninhados
Marcus Vinícius Paula Pereira
Análise e Desenvolvimento de Sistemas - Noturno
*/

#include <stdio.h>

int main()
{
  int a, b, c, d;
  printf("Digite o valor de A: ");
  scanf("%d", &a);

  printf("\nDigite o valor de B: ");
  scanf("%d", &b);

  printf("\nDigite o valor de C: ");
  scanf("%d", &c);
  
  printf("\nDigite o valor de D: ");
  scanf("%d", &d);

  if( a > b)
  {
    if(b > c)
    {
      if(c > d)
      {
        printf("\nEntão ta tudo certo amigo.");
      }
    }
  }

  return 0;
}